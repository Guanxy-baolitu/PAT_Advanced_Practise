//#include<stdio.h>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//
//int main() {
//	int n;
//	scanf("%d", &n); 
//	int sqt = sqrt(n);
//	int max = 1;
//	int loc = 0;
//	for (int i = sqt; i > 1; i--) {
//		int tmpDiv = i;
//		int tmpOri = n;
//		int tmpMax = 0;
//		while (tmpDiv > 1 && tmpOri%tmpDiv == 0) {
//			tmpOri /= tmpDiv;
//			++tmpMax;
//			--tmpDiv;
//		}
//		if (tmpMax >= max) {
//			max = tmpMax;
//			loc = tmpDiv;
//		}
//	}
//	printf("%d\n", max);
//	if (max == 1&&loc==0) {
//		printf("%d", n);
//		return 0;
//	}
//	bool isFirst = true;
//	while (max != 0) {
//		if (isFirst) isFirst = false;
//		else printf("*");
//		printf("%d", ++loc);
//		--max;
//	}
//	return 0;
//}