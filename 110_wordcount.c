# include <stdio.h>
# include <string.h>
# include "mystring.h"
int main()
{
    char str[100];
    printf("Enter a string:");
    gets(str);

    printf("No of Words are:%d",wcount(str));
    printf("\nLength is:%d",strlen(str));
    printf("\nLength without space:%d",mystrlen(str));


 return 0;
}


