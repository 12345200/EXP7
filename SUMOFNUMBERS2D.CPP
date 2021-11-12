#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3];
int i,j,sum=0;
clrscr();
printf("Enter the numbers:");
for(i=0;i<=2;i++)
{
   for(j=0;j<=2;j++)
   {
   scanf("%d",&a[i][j]);
   }
}
for(i=0;i<=2;i++)
{
   for(j=0;j<=2;j++)
   {
   sum=sum+a[i][j];
   }
}
printf("The sum is %d",sum);
getch();
return 0;
}