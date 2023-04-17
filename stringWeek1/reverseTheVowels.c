
#include <stdio.h>
#include <string.h>

int is_vowel(char a)
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < 10; i++)
        if (a == vowels[i])
            return 1;
    return 0;
}

void vowelReversal(char *str)
{
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end)
    {
        if (is_vowel(str[start]) && is_vowel(str[end]))
        {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
        else if (is_vowel(str[start]))
            end--;

        else if (is_vowel(str[end]))
            start++;

        else
        {
            start++;
            end--;
        }
    }
}

int main()
{
    char str[100];
    int len = 0;
    printf("Enter a string: ");
    while ((str[len] = getchar()) != '\n')
        len++;
    vowelReversal(str);
    printf("The reversed vowel string: %s", str);
    return 0;
}
