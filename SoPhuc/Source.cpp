#include <iostream>
using namespace std;

class SoPhuc {
private:
	int thuc;
	int ao;
public:
	SoPhuc();
	~SoPhuc();
	void setSoPhuc(int, int);
	int getPhanThuc();
	int getPhanAo();
	void CongHaiSoPhuc(SoPhuc);
};



SoPhuc::SoPhuc() {
	cout << "Tao thanh cong 1 so phuc" << endl;;
}

SoPhuc::~SoPhuc() {
	cout << "Huy thanh cong mot so phuc" << endl;
}

int SoPhuc::getPhanThuc () {
	return thuc;
}

int SoPhuc::getPhanAo() {
	return ao;
}

void SoPhuc::setSoPhuc(int a, int b) {
	thuc = a;
	ao = b;
}

void SoPhuc::CongHaiSoPhuc (SoPhuc temp) {
	thuc += temp.thuc;
	ao += temp.ao;
}

int main() {
	SoPhuc S1;
	S1.setSoPhuc(3, 5);
	SoPhuc S2;
	S2.setSoPhuc(2, 7);
	S1.CongHaiSoPhuc(S2);
	cout << "So phuc S1 + S2 = " << S1.getPhanThuc() << "+" << S1.getPhanAo() << "i" << endl;
	return 0;
}