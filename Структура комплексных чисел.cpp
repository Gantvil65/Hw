#include "stdafx.h"
#include <iostream>
using namespace std;
class Complex {
private:
	int RE, IM;
public:
	Complex() {}
	Complex(int re, int im): RE(re), IM(im) {}
	~Complex() {}
	void out(const char *s) {
		if (IM >= 0)
			cout << s << RE << "+" << IM << "i" << endl;
		else
			cout << s << RE << IM << "i" << endl;
	}
	int Abs2() {
		return RE*RE + IM*IM;
	}
	Complex operator+(Complex sc) {
		Complex sum;
		sum.RE = RE + sc.RE;
		sum.IM = IM + sc.IM;
		return sum;
	}
	Complex operator*(Complex sc) {
		Complex mul;
		mul.RE = RE*sc.RE - IM*sc.IM;
		mul.IM = RE*sc.IM + IM*sc.RE;
		return mul;
	}
};
int main()
{
	int re, re1, im, im1;
	cout << "Vvedite re: ";
	cin >> re;
	cout << "Vvedite im: ";
	cin >> im;
	cout << "Vvedite re1: ";
	cin >> re1;
	cout << "Vvedite im1: ";
	cin >> im1;
	Complex a(re, im), b(re1, im1);
	(a * b).out("a*b= ");
	(a + b).out("a+b= ");
	cout << "abs2=" << a.Abs2() << endl;
	system("pause");
    return 0;
}
