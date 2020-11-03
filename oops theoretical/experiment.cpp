#include <iostream>
using namespace std;
class A
{
	private:
	int x = 10;
	public:
	void f()
	{
		cout << x << endl;
	}
};
int main()
{
	A a;
	// cout << a.x << endl;
	a.f();
	return 0;
}


// class A
// {
// 	private:
// 	int x = 10;
// 	protected:
// 	void f1()
// 	{
// 		cout << "A" << endl;
// 	}
// };

// class B: public A
// {
// 	public:
// 	void f2()
// 	{
// 		f1();
// 	}
// };

// int main()
// {
// 	A a;
// 	// a.f1();
// 	B b;
// 	b.f2();
// 	return 0;
// }