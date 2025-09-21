#include<stdio.h>

int main(){

    int a[3][3],b[3][3],ans[3][3];
    printf("Enter the element of the first array: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the element of the second array: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&b[i][j]);
        }
    }

    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            ans[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("The addition between the two array is:\n");

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}