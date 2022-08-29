#include <bits/stdc++.h>
#define Max 1000001
using namespace std;
int n,M;
int a[Max];
void input() {
	cin >> n >> M;
	for(int i = 1; i <= n; i++) cin >> a[i]; 
}

void Solve() {
	sort(a+1,a+n+1);
	int ans = 0;
	//for(int i = 1; i <= n; i++) cout << a[i] << endl;
	int head = 1, tail = n;
	while(head < tail) {
		if(a[head] + a[tail] == M) {
			ans ++;
			head++;
			tail--;
		}else if(a[head] + a[tail] < M) {
			head++;
		}else {
			tail--;
		}
	}
	cout << ans;
}

int main() {
	input();
	Solve();
	return 0;
}