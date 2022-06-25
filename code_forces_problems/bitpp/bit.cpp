#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n;
    int result = 0;
    cin>>n;
    for (int i = 0; i < n; i++){
        string str;
        cin>>str;
        switch(str[1]){
            case '+':
                result++;
                break;
            case '-':
                result--;
                break;
        }
    }
    cout<<result;




}
