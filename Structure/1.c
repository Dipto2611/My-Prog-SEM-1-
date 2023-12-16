#include<stdio.h>

struct employee 
{
    int empcode;
    char empname[10];
    float basicsal;

};

int main()
{
    int numofemp,i;
    printf("No of emp you want to enter\n");
    scanf("%d",&numofemp);

    struct employee e[numofemp];

    ///Input
 for (i=0;i<numofemp;i++)
    {
        printf("Enter emp id:\t");
        scanf("%d",&e[i].empcode);

        printf("Enter emp name:\t");
        scanf("%s",e[i].empname);
       
        printf("Enter emp bsalary:\t");
        scanf("%f",&e[i].basicsal);

    }
    ///print
 printf("Emp Details are:\n");
 for (i=0;i<numofemp;i++)
        {
         printf("\n emp id :\t %d",e[i].empcode);
         printf("\n emp name:\t %s",e[i].empname);          
         printf("\n emp salary:\t %f",e[i].basicsal);
         printf("\n");
        
        }






}

