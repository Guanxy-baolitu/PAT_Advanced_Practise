//#include<stdio.h>
//#include<vector>
//#define N 30
//using namespace std;
//int pre[N];
//int post[N];
//vector<int>result;
//bool nonUnique = false;//which means unique
//
//int findFromPre(int x, int l, int r) {
//	for (int i = l; i <= r; ++i) {
//		if (x == pre[i]) {
//			return i;
//		}
//	}
//	return -1;
//}
//
//void setIn(int preL, int preR, int postL, int postR) {
//	if (preL == preR) {
//		result.push_back(pre[preL]);
//		return;
//	}
//
//
//	if (pre[preL] == post[postR]) {
//		int x = findFromPre(post[postR - 1], preL + 1, preR);
//		if (x - preL > 1) {
//			setIn(preL + 1, x - 1, postL, postL + x - preL - 2);//2: 1 is because x is on the right part, 1 is arrive at the end of leftpart in the post
//			result.push_back(post[postR]);
//			setIn(x, preR, postL + x - preL - 2 + 1, postR - 1);
//		}
//		else {
//			nonUnique = true;
//			result.push_back(post[postR]);
//			setIn(x, preR, postL + x - preL - 2 + 1, postR - 1);
//		}
//	}
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &pre[i]);
//	}
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &post[i]);
//	}
//	setIn(0, n - 1, 0, n - 1);
//	if (nonUnique) printf("No\n"); else printf("Yes\n");
//	printf("%d", result[0]);
//	for (int i = 1; i < result.size(); ++i) {
//		printf(" %d", result[i]);
//	}
//	printf("\n");
//	return 0;
//}