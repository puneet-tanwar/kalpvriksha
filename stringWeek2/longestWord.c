#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], longestWord[100];
    int i, j, len, maxLength = 0,currLength=0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {=
        if (str[i] != ' ')
        {
            j = i;
            while (j < len && str[j] != ' ')
                j++;
            currLength=j-i;
            if (currLength > maxLength)
            {
                maxLength = currLength;
                strncpy(longestWord, &str[i], maxLength);
            }
            i = j;
        }
    }
    longestWord[maxLength] = '\0';

    printf("The longest word in the string is: %s\n", longestWord);

    return 0;
}
