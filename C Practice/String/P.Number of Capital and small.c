#include<stdio.h>
int main ()
{
    char s[50];
    int i,capital,small,digit,length;
    i=capital=small=digit=length=0;
    printf("Enter a string :");
    gets(s);
    while(s[i]!='\0')
    {
        if(s[i]>=65 && s[i]<=90)
            capital++;
       else if(s[i]>=97 && s[i]<=122)
                small++;
         else if(s[i]>=48 && s[i]<=57)
         digit++;

       i++;
       length++;

    }
    printf("Length = %d\n",length);
    printf("Number of capital letter = %d\n",capital);
      printf("Number of small letter = %d\n",small);
      printf("Number of digit = %d\n",digit);


}
