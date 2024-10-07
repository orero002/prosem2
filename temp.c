// convrting centigrade to fahrenheit
#include<stdio.h>

int main(){
 int centigrade, fahrenheit;   
    int x = 32, y = 1.8, z = 0.5556;

    // function prototype
    centigrade = (z, x);
    fahrenheit = (z, y);

    printf("The answer in cebtigrade is %d\n",centigrade);
    
    printf("The answer in fahrenheit is %d",fahrenheit);

    return 0;
    
}

// function prototype
int centigrade(z, x){
    int result;
    result = z - x;
    return result;
}
// function prototype
int fahrenheit(y, x){
    int result;
    result = y + x;
    return result;
}
