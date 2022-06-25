#include <iostream>
using namespace std;

int main(){
    int n,m;
    int dominos = 0;
    cin>>n>>m;

    if(n == 1 && m == 1){
        cout<<0;
        return 0;
    }

    if(m > n){
        int tempN = n;
        n = m;
        m = tempN;
    }

    bool nIsEven = (n%2 == 0);
    if(!nIsEven) n--;
    
    dominos += m * n/2;

    if(nIsEven){cout<<dominos; return 0;}else{
        dominos += (m/2) ;
        cout<<dominos;
        return 0;
    }


    



}
