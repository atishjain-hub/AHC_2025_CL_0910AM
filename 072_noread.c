# include <stdio.h>
int main()
{
    int no,esum,osum,ec,oc;
    float eavg,oavg;
    no=esum=osum=eavg=oavg=ec=oc=0;

    do
    {
        printf("Enter a no:");
        scanf("%d",&no);
        if(no%2==0 && no!=0)
        {
            ec++;
            esum=esum+no;
        }
        else
        {
            oc++;
            osum=osum+no;
        }
    }while(no!=0);

    eavg=(float)esum/ec;
    oavg=(float)osum/oc;

    printf("\nEven Numbers Count:%d",ec);
    printf("\nEven Numbers Sum:%d",esum);
    printf("\nEven Numbers Average:%f",eavg);

    printf("\n\nOdd Numbers Count:%d",oc);
    printf("\nOdd Numbers Sum:%d",osum);
    printf("\nOdd Numbers Average:%f",oavg);

 return 0;
}
