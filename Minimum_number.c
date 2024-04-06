#include<stdio.h>

int main() {
    float num1,num2;
    printf("Enter first number");
    scanf("%f", &num1);
    printf("Enter second number");
    scanf("%f", &num2);
    if(num1<num2){
        printf("num1 is minimum:");
    } else{
        printf("num2 is minimum:");
    }
    return 0;
}