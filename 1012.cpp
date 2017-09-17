//#include<stdio.h>
//#include<algorithm>
//#include<map>
//using namespace std;
//
//struct Node {
//	int ID;
//	int s[4];
//	int r[4];
//	int best;
//}stu[2001];
//
//int ma[1000000];
//
//int flag = -1;
//bool cmp(Node a, Node b) {
//	return a.s[flag] > b.s[flag];
//}
//
//int main() {
//	int n, m;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		scanf("%d%d%d%d", &stu[i].ID, &stu[i].s[1],&stu[i].s[2],&stu[i].s[3]);
//		stu[i].s[0] = stu[i].s[1] + stu[i].s[2] + stu[i].s[3];
//	}
//	for (flag=0; flag != 4; flag++) {
//		sort(stu, stu + n, cmp);
//		stu[0].r[flag] = 1;
//		for (int i = 1; i < n; i++) {
//			stu[i].r[flag] = i+1;
//			if (stu[i].s[flag] == stu[i - 1].s[flag])
//				stu[i].r[flag] = stu[i - 1].r[flag];
//		}
//	}
//	for (int i = 0; i < n; i++){
//		ma[stu[i].ID] = i+1;
//		stu[i].best = 0;
//		int ra = stu[i].r[0];
//		for (int j = 1; j < 4; j++) {
//			if (stu[i].r[j] < ra) {
//				stu[i].best = j;
//				ra = stu[i].r[j];
//			}
//		}
//	}
//	int tmpId;
//	char name[4] = { 'A','C','M','E' };
//	while (m != 0) {
//		scanf("%d", &tmpId);
//		int idx = ma[tmpId];
//		if (idx) {
//			int result = stu[idx-1].best;
//			printf("%d %c\n", stu[idx-1].r[result], name[result]);
//		}
//		else
//			printf("N/A\n");
//		m--;
//	}
//	return 0;
//}