#include <iostream>
using namespace std;

class mahasiswa {
  public:
  int nim;

  void showNim(){
    cout <<"No Induk = " << nim << endl;
  }
};

int main(){
    mahasiswa mhs{1}; // Object mhs
    mhs.showNim(); // Member Access Operator

    mahasiswa &refMhs = mhs; //Poineter reference refMhs
    refMhs.nim = 2; //Member access operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //Pointer dereference pMhs
    pMhs->nim = 3; //arrow operator
    pMhs->showNim();
    return 0;
}