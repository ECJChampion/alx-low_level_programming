#!/bin/bash
echo -e '#include <stdio.h>\nint main(){printf("exactly with proper grammar, but the outcome is a piece of art,\\n");return 0;}' | gcc -x c - -o output && ./output

