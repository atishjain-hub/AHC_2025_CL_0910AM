# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
    int arr[10],i;

 srand(time(0));
  for(i=0;i<10;i++)
  {
    arr[i]=rand()%100;
  }


  for(i=0;i<10;i++)
  {
      printf("\n%d - %d",i,arr[i]);
  }



 return 0;
}
