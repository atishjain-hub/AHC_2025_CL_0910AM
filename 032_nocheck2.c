//Program to check the inputted no

# include <stdio.h>
int main()
{
    int no=0;

    printf("Enter a no:");
    scanf("%d",&no); //12

    if(no>0)
        printf("%d is +ve.....",no);

    if(no<0)
        printf("%d is -ve.....",no);

    if(no==0)
        printf("%d is ZERO.....",no);

     return 0;
}
