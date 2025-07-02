# include <stdio.h>
int main()
{
    char x;
    printf("Enter a character:");
    x=getchar(); //scanf("%c",&x);

    putchar(x);
    printf("\nThe character is:%c",x);
    putchar('\n');
    putchar('A');

     return 0;
}
