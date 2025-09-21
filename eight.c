#include<stdio.h>
#include<math.h>

//write a program to find weather the given number is an armstrong number on not
int digit(int num){
    int count = 0;
    while(num > 0){
        num /= 10;
        count++;
    }
    return count;
}
int main(){

    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    double ans = 0;
    int d = digit(number);
    int n = number;
    while(number > 0){
        int rem = number % 10;
        ans += pow(rem,d);
        number /= 10;
    }

    if(ans == n){
        printf("It is an armstrong number\n");
    }else{
        printf("It is not an armstrong number\n");
    }


    return 0;
}