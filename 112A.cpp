#include<iostream>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    string an = "";
    string bn = "";
    for(char c : a){
        an += tolower(c);
    }
    for(char c : b){
        bn += tolower(c);
    }
    if(an.compare(bn)==0){
        cout << 0 <<endl;
    }else if(an.compare(bn) < 0){
        cout << -1 <<endl;
    }else{
        cout << 1 <<endl;
    }
    
    return 0;
}