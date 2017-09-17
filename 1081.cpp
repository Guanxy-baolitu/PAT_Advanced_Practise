//#include<stdio.h>
//
//long long gcd(long long a,long long b) {
//	while (b != 0) {
//		long long t = a%b;
//		a = b;
//		b = t;
//	}
//	return a;
//}
//
//long long lcm(long long a, long long b) {
//	long long g = gcd(a, b);
//	return a*b / g;
//}
//static long long lower;
//static long long upper;
//void add(long long u1, long long u2, long long l1, long long l2) {
//	lower = lcm(l1, l2);
//	long long upper1 = lower / l1*u1;
//	long long upper2 = lower / l2*u2;
//	upper = upper1 + upper2;
//	long long l = gcd(lower, upper);
//	lower /= l;
//	upper /= l;
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	long long u1 = 0, l1 = 1, u2 = 0, l2 = 1;
//	for (int i = 0; i < n; i++) {
//		scanf("%lld/%lld", &u2, &l2);
//		add(u1, u2, l1, l2);
//		l1 = lower, u1 = upper;
//	}
//	if (lower == 1) {
//		printf("%lld", upper);
//	}
//	else {
//		if (upper > lower) {
//			printf("%lld ", upper / lower);
//			upper %= lower;
//		}
//		printf("%lld", upper);
//		printf("/%lld", lower);
//	}
//	return 0;
//}