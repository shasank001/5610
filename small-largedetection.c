#include<stdio.h>
int main()
{
int a[50],i,n,l,s;
printf("Enter the number of elements :");
scanf("%d",&n);
printf("\nInput the array number :" );
for(i=0;i<n;++i)
 scanf("%d",&a[i]);
l=s=a[0];
for(i=1;i<n;++i)
{
 if(a[i]>l)
  l=a[i];
 if(a[i]<s)
  s=a[i];
}
printf("The smallest number is %d\n",s);
printf("\nThe largest number is %d",l);
return 0;
}
