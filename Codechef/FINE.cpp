#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >>T;
	while(T--){
	    int X;
	    cin >> X;
	    if(X>=1 && X<=70) cout << 0 << endl;
	    else if(X>70 && X<=100) cout << 500 << endl;
	    else if(X>100 && X<=200) cout << 2000 << endl;
	}
	return 0;
}
