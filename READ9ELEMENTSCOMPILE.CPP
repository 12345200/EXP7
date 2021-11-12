#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3]={10,20,30,40,50,60,70,80,90};
int i,j;
clrscr();
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("%d ",a[i][j]);
}printf("\n");
}
getch();
return 0;
}