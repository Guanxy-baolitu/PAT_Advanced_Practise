//#include<stdio.h>
//#include<algorithm>
//#include<math.h>
//
//#define MAX_N 100001
//
//using namespace std;
//
//int coupon[MAX_N];
//int couponn[MAX_N];
//int product[MAX_N];
//int productn[MAX_N];
//
//bool des(int a, int b) {
//	return a > b;
//}
//
//bool asc(int a, int b) {
//	return a < b;
//}
//
//int main() {
//	int a, b;
//	int cap = 0, can = 0, cbp = 0, cbn = 0;
//	scanf("%d", &a);
//	int tmp;
//	for (int i = 0; i < a; i++) {
//		scanf("%d", &tmp);
//		if (tmp > 0)
//			coupon[cap++] = tmp;
//		else if(tmp<0)
//			couponn[can++] = tmp;
//	}
//	scanf("%d", &b);
//	for (int i = 0; i < b; i++) {
//		scanf("%d", &tmp);
//		if (tmp > 0)
//			product[cbp++] = tmp;
//		else if (tmp<0)
//			productn[cbn++] = tmp;
//	}
//	sort(coupon, coupon + cap, asc);
//	sort(couponn, couponn + can, des);
//	sort(product, product + cbp, asc);
//	sort(productn, productn + cbn, des);
//	int result = 0;
//	while (cap != 0 && cbp != 0) {
//		result += (coupon[--cap] * product[--cbp]);
//	}
//	while (can != 0 && cbn != 0) {
//		result += (couponn[--can] * productn[--cbn]);
//	}
//	printf("%d", result);
//	return 0;
//}