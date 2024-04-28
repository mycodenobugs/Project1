#include <iostream>

using namespace std;

class Cfx {
public:
	double length;
	double height;
	double breadth;

	double get(void);
	void set(double l, double h, double b);
};

double Cfx::get(void) {
	return length + height + breadth;
}

void Cfx::set(double l, double h, double b) {
	length = l;
	height = h;
	breadth = b;
}

int main() {
	Cfx Cfx1;
	double perimeter;
	cout << "请按顺序输入长方形的长，宽，高：" << endl;
	cin >> Cfx1.length >> Cfx1.breadth >> Cfx1.height;

	perimeter = Cfx1.get();
	cout << "长方形的周长是：" << perimeter;
}

class Cfx2 : public Cfx {
	double Cfx::get(void) {
		return length * breadth * height;
	}
};
