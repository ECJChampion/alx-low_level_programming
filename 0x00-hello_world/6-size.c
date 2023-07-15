#!/bin/bash
echo -e '#include <stdio.h>\nint main() { printf("char: %zu\nshort: %zu\nint: %zu\nlong: %zu\nlong long: %zu\nfloat: %zu\ndouble: %zu\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long), sizeof(float), sizeof(double)); return 0; }' > tmp.c && gcc tmp.c -o tmp && ./tmp && rm tmp.c tmp

