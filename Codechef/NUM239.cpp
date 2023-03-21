#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int L, R, count = 0;
	    cin >> L >> R;
	    for(int i = L; i <= R; i++){
	        int pretty_number = i%10;
	        if(pretty_number == 2 || pretty_number == 3 || pretty_number == 9){
	            count++;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
