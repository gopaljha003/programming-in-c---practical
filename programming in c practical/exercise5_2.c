#include<stdio.h>
int factorialrec ( int n ){
    if (n==0 || n==1)    {
        return 1 ;

    }
    else{
       return  n*factorialrec(n-1);
    }
    
}
int main(){

    int n;
    printf("Enter the number ");
    scanf("%d",&n);
   int factorial = factorialrec(n);
    printf("the factorial of given number is %d", factorial);
    return 0;
}