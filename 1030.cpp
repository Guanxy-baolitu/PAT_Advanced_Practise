//#include<stdio.h>
//#include<map>
//#include<stack>
//#include<limits.h>
//
//using namespace std;
//
//struct node {
//	bool visited;
//	map<int,int> neighbor_dis;
//	map<int, int> neighbor_cos;
//	int parent;
//	int sum_Dis= INT32_MAX;
//	int sum_Cos;
//
//}Cities[501];
//
//int main() {
//	int n, m, s, d;
//	scanf("%d %d %d %d", &n, &m, &s, &d);
//	int a, b, tmpDis, tmpCos;
//	for (int i = 0; i < m; i++) {
//		scanf("%d%d%d%d", &a, &b, &tmpDis, &tmpCos);
//		Cities[a].neighbor_dis[b] = tmpDis;
//		Cities[b].neighbor_dis[a] = tmpDis;
//		Cities[a].neighbor_cos[b] = tmpCos;
//		Cities[b].neighbor_cos[a] = tmpCos;
//	}
//	Cities[s].sum_Cos = Cities[s].sum_Dis = 0;
//	int thisCity = s, candCity, nextCity;
//	int shortest,minicost;
//	while (thisCity != d) {
//		Cities[thisCity].visited = true;
//		shortest = INT32_MAX;
//		minicost = INT32_MAX;
//		for (int candCity = 0; candCity < n; candCity++) {
//			if (Cities[candCity].visited == false) {
//				if (Cities[thisCity].neighbor_dis.find(candCity) != Cities[thisCity].neighbor_dis.end()) {
//					tmpDis = Cities[thisCity].neighbor_dis[candCity];
//					if (Cities[candCity].sum_Dis > Cities[thisCity].sum_Dis + tmpDis) {
//						Cities[candCity].sum_Dis = Cities[thisCity].sum_Dis + tmpDis;
//						Cities[candCity].parent = thisCity;
//						Cities[candCity].sum_Cos = Cities[thisCity].sum_Cos + Cities[thisCity].neighbor_cos[candCity];
//					}
//					else if (Cities[candCity].sum_Dis == Cities[thisCity].sum_Dis + tmpDis) {
//						if (Cities[candCity].sum_Cos > Cities[thisCity].sum_Cos + Cities[thisCity].neighbor_cos[candCity]) {
//							Cities[candCity].parent = thisCity;
//							Cities[candCity].sum_Cos = Cities[thisCity].sum_Cos + Cities[thisCity].neighbor_cos[candCity];
//						}
//					}
//				}
//				if (Cities[candCity].sum_Dis < shortest) {
//					shortest = Cities[candCity].sum_Dis;
//					nextCity = candCity;
//					minicost = Cities[candCity].sum_Cos;
//				}
//				else if (Cities[candCity].sum_Dis == shortest) {
//					if (Cities[candCity].sum_Cos < minicost) {
//						minicost = Cities[candCity].sum_Cos;
//						nextCity = candCity;
//					}
//				}
//			}
//		}
//		thisCity = nextCity;
//	}
//	stack<int> paths;
//	while (thisCity != s) {
//		paths.push(thisCity);
//		thisCity = Cities[thisCity].parent;
//	}
//	printf("%d", s);
//	while (!paths.empty()) {
//		printf(" %d", paths.top());
//		paths.pop();
//	}
//	printf(" %d %d\n", Cities[d].sum_Dis,Cities[d].sum_Cos);
//	return  0;
//}