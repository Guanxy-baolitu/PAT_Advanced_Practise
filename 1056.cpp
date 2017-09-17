//#include<stdio.h>
//#include<queue>
//#include<algorithm>
//#define N 1001
//using namespace std;
//
//struct node{
//	int pos;
//	int rank=0;
//	int weight;
//	int index;
//	bool operator<(const node& b)const {
//		return weight < b.weight;
//	}
//}mice[N];
//
//int oriWeight[N];
//
//bool cmpAsOri(node a, node b) {
//	return a.index < b.index;
//}
//int main() {
//	int n, g;
//	scanf("%d%d", &n, &g);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &oriWeight[i]);
//		mice[i].pos = i;
//	}
//	int num;
//	queue<node> q;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &num);
//		mice[i].weight = oriWeight[num];
//		mice[i].index = num;
//		q.push(mice[i]);
//	}
//	while (!q.empty()) {
//		int size = q.size();
//		if (size == 1) {
//			node tmp = q.front();
//			mice[tmp.pos].rank = 1;
//			break;
//		}
//		int group = size / g;
//		if (size%g != 0) {
//			group += 1;
//		}
//		node maxnode;
//		int maxn = -1, cnt = 0;
//		for (int i = 0; i < size; ++i) {
//			node tmp = q.front();
//			mice[tmp.pos].rank = group + 1;
//			q.pop();
//			cnt++;
//			if (tmp.weight > maxn) {
//				maxn = tmp.weight;
//				maxnode = tmp;
//			}
//			if (cnt == g || i == size - 1) {
//				cnt = 0;
//				maxn = -1;
//				q.push(maxnode);
//			}
//		}
//	}
//	sort(mice, mice + n, cmpAsOri);
//	bool nonFirst = false;
//	for (int i = 0; i < n; i++) {
//		if (!nonFirst) nonFirst = true;
//		else printf(" ");
//		printf("%d", mice[i].rank);
//	}
//	return 0;
//}