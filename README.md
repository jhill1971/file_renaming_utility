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


![Screenshot from 2024-04-04 12-45-30](https://github.com/jhill1971/file_renaming_utility/assets/60713038/b8c37053-1c1d-4247-b8e9-8a58410c9f12)

![Screenshot from 2024-04-04 12-47-50](https://github.com/jhill1971/file_renaming_utility/assets/60713038/a4799da2-9b8d-45e7-8eb6-6f3decf2da34)

