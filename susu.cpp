#include <iostream>
using namespace std;

int main(){
    int kode, jumlah, totalHarga;
    string ukuran;

    cout<<"Masukkan Kode Susu (1-3): ";
    cin>>kode;
    cout<<"Masukkan Jumlah Pembelian: ";
    cin>>jumlah;
    cout<<"Masukkan Ukuran (B/S/K): ";
    cin>>ukuran;

    if(kode==1){
        cout<<"Susu Dancow"<<endl;
        if(ukuran=="B"||ukuran=="b"){
        totalHarga = 10000*jumlah;
        cout<<"Harga Susu Rp.10000,00"<<endl;
        cout<<"Jumlah Pebelian Rp."<<totalHarga<<",00";
        }else if(ukuran=="S"||ukuran=="s"){
        totalHarga = 4250*jumlah;
        cout<<"Harga Susu Rp.4250,00"<<endl;
        cout<<"Jumlah Pebelian Rp."<<totalHarga<<",00";
        }else if(ukuran=="K"||ukuran=="k"){
        totalHarga = 2100*jumlah;
        cout<<"Harga Susu Rp.2100,00"<<endl;
        cout<<"Jumlah Pebelian Rp."<<totalHarga<<",00";
        }else{
        cout<<"ERROR! Input ukuran salah";
        }
    }else if(kode==2){
        cout<<"Susu Indomilk"<<endl;
        if(ukuran=="B"||ukuran=="b"){
        totalHarga = 8500*jumlah;
        cout<<"Harga Susu Rp.8500,00"<<endl;
        cout<<"Jumlah Pebelian Rp."<<totalHarga<<",00";
        }else if(ukuran=="S"||ukuran=="s"){
        totalHarga = 4000*jumlah;
        cout<<"Harga Susu Rp.4000,00"<<endl;
        cout<<"Jumlah Pebelian Rp."<<totalHarga<<",00";
        }else if(ukuran=="K"||ukuran=="k"){
        totalHarga = 2025*jumlah;
        cout<<"Harga Susu Rp.2025,00"<<endl;
        cout<<"Jumlah Pebelian Rp."<<totalHarga<<",00";
        }else{
        cout<<"ERROR! Input ukuran salah";
        }
    }else if(kode==3){
        cout<<"Susu Sustacal"<<endl;
        if(ukuran=="B"||ukuran=="b"){
        totalHarga = 17000*jumlah;
        cout<<"Harga Susu Rp.17000,00"<<endl;
        cout<<"Jumlah Pebelian Rp."<<totalHarga<<",00";
        }else if(ukuran=="S"||ukuran=="s"){
        totalHarga = 14500*jumlah;
        cout<<"Harga Susu Rp.14500,00"<<endl;
        cout<<"Jumlah Pebelian Rp."<<totalHarga<<",00";
        }else if(ukuran=="K"||ukuran=="k"){
        totalHarga = 8300*jumlah;
        cout<<"Harga Susu Rp.8300,00"<<endl;
        cout<<"Jumlah Pebelian Rp."<<totalHarga<<",00";
        }else{
        cout<<"ERROR! Input ukuran salah";
        }
    }else{
        cout<<"ERROR! Input kode susu salah";
    }

    return 0;
}
