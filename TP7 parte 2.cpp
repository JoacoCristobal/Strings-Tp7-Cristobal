#include<iostream>
#include<string>
using namespace std;

string primer;
string segunda;
string comp;

int main(){
    cout << "ingrese la palabra: ";
    cin >> primer;
    cout << "ingrese la palabra: ";
    cin >> segunda;
    comp = primer + segunda; 
    cout << comp;
    return 0;
}
