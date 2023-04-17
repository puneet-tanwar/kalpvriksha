#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j;

    printf("Enter a string(with whitespaces if possible): ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';
    printf("\n Your string is : '%s'", str);

    i = 0;
    while (str[i] == ' ')
        i++;
    strcpy(str, str + i);

    j = strlen(str) - 1;
    while (j >= 0 && str[j] == ' ')
    {
        str[j] = '\0';
        j--;
    }

    printf("\nThe modified string is: '%s'\n", str);

    return 0;
}
