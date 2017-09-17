//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int cmp1(int a, int b) {
//	return a > b;
//}
//
//int list[10001];
//int dp[10001];
//bool choice[10001][10001];
//int main() {
//	int n, m;
//	scanf("%d %d",&n,&m);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &list[i]);
//	}
//	sort(list+1,list+n+1,cmp1);
//	for (int i = 1; i <= n; i++) {
//		for (int j = m; j >= list[i]; j--) {
//			if (dp[j] <= dp[j - list[i]] + list[i]) {
//				choice[i][j] = true;
//				dp[j] = dp[j - list[i]] + list[i];//
//			}
//		}
//	}
//	if (dp[m] != m)printf("No Solution");
//	else {
//		vector<int> result;
//		int v = m, index = n;
//		while (v > 0) {
//			if (choice[index][v] == true) {
//				result.push_back(list[index]);
//				v -= list[index];
//			}
//			index--;
//		}
//		for (int i = 0; i < result.size(); i++) {
//			if (i != 0)printf(" ");
//			printf("%d", result[i]);
//		}
//	}
//	return 0;
//}