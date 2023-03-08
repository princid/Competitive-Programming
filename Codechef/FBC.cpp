#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int K, X;
	    cin >> K >> X;
	    cout << abs(K-X) << endl;
	}
	return 0;
}
