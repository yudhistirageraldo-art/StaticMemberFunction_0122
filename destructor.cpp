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