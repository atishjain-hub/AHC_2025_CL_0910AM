# include <stdio.h>
# define SIZE 8
int main()
{
    int r,c,m=5;
    int no[SIZE][SIZE];

    for(r=0;r<SIZE;r++)
    {
        for(c=0;c<SIZE;c++)
        {
           no[r][c]=m;
           m=m+5;
        }
    }

for(r=0;r<SIZE;r++)
{
   for(c=0;c<SIZE;c++)
   {
    printf("\t%d",no[r][c]);
   }
   printf("\n");
}

 return 0;
}
