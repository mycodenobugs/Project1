#include <iostream>

using namespace std;

//class Fulei {
//public:
//	int a;
//	int b = 4; 
//	int c = 4; 
//	int d;
//	int xuanze() {
//		cout << "ѡ��ʹ�÷���1���߷���2" << endl;
//		cin >> a;
//		if (a == 1)
//		{d = b * c; cout << d;}
//		else
//		{d = b + c; cout << d;}
//		return d;
//	}
//};
//
//
//class Zilei : public Fulei {
//public:
//	int xuanze() {
//		cout << "ѡ��ʹ�÷���1���߷���2" << endl;
//		cin >> a;
//		cout << "����a��b��ֵ" << endl;
//		cin >> b >> c;
//		if (a == 1)
//		{d = b * c; cout << d;}
//		else
//		{d = b + c; cout << d;}
//		return d;
//	}
//};
//
//int main() {
//	Zilei zilei;
//	zilei.xuanze();
//};


////////////////////////////////////////////////////////////////////////////////////////////////////


//class parent1 {
//public:
//	void doit() {cout << "���" << endl; }
//};
//
//
//class parent2 {
//public:
//	void sayit() {cout << "һ���ж����߳�ȥ��" << endl; }
//};
//
//
//class parent3 {
//public:
//	void saythat() { cout << "�������һ�����" << endl; }
//};
//
//
//class son : public parent1, public parent2, public parent3 {
//public:
//	void saythis() { cout << "��" << endl; }
//};
//
//
//int main() {
//	son parent;
//	parent.
//};


////////////////////////////////////////////////////////////////////////////////////////////////////


//class lei {
//public:
//	void say();
//};
//
//void lei::say() {
//	cout << "hello" << endl;
//}9                         u                         
//
//int main() {
//	lei lei1;
//	lei1.say();
//}


////////////////////////////////////////////////////////////////////////////////////////////////////


//class Parent {
//public:
//	virtual void method() = 0;
//};
//
//class Son : public Parent {
//public:
//	void method() {
//		cout << "�������ⷽ��ʵ��" << endl;
//	}
//};
//
//int main() {
//	Son son;
//	son.method();
//}


////////////////////////////////////////////////////////////////////////////////////////////////////


//#include <ctime>
//#pragma warning(disable: 4996)
//
//int main() {
//	time_t now = time(0);
//	char* datetime = ctime(&now);
//	cout << "���ڵ�ʱ����" << datetime << endl;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////


//int main() {
//	int a = 12;
//	int *b;
//	b = &a;
////�ֱ���� a ��ֵ��bָ���a�ĵ�ַ�� bָ���a�ĵ�ַ��ֵ�� a�ĵ�ַ��
//	cout << a <<endl << b <<endl << *b <<endl << &a;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////


//int main(){
//	int a;
//	int b;
//	cout << "������a��b" << endl;
//	cin >> a >> b;
//	if (a > b) {
//		while (a >= b)
//		{
//			cout << b;
//			b++;
//		}
//	}
//	else
//	{
//		while (a <= b)
//		{
//			cout << a;
//			a++;
//		}
//	}
//}


////////////////////////////////////////////////////////////////////////////////////////////////////


//int main() {
//	int a = 1; int b = 2;
//	cout << a << endl;
//	cout << ++a << endl;
//	cout << b++ << endl;
//	cout << b;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////


//int main() {
//	int ad = 10;
//	int* p = &ad; //ָ��pָ��ad�ĵ�ַ
//	cout << *p << endl;//*��&ad��ַ�����ֵȡ��
//	cout << p << endl;//p->&ad
//	cout << ad << endl;
//	cout << &ad << endl;
//}