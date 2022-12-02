#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i;
char *s;
s=malloc(1024*sizeof(char));
scanf("%[^\n]%*c", s);
s=realloc(s,strlen(s));
int size=strlen(s);
for(i=0;i<size;i++)
{
    if(s[i]==32)
    {
        printf("\n");
    }
    else
    {
        printf("%c",s[i]);
    }
}

 return 0;
}
