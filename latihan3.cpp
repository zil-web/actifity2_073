#include <iostream>
using namespace std;
double P, L;

void input (){
    cout << "masukkan panjangnya = ";
    cin >> P;
    cout << "masukkan lebarnya = ";
    cin >> L;
}

double proses (){
    return P*L;
}

double Proses2(double a, double b ){
    return a*b;
}

void output(){
    cout << "luasnya = " << proses();
    cout << "/nluasnya ke 2 = " <<
    Proses2(P,L);

}
    int main (){
        input();
        output();
    }
    

