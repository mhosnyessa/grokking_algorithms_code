#include <iostream>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    if(n%2 == 0){
        if(k <= n/2){
            cout<< k*2 -1;
            return 0;
        }else{
            k -= n/2;
            cout<< 2*k;
            return 0;
        }

    }else{
        if(k <= (n+1)/2) {
            cout<< 2*k - 1;
            return 0;
        }else{
            k -= (n+1)/2;
            cout<<2*k;
            return 0;
        }
    }
}