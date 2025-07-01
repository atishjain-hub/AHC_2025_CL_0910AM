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

    if(opt==1)
    {
        res=no1+no2;
        printf("%d + %d = %d",no1,no2,res);
    }
    else
           if(opt==2)
           {
               res=no1-no2;
               printf("%d - %d = %d",no1,no2,res);
           }
           else
                     if(opt==3)
                      {
                        res=no1*no2;
                        printf("%d * %d = %d",no1,no2,res);
                       }
                      else
                                if(opt==4)
                                {
                                    res=no1/no2;
                                    printf("%d / %d = %d",no1,no2,res);
                                }
                              else
                                         if(opt==5)
                                            {
                                            res=no1%no2;
                                            printf("%d %% %d = %d",no1,no2,res);
                                            }
                                          else
                                                 if(opt==6)
                                                      exit(0);
                                                 else
                                                        printf("\aInvalid Option....");

     return 0;
}
