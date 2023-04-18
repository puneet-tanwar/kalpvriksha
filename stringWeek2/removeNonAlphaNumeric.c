

#include <stdio.h>

void main()
{
    char inputString[100], filteredString[100];
    fgets(inputString, 100, stdin);
    int i, j = 0;
    for (i = 0; inputString[i] != '\0'; i++)
    {
        if ((inputString[i] >= 'A' && inputString[i] <= 'Z') || (inputString[i] >= '0' && inputString[i] <= '9') || (inputString[i] >= 'a' && inputString[i] <= 'z'))
        {
            filteredString[j] = inputString[i];
            j++;
        }
    }
    filteredString[j] = '\0';
    printf("\n%s", filteredString);
}