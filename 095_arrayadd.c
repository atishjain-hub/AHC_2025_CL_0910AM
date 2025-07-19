# include <stdio.h>
# include <stdlib.h>
# define SIZE 3
int main()
{
    int a[SIZE][SIZE],b[SIZE][SIZE],c[SIZE][SIZE],i,j;

    printf("Enter elements for First Array:");
    printf("\n---------------------------------\n");

  for(i=0;i<SIZE;i++)
  {
    for(j=0;j<SIZE;j++)
    {
         printf("Enter element at(%d,%d):",i,j);
         scanf("%d",&a[i][j]);
    }
}

printf("\n\nEnter elements for Second Array:");
    printf("\n---------------------------------\n");

  for(i=0;i<SIZE;i++)
  {
    for(j=0;j<SIZE;j++)
    {
         printf("Enter element at(%d,%d):",i,j);
         scanf("%d",&b[i][j]);
    }
}

//logic to add the arrays
for(i=0;i<SIZE;i++)
{
    for(j=0;j<SIZE;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
}


system("cls");

printf("\nFirst Array:");
printf("\n-------------\n");
for(i=0;i<SIZE;i++)
{
    for(j=0;j<SIZE;j++)
    {
        printf("\t%d",a[i][j]);
    }
    printf("\n");
}
printf("\n\t+");

printf("\nSecond Array:");
printf("\n-------------\n");
for(i=0;i<SIZE;i++)
{
    for(j=0;j<SIZE;j++)
    {
        printf("\t%d",b[i][j]);
    }
    printf("\n");
}
printf("\n\t=");
printf("\nResult Array:");
printf("\n-------------\n");
for(i=0;i<SIZE;i++)
{
    for(j=0;j<SIZE;j++)
    {
        printf("\t%d",c[i][j]);
    }
    printf("\n");
}
 return 0;
}
