//write a file ///full wordings

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp=NULL;
    char str[50];
    fp=fopen("r3.txt","w");

 if(fp==NULL)
    {
      printf("Error");
      exit(1);
    }
    printf("Enter content:");
 
 gets(str);
 fprintf(fp,"%s",str);
 printf("Success");
 
 //fputs(ch,fp);
 fclose(fp);

}