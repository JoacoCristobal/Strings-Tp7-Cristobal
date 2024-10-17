#include<iostream>
#include<string>
using namespace std;
string plb;
int main(){
cout<<"ingrese la palabra: ";
cin>>plb;
plb.size();

for (int i = plb.size() -1; i >= 0; i--){
cout<< plb.at(i)<<endl;
}
return 0;
}
