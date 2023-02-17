#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int T, N, M, X;
	cin >> T;
	
	while(T--){
	    
	    cin >> N >> M >> X;
	    
	    cout << (2*N + 2*M)*X << endl;
	    
	}
	return 0;
}
