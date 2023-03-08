#include <iostream>
using namespace std;

double Luas, P, L;
void input (){
    cout << "masukkan panjangnya = ";
    cin >> P;
    cout << "masukkan lebarnya = ";
    cin >> L;
}

void proses(){
    Luas = P*L;
}

void output (){
    cout << "Luasnya = " << Luas;
}

int main (){
    input();
    proses();
    output();
}
