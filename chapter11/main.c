#include <stdlib.h>
#include <stdio.h>
#include "weak.h"
//#include "static.h"

/*
int __attribute__((weak)) func()
{
	printf("weak symbol : %s\n", __FUNCTION__);
	return 1;
}*/
int func()
{
	printf("main symbol : %s\n", __FUNCTION__);
	return 1;
}


int main(int argc, char *argv[])
{
	func();	


	return 0;
}
