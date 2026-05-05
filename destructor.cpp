#include <iostream>
using namespace std;

class angka
{
    private:
        int *arr;
        int panjang;

public:
    angka(int); //consturctor
    ~angka();   //destructor
    void cetakdata();
    void isidata();
};

angka::angka(int i){ //constructor
    panjang = i;
    arr = new int[i];
    isidata();
}
angka::~angka(){ //destructor
    cout << endl;
    cetakdata();
    delete[] arr;
    cout << "Alamat Arr Sudah Dilepaskan" << endl;
}
