# include <stdio.h>
int main()
{
    struct student
    {
        int id;
        char name[20];
        float avg;
    };

    struct student s[100];
    int size,i;


    printf("\nno of bytes occupied by s1 is:%d",sizeof(s));

    printf("\nHow many students:");
    scanf("%d",&size);

 for(i=0;i<size;i++)
 {
    printf("\nEnter student id:");
    scanf("%d",&s[i].id);

    printf("Enter Student Name:");
    scanf("%s",&s[i].name);

    printf("Enter Student Average:");
    scanf("%f",&s[i].avg);
 }

 for(i=0;i<size;i++)
 {
    printf("\n%d - %s - %f",s[i].id,s[i].name,s[i].avg);
 }

 return 0;
}


