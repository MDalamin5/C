#include<stdio.h>
int main()
{
    int month;
    printf("Enter Your Month Number: ");
    scanf("%d",&month);

    if(month==4 || month==6 || month==9 || month==11)
    {
        printf("30 days");
    }
    else if(month==1|| month==3|| month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("31 days");

    }
    else if(month==2)
    {
        printf("28 Days or 29 Days");
    }
    else
        printf("Invalid month Number, please enter Month No. 1-12");


}

