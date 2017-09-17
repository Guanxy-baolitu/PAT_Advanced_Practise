//#include<iostream>
//#include<stdio.h>
//#include<vector>
//
//using namespace std;
//
//vector<int> primes(500000, 1);
//
//void init() {
//	for (int i = 2; i * i < 500000; i++)
//		for (int j = 2; j * i < 500000; j++)
//			primes[j * i] = 0;
//}
//
//int main() {
//	init();
//	long int num;
//	scanf("%ld", &num);
//	if (num == 1) { printf("1=1"); return 0; }
//	printf("%ld=", num);
//	bool notfirst = false;
//	for (int i = 2;  num >= 2; ++i) {
//		int cnt = 0;
//		bool flag = false;
//		while (num%i== 0 && primes[i]==1) {
//				++cnt;
//				num /= i;
//				flag = true;
//			}
//			if (flag) {
//				if (notfirst) printf("*");
//				printf("%d", i);
//				notfirst = true;
//			}
//			if (cnt > 1)
//				printf("^%d", cnt);
//	}
//	return 0;
//}