#include <iostream>

using namespace std;

//class Fulei {
//public:
//	int a;
//	int b = 4; 
//	int c = 4; 
//	int d;
//	int xuanze() {
//		cout << "选择使用方法1或者方法2" << endl;
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
//		cout << "选择使用方法1或者方法2" << endl;
//		cin >> a;
//		cout << "输入a和b的值" << endl;
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
//	void doit() {cout << "肘击" << endl; }
//};
//
//
//class parent2 {
//public:
//	void sayit() {cout << "一条有毒的蛇出去了" << endl; }
//};
//
//
//class parent3 {
//public:
//	void saythat() { cout << "孩子们我回来了" << endl; }
//};
//
//
//class son : public parent1, public parent2, public parent3 {
//public:
//	void saythis() { cout << "鳗" << endl; }
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
//		cout << "父类虚拟方法实现" << endl;
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
//	cout << "现在的时间是" << datetime << endl;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////


//int main() {
//	int a = 12;
//	int *b;
//	b = &a;
////分别输出 a 的值，b指向的a的地址， b指向的a的地址的值， a的地址；
//	cout << a <<endl << b <<endl << *b <<endl << &a;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////


//int main(){
//	int a;
//	int b;
//	cout << "请输入a和b" << endl;
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
//	int* p = &ad; //指针p指向ad的地址
//	cout << *p << endl;//*将&ad地址储存的值取出
//	cout << p << endl;//p->&ad
//	cout << ad << endl;
//	cout << &ad << endl;
//}