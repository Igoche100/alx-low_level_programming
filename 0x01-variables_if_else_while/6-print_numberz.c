#include <stdio.h>
/**
* main - All single digit numbers of base 10 starting from 0, and a new line
*
* Return: 0 (Succes)
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
putchar('\n');
return (0);
}
