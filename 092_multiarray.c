# include <stdio.h>
int main()
{
    int r,c;
    int arr[3][3]={
                               {5,6,9},
                               {2,3,4},
                               {8,3,4}
                              };

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
