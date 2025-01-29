#include <stdio.h>
int main() {
    int n;
    printf("enter n=");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
     printf("enter element%d=",i+1);
     scanf("%d",&arr[i]);
    }
for(int i=0;i<=n-1;i++){
        printf("%d",arr[i]);
    }
    int position;
    int number;
    printf("enter position=");
    scanf("%d",&position);
    printf("enter number=");
    scanf("%d",&number);
    for (int i =n-1; i>=position; i--) {
        arr[i+1] =arr[i];
    }
    arr[position]=number;
    n++;
    for (int i = 0;i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}