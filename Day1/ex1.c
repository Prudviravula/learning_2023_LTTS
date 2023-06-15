#include<stdio.h>
int main()  
{  
    int a, b, big;  
  
    printf("Enter 2 numbers\n");  
    scanf("%d %d", &a, &b);  
  
    (a > b) ? (big = a) : (big = b);  
  
    printf("Biggest of %d and %d is %d\n", a, b, big);  
  
    return 0;  
}
/*using if else if statements prudvi*/  
int partb() {  
    int a, b;  
    printf("Please Enter Two different values\n");  
    scanf("%d %d", &a, &b);  
    
    if(a > b) 
    {
        printf("%d is Largest\n", a);          
    } 
    else 
    { 
        printf("%d is Largest\n", b);  
    } 
    
   
    return 0;  
}

