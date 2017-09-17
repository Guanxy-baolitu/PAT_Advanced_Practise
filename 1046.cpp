//#include<stdio.h>
//
//#define N 100001
//
//int dis[N] = { 0 };
//
//int main() {
//	int n, m;
//	scanf("%d", &n);
//	int sum = 0;
//	int tmpN;
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &tmpN);
//		sum += tmpN;
//		dis[i] = sum;
//	}
//	scanf("%d", &m);
//	int from, to;
//	int len, rlen;
//	for (int i = 0; i < m; i++) {
//		scanf("%d %d", &from, &to);
//		len = 0, rlen = 0;
//		if (from > to) {
//			int tmp = from;
//			from = to;
//			to = tmp;
//		}
//		len = dis[to - 1] - dis[from - 1];
//		rlen = sum-len;
//		printf("%d\n", len < rlen ? len : rlen);
//	}
//	
//	return 0;
//}