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
//class B : private A { //b,c맴버 변수는 private 맴버로 접근 범위 졻혀짐
//
//};
//
//class C : protected A { //c맴버 변수는 protected 맴버로 접근 범위 졻혀짐
//
//};
//
//class D : public A { //맴버 변수의 접근 제한에 변화없음
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