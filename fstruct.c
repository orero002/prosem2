// structure
#include<stdio.h>
#include<string.h>

// struct for student1
 struct student{
    char name[60];
    char email[60];
    int phoneno, age, regno,dob;
    

}student;
int name;

int main(){
    struct  student;
    strcpy(student.name, "Stephen Maichales");
    strcpy(student.email, "StephenMaichales@gmail.com");

    printf("name: %s\n",student);
    printf("email:%s\n");
    printf("phoneno:%d\n");
    printf("age:%d\n");
    printf("regno:%d\n");
    printf("dob:%d\n");
    return 0;
}