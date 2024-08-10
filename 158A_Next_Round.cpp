#include<iostream>
using namespace std;


int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    k = k-1;
    int count = 0;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i] >= arr[k] && arr[i] > 0){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}