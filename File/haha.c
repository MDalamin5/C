#include <stdio.h>

int main()
{


    int ch;
    scanf("%c", &ch);
    //printf("%d", ch);
    switch(ch%2){
        case 0:
        printf("n2 is Even");
        break;
        case 1:
        printf("n1 is Odd");
        break;
        default:
            printf("Character");


    }
    return 0;
}
