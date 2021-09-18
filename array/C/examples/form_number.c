//Write a program to enter the number of digits. Form a number using these digits.
#include<stdio.h>
#include<math.h>
int main(){
    int number=0, digits[10], numofdigits, i;
    printf("\nEnter the number of digits: ");
    scanf("%d", &numofdigits);
    for(i=0;i<numofdigits;i++){
        printf("\nEnter the digits at position %d", i+1);
        scanf("%d", &digits[i]);
    }
    i=0;
    while(i<numofdigits){
        number = number + digits[i] * pow(10,i);
        i++;
    }
    printf("\nThe number is: %d", number);
}