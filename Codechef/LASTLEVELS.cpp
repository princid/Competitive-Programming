#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X, Y, Z;
	    1<=X<=100;
	    5<=Y<=100;
	    5<=Z<=15;
	    
	    cin >> X >> Y >> Z;
	    if(X<=3) cout << X*Y << endl;
	    else{
	        if(X%3 == 0){
	            int rest_time = ((X/3)-1)*Z;
	            cout << X*Y+rest_time << endl;
	        }
	        else{
	            int rest = (X/3)*Z;
	            cout << X*Y+rest << endl;
	        }
	        
	    }
	}
	return 0;
}
