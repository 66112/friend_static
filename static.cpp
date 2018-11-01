#include "static.h"

void test()
{
	cout << A::GetCount() << endl;
}
int main()
{
	A a;
	test();
	return 0;
}