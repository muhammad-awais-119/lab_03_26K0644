#include<stdio.h>
int main(){
    int num1;
    int num2;
    printf("enter num 1");
    scanf("%d",&num1);
    printf("enter num 2");
    scanf("%d",&num2);
    printf("%d %d\n",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("%d %d",num1,num2);



    return 0;
}