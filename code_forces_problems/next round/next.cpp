#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int scores[n];
    int targetPlace;
    int targetScore = 0;
    cin>>targetPlace;
    int count = 0;

    for(int i = 0; i < n ; i++){
        cin>>scores[i];
        if(i + 1 == targetPlace && scores[i] > 0){
            targetScore = scores[i];
            count = i + 1;
        }
        if(i > count -1 && scores[i] >= targetScore && scores[i] > 0 ){
            count ++;
        }
    }
    cout<<count;

}