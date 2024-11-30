#include<stdio.h>
void swap(int *,int *) ;
int main()
{
	int a,b;
	a=10;
	b=20;
	printf("before swapping a=%d and b=%d\n",a,b);
	swap(&a,&b);
	printf("after swapping a=%d and b=%d\n",a,b);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("after swapping x=%d and y=%d\n",*x,*y);
}

