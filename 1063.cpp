//#include<stdio.h>
//#include<set>
//using namespace std;
//
//int main() {
//	set<int> S[51];
//	int N;
//	scanf("%d",&N);
//	int tmp;
//	for (int i = 0; i < N; i++) {
//		int M;
//		scanf("%d", &M);
//		for (int j = 0; j < M; j++) {
//			scanf("%d", &tmp);
//			S[i].insert(tmp);
//		}
//	}
//	int K;
//	scanf("%d", &K);
//	int inter=0, total=0;
//	int a, b;
//	bool isFirst = true;
//	while (K != 0) {
//		inter = 0, total = 0;
//		scanf("%d %d", &a, &b);
//		a--; b--;
//		for (set<int>::iterator it = S[a].begin(); it != S[a].end(); it++) {
//			total ++;
//		}
//		for (set<int>::iterator it = S[b].begin(); it != S[b].end(); it++) {
//			if (S[a].find(*it) != S[a].end())
//				inter ++;
//			else
//				total ++;
//		}
//		if (isFirst) isFirst = false;
//		else printf("\n");
//		printf("%.1f%%", inter*100.0/ total);
//		K--;
//	}
//	return 0;
//}