# File Renaming Utility

This is a simple C language program designed to rename files within a specified directory according to a specific pattern.

## Usage

1. **Compilation**: Compile the program using a C compiler. For example:
    ```
    gcc rename_files.c -o rename_files
    ```

2. **Execution**: Execute the compiled program with the directory path as an argument. For example:
    ```
    ./rename_files /path/to/directory
    ```

    Replace `/path/to/directory` with the path to the directory containing the files you want to rename.

## Features

- Renames all regular files within the specified directory.
- Renames files according to the pattern: `<directory_name>_<index>`, where `<index>` starts from 1 and increments for each file.
- Handles errors gracefully and provides informative error messages.

## Requirements

- C compiler (e.g., GCC)
- Linux operating system (Tested on Linux)

## Notes

- This program is intended for use on Linux systems.
- Make sure you have appropriate permissions to read from and write to the specified directory and its files.

## Author

- James Hill

Feel free to modify this program according to your needs or contribute to its improvement by submitting pull requests or opening issues.

