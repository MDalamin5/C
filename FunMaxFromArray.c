#include<stdio.h>
int main()
{
    int valu[]={29,4,5,4,35,56};

    int mvalu= maxvalu( valu);
    printf("%d",mvalu);

}

int maxvalu(int m[])
{
    int i,max;
    max=m[0];

    for(i=1;i<6;i++)
    {
        if(max<m[i])
            max=m[i];
    }
    return max;
}
