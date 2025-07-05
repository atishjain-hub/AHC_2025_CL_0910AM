# include <stdio.h>
# include <string.h>

int main()
{
    char name[50];
    int len,c;
    len=0;
    c=1;

    printf("Enter ur Name:");
    scanf("%s",&name);

    len=strlen(name);
    printf("Length of the name %s is %d characters\n",name,len);

 while(c<=len)
 {
    printf("%d. %s\n",c,name);
    c++;
 }

 return 0;
}
