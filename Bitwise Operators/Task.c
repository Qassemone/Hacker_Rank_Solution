#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
int i,j,a,o,x,amax,omax,xmax;
amax=0;
omax=0;
xmax=0;


for(i=1;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
    {
        
       a= i&j;
        o= i|j;
        x= i^j;
        if(amax<=a &&a<k)
        {
            amax=a;
        }
        if(omax<=o && o<k)
        {
            omax=o;
        }
        if(xmax<=x && x<k)
        {
            xmax=x;
        }
        
    }
  
}

    
printf("%d\n",amax);
printf("%d\n",omax);
printf("%d\n",xmax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
