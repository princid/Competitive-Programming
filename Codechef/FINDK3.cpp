#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X, Y, Z;
	    cin >> X >> Y >> Z;
	    if(X != Y && Y != Z && X != Z){
	        if((X*Y)%Z == 0){
	            cout << (X*Y) << " " << Z << endl;
	        }
	        else if((X*Z)%Y == 0){
	            cout << (X*Z) << " " << Y << endl;
	        }
	        else if((Y*Z)%X == 0){
	            cout << (Y*Z) << " " << X << endl;
	        }
	        else cout << "-1" << endl;
	    }
	    else cout << "-1" << endl;
	    
	}
	return 0;
}
