//Write a program to find the second largest of n numbers using an array.
#include<stdio.h>
int main(){
    int i, n, arr[20], large, second_large;
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("\nEnter the elements");
    for(i=0;i<n;i++){
        if(arr[i]>large)
            large = arr[i];
    }
    second_large = arr[1];
    for(i=0;i<n;i++){
        if(arr[i] != large){
            if(arr[i]>second_large)
                second_large = arr[i];
        }
    }
    printf("\nThe number you entered are: ");
    for(i=0;i<n;i++)
        printf("\t %d", arr[i]);
    printf("\nThe largest of these numbers is: %d", large);
    printf("\nThe second largest of these numbers is: %d", second_large);
    return 0;
}