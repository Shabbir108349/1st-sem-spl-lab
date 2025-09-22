#include<stdio.h>
#include<string.h>
//write a program to check a given string is palindrome or not.
int main(){

    char s[50];
    printf("Enter the String: ");
    gets(s);
    
    int start = 0;
    int end = strlen(s)-1;
    while(start < end){
        if(s[start] != s[end]){
            printf("The String is not a palindrome");
            return 0;
        }
        start++;
        end--;
    }
    printf("The String is a palindrome");

    return 0;
}