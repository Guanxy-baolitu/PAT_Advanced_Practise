//#include<stdio.h>
//#include<vector>
//#define N 10001
//#define Inf 99999999
//using namespace std;
//
//struct node {
//	int from = -1;
//	bool visit = false;
//	vector<int> neighb;
//}station[N];
//
//int line[N][N];
//vector<int> path, tmpPath;
//
//int transferCnt(vector<int> a) {
//	int cnt = -1, preLine = 0;
//	for (int i = 1; i < a.size(); ++i) {
//		if (line[a[i - 1]][a[i]] != preLine) cnt++;
//		preLine = line[a[i - 1]][a[i]];
//	}
//	return cnt;
//}
//
//void dfs(int node, int end, int cnt, int &minCnt, int& minTransfer) {
//	tmpPath.push_back(node);
//	if (node == end ) {
//		if (cnt < minCnt || (cnt == minCnt&&transferCnt(tmpPath) < minTransfer)) {
//			minCnt = cnt;
//			minTransfer = transferCnt(tmpPath);
//			path = tmpPath;
//		}
//		tmpPath.pop_back();
//		return;
//	}
//	for (auto it = station[node].neighb.begin(); it != station[node].neighb.end(); ++it) {
//		if (station[*it].visit == false) {
//			station[*it].visit = true;
//			dfs(*it, end, cnt + 1, minCnt, minTransfer);
//			station[*it].visit = false;
//		}
//	}
//	tmpPath.pop_back();
//}
//
//int main() {
//	int n, m, k;
//	scanf("%d", &n);
//	int a, b;
//	for (int i = 1; i <= n; ++i) {
//		scanf("%d%d", &m, &a); 
//		for (int j = 1; j < m; ++j) {
//			scanf("%d", &b);
//			station[a].neighb.push_back(b);
//			station[b].neighb.push_back(a);
//			line[a][b] = line[b][a] = i;
//			a = b;
//		}
//	}
//	scanf("%d", &k);
//	int from, to;
//	while (k > 0) {
//		scanf("%d%d", &from, &to);
//		int minCnt = Inf, minTransfer = Inf;
//		tmpPath.clear();
//		station[from].visit = true;
//		dfs(from, to, 0, minCnt, minTransfer);
//		station[from].visit = false;
//		printf("%d\n", minCnt);
//		int preLine = 0, preTransfer = from;
//		for (int j = 1; j < path.size(); ++j) {
//			if (line[path[j - 1]][path[j]] != preLine) {
//				if (preLine != 0) {
//					printf("Take Line#%d from %04d to %04d.\n", preLine, preTransfer, path[j - 1]);
//				}
//					preLine = line[path[j - 1]][path[j]];
//					preTransfer = path[j - 1];
//			}
//		}
//		printf("Take Line#%d from %04d to %04d.\n", preLine, preTransfer, to);
//		--k;
//	}
//	return 0;
//}