# include <stdio.h>
# include <windows.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string:");
    scanf("%[^\n]",&str);

    for(i=0;str[i]!='\0';i++)
    {
         printf("\n%c",str[i]);
         Sleep(100);
    }

 return 0;
}
