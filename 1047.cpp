//#include<stdio.h>
//#include<vector>
//#include<string>
//#include<algorithm>
//
//#define MAX_N 40001
//#define MAX_K 2501
//
//using namespace std;
//
//vector<int> courselist[MAX_K];
//
//char names[MAX_N][5];
//
//bool cmp(int a, int b) {
//	return (strcmp(names[a], names[b]) < 0);
//}
//
//
//
//int main() {
//	int n, k;
//	scanf("%d %d", &n, &k);
//	int count, tmpK;
//	for (int i = 0; i < n; i++) {
//		scanf("%s %d", names[i],&count);
//		for (int j = 0; j < count; j++) {
//			scanf("%d", &tmpK);
//			courselist[tmpK].push_back(i);
//		}
//	}
//	for (int i = 1; i <= k; i++) {
//		count = courselist[i].size();
//		sort(courselist[i].begin(), courselist[i].end(),cmp);
//		printf("%d %d\n", i, count);
//		for (auto it = courselist[i].begin(); it != courselist[i].end(); it++) {
//			printf("%s\n", names[(*it)]);
//		}
//	}
//	return 0;
//}