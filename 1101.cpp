//#include <stdio.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int sequence[100001];
//int sortedSeq[100001];
//
//////////////Ҫ�㣺1.�ϸ������2.ԭʼ���������ֵ�����ڼ�֦
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