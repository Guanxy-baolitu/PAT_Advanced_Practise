//#include<stdio.h>
//#include<vector>
//#include<limits.h>
//#define N 501
//using namespace std;
//
//int dis[N], weight[N];//the num of current bikes at each city
//int edge[N][N];
//bool visit[N];
//
//vector<int> from[N];
//vector<int> path, tmpPath;
//
//int minNeed = 99999999;
//int minBack = 99999999;
//
//void dfs(int v){
//	if (0 == v) {
//		tmpPath.push_back(v);
//		int need = 0, back = 0;
//		for (int i = tmpPath.size() - 1; i >= 0; i--) {
//			int id = tmpPath[i];
//			if (weight[id] > 0) {
//				back += weight[id];
//			}
//			else {
//				if (back > (0 - weight[id])) {
//					back += weight[id];
//				}
//				else {
//					need += ((0 - weight[id]) - back);
//					back = 0;
//				}
//			}
//		}
//		if (need < minNeed) {
//			minNeed = need;
//			minBack = back;
//			path = tmpPath;
//		}
//		else if (need == minNeed&&back < minBack) {
//			minBack = back;
//			path = tmpPath;
//		}
//		tmpPath.pop_back();
//		return;
//	}
//	tmpPath.push_back(v);
//	for (int i = 0; i < from[v].size(); ++i) {
//		dfs(from[v][i]);
//	}
//	tmpPath.pop_back();
//
//}
//
//int main() {
//	fill(edge[0], edge[0] + N*N, 99999999);
//	fill(dis, dis + N, 99999999);
//	int comp, n, sp, m;
//	scanf("%d%d%d%d", &comp, &n, &sp, &m);
//	comp /= 2;
//	for (int i = 1; i <= n; ++i) {
//		scanf("%d", &weight[i]);
//		weight[i] -= comp;
//	}
//	int a, b;
//	for (int i =0; i < m; ++i) {
//		scanf("%d%d", &a, &b);
//		scanf("%d", &edge[a][b]);
//		edge[b][a] = edge[a][b];
//	}
//	dis[0] = 0;
//	for (int i = 0; i <= n; ++i) {
//		int last = -1, min = 99999999;
//		for (int j = 0; j <= n; j++) {
//			if (visit[j] == false && dis[j] < min) {
//				last = j;
//				min = dis[j];
//			}
//		}
//		if (last == -1) break;
//		visit[last] = true;
//		for (int candi = 0; candi <= n; ++candi) {
//			if (!visit[candi] && edge[last][candi] != 99999999) {
//				if (dis[candi] > dis[last] + edge[last][candi]) {
//					dis[candi] = dis[last] + edge[last][candi];
//					from[candi].clear();
//					from[candi].push_back(last);
//				}
//				else if (dis[candi] == dis[last] + edge[last][candi]) {
//					from[candi].push_back(last);
//				}
//			}
//		}
//	}
//	dfs(sp);
//	printf("%d 0", minNeed);
//	for (int i = path.size() - 2; i >= 0; i--) {
//		printf("->%d", path[i]);
//	}
//	printf(" %d", minBack);
//	return 0;
//}
