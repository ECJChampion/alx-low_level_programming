printf("%02x ", b[i]);

if ((i + 1) % 2 == 0) {
  printf(" ");
}

if ((i + 1) % 10 == 0) {
  for (int j = i - 9; j <= i; j++) {
    if (b[j] >= 32 && b[j] <= 126) {
      printf("%c", b[j]);
    } else {
      printf(".");
    }
  }
  printf("\n");
}
