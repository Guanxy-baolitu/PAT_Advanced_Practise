//#include<stdio.h>
//#include<vector>
//#define N 100001
//#define Inf 99999999
//using namespace std;
//
//vector<int> Sellers[N];
//
//int minDepth = Inf, minCnt = 0;
//int tmpDepth = 0;
//
//void dfs(int v) {
//	++tmpDepth;
//	if (Sellers[v].empty()) {
//		if (tmpDepth < minDepth) {
//			minDepth = tmpDepth;
//			minCnt = 1;
//		}
//		else if (tmpDepth == minDepth) {
//			++minCnt;
//		}
//		--tmpDepth;
//	}
//	else {
//		for (auto it = Sellers[v].begin(); it != Sellers[v].end(); ++it) {
//			dfs(*it);
//		}
//		--tmpDepth;
//	}
//}
//
//int main() {
//	int n;
//	double origin, rate;
//	scanf("%d %lf %lf", &n, &origin, &rate);
//	rate = 1 + rate*1.0 / 100;
//	int num,son;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &num);
//		for (int j = 0; j < num; j++) {
//			scanf("%d", &son);
//			Sellers[i].push_back(son);
//		}
//	}
//	dfs(0);
//	for (int i = 0; i < minDepth-1; ++i) {
//		origin *= rate;
//	}
//	printf("%.4f %d", origin, minCnt);
//	return 0;
//}