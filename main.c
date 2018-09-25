#include "mathUtils.h"


int main (int argc, char *argv[])
{
	int number = 3;
	int fact = factorial(number);
	
	int i, j = 0, res = -1;
	
	//Print just the first 10 prime numbers under 100
	for(i = 0; i<100; i++)
	{
		res = is_prime(i);
		if(res == 0)
			j++;
		
		if (j == 10)
			break;
	}
	
	return 0;
}
