//#include<stdio.h>
//#include<algorithm>
//#define N 110
//using namespace std;
//
//int seqA[N];
//int seqB[N];
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	bool isMergeSort = false;
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &seqA[i]);
//	}
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &seqB[i]);
//	}
//	int insEnd = 0;
//	for (; seqB[insEnd] <= seqB[insEnd + 1] && insEnd < n - 1; ++insEnd) {
//	}
//	for (int testEnd = insEnd+1; testEnd != n; ++testEnd) {
//		if (seqA[testEnd] != seqB[testEnd]) {
//			isMergeSort = true;
//			break;
//		}
//	}
//	if (!isMergeSort) {
//		printf("Insertion Sort\n");
//		sort(seqA, seqA + insEnd+2);
//	}
//	else {
//		printf("Merge Sort\n");
//		int k = 1;
//		bool flag = true;
//		while (flag) {
//			flag = false;
//			for (int i = 0; i < n; ++i) {
//				if (seqA[i] != seqB[i]) {
//					flag = true;
//				}
//			}
//			k = 2 * k;
//			for (int i = 0; i < n / k; ++i) {
//				sort(seqA + i*k, seqA + (i + 1)*k);
//			}
//			for (int i = (n / k)*k; i < n; ++i) {
//				sort(seqA + (n / k)*k, seqA + n);
//			}
//		}
//	}
//	int idx = 0;
//	bool nonFirst = false;
//	for (; idx < n; ++idx) {
//		if (!nonFirst) nonFirst = true;
//		else printf(" ");
//		printf("%d", seqA[idx]);
//	}
//	printf("\n");
//	return 0;
//}