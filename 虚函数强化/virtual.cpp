
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>

using namespace std;
//继承， class默认私有，struct默认公有
//虚函数可以调用成员函数或者变量
//多态的调用依赖于指针或引用
//对象调用，会调用拷贝构造，拷贝一个父类，无法实现多态

//p->show();//多态调用
//p->myclass::show();//原生调用

//class myclass
//{
//public:
//	myclass()
//	{
//		cout << "myclass()" << endl;
//	}
//	myclass(const myclass &my)
//	{
//		cout << "myclass(const myclass &my)"<<endl;
//	}
//	virtual void show()
//	{
//		go();
//	}
//	void go()
//	{
//		cout << "runrunrun" << endl;
//	}
//	virtual ~myclass()
//	{
//
//	}
//
//};
//struct mynewclass :myclass
//{
//public:
//	void show()
//	{
//		cout << "hello world!" << endl;
//	}
//};
//
//void test(myclass &my)
//{
//	my.show();
//}
//void test(myclass * p)
//{
//	p->show();
//}
//void test(myclass p)
//{
//	p.show();
//}
//void main1()
//{
//	myclass *p = new mynewclass;
//	test(p);
//
//	//p->show();//多态调用
//	//p->myclass::show();//原生调用
//
//
//	cin.get();
//}