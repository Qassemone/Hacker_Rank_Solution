#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// this code is to take a sentence from user and print it with hello world
int main() 
{
	int i;
    char s[100];
    scanf("%[^\n]%*c", &s);
	
printf("Hello World!\n");
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
return 0;
}