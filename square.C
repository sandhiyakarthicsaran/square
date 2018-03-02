#include<stdio.h>
void main()
{
int n,sq=0;
printf("Enter the number:\n");
scanf("%d",&n);
sq=n%2;
if(sq==0)
printf("YES");
else
printf("No");
getch();
}
