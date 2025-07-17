# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
    int arr[10],i,j,temp;

    //fill the arry with random numbers
    srand(time(0));
    for(i=0;i<10;i++)
   {
     arr[i]=rand()%100;
   }


   printf("Unsorted Array Elements:\n");
  for(i=0;i<10;i++)
  {
      printf("%d-->",arr[i]);
  }
  printf("\b\b\b   ");

  //logic to sort the data

for(i=0;i<10;i++)
{
 for(j=i+1;j<10;j++)
 {
  if(arr[i]>arr[j])
  {
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
  }
 }
}

//logic to print
   printf("\n\nsorted Array Elements:\n");
  for(i=0;i<10;i++)
  {
      printf("%d-->",arr[i]);
  }
  printf("\b\b\b   ");
 return 0;
}
