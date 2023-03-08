#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int n;
	    cin >> n;
	    int A[n], B[n];
	    int count = 0;
	    for(int i=0; i<n; i++) cin >> A[i];
	    
	    for(int i=0; i<n; i++) cin >> B[i];
	    
	    for(int i=0; i<n; i++){
	        if(A[i] > B[i]){
	            if(A[i] <= 2*B[i]) count++;
	        }
	        else if(A[i] < B[i]){
	            if(2*A[i] >= B[i]) count++;
	        }
	        else count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
