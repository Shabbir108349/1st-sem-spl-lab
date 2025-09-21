#include<stdio.h>

//write a program to search an element from an linear array;

int main(){

    int a[] = {1,2,3,4,5};
    int terget = 3;

    for(int i=0; i<5; i++){
        if(terget == a[i]){
            printf("The index of the element is: %d",i);
        }
    }
    
    return 0;
}