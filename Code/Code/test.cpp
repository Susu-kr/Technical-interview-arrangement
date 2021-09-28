//#include <iostream>
//using namespace std;
//
//class A {
//private:
//	int a;
//protected:
//	int b;
//public:
//	int c;
//};
//
//class B : private A { //b,c�ɹ� ������ private �ɹ��� ���� ���� ������
//
//};
//
//class C : protected A { //c�ɹ� ������ protected �ɹ��� ���� ���� ������
//
//};
//
//class D : public A { //�ɹ� ������ ���� ���ѿ� ��ȭ����
//
//};
//
//int main() {
//	B testB;
//	//a = private, b = private, c = private
//	//testB.a;
//	//testB.b;
//	//testB.c;
//	C testC;
//	//a = private, b = protected, c = protected
//	//testC.a;
//	//testC.b;
//	//testC.c;
//	D testD;
//	//a = private, b = protected, c = public
//	testD.a;
//	testD.b;
//	testD.c;
//}

#include <iostream>
using namespace std;

class A {
private:
	int a;
	int b;
public:
	void setA(int _a) {
		if (_a > 50)
			_a = 50;
		a = _a;
	}
	void setB(int _b) {
		if (_b > 100)
			_b = 100;
		b = _b;
	}

	int getA() {
		return a;
	}
	int getB() {
		return b;
	}
};

class B : A {
public:
	void setAB(int a, int b) {
		setA(a);
		setB(b);
	}
	void printResult() {
		printf("%d + %d = %d\n", getA(), getB(), getA() + getB());
	}
};


int main() {
	B b;
	b.setAB(100, 200);
	b.printResult();
}