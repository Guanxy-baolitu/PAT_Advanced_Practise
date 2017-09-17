//#include<stdio.h>
//#include<vector>
//#include<stack>
//#include<algorithm>
//using namespace std;
//
//struct node {
//	vector<int> children;
//	int weight;
//	int sum_weight;
//	int parent;
//}Tree[101];
//
//int s;
//int cnt = 0;
//stack<int> path[101];
//
//bool cmp(int a,int b) {
//	return Tree[a].weight > Tree[b].weight;
//}
//
//void dfs(int x) {
//	if (x != 0) {
//		Tree[x].sum_weight = Tree[Tree[x].parent].sum_weight + Tree[x].weight;
//	}
//	if (Tree[x].children.empty()) {
//		if (Tree[x].sum_weight == s) {
//			int tmpC = x;
//			do {
//				path[cnt].push(Tree[tmpC].weight);
//				tmpC = Tree[tmpC].parent;
//			} while (tmpC != -1);
//			cnt++;
//		}
//	}
//	else {
//		for (auto it = Tree[x].children.begin(); it != Tree[x].children.end(); it++) {
//			dfs(*it);
//		}
//	}
//}
//
//int main() {
//	int n, m;
//	scanf("%d %d %d", &n, &m, &s);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &Tree[i].weight);
//	}
//	int k, tmpK, tmpN;
//	for (int i = 0; i < m; i++) {
//		scanf("%d%d",&tmpN, &k);
//		for (int j = 0; j < k; j++) {
//			scanf("%d", &tmpK);
//			Tree[tmpN].children.push_back(tmpK);
//			Tree[tmpK].parent = tmpN;
//		}
//		sort(Tree[tmpN].children.begin(), Tree[tmpN].children.end(), cmp);
//	}
//	Tree[0].parent = -1;
//	Tree[0].sum_weight = Tree[0].weight;
//	dfs(0);
//	bool isFirst;
//	for (int i = 0; i < cnt; i++) {
//		isFirst = true;
//		while (!path[i].empty()) {
//			if (isFirst) isFirst = false;
//			else printf(" ");
//			printf("%d", path[i].top());
//			path[i].pop();
//		}
//		printf("\n");
//	}
//	return 0;
//}