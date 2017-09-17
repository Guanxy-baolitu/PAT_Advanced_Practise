//#include<stdio.h>
//#include<vector>
//#include<set>
//#define N 10002
//using namespace std;
//
//set<int> s;
//vector<int> tmp;//keep the nodes with the furthest distance
//int maxheight = 0;
//
//struct node {
//	int value;
//	vector<int> neighbors;
//	bool visit = false;
//}Nodes[N];
//
//void dfs(int v,int h) {
//	if (h > maxheight) {
//		tmp.clear();
//		tmp.push_back(v);
//		maxheight = h;
//	}
//	else if (h == maxheight) {
//		tmp.push_back(v);
//	}
//	Nodes[v].visit = true;
//	for (int i = 0; i < Nodes[v].neighbors.size(); ++i) {
//		if (Nodes[Nodes[v].neighbors[i]].visit == false) {
//			dfs(Nodes[v].neighbors[i], h + 1);
//		}
//	}
//
//}
//
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	int a, b, cnt = 0;
//	for (int i = 0; i < n-1; ++i) {
//		scanf("%d%d", &a, &b);
//		Nodes[a].neighbors.push_back(b);
//		Nodes[b].neighbors.push_back(a);
//	}
//	int s1 = 0;
//	for (int i = 1; i <= n; ++i) {
//		if (Nodes[i].visit == false) {
//			dfs(i, 1);
//			if (i == 1) {
//				for (int j = 0; j < tmp.size(); ++j) {
//					s.insert(tmp[j]);
//					if (j == 0) s1 = tmp[j];
//				}
//			}
//			cnt++;
//		}
//	}
//	if (cnt >= 2) {
//		printf("Error: %d components\n", cnt);
//	}
//	else {
//		tmp.clear();
//		maxheight = 0;
//		for (int i = 0; i < N; ++i) {
//			Nodes[i].visit = false;
//		}
//		dfs(s1, 1);
//		for (int i = 0; i < tmp.size(); ++i) {
//			s.insert(tmp[i]);
//		}
//		for (auto it = s.begin(); it != s.end(); ++it) {
//			printf("%d\n", *it);
//		}
//	}
//	return 0;
//}