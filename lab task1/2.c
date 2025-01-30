
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
   int del;
    printf("enter del=");
    scanf("%d",&del);
    if(del>0){
    for(int i=0;i<=del-1;i++){
        printf("%d\n",arr[i]);
    }
    for(int i=del+1;i<=n-1;i++){
        printf("%d\n",arr[i]);
    }
    }
    else{
        for(int i=1;i<=n-1;i++){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}
