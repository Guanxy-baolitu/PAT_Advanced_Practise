//#include<stdio.h>
//using namespace std;
//
//int main() {
//	float poly[1001] = {0};
//	int k, ex;
//	float co;
//	for (int a = 0; a < 2; a++) {
//		scanf("%d", &k);
//		while (k != 0) {
//			scanf("%d%f", &ex, &co);
//			poly[ex] += co;
//			k--;
//		}
//	}
//	int count = 0;
//	for (int i = 0; i < 1001; i++) {
//		if (poly[i]>0.01||poly[i]<-0.01)
//			count++;
//	}
//	printf("%d",count);
//	for (int i = 1000; i>=0;i--) {
//		if (poly[i]>0.01 || poly[i]<-0.01)
//			printf(" %d %.1f", i, poly[i]);
//	}
//	return 0;
//}