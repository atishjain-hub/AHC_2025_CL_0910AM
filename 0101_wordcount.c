# include <stdio.h>
int main()
{
    char str[100];
    int i,w;
    w=1;

    printf("Enter a string:");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
             w++;
    }

    printf("\nNo of words are:%d",w);


 return 0;
}
