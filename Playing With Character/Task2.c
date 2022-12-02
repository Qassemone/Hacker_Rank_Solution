#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//take a letter and string and sentence from user and print them
int main() {
int i;
char c;
char s[100];
char z[100];
scanf("%c\n",&c);
scanf("%[^\n]%*c\n", &s);
scanf("%[^\n]%*c", &z);

 printf("%c\n",c);
 for(i=0;i<100;i++)
 {
     if(s[i]=='\0')
     {
         break;
     }
     else
     {
         printf("%c",s[i]);
     }
 }
 printf("\n");
      for(i=0;i<100;i++)
 {
     if(z[i]=='\0')
     {
         break;
     }
     else
     {
         printf("%c",z[i]);
     }
 }
    return 0;
}