//#include<stdio.h>
//#include<vector>
//using namespace std;
//
//
//int main() {
//	int primaryNum, base;
//	scanf("%d%d", &primaryNum, &base);
//	if (primaryNum == 0) {
//		printf("Yes\n0");
//		return 0;
//	}
//	int lastnum = 0;
//	int count = 1;
//	vector<int> digits;
//	while (primaryNum != 0) {
//		//ѭ������
//		lastnum = primaryNum%base;
//		primaryNum /= base;
//		//��������
//		digits.push_back(lastnum);
//	}
//	int i, j;
//	for (i = digits.size() - 1, j = 0; i != j - 1 && i != j; i--, j++) {
//		if (digits[i] != digits[j])
//			break;
//	}
//	if (i == j - 1 || i == j)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	for (i = digits.size() - 1; i >= 0;i--) {
//		if (i != digits.size() - 1)
//			printf(" ");
//		printf("%d", digits[i]);
//	}
//	return 0;
//}