#include<stdio.h>

//Write a c program to find factorial of a given number;

int main(){

    int number;
    printf("Enter the Number: ");
    scanf("%d",&number);

    int ans = 1;
    for(int i=number; i>0; i--){
        ans *= i;
    }
    printf("The factorial of %d is %d",number,ans);

    //Implement with while loop

    // int i=number;
    // while(i>0){
    //     ans *= i;
    //     i--;
    // }
    // printf("The factorial of %d is %d",number,ans);

    //implement with do-while

    // int i=number;
    // do{
    //     ans *= i;
    //     i--;
    // }while(i>0);
    // printf("The factorial of %d is %d",number,ans);

    return 0;
}
