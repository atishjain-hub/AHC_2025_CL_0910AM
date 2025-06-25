# include <stdio.h>
int main()
{
    float avg=0;

    printf("Enter ur Average Marks:");
    scanf("%f",&avg);

    if(avg>=40)
    {
        printf("Ur Passed...");
        printf("\nCongrats...");
    }
    else
    {
        printf("Ur Failed...");
        printf("\nBetter Luck Next time...");
    }

    printf("\nThank you!");


     return 0;
}
