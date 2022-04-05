#include<stdio.h>

enum days_of_week
{
    Sun,Mon,Tue,Wed,Thu,Fri,Sat
};

 int main()
 {
   enum days_of_week day1,day2;

   day1=Thu;

   printf("Day1= %d",day1);
 }
