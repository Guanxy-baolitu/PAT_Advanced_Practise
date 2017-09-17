//#include<stdio.h>
//#include<set>
//
//using namespace std;
//
//int couple[100001];
//bool exist[100001];
//int guests[100001];
//
//int main() {
//	int n, m;
//	scanf("%d", &n);
//	int a, b;
//	set<int> singleDogs;
//	for (int i = 0; i < 100001; i++) {
//		couple[i] = -1;
//		exist[i] = false;
//	}
//	for (int i = 0; i < n; i++) {
//		scanf("%d %d", &a, &b);
//		couple[a] = b;
//		couple[b] = a;
//	}
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++) {
//		scanf("%d", &guests[i]);
//		if (guests[i] != -1) {
//			exist[couple[guests[i]]] = true;
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		if (exist[guests[i]] == false) {
//			singleDogs.insert(guests[i]);
//		}
//	}
//	int count = singleDogs.size();
//	printf("%d\n", count);
//	bool isFirst=true;
//	for (auto it = singleDogs.begin(); it != singleDogs.end();it++) {
//		if (isFirst == true) isFirst = false;
//		else printf(" ");
//		printf("%05d", (*it));
//	}
//	return 0;
//}