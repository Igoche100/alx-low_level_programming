#include <stdio.h>
/**
* main - Program that prints alphabet in lowercase and upppercase
*
* Return: 0 (Success)
*/

int main(void)
{
int lowerCase = 'a';
int upperCase = 'A';

while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
while (lowerCase <= 'z')
{
putchar(upperCase);
upperCase += 1;
}
putchar('\n');
return (0);
}
