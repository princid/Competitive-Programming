#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N, B;
	    cin >> N >> B;
	    int W[N], H[N], P[N];
	    for(int i = 0; i<N; i++){
	        cin >> W[i] >> H[i] >> P[i];
	    }
	    int max_area = 0;
	    for(int i = 0; i<N; i++){
	        if(P[i] <= B){
	            max_area = max(W[i]*H[i], max_area);
	        }
	    }
	    if(max_area == 0) cout << "no tablet" << endl;
	    else cout << max_area << endl;
	}
	return 0;
}
