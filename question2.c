#include <stdio.h>

int main(){
    char name[20];
    int age;
    char department[20];
    int studentID;
    char section[20];
    char uniname[20];
    printf("enter your name");
    scanf("%s",name);
    printf("enter your age");
    scanf("%d",&age);
    printf("enter your department");
    scanf("%s",department);
    printf("enter your studentID");
    scanf("%d",&studentID);
    printf("enter your section");
    scanf("%s",section);
    printf("enter your uniname");
    scanf("%s",uniname);
    printf("my name is %s my age is %d my department is %s my student id is %d my section is %s my uni name is %s",name,age,department,studentID,section,uniname);












    return 0;

}