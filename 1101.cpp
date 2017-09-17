//#include <stdio.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int sequence[100001];
//int sortedSeq[100001];
//
//////////////要点：1.严格递增；2.原始序列中最大值可用于剪枝
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &sequence[i]);
//		sortedSeq[i] = sequence[i];
//	}
//	sort(sortedSeq, sortedSeq + n);
//	int count = 0;
//	int max = 0;
//	vector<int> pilots;
//	for (int i = 0; i < n; i++) {
//		if (sequence[i] == sortedSeq[i]&&sequence[i]>max) {
//			count++;
//			pilots.push_back(sequence[i]);
//		}
//		if (sequence[i] > max) {
//			max = sequence[i];
//		}
//	}
//	printf("%d\n", count);
//	bool isfirst = false;
//	for (auto it: pilots) {
//		if (isfirst == false) {
//			isfirst = true;
//		}
//		else {
//			printf(" ");
//		}
//		printf("%d", it);
//	}
//	printf("\n");
//	return 0;
//}