
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

//�ڼ̳�ʱ��������˽��״̬�£�����ʹ���麯������á�
class die
{
public:
	virtual void go1()
	{
		cout << "die������" << endl;
	}
	virtual void go2()
	{
		cout << "bie������" << endl;
	}
	virtual void go3()
	{
		cout << "die������" << endl;
	}
	virtual void go4()
	{
		cout << "die������" << endl;
	}
};
class er :public die
{
//public:
	/*virtual void go1()
	{
		cout << "er������" << endl;
	}
	virtual void go2()
	{
		cout << "er������" << endl;
	}*/
	virtual void go3()
	{
		cout << "er������" << endl;
	}
	virtual void go4()
	{
		cout << "er������" << endl;
	}

};
void main()
{
	die *p = new er;
	cout << sizeof(*p) << endl;//����
	cout << (void*) p << endl;//����ĵ�ַ
	cout << *((int*)p) << endl;//�麯�����ַ����������ʽ��ӡ
	
	cout << (void*)(  *(int*)*(int*)p  ) << endl;//�麯�����׵�ַ
	cout << (void *)(*  ( (int*) *(int*)p + 0)  ) << endl;//�麯�����׵�ַ
	cout << (void *)(*  ( (int*) *(int*)p + 1)  ) << endl;//�׵�ַ��1
	cout << (void *)(*  ( (int*) *(int*)p + 2)  ) << endl;

	auto fun1 = (void*)(*((int*)*(int*)p + 0));//�麯����
	auto fun2 = (void*)(*((int*)*(int*)p + 1));
	auto fun3 = (void*)(*((int*)*(int*)p + 2));

	typedef void(*P)();
	P pfun[4];//����ָ������
	for (int i = 0; i < 4; i++)
	{
		pfun[i] = (P)(void*)(*((int*)*(int*)p + i));
		pfun[i]();
	}

	cin.get();
}