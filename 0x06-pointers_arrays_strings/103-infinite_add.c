#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int max_len = (len1 > len2) ? len1 : len2;

if (size_r < max_len + 2) // +1 for the null terminator, +1 for the possible carry
{
return 0;
}

// Initialize result string with null characters
for (int i = 0; i < size_r; i++)
{
r[i] = '\0';
}

// Initialize carry with 0
int carry = 0;

// Perform addition digit by digit, starting from the least significant digit
for (int i = 0; i < max_len; i++)
{
// Get the i-th digit of n1, or 0 if it doesn't have enough digits
int digit1 = (i < len1) ? n1[len1 - 1 - i] - '0' : 0;
// Get the i-th digit of n2, or 0 if it doesn't have enough digits
int digit2 = (i < len2) ? n2[len2 - 1 - i] - '0' : 0;
// Calculate the sum of the two digits and the carry
int sum = digit1 + digit2 + carry;
// Get the least significant digit of the sum (will be the result for this position)
int result_digit = sum % 10;
// Get the carry for the next iteration
carry = sum / 10;
// Set the result digit in the result string
r[max_len - i] = result_digit + '0';
}

// If there's a carry left, add it to the result string
if (carry > 0)
{
r[0] = carry + '0';
}

return r;
}

int main(int argc, char **argv)
{
char n1[100];
char n2[100];
char r[100];

strcpy(n1, "123456789");
strcpy(n2, "987654321");

printf("%s + %s = %s\n", n1, n2, infinite_add(n1, n2, r, 100));

return 0;
}
