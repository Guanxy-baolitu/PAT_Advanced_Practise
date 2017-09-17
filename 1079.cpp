//#include<stdio.h>
//#include<vector>
//using namespace std;
//#define MAX_N 100001
//
//struct node {
//	int parent;
//	vector<int> sellTos;
//	double expectedPrice;
//	double amount;
//}Nodes[MAX_N];
//
//bool visited[MAX_N] = { false };
//double sum = 0;
//double r;
//
//void dfs(int x) {
//	visited[MAX_N] = true;
//	if (x != 0) {
//		Nodes[x].expectedPrice = Nodes[Nodes[x].parent].expectedPrice*r;
//	}
//	if (Nodes[x].sellTos.size() == 0) {
//		sum += Nodes[x].expectedPrice*Nodes[x].amount;
//		return;
//	}
//	else {
//		for (auto it = Nodes[x].sellTos.begin(); it != Nodes[x].sellTos.end(); it++) {
//			if(!visited[*it])
//				dfs(*it);
//		}
//	}
//}
//
//int main() {
//	int n;
//	double p;
//	scanf("%d %lf %lf", &n, &p, &r);
//	Nodes[0].expectedPrice = p;
//	r = r / 100 + 1;
//	int k, tmpK;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &k);
//		if (k == 0) {
//			scanf("%lf",&Nodes[i].amount);
//		}
//		for (int j = 0; j < k; j++) {
//			scanf("%d", &tmpK);
//			Nodes[i].sellTos.push_back(tmpK);
//			Nodes[tmpK].parent = i;
//		}
//	}
//	dfs(0);
//	printf("%.1f", sum);
//	return 0;
//}