//#include<stdio.h>
//#include<algorithm>
//#include<limits.h>
//using namespace std;
//
//#define N 10001
//#define K 101
//#define CLOSE_TIME 61200-28800
//
//struct Cus {
//	int arriveTime;
//	int processTime;
//	bool operator<(const Cus& b)const {
//		return arriveTime < b.arriveTime;
//	}
//}Customers[N];
//
//int Banks[K] ;
//
//int main() {
//	int n, k;
//	scanf("%d%d", &n, &k);
//	int tmpH, tmpM, tmpS, tmpP;
//	int tmpTime;
//	int loc = 0;
//	for (int i = 0; i < n; ++i) {
//		scanf("%d:%d:%d %d", &tmpH, &tmpM, &tmpS, &tmpP);
//		tmpTime = (tmpH * 3600) + (tmpM * 60) + tmpS-28800;
//		if (tmpTime < CLOSE_TIME) {
//			Customers[loc].arriveTime = tmpTime;
//			Customers[loc++].processTime = tmpP > 60 ? 3600 : tmpP * 60;
//		}
//	}
//	if (loc == 0|| k >= loc) {
//		printf("0.0\n");
//		return 0;
//	}
//	double sumTime = 0;
//	sort(Customers, Customers + loc);
//	for (int i = 0; i < loc; ++i) {
//		int candiBank=-1;
//		int earliestTime = INT32_MAX;
//		for (int j = 0; j < k; ++j) {
//			if (Banks[j] < earliestTime) {
//				earliestTime = Banks[j];
//				candiBank = j;
//			}
//		}
//		if (Customers[i].arriveTime >= Banks[candiBank]) {
//			Banks[candiBank] = Customers[i].arriveTime + Customers[i].processTime;
//		}
//		else {
//			sumTime += (Banks[candiBank] - Customers[i].arriveTime);
//			Banks[candiBank] += Customers[i].processTime;
//		}
//	}
//	printf("%.1f\n", sumTime / 60.0/loc);
//	return 0;
//}