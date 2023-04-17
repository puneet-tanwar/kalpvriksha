#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char str1[100], str2[100];

    int freqArr1[26] = {0};

    int freqArr2[26] = {0}, i;

    printf("\nEnter a string: ");

    fgets(str1, 100, stdin);

    printf("\nEnter another string: ");

    fgets(str2, 100, stdin);

    if (strlen(str1) != strlen(str2))

    {

        printf("\n The strings are not anagrams of eachother");

        return 0;
    }

    for (i = 0; i < strlen(str1); i++)

    {

        str1[i] = tolower(str1[i]);

        str2[i] = tolower(str2[i]);

        freqArr1[str1[i] - 97]++;

        freqArr2[str2[i] - 97]++;
    }
    for (i = 0; i < 26; i++)
    {
        if (freqArr1[i] != freqArr2[i])
        {
            printf("\n Strings are not Anagrams of eachother");
            return 0;
        }
    }

    printf("\n String are Anagrams of eachother");

    return 0;
}
