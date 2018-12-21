#ifndef __SINGLETON_H__
#define __SINGLETON_H__

class Singleton{
private:
	Singleton(){};
	Singleton(const Singleton &);
	void operator=(const Singleton &);

private:
	static Singleton *m_pInstance;
	
public:
	static Singleton& GetInstance(void);
	
public:
	~Singleton(){}
	int DoSomething(void);
};

#endif