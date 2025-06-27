# include <stdio.h>
int main()
{
    float avg=0;

    printf("Enter ur Average marks:");
    scanf("%f",&avg);

    if(avg<=0)
    {
        printf("\aInvalid input...Exiting the Program");
        exit(0);
    }

    if(avg>=60)
        printf("First class...");
    else
          if(avg>=50)
             printf("Second class....");
          else
                if(avg>=40)
                    printf("Third class....");
                else
                       printf("Failed....");

     return 0;
}
