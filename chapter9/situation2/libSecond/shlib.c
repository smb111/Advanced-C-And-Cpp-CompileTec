#include <stdio.h>
#include <stdlib.h>
#include "shlibsecondexports.h"

int shlib_function(void)
{
	printf("Second : %s\n", __FUNCTION__);
	return 0;
}

int shlib_second_function(void)
{
	printf("%s\n", __FUNCTION__);
	return 0;
}

int shlib_second_another_function(void)
{
	printf("%s\n", __FUNCTION__);
	shlib_function();
	return 0;
}
