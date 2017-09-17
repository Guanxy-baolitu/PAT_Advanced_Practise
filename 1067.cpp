//#include<stdio.h>
//#include<vector>
//using namespace std;
//
//int main() {
//	int n;
//	scanf("%d",&n);
//	vector<int> seq(n);
//	int tmp;
//	int index = 1,result=0;
//	int count = 0;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &tmp);
//		seq[tmp] = i;//数tmp在第i位上
//		if (tmp!=i&&tmp != 0) count++;
//	}
//	while (count > 0) {
//		if (seq[0] == 0) {
//			while (index < n) {
//				if (seq[index] != index) {
//					swap(seq[index], seq[0]);
//					result++;
//					break;
//				}
//				index++;
//			}
//		}
//		while (seq[0] != 0) {
//			swap(seq[seq[0]], seq[0]);
//			result++;
//			count--;
//		}
//	}
//	printf("%d", result);
//	return 0;
//}
