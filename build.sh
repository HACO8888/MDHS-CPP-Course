#!/bin/bash

# Check if the folder name is provided as an argument
if [ $# -ne 1 ]; then
    echo "Usage: $0 FolderName"
    exit 1
fi

folder_name="$1"

# Check if the folder exists
if [ ! -d "$folder_name" ]; then
    echo "Folder '$folder_name' does not exist."
    exit 1
fi

# Check if 'no16.cpp' file exists in the folder
if [ ! -f "$folder_name/main.cpp" ]; then
    echo "File 'main.cpp' does not exist in the folder '$folder_name'."
    exit 1
fi

# Create upload folder if it does not exist
if [ ! -d "$folder_name/upload" ]; then
    mkdir "$folder_name/upload"
fi

# Copy main.cpp to upload folder with name no16.cpp
cp "$folder_name/main.cpp" "$folder_name/upload/no16.cpp"

# Compile for Linux
g++ "$folder_name/main.cpp" -o "$folder_name/upload/no16"

# Compile for Windows
x86_64-w64-mingw32-g++ "$folder_name/main.cpp" -o "$folder_name/upload/no16.exe" -static-libgcc -static-libstdc++

echo "Compilation completed successfully."
