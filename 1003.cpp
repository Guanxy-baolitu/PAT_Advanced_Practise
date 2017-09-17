//#include<stdio.h>
//#include<vector>
//#include<map>
//
//using namespace std;
//
//#define N 501
//#define Inf 99999999
//
//struct C{
//	int rescue;
//	int sumRes = 0;
//	int sumDis = Inf;
//	bool visited;
//	int num = 0;
//	map<int, int> neighbors;
//}Cities[N];
//
//int n;
//
//void dijsta(int from, int to) {
//	Cities[from].sumDis = 0;
//	Cities[from].sumRes = Cities[from].rescue;
//	Cities[from].num = 1;
//	int candiC, len;
//	for (int j = 0; j < n; ++j) {
//		int minDis = Inf, tmpC = -1;
//		for (int i = 0; i<n; ++i) {
//			if (Cities[i].visited == false && Cities[i].sumDis < minDis) {
//				minDis = Cities[i].sumDis;
//				tmpC = i;
//			}
//		}
//		if (tmpC == -1) break;
//		Cities[tmpC].visited = true;
//		for (auto it = Cities[tmpC].neighbors.begin(); it != Cities[tmpC].neighbors.end(); ++it) {
//			candiC = (*it).first;
//			if (Cities[candiC].visited == false) {
//				len = (*it).second;
//				if (Cities[candiC].sumDis > len + Cities[tmpC].sumDis) {
//					Cities[candiC].sumDis = len + Cities[tmpC].sumDis;
//					Cities[candiC].sumRes = Cities[tmpC].sumRes + Cities[candiC].rescue;
//					Cities[candiC].num = Cities[tmpC].num;
//				}
//				else if (Cities[candiC].sumDis == len + Cities[tmpC].sumDis) {
//					if (Cities[candiC].sumRes < Cities[tmpC].sumRes + Cities[candiC].rescue) {
//						Cities[candiC].sumRes = Cities[tmpC].sumRes + Cities[candiC].rescue;
//					}
//					Cities[candiC].num += Cities[tmpC].num;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	int m, from, to;
//	scanf("%d%d%d%d", &n, &m, &from, &to);
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &Cities[i].rescue);
//	}
//	int a, b, L;
//	for (int i = 0; i < m; ++i) {
//		scanf("%d%d%d", &a, &b, &L);
//		Cities[a].neighbors[b] = L;
//		Cities[b].neighbors[a] = L;
//	}
//	dijsta(from, to);
//	printf("%d %d\n", Cities[to].num, Cities[to].sumRes);
//	return 0;
//}