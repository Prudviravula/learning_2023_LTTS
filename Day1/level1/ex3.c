#include<stdio.h>
int main(){
    char rollnum[100],name[100];
    float phy,che,math,total,percentage;
    printf("enter the rollnumber\n");
    scanf("%s[^\n]",rollnum);
    printf("enter the name\n");
    scanf("%s[^\n]",name);
    printf("enter the physics marks\n");
    scanf("%f",&phy);
    printf("enter the che marks\n");
    scanf("%f",&che);
    printf("enter the math marks\n");
    scanf("%f",&math);
    total=phy+che+math;
    percentage=(total/300)*100;
    printf("the student %s with rollnumber : %s got percentage %f",name,rollnum,percentage);
return 0;
}