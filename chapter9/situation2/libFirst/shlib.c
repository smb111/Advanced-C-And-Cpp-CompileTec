#include <stdio.h>
#include <stdlib.h>
#include "shlibfirstexports.h"

int shlib_function(void)
{
	printf("First : %s\n", __FUNCTION__);
	return 0;
}

int shlib_first_function(void)
{
	printf("%s\n", __FUNCTION__);
	return 0;
}
