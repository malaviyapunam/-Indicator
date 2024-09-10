#include <stdio.h>

main() 
{
    char string[100];
    char *ptr = string;

    printf("Enter string: ");
    gets(string);

    int length = 0;
    while (*ptr != '\0')
	{
        length++;
        ptr++;
    }

    printf("The length of a string is %s: %d\n", string, length);

}
