#include <iostream>
using namespace std;

class mahasiswa {
	public:
	int nim;
	void showNim() {
		cout << "No induk = " << nim << endl;
	}
};

int main() {

	mahasiswa mhs{ 1 }; //object mhs
	mhs.showNim();// member access operator

	mahasiswa& refMhs = mhs; //pointer reference refmhs
	refMhs.nim = 2; // member access operator
}