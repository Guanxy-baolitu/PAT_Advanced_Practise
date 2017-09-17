//#include<stdio.h>
//#include<vector>
//
//using namespace std;
//
//bool mark[10000];//标记了的是合数，索引值表排名
//int ranklist[10000];//索引值表ID，数值表排名
//bool searched[10000]; //索引值表ID
//
//void init() {//这里的i是排名
//	for (int i = 0; i < 10000; i++) {
//		mark[i] = false;
//		ranklist[i] = -1;
//		searched[i] = false;
//	}
//	for (int i = 2; i < 10000; i++) {
//		if (mark[i] == true) continue;
//		for (int j = i*i; j < 10000; j += i)
//			mark[j] = true;
//	}
//}
//bool check(int x)
//{
//	for (int i = 2; i*i <= x; i++) if (x%i == 0) return false;
//	return true;
//}
//int main() {
//	init();
//	int n,m;
//	scanf("%d",&n);
//	int tmp;
//	vector<int> searchlist;
//	for (int i = 1; i <= n;i++) {//tmp表ID
//		scanf("%d",&tmp);
//		ranklist[tmp] = i;
//	}
//	scanf("%d", &m);
//	while (m != 0) {
//		scanf("%d", &tmp);
//		searchlist.push_back(tmp);
//		m--;
//	}
//	bool isFirst = true;
//	for (vector<int>::iterator it = searchlist.begin(); it != searchlist.end();it++) {
//		if (isFirst)
//			isFirst = false;
//		else
//			printf("\n");
//		tmp = (*it);
//		printf("%04d: ", tmp);
//		if (ranklist[tmp] == -1) { printf("Are you kidding?"); continue; }
//		if (searched[tmp] == true) { printf("Checked"); continue; }
//		if (ranklist[tmp] == 1)
//			printf("Mystery Award");
//		else if (check(ranklist[tmp]))
//			printf("Minion");
//		else
//			printf("Chocolate");
//		searched[tmp] = true;
//	}
//	return 0;
//}