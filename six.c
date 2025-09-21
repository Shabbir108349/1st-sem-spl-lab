#include<stdio.h>

//write a program to find the series of all prime number up to 100;

int isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%2==0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int number;
    printf("Enter the number up to 100: ");
    scanf("%d",&number);
    if(number >= 100){
        printf("Number should be below 100");
    }
    else{
        printf("%d ",2);
        for(int i=3; i<number; i++){
            if(isPrime(i)){
                printf("%d ",i);
        }
        
    }
    }

    

    return 0;
}