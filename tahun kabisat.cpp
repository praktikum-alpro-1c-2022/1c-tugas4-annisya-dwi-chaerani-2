#include <iostream>

using namespace std;

int main(){
    int tahun;

    cout<<"Masukkan tahun: ";
    cin>>tahun;

    if(tahun%4==0){
        cout<<"Tahun merupakan tahun kabisat";
    }else{
        cout<<"Tahun bukan merupakan tahun kabisat";
    }

    return 0;

}
