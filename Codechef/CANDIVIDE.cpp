#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N;
	    cin >> N;
	    if(N%3 == 0) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
