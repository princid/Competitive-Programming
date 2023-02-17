#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int T;
	float A, B, C;
	
	cin >> T;
	
	while(T--){
	    cin >> A >> B >> C;
	    
	    if((A+B)/2 > C)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	
	return 0;
}
