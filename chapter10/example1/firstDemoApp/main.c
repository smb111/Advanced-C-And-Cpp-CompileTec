#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int nFirst = first_function(1);
	int nSecond = second_function(2);
	int nRetValue = nFirst + nSecond;

	printf("first(1) + second(2) = %d\n", nFirst + nSecond);
	

	return 0;
}
