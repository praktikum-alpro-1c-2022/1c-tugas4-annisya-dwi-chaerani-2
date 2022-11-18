#include <iostream>

using namespace std;

int main(){
    int angka;

    cout<<"Masukkan angka: ";
    cin>>angka;

    if(angka%2==0){
        cout<<"Angka merupakan angka genap";
    }else{
        cout<<"Angka merupakan angka ganjil";
    }

    return 0;

}
