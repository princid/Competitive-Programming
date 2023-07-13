#include <iostream>
using namespace std;

int manaCalculate (int N, int X, int K, int P){
    int mana = P;
    if(K <= X){
        mana += K*10;
    }
    else{
        mana += X*10 + (K-X)*5;
    }
    
    if(K == N){
        mana += 20;
    }
    
    return mana;
}

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N,X,K,P;
	    cin >> N >> X >> K >> P;
	    cout << manaCalculate(N, X, K, P) << endl;
	}
	return 0;
}
