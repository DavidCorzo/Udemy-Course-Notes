#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100]; // a string array of 100.
    int i; // integer a

    printf("Enter a value :");

    scanf("%d %s", &i, str);

    printf("\nYou entered: %d %s\n", i, str);

    return 0;
}
