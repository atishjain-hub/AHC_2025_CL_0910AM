# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
    int arr[10],i,key=0;
    char flag='n';

    srand(time(0));
    for(i=0;i<10;i++)
   {
     arr[i]=rand()%100;
   }


   printf("Array Elements:\n");
  for(i=0;i<10;i++)
  {
      printf("%d-->",arr[i]);
  }
  printf("\b\b\b   ");

  printf("\nEnter Key Element to search:");
  scanf("%d",&key);

  //logic to search the element

  for(i=0;i<10;i++)
  {
      if(key==arr[i])
      {
          flag='y';
          printf("\n%d is found at %d index...",key,i);
          break;
      }
  }

  if(flag=='n')
    printf("%d is not found..",key);

 return 0;
}
