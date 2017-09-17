//#include<stdio.h>
//#include<vector>
//using namespace std;
//int main() {
//	int k;
//	scanf("%d", &k);
//	bool pos = false;
//	vector<int> seq(k);
//	int tmpSum = 0, maxSum = -1, fir = 0, fixedFir = 0, fixedSec = 0;
//	for (int i = 0; i < k; i++) {
//		scanf("%d", &seq[i]);
//		if (seq[i] >= 0)
//			pos = true;
//		tmpSum += seq[i]; 
//		if (tmpSum > maxSum) {
//			maxSum = tmpSum;
//			fixedFir = fir;
//			fixedSec = i;
//		}
//		else if (tmpSum < 0) {
//			tmpSum = 0;
//			fir = i + 1;
//		}
//	}
//	if(pos==false)
//		printf("0 %d %d",  seq[0], seq[k - 1]);
//	else
//		printf("%d %d %d", maxSum, seq[fixedFir], seq[fixedSec]);
//	return 0;
//}