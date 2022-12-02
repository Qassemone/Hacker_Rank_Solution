#include <stdio.h>    
int main()    
{    
    //Initialize array
    int n;     
        
    int sum = 0;    
        scanf("%d",&n);
        int arr[n]; 
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        for(int i=0;i<length;i++)
        {
            scanf("%d",&arr[i]);
        }
    //Loop through the array to calculate sum of elements    
    for (int i = 0; i < length; i++) {     
       sum = sum + arr[i];    
    }      
    printf("%d", sum );    
    return 0;    
}    
