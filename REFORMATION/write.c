#include<stdio.h>

int main(){

FILE *fp;

fp = fopen("xyz.txt","w+");

int num;
printf("Enter a number \n");

scanf("%d",&num);

fprintf(fp,"%d",num);

int numFrmfile;

rewind(fp);

while (!feof(fp))
{
    fscanf(fp,"%d",&numFrmfile);
}

printf("The reqd no is %d",numFrmfile);

}