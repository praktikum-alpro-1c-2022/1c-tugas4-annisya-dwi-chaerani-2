#include <iostream>
#include <string>

using namespace std;

int main(){
    string username, password;

    cout << "Masukkan username: ";
    cin >> username;

    cout << "Masukkan password: ";
    cin >> password;

if(username == "hatsuharu"){
        if(password == "haruganteng"){
            cout << "Username dan password sesuai, Login berhasil";
        }else{
            cout << "Username sesuai, password tidak sesuai!";
        }
}else if(password == "haruganteng"){
        if(username == "hatsuharu"){
            cout << "Username dan password sesuai, Login berhasil";
        }else{
            cout << "Username tidak sesuai, password sesuai!";
        }
}else{
    cout << "Username dan password tidak sesuai!";
}
return 0;
}
