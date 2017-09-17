//#include<stdio.h>
//
//int calID(int x) {
//	int sum = 0;
//	while (x != 0) {
//		sum += x % 10;
//		x /= 10;
//	}
//	return sum;
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	int Hash[37] = { 0 };
//	int tmp;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &tmp);
//		Hash[calID(tmp)]++;
//	}
//	bool isFirst = true;
//	int count = 0;
//	for (int i = 0; i < 37; i++)
//		if (Hash[i] != 0)
//			count++;
//	printf("%d\n", count);
//	for (int i = 0; i < 37; i++) {
//		if (Hash[i] != 0) {
//			if (isFirst)
//				isFirst = false;
//			else
//				printf(" ");
//			printf("%d",i);
//		}
//	}
//	return 0;
//}