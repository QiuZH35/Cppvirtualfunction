
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

//声明一个虚函数后，继承需要实例化，才能创建对象
class my//虚基类
{

};
class myfu : virtual public my//虚继承 ，有一个虚基类指针，存储虚基类地址
{

};

//抽象类
class fupo : virtual public myfu//虚继承
{
	virtual void go()=0//虚函数，纯虚函数，存储虚函数表地址
	{

	}

};

void main()
{
	cout << sizeof(fupo) << endl;


	cin.get();
}