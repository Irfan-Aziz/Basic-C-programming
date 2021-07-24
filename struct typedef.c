#include<stdio.h>
typedef struct car{
char* engine;
char fuel[50];
int tank_capacity;
float mileage;
}car;
int main(){
car c1;
car c2;
//printf("Enter engine model\n");
//scanf("%s",c1.engine);
//printf("Enter engine model\n");
//scanf("%s",c2.engine);
c1.engine="A12 FD";
c2.engine="LX1121";
printf("for car1: %s\n",c1.engine);
printf("for car2: %s\n",c2.engine);
}
