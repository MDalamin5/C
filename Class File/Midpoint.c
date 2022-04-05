#include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    printf("Enter the value of x1,y1,x2,y2: ");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    printf("The midpoints is: %d , %d", (x1+x2)/2 , (y1+y2)/2);
}
