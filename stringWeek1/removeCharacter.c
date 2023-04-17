#include <stdio.h>
#include <string.h>

void removeChar(char *str, char c);

int main() {
    char str[100],len=0,c;

    printf("Enter a string: ");
    while ((str[len] = getchar()) != '\n') {
      len++;
   }
   printf("Enter the character you want to remove from string: ");
   c=getchar(); 

    int i, j;

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("Result: %s\n", str);

    return 0;
}


