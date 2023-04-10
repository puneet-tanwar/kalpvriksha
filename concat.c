#include <stdio.h>
int main()
{
    char str1[100],str2[100];
    int i=0,j=0;
    printf("\nEnter two strings in the format: <string1>,<string2>: ");
    scanf("%[^,]%*c",str1);
    scanf("%[^\n]",str2);
    printf("%s ------- %s",str1,str2);
    while(str1[i]!='\0')
    {
        i++;
    }

    while(str2[j]!='\0')
    {
        str1[i++]=str2[j++];
    }

    str1[i]='\0';

    printf("\nAfter Concatenation, Strings are :: \n\n");
    puts(str1);
    return 0;
}
