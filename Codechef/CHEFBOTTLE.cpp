#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N,X,K;
	    cin >> N >> X >> K;
	    if(N*X <= K) cout << N << endl;
	    else{
	        if(X > K) cout << 0 << endl;
	        else cout << K/X << endl;
	    }
	}
	return 0;
}
