#include <stdio.h>

int main() {
    int n,a[n];
    printf("Enter no of elements\n");
    scanf("%d",&n);
    printf("Enter array elements");                                           
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%d",a[i]);
    }

    return 0;
}