#include<stdio.h>
int main(){
    int i=1,n;
    printf("Enter any natural number :");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    }while(i<5);
}