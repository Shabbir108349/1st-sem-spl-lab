#include<stdio.h>
#include<math.h>

int main(){

    int a,b,c;
    double D,root1,root2,realPart,imagePart;

    printf("Enter the value of the a: ");
    scanf("%d",&a);
    printf("Enter the value of the b: ");
    scanf("%d",&b);
    printf("Enter the value of the c: ");
    scanf("%d",&c);

    printf("%d %d %d \n",a,b,c);

    if(a==0){
        printf("This is not a quadretic function\n");
    }else{
        D = (b*b) - (4*a*c);
        printf("The value of d is %.2f\n",D);
        if(D==0){
            root1=root2= -b /(2*a);
            printf("roots are real and equal\n");
            printf("the roots are: %.2f,%.2f",root1,root2);
        }else if(D > 0){
            root1 = (-b + sqrt(D))/(2*a);
            root2 = (-b - sqrt(D))/(2*a);
            printf("roots are real and distinct");
            printf("The roots are: %.2f , %.2f",root1,root2);
        }else{
            realPart = -b/(2*a);
            imagePart = sqrt(-D)/(2*a);
            printf("roots are complex and different\n");
            printf("root1 = %.2f + %.2fi\n",realPart,imagePart);
            printf("root1 = %.2f - %.2fi\n",realPart,imagePart);

        }
    }

    return 0;
}
