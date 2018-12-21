#include <iostream>
#include "shlibsecondexports.h"
#include "singleton.h"
using namespace std;

#ifdef __cplusplus
extern "C"
{
#endif
	int shlibsecond_function(void)
	{
		cout << __FUNCTION__ << " : " << endl;
		Singleton &singleton = Singleton::GetInstance();
		singleton.DoSomething();
		
		return 0;
	}
#ifdef __cplusplus
}
#endif

