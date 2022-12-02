#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    /**
    * Sort an array a of the length n
    */
    double p[n],s;
    int min,j,k,i;
    float tempp;
    struct triangle temps;
    for( i=0;i<n;i++)
    {
         s=(tr[i].a+tr[i].b+tr[i].c)/2.0;
         p[i]=sqrt(s*(s-tr[i].a)*(s-tr[i].b)*(s-tr[i].c));
    }
    for(k=0;k<n;k++)
    {
        min=k;
        for(j=k+1;j<n;j++)
        {
            if(p[min]<p[j])
            {
                min=min;
            }
            else {
           // min=j;
            
            temps=tr[min];
            tr[min]=tr[j];
            tr[j]=temps;
            tempp=p[min];
            p[min]=p[j];
            p[j]=tempp;
        }
    }
}
}
    

        
        
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}