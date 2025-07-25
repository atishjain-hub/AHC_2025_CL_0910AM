# include <stdio.h>
int main()
{
    struct student
    {
        int id;
        char name[20];
        float avg;
    };

    struct student s1;
    struct student s2;

    printf("\nno of bytes occupied by s1 is:%d",sizeof(s1));
    printf("\nEnter student id:");
    scanf("%d",&s1.id);

    printf("Enter Student Name:");
    scanf("%s",&s1.name);

    printf("Enter Student Average:");
    scanf("%f",&s1.avg);

     printf("Enter student id:");
    scanf("%d",&s2.id);

    printf("Enter Student Name:");
    scanf("%s",&s2.name);

    printf("Enter Student Average:");
    scanf("%f",&s2.avg);

    printf("\n%d - %s - %f",s1.id,s1.name,s1.avg);
    printf("\n%d - %s - %f",s2.id,s2.name,s2.avg);


 return 0;
}


