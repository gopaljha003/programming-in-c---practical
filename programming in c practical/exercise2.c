#include<stdio.h>
int main(){
    char ch;
    printf("Enter the operators \n" );
    scanf("%c",&ch);
    int num1 ;
    printf("Enter firs number :\n");
    scanf("%d", &num1);
     int num2 ;
    printf("Enter second number :\n");
    scanf("%d", &num2);
    switch (ch)
    {
        case '+':
        printf("sum is %d", num1+num2 );
        break;
    case '-':
        printf("sum is %d", num1-num2 );
        break;
         case '*':
        printf("sum is %d", num1*num2 );
        break;
         case '/':
        printf("sum is %d", num1/num2 );
        break;
         case '%':
        printf("sum is %d", num1%num2 );
        break;
    
    default:
    printf("invalid input");
        break;
    }

    return 0;

}