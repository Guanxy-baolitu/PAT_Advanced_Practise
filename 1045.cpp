//#include<stdio.h>
//#include<algorithm>
//
//using namespace std;
//#define MAX 10001
//
//int ma[201];
//int stripe[MAX];
//int dp[MAX];//��j�����ĳ��ȣ�
//
//int main() {
//	int n,m,L;//nΪɫ����mΪϲ����,LΪ����
//	scanf("%d%d", &n,&m);
//	int tmp;
//	for (int i = 1; i <= m; i++) {
//		scanf("%d", &tmp);
//		ma[tmp] = i;
//	}
//	scanf("%d", &L);
//	int actL = 0;
//	for (int i = 0; i < L; i++) {
//		scanf("%d", &tmp);
//		if (ma[tmp] != 0) {
//			stripe[actL++] = ma[tmp];
//		}
//		dp[i] = 0;
//	}
//	int maxAns=0;
//	for (int i = 0; i < actL; i++) {//��������
//		dp[i] = 1;
//			for (int j = 0; j < i; j++) {
//				if (stripe[j] <= stripe[i]) {
//					dp[i] = max(dp[i], dp[j] + 1);
//				}
//			}
//			maxAns = max(maxAns, dp[i]);
//	}
//	printf("%d", maxAns);
//	return 0;
//}