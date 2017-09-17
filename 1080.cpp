//#include<stdio.h>
//#include <vector>
//#include <set>
//#include<algorithm>
//#define MAX_N 40002
//using namespace std;
//
//struct Stu {
//	int index;
//	int Ge;
//	int Gi;
//	int G;
//	int rank;
//	vector<int> preferred;
//	bool operator<(const Stu& b)const {
//		if (G != b.G) {
//			return G > b.G;
//		}
//		else {
//			return Ge > b.Ge;
//		}
//	}
//}Students[MAX_N];
//
//struct Sch {
//	int quota;
//	set<int> admitted;
//	int lowestRank;
//}Schools[101];
//
//int main() {
//	int n, m, k;
//	scanf("%d %d %d", &n, &m, &k);
//	for (int i = 0; i < m; i++) {
//		scanf("%d", &Schools[i].quota);
//	}
//	int pref;
//	for (int i = 0; i < n; i++) {
//		scanf("%d %d", &Students[i].Ge, &Students[i].Gi);
//		Students[i].index = i;
//		Students[i].G = (Students[i].Ge + Students[i].Gi)/2;
//		for (int j = 0; j < k; j++) {
//			scanf("%d", &pref);
//			Students[i].preferred.push_back(pref);
//		}
//	}
//	sort(Students, Students + n);
//	Students[0].rank = 1;
//	for (int i = 1; i < n; ++i) {
//		if (Students[i].G == Students[i - 1].G&&Students[i].Ge == Students[i - 1].Ge) {
//			Students[i].rank = Students[i - 1].rank;
//		}
//		else {
//			Students[i].rank = Students[i - 1].rank + 1;
//		}
//	}
//	int tmpSchool;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < k; j++) {
//			tmpSchool = Students[i].preferred[j];
//			if (Schools[tmpSchool].admitted.size() < Schools[tmpSchool].quota
//				||Schools[tmpSchool].lowestRank== Students[i].rank) {
//				Schools[tmpSchool].admitted.insert(Students[i].index);
//				Schools[tmpSchool].lowestRank = Students[i].rank;
//				break;
//			}
//		}
//	}
//	bool isFirst;
//	for (int i = 0; i < m; i++) {
//		isFirst = true;
//		for (auto it = Schools[i].admitted.begin(); it != Schools[i].admitted.end(); it++) {
//			if (isFirst) {
//				isFirst = false;
//			}
//			else {
//				printf(" ");
//			}
//			printf("%d", (*it));
//		}
//		printf("\n");
//	}
//	return 0;
//}