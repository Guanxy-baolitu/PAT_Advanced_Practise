//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//#define N 102
//int oriSequence[N];
//int newSequence[N];
//
//void downAdjust(int low, int high) {
//	int i = 1, j = 2 * i;
//	while (j <= high) {
//		if (j + 1 <= high&&newSequence[j] < newSequence[j + 1]) j += 1;
//		if (newSequence[i] < newSequence[j]) {
//			swap(newSequence[i], newSequence[j]);
//			i = j; j = 2 * i;
//		}
//		else break;
//	}
//}
//
//
//int main() {
//	int n, p = 2;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; ++i) {
//		scanf("%d", &oriSequence[i]);
//	}
//	for (int i = 1; i <= n; ++i) {
//		scanf("%d", &newSequence[i]);
//	}
//	while (p <= n&&newSequence[p - 1] <= newSequence[p])++p;
//	int index = p;
//	while (p <= n&&oriSequence[p] == newSequence[p])++p;
//	if(p==n+1){
//		printf("Insertion Sort\n");
//		sort(newSequence, newSequence + index + 1);
//	}
//	else {
//		printf("Heap Sort\n");
//		p = n;
//		while (p >= 2 && newSequence[p] >= newSequence[p - 1])--p;
//		swap(newSequence[1], newSequence[p]);
//		downAdjust(1, p - 1);
//	}
//	bool nonFirst = false ;
//	for (int idx = 1; idx <= n; ++idx) {
//		if (nonFirst) printf(" ");
//		else nonFirst = true;
//		printf("%d", newSequence[idx]);
//	}
//	return 0;
//}