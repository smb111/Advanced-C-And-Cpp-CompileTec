#include <iostream>
#include "singleton.h"

using namespace std;

Singleton *Singleton::m_pInstance = NULL;

Singleton &Singleton::GetInstance()
{
	if (m_pInstance == NULL)
	{
		m_pInstance = new Singleton();
	}
	return *m_pInstance;
}

int Singleton::DoSomething()
{
	cout << "Singleton Instance address is : " << this << endl;
	return 0;
}
