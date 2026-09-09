#include<stdio.h>
int main(){
    float base;
    float height;
    float area;
    printf("enter base");
    scanf("%f",&base);
     printf("enter height");
    scanf("%f",&height);
    area=base*height;
    printf("%.1f",area);

    return 0;

}