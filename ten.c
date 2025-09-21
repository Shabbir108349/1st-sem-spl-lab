#include<stdio.h>

//write a program that takes a number as an input and display it on reverse order;

int main(){

    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    int ans = 0;
    int n = number;
    while(number > 0){
        int rem = number % 10;
        ans = (ans*10)+rem;
        number /= 10;
    }

    printf("Reverse order of %d is %d",n,ans);

    return 0;
}