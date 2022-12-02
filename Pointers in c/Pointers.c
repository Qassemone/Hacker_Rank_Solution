#include <stdio.h>

int update(int *a,int *b) { 
int diff;
if(*a>*b)
{
    diff=*a-*b;
}    
else {
diff=*b-*a;
}
*b+=*a;

return diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    int diff;
    scanf("%d %d", &a, &b);
      diff=update(&a,&b);
    printf("%d\n%d", b, diff);

    return 0;
}
