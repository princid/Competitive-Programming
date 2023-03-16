#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X,Y,Z;
	    cin >> X >> Y >> Z;
	    int personal_training = abs(Z-X);
	    if(X<=Z){
	        if(Y<=personal_training){
	            cout << "2" << endl;
	        }
	        else cout << "1" << endl;
	    }
	    else cout << "0" << endl;
	}
	return 0;
}
