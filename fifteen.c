#include<stdio.h>
#include<string.h>

//write a program to perform all basic String handling function;

int main(){

    char a[20], b[20];
    printf("Enter the String a: ");
    gets(a);
    printf("Enter the String b: ");
    gets(b);
    char temp[100];
    //first copy the bangla value to the temp variable;
    strcpy(temp,a);

    //then concate the temp and desh variable = bangladesh;

    strcat(temp,b);

    printf("The String after concate: %s\n",temp);

    printf("The length of the temp variable is : %d\n",
        
    strlen(temp));

    //now comparing the bangla and desh variable to see that which variable is large or which is small;

    if(strcmp(a,b)==0){
        printf("The two string is equal");
    }else if (strcmp(a,b)>0){
        printf("%s is greater than the %s",a,b);
    }else{
        printf("%s is greater than the %s",b,a);
    }

    return 0;
}