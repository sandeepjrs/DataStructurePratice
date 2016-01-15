#include <stdio.h>
#include <stdlib.h>

void xstrcpy(char *source,char *target);
void xstrcmpy(char *source,char *target);
int xstrlen(char *str0);
void strconcatenate(char *concatStr, char *str1,char *str2);
void display(char *str);

int main()
{
    char str1[20]="vtitan";
    char str2[20]="kumar";
    char str3[20];
    int length;

    xstrcpy(str3,str1);
    printf("\nafter copying the data from source to target\n");
    display(str3);
    printf("\nafter conecating the string\n");
    strconcatenate(str3,str1,str2);
    display(str3);
    length=xstrlen(str1);
    printf("the lenght of the string str1 is :  %d  ",length);





}

void display(char *str)
{
    int i=0;
     while(str[i]!='\0')
     {
         printf("%c",str[i]);
         i++;
     }
}

void xstrcpy(char *source,char *target)
{
       while(*target)
        {
            *source=*target;
            source++;
            target++;
        }
        *source='\0';
        printf("\n");

}
void xstrcmpy(char *source,char *target)
{
    printf("\n");
}
int xstrlen(char *str0)
{
    int length=0;
    while(*str0)
    {
    str0++;
	length++;
    }
    return length;

}
void strconcatenate(char *concatStr, char *str1,char *str2)
{
    while(*str1)
    {
        *concatStr=*str1;
        concatStr++;
        str1++;
    }
    while(*str2)
    {
        *concatStr=*str2;
        concatStr++;
        str2++;

    }
    printf("\n");
}
