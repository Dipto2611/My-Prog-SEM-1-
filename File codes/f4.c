/*//write a file
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    fp=fopen("dc.txt","w");

 if(fp==NULL)
    {
      printf("Error");
      exit(1);
    }
    ch=fgets(ch,fp);
    printf("%c",ch);
    fclose(fp);

}
/**/
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char str;

    // Open the file in write mode
    fp = fopen("dc.txt", "w");

    if (fp == NULL) {
        printf("Error opening file");
        exit(1);
    }

    // Read a character from the user
    printf("Enter a character: ");
    scanf("%s", &str);

    // Write the character to the file
    fputc(str, fp);

    // Close the file
    fclose(fp);

    return 0;
}
/*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    // Open the file in read mode
    fp = fopen("dc.txt", "r");

    // Check if the file is successfully opened
    if (fp == NULL) {
        printf("Error opening file");
        exit(1);
    }

    // Read and print the content character by character
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(fp);

}
