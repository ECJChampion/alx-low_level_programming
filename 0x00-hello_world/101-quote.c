#!/bin/bash
gcc -Wall -o art -xc - <<< '#include <unistd.h> int main() { const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"; ssize_t bytes_written = write(2, msg, sizeof(msg) - 1); return (bytes_written == sizeof(msg) - 1) ? 1 : -1; }' && ./art 1>&2

