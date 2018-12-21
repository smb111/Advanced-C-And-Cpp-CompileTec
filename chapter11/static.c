#include <stdio.h>
#include <stdlib.h>
#include "static.h"


int func()
{	
	printf("static weak : %s\n", __FUNCTION__);
	return 3;
}	
