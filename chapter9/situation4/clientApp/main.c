#include <iostream>
#include "singleton.h"
#include "shlibfirstexports.h"
#include "shlibsecondexports.h"
using namespace std;

int main(int argc, char *argv[])
{
	Singleton &singleton = Singleton::GetInstance();
	cout << "ClientApp Singleton Address : " << endl;
	singleton.DoSomething();
	
	shlibfirst_function();
	shlibsecond_function();
	
	return 0;
}
