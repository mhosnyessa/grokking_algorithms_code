#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int counter = 0;
    for(int i = 0; i < n; i++){
        int f, s, th;
        cin>>f>>s>>th;
        if(f + s + th >= 2 ) counter++;
    }
    cout<<counter;

}