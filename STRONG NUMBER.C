#include<stdio.h>
void main()
{
	int i,num,m,fact,r,strong=0;
	printf("enter a no to check whether it is strong or not ");
	scanf("%d",&num);
	m=num;
	while(num!=0)
	{
		r=num%10;
		fact=1;
		for(i=r;i>=1;i--)
		{
			fact=fact*i;
		}
		strong=strong+fact;
		num=num/10;
	}
	if(strong==m)
	printf("%d is a strong no.",m);
	else
	printf("%d is not a strong no",m);
	
}
