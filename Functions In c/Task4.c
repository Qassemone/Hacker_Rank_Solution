#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int x ,int y, int z, int w);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
    int max_of_four(int x, int y, int z, int w)
    {
     int max=0; 
     if(x>y&&x>z&&x>w)
     {
         max=x;
     }
     else if (y>x&&y>z&&y>w)
     {
         max=y;
     }
     else if (z>y&&z>x&&z>w)
     {
         max=z;
     }
     else
     {
         max=w;
     }
    
return max ;
    }