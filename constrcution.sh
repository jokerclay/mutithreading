#!/bin/bash

# Loop from 003 to 160
for i in $(seq -w 3 160); do
    mkdir -p "$i"          # Create directory
    echo "# Directory $i" > "$i/README.md"  # Create README.md with a title
done

echo "Directories 003 to 160 created with README.md files."

