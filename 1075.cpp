//#include<stdio.h>
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int k;
//int fullScore[6];
//struct Node {
//	int id;
//	int rank;
//	int total = 0;
//	int score[6];
//	int passnum = 0;
//	bool isshown = false;
//	bool operator <(const Node& b)const {
//		if (total != b.total)return total > b.total;
//		else if (passnum != b.passnum) return passnum > b.passnum;
//		else return id < b.id;
//	}
//}user[100001];
//
//int main() {
//	int n, m;
//	scanf("%d%d%d",&n,&k,&m);
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 0; j <= k; ++j) {
//			user[i].score[j] = -1;
//		}
//	}
//	for (int i = 1; i <= k; i++) {
//		scanf("%d", &fullScore[i]);
//	}
//	int tmpI, tmpQ, tmpS;
//	while (m != 0) {
//		scanf("%d%d%d", &tmpI, &tmpQ, &tmpS);
//		user[tmpI].id = tmpI;
//		user[tmpI].score[tmpQ] = max(user[tmpI].score[tmpQ], tmpS);
//		if (tmpS != -1) user[tmpI].isshown = true;
//		else if (user[tmpI].score[tmpQ] == -1) user[tmpI].score[tmpQ] = -2;
//		m--;
//	}
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= k; ++j) {
//			if (user[i].score[j] != -1 && user[i].score[j] != -2)
//				user[i].total += user[i].score[j];
//			if (user[i].score[j] == fullScore[j]) user[i].passnum++;
//		}
//	}
//	sort(user+1, user + n+1);
//	int rank = 1,tmpT=-1;
//	for (int i = 1; i <= n; ++i) {
//		user[i].rank = i;
//		if (i != 1 && user[i].total == user[i - 1].total)
//			user[i].rank = user[i - 1].rank;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (user[i].isshown == false)
//			continue;
//		printf("%d %05d %d", user[i].rank, user[i].id, user[i].total);
//		for (int j = 1; j <= k; ++j) {
//			if (user[i].score[j] != -1 && user[i].score[j] != -2) printf(" %d", user[i].score[j]);
//			else if (user[i].score[j] == -1) printf(" -");
//			else printf(" 0");
//		}
//		printf("\n");
//	}
//	return 0;
//}