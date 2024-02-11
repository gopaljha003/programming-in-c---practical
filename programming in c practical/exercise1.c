#include<stdio.h>
int main(){
    int n;
    int r;
    int sum=0;
    printf("Enter the number ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;

    }
    printf("the sum is %d" , sum);


}