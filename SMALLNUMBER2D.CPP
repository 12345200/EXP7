#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3];
int i,j,small;
clrscr();
printf("Enter the numbers:");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
small=a[0][0];
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
	if(a[i][j]<small)
	{
	small=a[i][j];
	}
	}
}
printf("The small numbers is %d",small);
getch();
return 0;
}