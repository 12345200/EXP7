#include<stdio.h>
#include<conio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,p,q,r,s;
clrscr();
printf("Enter the number of rows and columns of 1st matrix:");
scanf("%d%d",&p,&q);
printf("Enter first matrix:");
for(i=0;i<p;i++)
{
     for(j=0;j<q;j++)
     {
     scanf("%d",&a[i][j]);
     }
     printf("\n ");
}
printf("Enter the number of rows and columns of 2nd matrix:");
scanf("%d%d",&r,&s);
printf("Enter second matrix:");
for(i=0;i<r;i++)
{
     for(j=0;j<s;j++)
     {
     scanf("%d",&b[i][j]);
     }
     printf("\n ");
}
for(i=0;i<p;i++)
{
     for(j=0;j<q;j++)
	      {
	      c[i][j]=a[i][j]+b[i][j];
	      }
	printf("\n");
}

  printf("The addition is\n");
   for(i=0;i<r;i++)
   {
       for(j=0;j<s;j++)
       {
       printf("%d ",c[i][j]);
       }
   }
getch();
return 0;
}

