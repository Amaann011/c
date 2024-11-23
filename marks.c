#include<stdio.h>
int main(){
    int marks1,marks2,marks3,total;
    printf("Enter marks1: \n");
    scanf("%d",&marks1);
    printf("Enter marks2: \n");
    scanf("%d",&marks2);
    printf("Enter marks3: \n");
    scanf("%d",&marks3);
    total = (marks1+marks2+marks3)/3;
    if(marks1<33 || marks2<33 || marks3<33){
        printf("The student is Failed  with %d %d %d marks in each subject",marks1,marks2,marks3);
    }else if(total<40){
        printf("The student is Failed with %d percentage",total);
    }else{
        printf("The student is Passed with %d percentage",total);
    }
    
return 0;


}