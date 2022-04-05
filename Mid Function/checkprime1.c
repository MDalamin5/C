#include <stdio.h>
 int prime(int a);
int main() {

int j,start,end;
printf("enter start ");
scanf("%d",&start);
printf("enter end ");
scanf("%d",&end);

for (j=start;j<=end;j++){
    prime(j);
}




    return 0;
}

int prime (int x){
    int i,count=0;
    for(i=1;i<=x;i++){
        if (x%i==0){
            count++;
        }
    }

    if(count==2){
        printf("%d is prime \n",x );
    }

    }

