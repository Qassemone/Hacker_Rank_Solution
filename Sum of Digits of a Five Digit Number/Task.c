#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, f,s,th,four,fifth,sum ;
    scanf("%d", &n);
    f=n/10000;
    s=(n/1000)-(f*10);
    th=(n/100)-(f*100+s*10);
    four=(n/10)-((f*1000)+(s*100)+(th*10));
    fifth=n-(f*10000+s*1000+th*100+four*10);
    sum=f+s+th+four+fifth;
    printf("%d",sum);
    return 0;
}
