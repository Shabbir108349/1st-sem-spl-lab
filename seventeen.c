#include<stdio.h>

//write a program to print n fibonacci numbers using iterative approach;

int main(){

    int n;
    printf("Enter the number of n: ");
    scanf("%d",&n);

    int first = 0, second = 1;

    printf("The fibonacci series is: %d %d ",first,second);

    for(int i=2; i<n; i++){
    int temp = first + second;
    printf("%d ",temp);
    first = second;
    second = temp;

    }
    

    return 0;
}