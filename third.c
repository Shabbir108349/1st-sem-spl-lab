#include<stdio.h>

//Write a program to find the given number is odd or even.

int main(){
        int number;
    for(int i=0; i<5; i++){
        printf("Please Enter The Number: ");
    scanf("%d",&number);
    if(number % 2 == 0){
        printf("%d is Even\n",number);
    }else{
        printf("%d is odd\n",number);
    }
    }
    
    return 0;
}