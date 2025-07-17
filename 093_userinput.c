# include <stdio.h>
int main()
{
    int r,c;
    int arr[3][3];

    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("Enter a no at(%d,%d) index : ",r,c);
            scanf("%d",&arr[r][c]);
        }
    }

for(r=0;r<3;r++)
{
   for(c=0;c<3;c++)
   {
    printf("\t%d",arr[r][c]);
   }
   printf("\n");
}


 return 0;
}
