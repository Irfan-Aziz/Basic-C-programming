#include<stdio.h>
main(){
double loan_amount,interest_rate,year,monthly_amount,total_amount;
printf("Enter the loan amount:");
scanf("%lf",&loan_amount);
printf("Enter the interest rate:");
scanf("%lf",&interest_rate);
printf("Number of years:");
scanf("%lf",&year);
loan_amount=loan_amount+ loan_amount*(interest_rate*year/100);
monthly_amount=loan_amount/(5*12);
printf("total amount=%lf",loan_amount);
printf("monthly amount=%lf",monthly_amount);}
