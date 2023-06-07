#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;
public:
	bidangDatar() {
		x = 0;
	}

	virtual void input() {}

	virtual float Luas(int a) {
		return 0;
	}

	virtual float Keliling(int a) {
		return 0;
	}

	void setX(int a) {
		this->x = a;
	}

	int getX() {
		return x;
	}
};

class Lingkaran :public bidangDatar {
public:
	void input() {
		cout << "Lingkarang dibuat" << endl;
		int r; 
		cout << "Masukkan jejari : ";
		cin >> r;
		setX(r);
	}

	float Luas(int r) {
		return 3.14 * r * r;
	}

	float Keliling(int r) {
		return 2 * 3.14 * r;
	}
};

class Bujursangkar :public bidangDatar {
public:
	void input() {
		cout << "Bujursangkar dibuat" << endl;
		int s; 
		cout << "Masukkan sisi : ";
		cin >> s;
		setX(s);
	}

	float Luas(int s) {
		return s * s;
	}

	float Keliling(int s) {
		return 4 * s;
	}
};

int main() {
	bidangDatar* bd;
	Lingkaran lkr;
	Bujursangkar bujursangkar; 

	bd = &lkr;
	bd->input();
	cout << "Luas Lingkaran = " << lkr.Luas(lkr.getX()) << endl;
	cout << "Keliling Lingkaran = " << lkr.Keliling(lkr.getX()) << endl;
	cout << endl;

	bd = &bujursangkar; 
	bd->input();
	cout << "Luas Bujursangkar = " << bujursangkar.Luas(bujursangkar.getX()) << endl; 
	cout << "Keliling Bujursangkar = " << bujursangkar.Keliling(bujursangkar.getX()) << endl;

	return 0;
}