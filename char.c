#include<stdio.h>
int main()
{
char c;
printf("Enter the number of character ");
scanf("%s",&c);
if((c=='a'&&c=='z')||(c=='A'&&c=='Z'))
printf("The number is an alphabet");
else
printf("The number is not an alphabet")
}
