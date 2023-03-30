#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int A,B,C;
	    cin >> A >> B >> C;
	    int first_avg = (A+B)/2;
	    int second_avg = (B+C)/2;
	    int third_avg = (A+C)/2;
	    if(first_avg < 35 || second_avg < 35 || third_avg < 35) cout << "Fail" << endl;
	    else cout << "Pass" << endl;
	}
	return 0;
}
