# include <stdio.h>
int main()
{
    int no1,no2,res,opt;
    no1=no2=res=opt=0;

    printf("Main - Menu");
    printf("\n------------");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Remainder");
    printf("\n6.Exit");

    printf("\n\nEnter first no:");
    scanf("%d",&no1);
    printf("Enter second no:");
    scanf("%d",&no2);

    printf("\nEnter ur Option(1-6):");
    scanf("%d",&opt);

switch(opt)
 {
     case 1:{
                     res=no1+no2;
                     printf("%d + %d = %d",no1,no2,res);
                 };break;
    case 2:
                {
                  res=no1-no2;
                  printf("%d - %d = %d",no1,no2,res);
               };break;
    case 3:   {
                        res=no1*no2;
                        printf("%d * %d = %d",no1,no2,res);
                       };break;
    case 4:      {
                                    res=no1/no2;
                                    printf("%d / %d = %d",no1,no2,res);
                                };break;
   case 5:
                                            {
                                            res=no1%no2;
                                            printf("%d %% %d = %d",no1,no2,res);
                                            };break;
case 6:                                         exit(0);
 default:   printf("\aInvalid Option....");
 }
     return 0;
}
