#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N, M;
	    cin >> N >> M;
	    if(N>=M){
	        int temp = N-M;
	        if(temp%2 == 0) cout << "YES" << endl;
	        else cout << "NO" << endl;
	    }
	    else{
	        while(M >= N){
	            if(M == N){
	                cout << "YES" << endl;
	                break;
	            }
	            else{
	                M--;
	                N += 3;
	                if(N > M){
	                    int temp = N - M;
	                    if(temp%2 == 0) cout << "YES" << endl;
	                    else cout << "NO" << endl;
	                }
	            }
	        }
	    }
	}
	return 0;
}
