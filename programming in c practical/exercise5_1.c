#include<stdio.h>
int main(){
    int a , fact;
    fact=1;
    printf("enter the number :");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
     fact= i*fact;
    }
    printf("the factorial of the given num %d is %d", a , fact);
}