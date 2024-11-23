#include<stdio.h>
int main(){
    int x;
    printf("Enter any number :");
    scanf("%d",&x);
    if(x%2==0){
        printf("the number is even");

    }
    else{
        printf("the number is odd");
    }
    return 0;

}