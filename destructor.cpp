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

void angka::cetakdata()
{
    for (int i = 1; i <= panjang; i++)
    {
        cout << i << " = " << arr[i] << endl;
    }
}

void angka::isidata()
{
    for (int i = 1; i <= panjang; i++)
    {
        cout << i << " = ";
        cin >> arr[i];
    }
    cout << endl;
}
int main()
{
    angka belajarcpp(3);                      //constructor dipanggil
    angka *ptrBelajarcpp = new angka(5);     //constructor dipanggil
    delete ptrBelajarcpp;                   //destructor dipanggil

    return 0;
}