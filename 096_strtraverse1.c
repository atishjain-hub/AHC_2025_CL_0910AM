# include <stdio.h>
# include <string.h>
# include <windows.h>

int main()
{
    char str[100];
    int i,len;

    printf("Enter a string:");
    scanf("%[^\n]",&str);


    len=strlen(str);

    for(i=0;i<len;i++)
    {
         printf("\n%c",str[i]);
         Sleep(1000);
    }

 return 0;
}
