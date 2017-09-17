//#include<stdio.h>
//
//long long gcd(long long a, long long b) {
//	if (b == 0) return a;
//	else return gcd(b, a%b);
//}
//
//long long lcm(long long a, long long b) {
//	long long g = gcd(a, b);
//	return a*b / g;
//}
//
//void simplify(long long& a,long long& b) {
//	long long g = gcd(a, b);
//	a /= g;
//	b /= g;
//	if (b < 0) {
//		a = -a;
//		b = -b;
//	}
//}
//
//void add(long long& ur, long long&lr, long long u1, long long u2, long long l1, long long l2) {
//	lr = lcm(l1, l2);
//	ur = u1*lr / l1 + u2*lr / l2;
//	simplify(lr, ur);
//}
//
//void multy(long long& ur, long long&lr, long long u1, long long u2, long long l1, long long l2) {
//	lr = l1*l2;
//	ur = u1*u2;
//	simplify(lr, ur);
//}
//
//void print(long long u, long long l) {
//	simplify(u, l);
//	bool pos = true;
//	if (u < 0) {
//		printf("(-");
//		pos = false;
//		u = -u;
//	}
//	if (u == 0) {
//		printf("0");
//		return;
//	}
//	long long d = u / l;
//	long long remain = u%l;
//	if (d != 0)
//		printf("%lld", d);
//	if (d != 0 && remain != 0)
//		printf(" ");
//	if (remain != 0)
//		printf("%lld/%lld", remain, l);
//	if(pos==false)
//		printf(")");
//}
//
//int main() {
//	long long u1, u2, l1, l2, ur, lr;
//	scanf("%lld/%lld %lld/%lld",&u1,&l1,&u2,&l2);
//	print(u1, l1);
//	printf(" + ");
//	print(u2, l2);
//	printf(" = ");
//	add(ur, lr, u1, u2, l1, l2);
//	print(ur, lr);
//	printf("\n");
//	print(u1, l1);
//	printf(" - ");
//	print(u2, l2);
//	printf(" = ");
//	add(ur, lr, u1, -u2, l1, l2);
//	print(ur, lr);
//	printf("\n");
//	print(u1, l1);
//	printf(" * ");
//	print(u2, l2);
//	printf(" = ");
//	multy(ur, lr, u1, u2, l1, l2);
//	print(ur, lr);
//	printf("\n");
//	print(u1, l1);
//	printf(" / ");
//	print(u2, l2);
//	printf(" = ");
//	if (u2 == 0) {
//		printf("Inf");
//	}
//	else {
//		multy(ur, lr, u1, l2, l1, u2);
//		print(ur, lr);
//	}
//	return 0;
//}