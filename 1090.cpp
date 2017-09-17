//#include<stdio.h>
//#include<vector>
//using namespace std;
//
//#define MAX_N 100001
//
//using namespace std;
//
//double r, highest = 0;
//int cnt = 0;
//
//struct node {
//	vector<int> kids;
//	double nowPrice;
//}Tree[MAX_N];
//
//void dfs(int x) {
//	if (Tree[x].kids.empty()) {
//		if (Tree[x].nowPrice > highest) {
//			cnt = 1;
//			highest = Tree[x].nowPrice;
//		}
//		else if (Tree[x].nowPrice == highest) {
//			++cnt;
//		}
//	}
//	else {
//		for (auto it = Tree[x].kids.begin(); it != Tree[x].kids.end(); it++) {
//			Tree[*it].nowPrice = Tree[x].nowPrice*r;
//			dfs(*it);
//		}
//	}
//}
//
//
//int main() {
//	int n;
//	double p;
//	scanf("%d%lf%lf", &n, &p, &r);
//	r = r / 100 + 1;
//	int tmpN, root;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &tmpN);
//		if (tmpN != -1) {
//			Tree[tmpN].kids.push_back(i);
//		}
//		else {
//			root = i;
//		}
//	}
//	Tree[root].nowPrice = p;
//	dfs(root);
//	printf("%.2f %d\n", highest, cnt);
//	return 0;
//}