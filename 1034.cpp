//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<map>
//#include<vector>
//#define N 2010
//using namespace std;
//
//struct Node {
//	int weight;
//	string name;
//	bool visit;
//}Tree[N];
//
//int loc = 1;
//map<string, int>m;//string name to index
//int stringToInt(string s) {
//	if (m[s] == 0) {
//		m[s] = loc;
//		Tree[loc].name = s;
//		return loc++;
//	}
//	else {
//		return m[s];
//	}
//}
//
//int G[N][N];
//map<string, int> ans;
//void dfs(int u, int &head, int &numMember, int &totalweight) {
//	Tree[u].visit = true;
//	++numMember;
//	if (Tree[u].weight > Tree[head].weight) {
//		head = u;
//	}
//	for (int v = 1; v < loc; ++v) {
//		if (G[u][v] > 0) {
//			totalweight += G[u][v];
//			G[u][v] = G[v][u] = 0;
//			if (Tree[v].visit == false)
//				dfs(v, head, numMember, totalweight);
//		}
//	}
//}
//
//int n, k;
//void dfsTrave() {
//	for (int i = 1; i < loc; ++i) {
//		if ( Tree[i].visit == false) {
//			int head = i, numMember = 0, totalweight = 0;
//			dfs(i, head, numMember, totalweight);
//			if (numMember > 2 && totalweight > k) {
//				ans[Tree[head].name] = numMember;
//			}
//		}
//	}
//}
//
//int main() {
//	scanf("%d %d", &n, &k);
//	string from, to;
//	int time;
//	//第一步，输入与连通 
//	for (int i = 0; i < n; i++) {
//		cin >> from >> to>>time;
//		int id1 = stringToInt(from);
//		int id2 = stringToInt(to);
//		Tree[id1].weight += time;
//		Tree[id2].weight += time;
//		G[id1][id2] += time;
//		G[id2][id1] += time;
//	}
//	//第二步，统计结果
//	dfsTrave();
//	printf("%d\n", ans.size());
//		for (auto it = ans.begin(); it != ans.end(); it++)
//			cout << (*it).first<<" "<< (*it).second<<endl;
//	return 0;
//}