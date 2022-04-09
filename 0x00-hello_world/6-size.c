#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 after success
 */
int main(void)
{
printf("size of a char: %c byte(s)", sizeof(char));
printf("size of an int: %i byte(s)", sizeof(int));
printf("size of a long int: %ld byte(s)", sizeof(long int));
printf("size of a long long int: %lld byte(s)\n", sizeof(long long int));
printf("size of a float: %f byte(s)\n", sizeof(float));
return (0)
}
