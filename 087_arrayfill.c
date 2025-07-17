# include <stdio.h>
int main()
{
    int arr[10],i,e=2;

  for(i=0;i<10;i++)
  {
    arr[i]=e;
    e+=2;
  }

  for(i=0;i<10;i++)
  {
      printf("\n%d - %d",i,arr[i]);
  }



 return 0;
}
