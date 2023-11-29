//write a file ///predefined

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch[8]="Diptoch";
    fp=fopen("demo.txt","w");

 if(fp==NULL)
    {
      printf("Error");
      exit(1);
    }
 fputs(ch,fp);
 fclose(fp);

}