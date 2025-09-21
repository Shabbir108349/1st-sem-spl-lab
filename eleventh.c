#include<stdio.h>

//write a program to display all the element of an array and also calculate the sum of the element.

int main(){

    int num;
    printf("Enter size of the array: ");
    scanf("%d",&num);
    int array[num];
    printf("Enter the element of the array: ");
    for(int i=0; i<num; i++){
        scanf("%d",&array[i]);
    }
    printf("The element of the array is: \n");
    int sum = 0;
    for(int i=0; i<num; i++){
        sum += array[i];
        printf("%d ",array[i]);
    }
    printf("\n");
    printf("The sum of the element of the array is: %d",sum);


    return 0;
}