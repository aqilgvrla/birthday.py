#include <iostream>

using namespace std;

int main() {

int kode_barang;

cout << "Masukan Kode_Barang [1,2,3,4,5]: ";
cin >> kode_barang;

switch (kode_barang) {
case 1:
cout << "Pena" << endl;
break;
case 2:
cout << "Pensil" << endl;
break;
case 3:
cout << "Penggaris" << endl;
break;
case 4:
cout << "Penghapus" << endl;
break;
case 5:
cout << "Peruncing" << endl;
break;
default:
cout << "Anda salah masukan kode" << endl;
}

return 0;

}