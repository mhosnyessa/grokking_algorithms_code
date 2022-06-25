#include <iostream>
#include <string.h>

using namespace std;
int main(){
    
    string str1;
    string str2;
    cin>>str1>>str2;
    int min = 'a';
    int diff = 'a' - 'A';
    
    for(int i = 0; i < str1.length(); i ++){
        if(str1[i] < min){
            str1[i] += diff;
        }
        if(str2[i] < min){
            str2[i] += diff;
        }

        if(str1[i] > str2[i]){
            cout<<1;
            return 0;
        }else if(str2[i] > str1[i]){
            cout<<-1;
            return 0;
        }
        

    }
    cout<<0;
}