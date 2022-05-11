#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=n;i<=pow(10,18);i++){
            
        }
    }
return 0;
}
/*#include <bits/stdc++.h>

using namespace std;

const long long INF64 = 1e18;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		long long n;
		cin >> n;
		vector<int> vals;
		int pos2 = -1;
		while (n > 0) {
			vals.push_back(n % 3);
			if (vals.back() == 2) pos2 = int(vals.size()) - 1;
			n /= 3;
		}
		vals.push_back(0);
		if (pos2 != -1) {
			int pos0 = find(vals.begin() + pos2, vals.end(), 0) - vals.begin();
			vals[pos0] = 1;
			for (int i = pos0 - 1; i >= 0; --i) {
				vals[i] = 0;
			}
		}
		long long ans = 0;
		long long pw = 1;
		for (int i = 0; i < int(vals.size()); ++i) {
			ans += pw * vals[i];
			pw *= 3;
		}
		if (vals.back() == 1) ans = pw / 3;
		cout << ans << endl;
	}
	
	return 0;
}*/