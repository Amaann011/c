#include<stdio.h>
int main(){
    int i, n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("Table for %d: \n",n);
    for(i=0 ; i<=10 ; i++){
        
        
        printf("%d x %d : %d \n",n,i,i*n);
        
      
    }
}