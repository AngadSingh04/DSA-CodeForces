#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n,m,a;
    cin >> n >> m >> a;
    n = (int)ceil((double)n/a);
    m = (int)ceil((double)m/a);
    cout << n*m << endl;
    return 0;
}