//Write a program to read an array of n numbers and then find the smallest number.
#include<stdio.h>
void read_array(int arr[], int n);
int find_small(int arr[], int n);
int main(){
    int num[10], n, smallest;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    read_array(num, n);
    smallest = find_small(num, n);
    printf("\nThe smallest number in the array is = %d", smallest);
    return 0;
}
void read_array(int arr[10], int n){
    int i=0, small=arr[10];
    for(i=1;i<n;i++){
        if(arr[i]<small)
            small = arr[i];
    }
    return small;
}