#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 512

void renameFiles(const char *dirname);


int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "Usage:%s <directory>\n", argv[0]);
    return 1;
  }
  renameFiles(argv[1]);

  return 0;
}

void renameFiles(const char *dirname) {
    DIR *dir;
    struct dirent *entry;
    char oldname[BUFFER_SIZE];
    char newname[BUFFER_SIZE];
    int count = 1;

    // Open Directory
    dir = opendir(dirname);
    if (!dir) {
        perror("Error opening directory");
        return;
    }

    // Read directory entries
    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_type == DT_REG) { // If it's a regular file
            strcpy(oldname, dirname); // Copy directory path
            strcat(oldname, "/"); // Add directory separator
            strcat(oldname, entry->d_name); // Add file name

            snprintf(newname, sizeof(newname), "%s/%s_%d", dirname, dirname, count);

            if (rename(oldname, newname) == -1) {
                fprintf(stderr, "Error renaming file %s: %s\n", oldname, strerror(errno));
            }
            ++count;
        }
    }

    // Close Directory
    closedir(dir);
}
