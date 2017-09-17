//#include<stdio.h>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#define N 1002
//#define ENDTIME 540
//using namespace std;
//
//struct win {
//	int poptime, endtime;
//	queue<int> q;
//}Win[20];
//
//struct cus {
//	int processT;
//	bool sorry;
//	int result;
//}Customer[N];
//
//int main() {
//	int n, m, k, q, loc = 0;
//	scanf("%d%d%d%d", &n, &m, &k, &q);
//	for (int i = 0; i < k; ++i) {
//		scanf("%d", &Customer[i].processT);
//	}
//	for (int lineI = 0; lineI < m; ++lineI) {
//		for (int winI = 0; winI < n; ++winI) {
//			if (loc < k) {
//				Win[winI].q.push(Customer[loc].processT);//the crowd will not judge processing time
//				if (Win[winI].endtime >= ENDTIME) Customer[loc].sorry = true;
//				Win[winI].endtime += Customer[loc].processT;
//				if (lineI == 0) Win[winI].poptime = Win[winI].endtime;
//				Customer[loc].result = Win[winI].endtime;
//				++loc;
//			}
//		}
//	}
//	while (loc < k) {
//		int tmpMin = Win[0].poptime, tmpWin = 0;
//		for (int i = 1; i < n; ++i) {
//			if (Win[i].poptime < tmpMin) {
//				tmpWin = i;
//				tmpMin = Win[i].poptime;
//			}
//		}
//		Win[tmpWin].q.pop();
//		Win[tmpWin].q.push(Customer[loc].processT);
//		Win[tmpWin].poptime += Win[tmpWin].q.front();
//		if (Win[tmpWin].endtime >= ENDTIME) Customer[loc].sorry = true;
//		Win[tmpWin].endtime += Customer[loc].processT;
//		Customer[loc].result = Win[tmpWin].endtime;
//		++loc;
//	}
//	for (int i = 0; i < q; ++i) {
//		int query, min;
//		scanf("%d", &query);
//		min = Customer[query - 1].result+480;
//		if (Customer[query - 1].sorry == true) printf("Sorry\n");
//		else printf("%02d:%02d\n", min / 60, min % 60);
//	}
//
//	return 0;
//}