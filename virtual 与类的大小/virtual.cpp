
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

//����һ���麯���󣬼̳���Ҫʵ���������ܴ�������
class my//�����
{

};
class myfu : virtual public my//��̳� ����һ�������ָ�룬�洢������ַ
{

};

//������
class fupo : virtual public myfu//��̳�
{
	virtual void go()=0//�麯�������麯�����洢�麯�����ַ
	{

	}

};

void main()
{
	cout << sizeof(fupo) << endl;


	cin.get();
}