#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int rowX;
    int columnX;

    for(int i = 0 ; i < 5; i ++){
        for (int j = 0; j < 5 ; j ++ ){
            int input;
            cin>>input;
            if(input == 1){
                rowX = i;
                columnX = j;
            }
        }
    }
    if(rowX == 2 && columnX == 2){
        cout<<0;
        return 0;
    }else{
        cout<<abs( rowX - 2 ) + abs(columnX - 2);
        return 0;
    }
}