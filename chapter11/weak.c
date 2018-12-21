#include <stdio.h>
#include "weak.h"

int func()
{
	printf("weak symbol : %s\n", __FUNCTION__);
	return 1;
}
