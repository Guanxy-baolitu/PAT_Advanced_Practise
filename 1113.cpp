//#include<stdio.h>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	int pos = n;
//	int buf[100001];
//	while (pos != 0) {
//		scanf("%d",&buf[n-pos]);
//		pos--;
//	}
//	sort(buf, buf + n);
//	int sum1=0, sum2=0;
//	int i;
//	for (i = 0; i < n / 2; i++)
//		sum1 += buf[i];
//	for (;i<n;i++)
//		sum2 += buf[i];
//	if (n & 1 == 1)
//		printf("1 ");
//	else
//		printf("0 ");
//	printf("%d",sum2-sum1);
//	return 0;
//}