#include <stdio.h>

int main()
{
	int n=1;
	int input;
	do
	{
		scanf("%d",&input);
	} while(input<0);
	
	int dummy=input;
	
	while(dummy>1)
	{
		if(dummy%2==1)
		{
			dummy=dummy-1;
		}
		dummy=dummy/2;
		n++;
	}
	
	int binary[n];
	int i=n-1;
	
	while(input>1)
	{
		binary[i]=input%2;
		if(input%2==1)
		{
			input=input-1;
		}
		input=input/2;
		i=i-1;
	}
	
	binary[0]=1;
	
	for(i=0;i<n;i++)
	{
		printf("%d",binary[i]);
	}
	
	return 0;
}
