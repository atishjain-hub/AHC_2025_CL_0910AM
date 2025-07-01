# include <stdio.h>
int main()
{
    int no=0;

    printf("Enter a single digit no in between 1 to 5:");
    scanf("%d",&no);

    switch(no)
    {
        case 1:printf("ONE"); break;
        case 2:printf("TWO");break;
        case 3:printf("THREE");break;
        case 4:printf("FOUR");break;
        case 5:printf("FIVE");break;
        default: printf("\n\aInvalid no...");
    }
     return 0;
}
