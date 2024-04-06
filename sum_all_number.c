#include<stdio.h>

int main() {
    int i=1,n,sum=0;

    printf("Enter the number:");
    scanf("%d",n);

    while(i<=n){
    printf("\n %d",i);
    sum=i;
    i++;
    }
    printf("\n sum is %d",sum);
    return 0;

}