//#include<stdio.h>
//#include<algorithm>
//#define N 1001
//using namespace std;
//
//struct cakes {
//	double weight;
//	double value;
//	double rate;
//	bool operator <(const cakes &A)const {
//		return rate > A.rate;
//	}
//}buf[N];
//
//int main() {
//	int n;
//	double D;
//	scanf("%d%lf", &n,&D); 
//	for (int i = 0; i < n; i++) {
//		scanf("%lf", &buf[i].weight);
//	}
//	for (int i = 0; i < n; i++) {
//		scanf("%lf", &buf[i].value);
//		buf[i].rate = buf[i].value / buf[i].weight;
//	}
//	sort(buf, buf + n);
//	int idx = 0;
//	double ans = 0;
//	while (idx < n&& D>0) {
//		if (D > buf[idx].weight) {
//			ans += buf[idx].value;
//			D -= buf[idx].weight;
//		}
//		else {
//			ans += buf[idx].value* D / buf[idx].weight;
//			D = 0;
//		}
//		idx++;
//	}
//	printf("%.2f", ans);
//	return 0;
//}