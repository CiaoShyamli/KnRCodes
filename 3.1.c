#include<stdio.h>
#include<conio.h>
int binsearch(int x, int v[], int n) ;// binary search
void main()
{
int v[200],n,x,iterator,status,j,temp;
 printf("\n enter your length of array = ");// length of array
 scanf("%d",&n);
 printf("\n now enter your array=");// giving elements to the array
 for(iterator=0;iterator<n;iterator++)
 {
      scanf("%d",&v[iterator]);
 }

 //sorting array//
for(iterator=0;iterator<n;iterator++)
{
  for(j=0;j<n-iterator-1;j++)
   {
     if(v[j]>v[j+1])
      {
	temp=v[j];
	v[j]=v[j+1];
	v[j+1]=temp;
	 }
   }
}
for(iterator=0;iterator<n;iterator++)
{
   printf(" %d",v[iterator]);
}
 printf("\n enter your element to be searched= ");// searching element
 scanf("%d",&x);
 status = binsearch(x,v,n);// calling functiion
 printf("\n status = %d",status);
 getch();
}
 int binsearch(int x, int v[], int n) 
 {
	int low, high, mid,flag=0;
    low = 0; 
	high = n - 1;    
	while (low < high) 
	{
		   mid = (low+high)/2;   
    if((x < v[mid]) ? high = mid + 1 :((x  > v[mid]) ? low = mid + 1 : 1))
	{
		;
	}
	if(x==v[mid])
	{
		return mid;
	}
	}
     if(flag==0)
	 {
	return -1;// not found//
	 }
 }