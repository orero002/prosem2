// Library System
#include<stdio.h>
int main (){
    int book_id,due_date, return_date, fine,days_overdue;
    printf ("please enter BOOKID: ");
    scanf("%d",&due_date);
     
     printf("please enter the return date: ");
    scanf("%d",&return_date);

    printf("please enter the return date: ");
    scanf("%d",&due_date);
    days_overdue = return_date - due_date;
      printf("the days over due is/are %d \n", days_overdue);



    if(days_overdue >= 1 && return_date >= 7){
        fine = days_overdue * 20;
    }
    else if (days_overdue >= 8 && return_date <= 14){
fine = days_overdue * 50;
    }
     else if (days_overdue >= 15){
        fine =days_overdue * 100 ;
         printf("the fine is Ksh. %d ",fine);
        }
          return 0;   
    }