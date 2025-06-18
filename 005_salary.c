# include <stdio.h>
int main()
{
    int mom_sal,dad_sal,total_sal,exp,income;
    mom_sal=dad_sal=total_sal=exp=income=0;

    printf("Enter Mom's Salary:");
    scanf("%d",&mom_sal);

    printf("Enter Dad's Salary:");
    scanf("%d",&dad_sal);

    printf("Enter Expenses:");
    scanf("%d",&exp);

    total_sal=mom_sal+dad_sal;
    income=total_sal-exp;

    printf("\nTotal Salary:%d",total_sal);
    printf("\nTotal Income:%d",income);



 return 0;
}
