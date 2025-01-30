#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int t;
 for(int i=0;i<=n-2;i++){
     for(int j=0;j<=n-2-i;j++){
         if(arr[j]>arr[j+1]){
              t=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=t;
         }
     }
 }
 for(int i=0;i<=n-1;i++){
printf("%d\n",arr[i]);
 }
 return 0; 
}
