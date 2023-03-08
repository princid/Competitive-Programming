#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N;
	    cin >> N;
	    if(N%2 != 0) cout << -1 << endl;
	    else{
	        for(int i=1; i<=N; i=i+2){
	            cout << i+1 << " " << i << " ";
	        }
	        cout << endl;
	    }
	}
	return 0;
}
