#include<stdio.h>
#include<conio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,k;
int p,q,r,s,sum=0;
clrscr();
printf("Enter the number of rows and columns:\n");
scanf("%d%d",&p,&q);
printf("Enter first matrix:\n");
for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)
    {
    scanf("%d",&a[i][j]);
    }
    printf("\n");
}
printf("Enter the number of rows and columns:\n");
scanf("%d%d",&r,&s);
printf("Enter second matrix:\n");
for(i=0;i<r;i++)
{
     for(j=0;j<s;j++)
     {
     scanf("%d",&b[i][j]);
     }
     printf("\n");
}
if(q!=r)
{
printf("not possible");
}
else
{
  for(i=0;i<p;i++)
  {
     for(j=0;j<s;j++)
     {
	 for(k=0;k<r;k++)
	 {
	    sum=sum+a[i][k]*b[k][j];
	 }
	 c[i][j]=sum;
	 sum=0;
     }
  }
  for(i=0;i<p;i++)
  {
    for(j=0;j<s;j++)
    {
    printf("%d ",c[i][j]);
    }
    printf("\n");
  }
}
getch();
return 0;
}

