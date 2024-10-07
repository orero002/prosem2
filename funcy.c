// C functions - user defined function: volume of a sphere
#include<stdio.h>
#include<math.h>
int volume(int p, int f, int radius); //function prototype

int main(){

    int p, volume, radius, f;
    f = 4/3;
    p = 3.142;
    volume = (f, p, radius ); // function calling

    printf("please enter the radius");
    scanf("%d",&radius);
    
    printf("The volume of a sohere is %d",volume);
    return 0;

}

// function declaration
int volume(int p, int f, int radius){
    int result;
    result = p * f * radius;
    return result;
}