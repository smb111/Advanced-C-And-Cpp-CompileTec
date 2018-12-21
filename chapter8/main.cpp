#include <stdio.h>
#include <iostream>

using namespace std;


int function_with_duplicate_name(int x)
{
	printf("%s\n",__FUNCTION__);
	cout << __FUNCTION__ << endl;
	return 1;
}

int function_with_duplicate_name(int x, int y)
{

	cout << endl << __FUNCTION__ << endl;
	return 4;
}

int main(int argc, char *argv[])
{
	printf("Hello world !\n");
	
	function_with_duplicate_name(3);

	function_with_duplicate_name(1, 2);

	return 0;
}
