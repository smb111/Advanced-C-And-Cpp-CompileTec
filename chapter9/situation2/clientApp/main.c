#include <stdio.h>
#include <stdlib.h>
#include "shlibfirstexports.h"
#include "shlibsecondexports.h"

int main(int argc, char *argv[])
{
	shlib_first_function();
	shlib_function();

	shlib_second_function();

	shlib_second_another_function();

	return 0;
}
