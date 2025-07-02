# include <stdio.h>
int main()
{
    char x;

    printf("Enter a character:");
    x=getchar();
    printf("The character is:%c",x);

    printf("\n\nEnter a character:");
    x=getche();
    printf("\nThe character is:%c",x);

    printf("\n\nEnter a character:");
    x=getch();
    printf("\nThe character is:%c",x);


     return 0;
}
