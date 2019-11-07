#include <stdio.h>

int main()
{
	int input;
	scanf("%d",&input);
	
	int power=3;
	
	while(power<input && input>3)
	{
		power=power*3;
	}
	
	if(power==input && input>3)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
    /*but 3 power 1 is 3 tho...*/
	}
	
	return 0;
}
