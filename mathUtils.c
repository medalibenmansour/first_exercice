#include "mathUtils.h"

int is_prime(int number)
{
	int i, flag = 0;

    for(i = 2; i <= number/2; ++i)
    {
        // condition for nonprime number
        if(number%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (number == 1) 
    {
      printf("1 is neither a prime nor a composite number.");
    }
    else 
    {
        if (flag == 0)
        {  
			printf("%d is a prime number.\n", number);
			return 0;
		}
        else
        {
			return -1;
		}
    }
}

int factorial(int number){
    int i;
    unsigned long long factorial = 1;

    // show error if the user enters a negative integer
    if (number < 0)
    {
		printf("Error! Factorial of a negative number doesn't exist.");
		return -1;
	}

    else
    {
        for(i=1; i<=number; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return factorial;
}
