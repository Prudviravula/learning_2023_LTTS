#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int totalday(char str[], int arr[]){
    int days=atoi(str);
    int months=atoi(str +3);
    int years=atoi(str +6);
    int totaldays=arr[months-1];
    totaldays+=days;
    if (years % 400 == 0) {
      return totaldays+1;
   }
   else if (years % 4 == 0) {
      return totaldays+1;
   }
   else {
      return totaldays;
   }
}

int main(){
    char str[10];
    printf("Enter the time in dd/mm/yyyy format: ");
    scanf("%s",str);
    int arr[]={31,59,90,120,151,181,212,243,273,304,334,365};
    int totaldays=0;
    int months=atoi(str +3);
    if(months>12){
        printf("Enter the valid Months \n");
    }
    else{
        totaldays=totalday(str,arr);
        printf("Total days: %d\n", totaldays);
    }
}