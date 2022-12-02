// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int a,b;
    scanf("%d\n%d",&a,&b);
  char *Number[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
for(int i=a;i<=b;i++)
{
    if(i>=1&&i<=9)
    {
        printf("%s\n",Number[i]);
    }
    else if(i%2==0&&i>9)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}

    return 0;
}
