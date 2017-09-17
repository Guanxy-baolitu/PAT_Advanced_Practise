//#include<stdio.h>
//#include<math.h>
//
//int reverse(int n, int d) {
//	int result = 0;
//	while (n != 0) {
//		int tmp = n%d;
//		n /= d;
//		result *= d;
//		result += tmp;
//	}
//	return result;
//}
//
//bool isprime(int n) {
//	if (n <= 1) return false;
//	int sqr = int(sqrt(n*1.0));
//	for (int i = 2; i <= sqr; i++) {
//		if (n%i == 0)
//			return false;
//	}
//	return true;
//
//}
//
//int main() {
//	int n, d;
//	scanf("%d", &n);
//	while (n > 0) {
//		scanf("%d", &d);
//		int r = reverse(n, d);
//		if (isprime(n) && isprime(r))
//			printf("Yes\n");
//		else
//			printf("No\n");
//		scanf("%d", &n);
//	}
//	return 0;
//}