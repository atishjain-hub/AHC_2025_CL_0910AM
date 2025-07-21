# include <stdio.h>
int main()
{
    char str[100];
    int i;

    printf("Enter a string...:");
    gets(str);

    //logic 1
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
            putchar(str[i]);
       else
            break;
    }

    printf("\n");

    //logic 2
    for(i=0;str[i]!=' ';i++)
        putchar(str[i]);


 return 0;
}
