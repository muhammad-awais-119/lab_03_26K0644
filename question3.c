


#include<stdio.h>
int main(){
    int distance;
    int distance_inmeter;
    int distance_incenti;
    printf("enter distance in kilometer");
    scanf("%d",&distance);
    distance_inmeter=distance*1000;
    distance_incenti=distance_inmeter*100;
    printf("%d %d %d",distance,distance_inmeter,distance_incenti);

    return 0;
}