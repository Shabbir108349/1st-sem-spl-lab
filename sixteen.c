#include<stdio.h>
#include<string.h>
//write a program to check a given string is palindrome or not.
int main(){

    char s[50];
    printf("Enter the String: ");
    gets(s);
    char temps[50];
    strcpy(temps,s);
    char finalS[50];
    int j=0;
    while()
    for(int i=length-1; i>=0; i--){
        finalS[j] = temps[i];
        j++; 
    }
    if(strcmp(finalS,s)==0){
        printf("The String is a palindrome");
    }else{
        printf("The String is not a palindrome");
    }

    return 0;
}