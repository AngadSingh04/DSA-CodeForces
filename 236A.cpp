#include<iostream>
#include <unordered_set>
#include<vector>
using namespace std;

int main(){
    string a;
    cin >> a;
    unordered_set<char> us(a.begin(), a.end());
    vector<char> v(us.begin(), us.end());
    if(v.size()%2==0){
        cout <<"CHAT WITH HER!"<<endl;
    }else{
        cout <<"IGNORE HIM!"<<endl;
    }
    return 0;
}