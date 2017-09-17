//#include<stdio.h>
//#include<algorithm>
//
//using namespace std;
//
//struct Node {
//	double value;
//	double generate;
//}sequence[100001];
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	scanf("%lf", &sequence[0].value);
//	if (n == 1) {
//		printf("%.2f", sequence[0].value);
//		return 0;
//	}
//	double sum = sequence[0].value;
//	sequence[0].generate = sequence[0].value;
//	double newAdded;
//	double sum = 0;
//	for (int i = 1; i < n; i++) {
//		scanf("%lf", &sequence[i].value);
//		newAdded = sequence[i - 1].generate + sequence[i].value*(i + 1);
//		sequence[i].generate = newAdded;
//		sum += newAdded;
//		sum += (sequence[i].value*i*(n - i + 1));
//	}
//	printf("%.2lf", sum);
//	return 0;
//}