#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N,K;
	    cin >> N >> K;
	    string S;
	    cin >> S;
	    if(S[0] == '0'){
	        S[0] = '1';
	        K = K-1;
	    }
	    while(K--){
	        S.push_back('0');
	    }
	    cout << S << endl;
	}
	return 0;
}
