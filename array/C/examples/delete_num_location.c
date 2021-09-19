#include<stdio.h>
int main(){
    int i, n, pos, arr[20];
    printf("\nEnter the number of the elements in the array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("\n arr[%d = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the position from which the number has to be deleted: ");
    scanf("%d", &pos);
    for(i=pos;i<n;i++){
        arr[i] = arr[i+1];
    }
    n--;
    printf("\nThe array after deletion is: ");
    for(i=0;i<n;i++){
        printf("\n arr[%d] = %d", i, arr[i]);
    }
    return 0;
}