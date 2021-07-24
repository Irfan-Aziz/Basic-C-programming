#include<stdio.h>
struct employee{
char *name;
int age;
int salary;
};
int manager(){
/*struct{
char* name;
int age;
int salary;
} manager;*/
struct employee manager;
manager.age=37;
if(manager.age>30)
manager.salary=50000;
else
manager.salary=40000;
return manager.salary;
}
int main(){
    struct employee emp1,emp2;
printf("Enter the salary of emp1\n");
scanf("%d",&emp1.salary);
printf("Enter the salary of emp2\n");
scanf("%d",&emp2.salary);
printf("emp1= %d\nemp2= %d\nmanager= %d",emp1.salary,emp2.salary,manager());}
