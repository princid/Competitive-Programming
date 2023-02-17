#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	 while(T--){
	     int X;
	     cin >> X;
	     int P = X/3;
	     if(X%3 == 0){
	         cout << "0" << endl;
	     }
	     else{
	         cout << (((P+1)*3)-X) << endl;
	     }
	 }
	return 0;
}
