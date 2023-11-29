//read full string /// input (Char by char)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    int i;
    char str[10];
    fp=fopen("r2.txt","w");


    if(fp==NULL)
    {
      printf("Error");
      exit(1);
    }
    
    printf("Enter string:");
    scanf("%s",&str);
    for (i=0;i!=strlen(str);i++){
     fputc(str[i],fp);
    }
   
    fclose(fp);


}

