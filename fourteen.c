#include<stdio.h>

//Write a program to exchange the value of two variable(x,y) by using pointer

int main(){
    int x = 1;
    int y = 2;

    int *ptrX = &x;
    int *ptrY = &y;

    int temp = *ptrX;
    *ptrX = *ptrY;
    *ptrY = temp;

    printf("%d %d",x,y);

    return 0;
}