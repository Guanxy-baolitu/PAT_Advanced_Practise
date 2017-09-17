//#include<stdio.h>
//#include<vector>
//
//using namespace std;
//
//const int maxNum = 1002;
//
//vector<int> edge[maxNum];
//
//bool mark[maxNum];
//
//int n;
//
//void dfs(int node) {
//	mark[node] = true;
//	for (auto it = edge[node].begin(); it != edge[node].end();it++) {
//		if (mark[*it] == false)
//			dfs(*it);
//	}
//}
//
//int main() {
//
//	int m, k;
//	scanf("%d%d%d", &n, &m, &k);
//	int thisTmp, thatTmp;
//	for (int i = 0; i < m; i++){
//		scanf("%d%d", &thisTmp, &thatTmp);
//		edge[thisTmp].push_back(thatTmp);
//		edge[thatTmp].push_back(thisTmp);
//	}
//	int checkTmp;
//	int count;
//	for (int i = 0; i < k; i++) {
//		fill(mark, mark + maxNum, false);
//		scanf("%d", &checkTmp);
//		count = -1;
//		mark[checkTmp] = true;
//		for (int j = 1; j <= n; j++) {
//			if (mark[j] == false) {
//				dfs(j);
//				count++;
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}
