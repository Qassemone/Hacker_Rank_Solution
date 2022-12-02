#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, x, i;
    scanf("%d", &num);
    int arr[num];
    int j=num-1;
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[j]);
        j--;
    }


    for(i = 0; i < num; i++)
        printf("%d ", arr[i] );
    return 0;
}
