#include<iostream>
using namespace std;

int main() {
	const int maxn = 30;
	int num=0,t,yn=0,answer=0, a[maxn] = { 0 },b[maxn]={0};
	cin >> num;
	for (int i = 0; i < num; i++) {		//传入高度
		cin >> a[i];
		b[i] = 1;
	}

	for (int i = 0; i < num; i++) {
		t = 0;
		for (int j = 0; j < i; j++) {
			if (a[j] >= a[i]&&b[j]>=t) {
				t = b[j];				//取最大值
				yn = 1;
			}
		}
		if (yn) { b[i] = t+1; yn = 0; }
	}

	for (int i = 0; i < num; i++) {
		if (answer < b[i]) {
			answer = b[i];
		}
	}

	cout << answer;
	return 0;
}