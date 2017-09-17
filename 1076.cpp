//#include<stdio.h>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//#define MAX_N 1001
//
//struct node {
//	int layer;
//	vector<int> followers;
//}Nodes[MAX_N];
//
//queue<int> q;
//bool inq[1010] = { false };
//
//int main() {
//	int n, L;
//	scanf("%d %d", &n, &L);
//	int m,tmpM;
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &m);
//		for (int j = 0; j < m; j++) {
//			scanf("%d", &tmpM);
//			Nodes[tmpM].followers.push_back(i);
//		}
//	}
//	int k, tmpK, tmpL, count;
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++) {
//		scanf("%d", &tmpK);
//		for (int t = 1; t <= n; t++) {
//			inq[t] = false;
//		}
//		q.push(tmpK);
//		inq[tmpK] = true;
//		count = 0;
//		Nodes[q.front()].layer = 0;
//		while (!q.empty()) {
//			int top = q.front();
//			q.pop();
//			for (auto it = Nodes[top].followers.begin(); it != Nodes[top].followers.end(); it++) {
//				if (inq[*it] == false&&Nodes[top].layer<L) {
//					Nodes[(*it)].layer = Nodes[top].layer + 1;
//					q.push(*it);
//					inq[*it] = true;
//					count++;
//				}
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}