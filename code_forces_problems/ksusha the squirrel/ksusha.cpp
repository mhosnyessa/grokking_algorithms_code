#include <iostream>
#include <string.h>
using namespace std;

int main(){
    // these are number of inputs and max jump
    unsigned long long n,k;
    string answer = "YES";
    cin>>n>>k;
    string road;
    cin>>road;
    unsigned long long hashCounter = 0;
    for(unsigned long long i = 1; i < n - 1; i++ ){
        if(road[i] == '#'){
            if (++hashCounter >= k) {
                answer = "NO";
            }
        }else{
            hashCounter = 0;
        }
    }
    cout << answer << endl;
}