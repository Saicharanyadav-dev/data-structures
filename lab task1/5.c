#include <stdio.h>    
    
int main()    
{    
    int x;
    printf("enter x=");
    scanf("%d",&x);
    int arr[x];   
    for(int i=0;i<=x-1;i++){ 
  printf("enter element%d=",i+1);
   scanf("%d",&arr[i]); 
    } 
    for(int i=0;i<=x-1;i++){ 
        printf("%d",arr[i]);
    }
    int length = sizeof(arr)/sizeof(arr[0]);    
    int n ;   
    printf("enter n=");
    scanf("%d",&n);
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }     
    for(int i = 0; i < n; i++){    
        int j, first;   
        first = arr[0];  
      for(j = 0; j < length-1; j++){
            arr[j] = arr[j+1];    
        } 
        arr[j] = first;    
    }  
    printf("\n");    
    printf("Array after left rotation: \n");    
     int nr;
     printf("enter nr=");
    scanf("%d",&nr);
    for(int i = 0; i < length; i++){    
        printf("%d ", arr[i]);    
    }   
    for(int i = 0; i < nr; i++){    
        int j, last;
        last = arr[length-1]; 
        for(j = length-1; j > 0; j--){
            arr[j] = arr[j-1];    
        }    
        arr[0] = last;    
    }    
        
    printf("\n");    
    printf("Array after right rotation: \n");    
    for(int i = 0; i< length; i++){    
        printf("%d ", arr[i]);    
    }    
    return 0;    
}
