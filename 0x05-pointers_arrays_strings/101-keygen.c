#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

int main(int argc, char **argv) {
char password[PASSWORD_LENGTH + 1];
int i;

// Seed the random number generator
srand(time(NULL));

// Generate a random password
for (i = 0; i < PASSWORD_LENGTH; i++) {
// Generate a random ASCII character between '!' and '' inclusive
password[i] = (char)(rand() % ('' - '!') + '!');
}

// Null-terminate the password string
password[PASSWORD_LENGTH] = '\0';

// Print the generated password
printf("%s\n", password);

return 0;
}
