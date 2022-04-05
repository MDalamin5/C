#include<stdio.h>
int main()
{
    char word[40],ch;
    int i,vowel,consonent,number,other,worde;
    printf("Enter a sentence: ");
    gets(word);


    i=vowel=consonent=number=other=worde=0;

    while((ch=word[i])!='\0')
    {

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')

            vowel++;


        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))

            consonent++;

        else if (ch>='0' && ch<='9')

            number++;


        else if(ch==' ')

            worde++;


        else

            other++;



        i++;
    }

    worde++;

    printf("Number of vowel: %d\n",vowel);
    printf("Number of consonent: %d\n",consonent);
    printf("Number of number: %d\n",number);
    printf("Number of word: %d\n",worde);
    printf("Number of other: %d\n",other);





}
