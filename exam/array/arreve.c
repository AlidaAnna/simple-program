#include<stdio.h>
void main()
{
int a[20],i,n;
printf("Enter n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i=i+2)
{
printf("%d",a[i]);
}
}

