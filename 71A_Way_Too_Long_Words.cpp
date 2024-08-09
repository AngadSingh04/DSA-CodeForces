#include<iostream>
using namespace std;

int main(){
    int total_words;
    cin >> total_words;
    for(int i = 0; i < total_words; i++){
        string str;
        cin >> str;
        if(str.length() <= 10){
            cout << str <<endl;
        }else{
            int n = str.length()-2;
            cout<<str[0]<<n<<str[str.length()-1]<<endl;
        }
    }
    return 0;
}