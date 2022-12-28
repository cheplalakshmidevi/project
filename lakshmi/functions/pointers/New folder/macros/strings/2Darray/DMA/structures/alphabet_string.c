//count all alphabet and A-Z and a-z parallel
#include<stdio.h>
#include<string.h>


int main()
{
char string[26];
int i,j;
int upper,lower;

printf("\n enter the string");
 fgets(string,20,stdin);
 string[strlen(string)-1]='\0';
 printf("\n string is %s",string);
 
 
    for(i=65;i<=90;i++)  // outer loop
     {   
      lower=0;upper=0;

       for(j=0;string[j]!='\0';j++)
        {
          if(string[j] == i)
             upper++;
           if(string[j] == i +32)
             lower++; 
        }
       printf("\n %c = %d %c = %d \n",i,upper,j,lower);
     }

return 0;
}

