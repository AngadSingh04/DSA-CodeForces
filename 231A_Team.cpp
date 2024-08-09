#include<iostream>
using namespace std;

int main(){
    int totalQuestion;
    cin >> totalQuestion;
    int count = 0;
    while(totalQuestion){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b == 2 || b+c == 2 || a+c == 2){
            count++;
        }
        totalQuestion--;
    }
    cout << count << endl;
    return 0;
}