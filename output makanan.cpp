#include <iostream>

using namespace std;

int main(){
    int menu;

cout << "Menu Restaurant Me'Yahud" << endl;
cout << "======================================================" << endl;
cout << "1. Nasi Goreng Informatika     Rp. 5.000,-" << endl;
cout << "2. Nasi Soto Ayam Internet     Rp. 7.000,-" << endl;
cout << "3. Gado-gado Disket            Rp. 4.500,-" << endl;
cout << "4. Bubur Ayam LAN              Rp. 4.000,-" << endl;
cout << "======================================================" << endl;

cout << "Masukkan Pilihan Anda: ";

cin >> menu;

if(menu==1){
    cout << "Pilihan No.1 Nasi Goreng Informatika Rp. 5.000,-";
}else if(menu==2){
    cout << "Pilihan No.2 Nasi Soto Ayam Internet Rp. 7.000,-";
}else if(menu==3){
    cout << "Pilihan No.3 Gado-gado Disket Rp. 4.500,-";
}else if(menu==4){
    cout << "Pilihan No.4 Bubur Ayam LAN Rp. 4.000,-";
}else{
    cout << "Gaada mas gomen~~";
}
return 0;

}
