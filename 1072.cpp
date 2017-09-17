//#include<stdio.h>
//#include<vector>
//#include<map>
//
//#define N 1012 
//#define Inf 99999999
//
//using namespace std;
//
//struct node {
//	int dis = Inf;
//	bool visit = false;
//	map<int, int> road;
//}Pos[N];
//
//int nm;
//
//void init() {
//	for (int i = 1; i <= nm; ++i) {
//		Pos[i].dis = Inf;
//		Pos[i].visit = false;
//	}
//}
//
//void dijkstra(int& from) {
//	Pos[from].dis = 0;
//	int now, next, minDis;
//	for (int i = 0; i < nm; ++i) {
//		now = -1; minDis = Inf;
//		for (int j = 1; j <= nm; j++) {
//			if (Pos[j].visit == false && Pos[j].dis < minDis) {
//				now = j;
//				minDis = Pos[j].dis;
//			}
//		}
//		if (now == -1) break;
//		Pos[now].visit = true;
//		for (auto it = Pos[now].road.begin(); it != Pos[now].road.end(); ++it) {
//			next = it->first;
//			if (Pos[next].visit == false) {
//				int len = it->second;
//				if (Pos[next].dis > Pos[now].dis + len) {
//					Pos[next].dis = Pos[now].dis + len;
//				}
//			}
//		}
//	}
//}
//
//
//
//int main() {
//	int n, m, k, range;//n为居民区数，m为加油站数，k为路数
//	scanf("%d%d%d%d", &n, &m, &k, &range);
//	nm = n + m;
//	int a, b ,len;
//	char g;
//	while ((k--) != 0) {//初始化邻接链表
//		getchar();
//		if ((g = getchar()) == 'G') {
//			scanf("%d ", &a);
//			a += n;
//		}
//		else {
//			ungetc(g, stdin);
//			scanf("%d ", &a);
//		}
//		if ((g = getchar()) == 'G') {
//			scanf("%d%d", &b, &len);
//			b += n;
//		}
//		else {
//			ungetc(g, stdin);
//			scanf("%d%d", &b, &len);
//		}
//		Pos[a].road[b] = len;
//		Pos[b].road[a] = len;
//	}
//	//对于每个起点
//	int resultSt=Inf, tmpSum, minSum = Inf, tmpMinDis, maxMinDis=0;
//	for (int st = n+1; st <= nm; st++) {
//		init();
//		dijkstra(st);
//		tmpSum = 0;
//		tmpMinDis = Inf;
//		for (int house = 1; house <= n; ++house) {
//			if (Pos[house].dis > range) {
//				tmpMinDis = 0;
//				break;
//			}
//			else if (Pos[house].dis < tmpMinDis) {
//				tmpMinDis = Pos[house].dis;
//			}
//			tmpSum += Pos[house].dis;
//		}
//		if (tmpMinDis == 0) continue;
//		if (tmpMinDis > maxMinDis) {
//			maxMinDis = tmpMinDis;
//			resultSt = st;
//			minSum = tmpSum;
//		}
//		else if(tmpMinDis == maxMinDis&&tmpSum < minSum){
//			minSum = tmpSum;
//			resultSt = st;
//			maxMinDis = tmpMinDis;
//		}
//	}
//	if (resultSt == Inf) {
//		printf("No Solution\n");
//	}
//	else {
//		printf("G%d\n%.1f %.1f\n", resultSt - n, (double)maxMinDis, minSum*1.0/n);
//	}
//	return 0;
//}