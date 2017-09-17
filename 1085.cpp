//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//long long p;
//long long buf[100002];
//
//int main() {
//	int n;
//	int m, M;
//	scanf("%d %lld", &n, &p);
//	for (int i = 0; i < n; i++) {
//		scanf("%lld", &buf[i]);
//	}
//	sort(buf, buf + n);
//	int result = 1, tmp = 1;
//	for (int i = 0; i <= n - 2; ++i) {
//		for (int j = i + result; j <= n - 1; ++j) {//no longer consider sequence that is shorter
//			if (buf[j] <= buf[i] * p) {
//				tmp = j - i + 1;
//				if (tmp > result) {
//					result = tmp;
//				}
//			}
//			else break;
//		}
//	}
//	printf("%d", result);
//	return 0;
//}