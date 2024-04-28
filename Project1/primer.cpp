#include <iostream>
#include <string>
#include <vector>
#include <iterator>//迭代器
using namespace std;

//1.11

//int main() {
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


//1.12

//int main() {
//	int sum = 0;
//	for (int i = -100; i <= 100; ++i) {
//		sum += i;
//	}
//	cout << sum;
// }


//1.13

//int main() {
//	int a; int b;
//	cout << "请输入整数a和b" << endl;
//	cin >> a >> b;
//	cout << " " << endl;
//	if (a>b)
//	{
//		for (b; b <= a; ++b) {
//			cout << b << endl;
//		}
//	}
//	else
//	{
//		for (a; a <= b; ++a) {
//			cout << a << endl;
//		}
//	}
//}


//1.23

//#include "Sales_item.h"
//
//int main() {
//	Sales_item total;
//	if (cin >> total) {
//		Sales_item trans;
//		while (cin >> trans) {
//			if (total.isbn == trans.isbn) {
//				total += trans;
//			}
//			else {
//				cout << total << endl;
//				total = trans;
//			}
//		}
//		cout << total << endl;
//	}
//	else
//	{
//		cout << "无数据输入" << endl;
//		return -1;
//	}
//	return 0;
//}


//2.17

//int main() {
//	int i, &ri = i;
//	i = 5;
//	ri = 10;
//	cout << i << endl;
//	cout << ri;
// }


//2.16

//int main() {
//	int i = 0, &r1 = i;
//	double d = 0, &r2 = d;
//	r2 = 3.14159;
//	cout << r2 << endl;
//	r2 = r1;
//	cout << r2 << endl;
//	i = r2;
//	cout << i << endl;
//	r1 = d;
//	cout << r1;
//}

//2.27

//int main() {
//	const int i =1;
//	const int *const p = &i;
//	i = 10;
//	cout << i << endl;
//	cout << *p;
// }

//3.4

//int main() {
//	string line1, line2;
//	cin >> line1 >> line2;
//	if (line1 > line2) {
//		cout << line1;
//	}
//	else {
//		cout << line2;
//	}
//	cout << endl << line1 + line2;
//}

//3.5

//int main() {
//	string line1,line2;
//	cin >> line1;
//	line2 = "world";
//	string line3 = line1 + "," + "world";
//	cout << line3;
//}

//3.6

//int main() {
//	string line;
//	cout << "输入一个字符串" << endl;
//	getline(cin, line);
//	for ( auto &c : line) {
//			c = 'X';
//	}
//	cout << line << endl;
//}

//3.10

//int main() {
//	string line;
//	cout << "输入一个字符串" << endl;
//	getline(cin, line);
//		for (auto c : line)
//			if (!ispunct(c))
//				cout << c;
//}

//3.14

//int main() {
//	int world;
//	vector<int> v1{ 1,2,3,4 };
//	while (cin >> world) {
//		v1.push_back(world);
//		cout << v1.size();
//	}
//}

//3.17

//int main() {
//	//定义string类型的vector
//	vector<string> s;
//	//定义一个string用于接收输入流
//	string in;
//	//char用于循环继续判定
//	char next = 'y';
//	cout << "请输入一个单词:" << endl;
//	while (cin >> in) {
//		s.push_back(in);
//		cout << "继续？（y 或 n）" << endl;
//		cin >> next;
//		if (next != 'y')
//			break;
//		cout << "请输入下一个单词:" << endl;
//	}
//	//range for vector
//	for (auto& rf : s) {
//	//range for每一个vector成员
//		for (auto& rs : rf) {
//	//将vector成员的每一个字母逐个转为大写
//			rs = toupper(rs);
//		}
//		cout << rf << endl;
//	}
//}

//3.20

//int main(){
//	int in = 0;
//	vector<int> he;
//	string next;
//	int _switch;
//	int i = 0;
//	int j = 1; 
//	cout << "请输入一个整数" << endl;
//	while (cin >> in) {
//		he.push_back(in);
//		cout << "继续输入？（yes or no）" << endl;
//		cin >> next;
//		if (next != "yes")break;
//		cout << "请输入下一个整数" << endl;
//	}
//	cout << "首尾相加扣1，相邻相加扣2" << endl;
//	cin >> _switch;
//	if (_switch == 1) {
//		while (i < he.size()- i - 1) {
//			cout << he[i] + he[he.size() - i - 1] <<" ";
//			i = i + 1;
//		}
//		if (he.size() % 2 == 1)
//		cout << "中位数是：" << he[i] << endl;
//	}
//	if (_switch == 2) {
//			while(j < he.size()){
//				cout << he[i] + he[j] << " ";
//				i = i + 2;
//				j = j + 2;
//			}
//			if (he.size() % 2 == 1)
//			cout << "尾数是：" << he[i] << endl;
//	}
//}

//

//int main() {
//	vector<string> a;
//	string in;
//	while (cin >> in) {
//		a.push_back(in);
//		if (a.size() == 2) { break; }
//	}
//	for (auto& s : a) {
//		for (auto i = s.begin(); i != s.end(); ++i) {
//			*i = toupper(*i);
//			cout << *i;
//		}
//	}
//}

//3.25

//int main() {
//	unsigned in;
//	vector<int> grade(11);
//	auto it = grade.begin();
//	cout << "请输入学生成绩" << endl;
//	while (cin >> in) {
//		if (in <= 100) {
//			++*(it + in / 10);
//		}
//		else cout << "输入的成绩有误" << endl;
//	}
//	cout << "各分数段的人数分布是" << endl;
//	for (int rank = 0; it != grade.end(); it++) {
//		if (rank < 100) {
//			cout << rank << "～" << rank + 9 << ":" << *it << endl;
//			rank += 10;
//		}
//		else cout << "100:" << *it;
//	}
//}

//3.31

//int main(){
//	const size_t t = 10;
//	int arry[t];
//	for (int i = 0; i < 10; i++) {
//		arry[i] = i;
//		cout << arry[i] << " ";
//	}
//}

//3.32

//int main(){
//	const size_t t = 10;
//	int arry[t];
//	for (int i = 0; i < 10; i++) {
//		arry[i] = i;
//	}
//	int arry2[t];
//	int j = 0;
//	for (; j < 10;j++) {
//		arry2[j] = arry[j];
//	}
//	for (auto a : arry2)
//		cout << a<< " ";
//}

//3.35

int main() {
	const int sz = 10;
	int arry[sz]={0,1,2,3,4,5,6,7,8,9};
	cout << "数组原来的元素为：";
	for (auto i : arry)
		cout << i << " ";
	int *beg = begin(arry);
	while (beg != end(arry)) {
		*beg = 0;
		beg++;
	}
	cout << endl<<"修改后的数组元素为:";
	for (auto k : arry)
		cout << k << " ";
}