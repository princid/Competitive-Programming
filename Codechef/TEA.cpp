#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int planned_tea, total_capacity, charge;
	    cin >> planned_tea >> total_capacity >> charge;
	    if(planned_tea <= total_capacity) cout << charge << endl;
	    else{
	        int refill_count = (planned_tea/total_capacity);
	        if(planned_tea%total_capacity == 0) cout << refill_count*charge << endl;
	        else cout << (refill_count+1)*charge << endl;
	    }
	}
	return 0;
}
