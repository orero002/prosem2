#include<stdio.h>

int main()
{
    int principal ;
    int timehours;
    int rate;
    int percentage;
    int simpleinterest;

    printf("please enter the principal:\n");
    scanf("%d", &principal);

    printf("please enter the time taken in hours:\n");
    scanf("%d", &timehours);

    printf("please enter the rate : \n");
    scanf("%d",&rate);

    
     simpleinterest = (principal *timehours * rate * percentage);
   printf("%d",simpleinterest);

    return 0;

}