#include<stdio.h>

//write a program to find GCD of two integers.

int main(){
    int a,b;
    printf("Enter the number of a: ");
    scanf("%d",&a);
    printf("Enter he number of b: ");
    scanf("%d",&b);

    while(a != 0){
        int rem = b%a;
        if(rem == 0){
            printf("%d",a);
        }
        b=a;
        a = rem;
    }

    return 0;
}