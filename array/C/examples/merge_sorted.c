//Write a program to merge two sorted arrays.
#include<stdio.h>
int main(){
    int arr1[10], arr2[10], arr3[20];
    int i, n1, n2, m, index=0;
    int index_first = 0, index_second = 0;
    printf("\nEnter the number of elements in array1: ");
    scanf("%d", &n1);
    printf("\nEnter the elements of the first array");
    for(i=0;i<n1;i++){
        printf("\narr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter the number of elements in array2: ");
    scanf("%d", &n2);
    printf("\nEnter the elements of the second array");
    for(i=0;i<n2;i++){
        printf("\narr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }
    m = n1+n2;
    while(index_first < n1 && index_second < n2){
        if(arr1[index_first]<arr2[index_second]){
            arr3[index] = arr1[index_first];
            index_first++;
        }
        else{
            arr3[index] = arr2[index_second];
            index_second++;
        }
        index++;
    }
    if(index_first == n2){
        while(index_second<n2){
            arr3[index] = arr2[index_second];
            index_second++;
            index++;
        }
    }
    else if(index_second == n2){
        while(index_first<n1){
            arr3[index] = arr1[index_first];
            index_first++;
            index++;
        }
    }
    printf("\nThe merged array is");
    for(i=0;i<m;i++)
    printf("\narr[%d] = %d", i, arr3[i]);
    return 0;
}