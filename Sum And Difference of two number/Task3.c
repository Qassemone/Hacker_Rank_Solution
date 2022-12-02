#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int x,y,s,m;
float z , w ,d,p;
scanf("%d %d",&x,&y);
scanf("%f %f",&z,&w);
s=x+y;
m=x-y;
printf("%d %d\n",s,m);
d=z-w;
p=z+w;
printf("%.1f %.1f",p,d);
    
    return 0;
}