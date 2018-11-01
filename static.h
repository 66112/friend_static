#ifndef __STATIC_H__
#define __STATIC_H__

#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		++_count;
	}
	A(const A& t)
	{
		++_count;
	}
	~A()
	{
		--_count;
	}
	static int GetCount()
	{
		return _count;
	}
private:
	static int _count;
};

int A::_count = 0;
#endif 