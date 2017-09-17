//#include<stdio.h>
//#include<vector>
//#include<set>
//#define MAX_N 501
//using namespace std;
//
//vector<int> vertices[MAX_N];
//
//set<int>inOne;
//
//void dfs(int x) {
//	if (inOne.find(x) != inOne.end()) {
//		return;
//	}
//	else {
//		inOne.insert(x);
//		for (auto it = vertices[x].begin(); it!=vertices[x].end(); ++it) {
//			dfs(*it);
//		}
//	}
//
//}
//
//int main() {
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int a, b;
//	for (int i = 0; i < m; ++i) {
//		scanf("%d%d", &a, &b);
//		vertices[a].push_back(b);
//		vertices[b].push_back(a);
//	}
//	bool nonFirst = false;
//	dfs(b);
//	if (inOne.size() != n) {
//		for (int i = 1; i <= n; ++i) {
//			if (nonFirst) printf(" ");
//			else nonFirst = true;
//			printf("%d", vertices[i].size());
//		}
//		printf("\nNon-Eulerian\n");
//		return 0;
//	}
//	int cnt = 0;
//	for (int i = 1; i <= n; ++i) {
//		if (nonFirst) printf(" ");
//		else nonFirst = true;
//		printf("%d", vertices[i].size());
//		if ((vertices[i].size()) % 2 == 1) {
//			++cnt;
//		}
//	}
//	if (cnt == 2) {
//		printf("\nSemi-Eulerian\n");
//	}
//	else if( 0 == cnt){
//
//			printf("\nEulerian\n");
//	}
//	else 
//		printf("\nNon-Eulerian\n");
//	return 0;
//}