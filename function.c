// function - user defined function:product of two numbers
#include<stdio.h>
int product(int num1, int num2); //function prototype
int main(){
    int p;
    p = product(20,12); //function calling

printf("the product of two numbers is %d ", p);
return 0;

}

//function declaration
int product(int num1, int num2){
    int result;
    result = num1 * num2;
    return result;
} 