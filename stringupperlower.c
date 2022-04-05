#include<stdio.h>
int main()
{
    char str[25]="Hi how are you?";
    char s[]="OFFFFF";


    strupr(str);
    printf("str = %s",str);

    strlwr(s);

    printf("\n %s",s);

}
