#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a[]={1,4,2,5,8,6};
  int i,j,temp;
  for(i=0;i<5;i++)
  {
    for(j=i+1;j<6;j++)
	{
	  if (a[j]<a[i])
	  {
	    temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	}
   }
   for(i=0;i<6;i++)
     printf("%d ",a[i]);

	 
	 return 0;
}