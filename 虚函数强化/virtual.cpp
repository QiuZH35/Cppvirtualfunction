
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>

using namespace std;
//�̳У� classĬ��˽�У�structĬ�Ϲ���
//�麯�����Ե��ó�Ա�������߱���
//��̬�ĵ���������ָ�������
//������ã�����ÿ������죬����һ�����࣬�޷�ʵ�ֶ�̬

//p->show();//��̬����
//p->myclass::show();//ԭ������

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
//	//p->show();//��̬����
//	//p->myclass::show();//ԭ������
//
//
//	cin.get();
//}