# include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character:");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
        printf("%c is Upper case Letter",ch);
    else
           if(ch>=97 && ch<=122)
               printf("%c is Lower case Letter",ch);
           else
                 if(ch>=48 && ch<=57)
                      printf("%c is a Digit..",ch);
                 else
                       printf("%c is Special Symbol...",ch);

     return 0;
}
