#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3];
int i,j,x,c=0;
clrscr();
printf("Enter the numbers:");
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
printf("Enter the number that you have to search:");
scanf("%d",&x);
for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	{
	if(x==a[i][j])
	{
	c++;
	}
	}
}
if(c==0)
{
printf("Not found");
}
else
{
printf("%d found %d times",x,c);
}
getch();
return 0;
}
