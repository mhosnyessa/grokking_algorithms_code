#include <iostream>

using namespace std;

void watermelon (int x);
int main(int argc, char const *argv[])
{

    int n;
    cin>>n;
    watermelon(n);
    


    return 0;
}


void watermelon(int x){
    if(x % 2 != 0 || x < 4){
        cout<<"NO";
        return ;
    }else{
        cout<<"YES";
        return;

    }



    
    int i = 2;
    
    

}


