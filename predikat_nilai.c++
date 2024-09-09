#include <iostream>
using namespace std;
int main ()
{
  char predikat;
  
  cout <<"masukan predikat (A, B, C, D)";
  cin >>predikat;
  if (predikat=='A'){
  cout<<"Predikat Anda Sangat Baik";
  }
  else if(predikat=='B'){
  cout<<"Predikat Anda Baik";
  }
  else if (predikat=='C'){
  cout << "Predikat Anda Cukup Baik";
  }
  else{
  cout<<"Predikat Anda Kurang Baik";
  }
  return 0;
}