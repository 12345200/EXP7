#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3];
int i,j;
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
	if(a[i][j]%2==1)
	{
	printf("%d ",a[i][j]);
	}
	}
}
getch();
return 0;
}