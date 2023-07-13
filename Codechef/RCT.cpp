#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int W, L;
	    cin >> W >> L;
	    
	    if(W%2 == 0 || L%2 == 0) cout << "YES" << endl;
	    else cout << "NO" << endl; 
	}
	return 0;
}
