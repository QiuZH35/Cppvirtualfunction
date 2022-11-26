
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

//在继承时，派生类私有状态下，可以使用虚函数表调用。
class die
{
public:
	virtual void go1()
	{
		cout << "die走来了" << endl;
	}
	virtual void go2()
	{
		cout << "bie跑来了" << endl;
	}
	virtual void go3()
	{
		cout << "die飞来了" << endl;
	}
	virtual void go4()
	{
		cout << "die爬来了" << endl;
	}
};
class er :public die
{
//public:
	/*virtual void go1()
	{
		cout << "er走来了" << endl;
	}
	virtual void go2()
	{
		cout << "er跑来了" << endl;
	}*/
	virtual void go3()
	{
		cout << "er飞来了" << endl;
	}
	virtual void go4()
	{
		cout << "er爬来了" << endl;
	}

};
void main()
{
	die *p = new er;
	cout << sizeof(*p) << endl;//内容
	cout << (void*) p << endl;//对象的地址
	cout << *((int*)p) << endl;//虚函数表地址，以整数形式打印
	
	cout << (void*)(  *(int*)*(int*)p  ) << endl;//虚函数表首地址
	cout << (void *)(*  ( (int*) *(int*)p + 0)  ) << endl;//虚函数表首地址
	cout << (void *)(*  ( (int*) *(int*)p + 1)  ) << endl;//首地址加1
	cout << (void *)(*  ( (int*) *(int*)p + 2)  ) << endl;

	auto fun1 = (void*)(*((int*)*(int*)p + 0));//虚函数表
	auto fun2 = (void*)(*((int*)*(int*)p + 1));
	auto fun3 = (void*)(*((int*)*(int*)p + 2));

	typedef void(*P)();
	P pfun[4];//函数指针数组
	for (int i = 0; i < 4; i++)
	{
		pfun[i] = (P)(void*)(*((int*)*(int*)p + i));
		pfun[i]();
	}

	cin.get();
}