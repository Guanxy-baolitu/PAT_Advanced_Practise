//#include<stdio.h>
//#include<vector>
//#include<queue>
//using namespace std;
//#define N 101
//struct Node {
//	int value;
//	int level;
//	vector<int> child;
//}Tree[N];
//
//int main() {
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int tmpN, k, tmpChild;
//	for (int i = 0; i < m; ++i) {
//		scanf("%d%d", &tmpN, &k);
//		Tree[tmpN].value = tmpN;
//		for (int j = 0; j < k; ++j) {
//			scanf("%d", &tmpChild);
//			Tree[tmpN].child.push_back(tmpChild);
//		}
//	}
//	Tree[1].level = 1;
//	queue<int> q;
//	q.push(1);
//	int cnt=0;
//	bool nonFirst=false;
//	int lastLevel = 1;
//	while (!q.empty()) {
//		tmpN = q.front();
//		for (auto it = Tree[tmpN].child.begin(); it != Tree[tmpN].child.end(); ++it) {
//			Tree[*it].level = Tree[tmpN].level + 1;
//			q.push(*it);
//		}
//		if (Tree[tmpN].level != lastLevel) {
//			if (!nonFirst) nonFirst = true;
//			else printf(" ");
//			printf("%d", cnt);
//			cnt = 0;
//			lastLevel = Tree[tmpN].level;
//		}
//		if (Tree[tmpN].child.empty()) {
//			++cnt;
//		}
//		q.pop();
//	}
//	if (!nonFirst) nonFirst = true;
//	else printf(" ");
//	printf("%d", cnt);
//	return 0;
//}