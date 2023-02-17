#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, X;
	cin >> T;
	while(T--){
	    cin >> X;
	    if(X<=50)
	        cout << "LEFT" << endl;
	    else if(X>50)
	        cout << "RIGHT" << endl;
	}
	return 0;
}
