//#include<stdio.h>
//#include<algorithm>
//
//using namespace std;
//
//#define MAX_N 100002
//
//int miles[MAX_N];
//
//bool cmp1(int a, int b) {
//	return a > b;
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	int tmpN = 1;
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &miles[i]);
//	}
//	sort(miles + 1, miles + 1 + n,cmp1);
//	while (tmpN <= n) {
//		if (tmpN >= miles[tmpN]) {
//			break;
//		}
//		tmpN++;
//	}
//	printf("%d\n", tmpN - 1);
//	return 0;
//}