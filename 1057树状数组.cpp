//#include<stdio.h>
//#include<string.h>
//#include<stack>
//#include<algorithm>
//#define N 100001
//#define lowbit(i) ((i)&(-i))
//using namespace std;
//
//int c[N];
//stack<int> s;
//
//void update(int x, int v) {
//	for (int i = x; i < N; i += lowbit(i))
//		c[i] += v;
//}
//
//int getsum(int x) {
//	int sum = 0;
//	for (int i = x; i >= 1; i -= lowbit(i))
//		sum += c[i];
//	return sum;
//}
//
//void PeekMedian() {
//	int left = 1, right = N, mid, k = (s.size() + 1) / 2;
//	while (left < right) {
//		mid = (left + right) / 2;
//		if (getsum(mid) >= k)
//			right = mid;
//		else
//			left = mid + 1;
//	}
//	printf("%d\n", left);
//}
//
//int main() {
//	int n;
//	scanf("%d",&n);
//	char command[12];
//	int value;
//	int loc = 0;
//	int isFirst = true;
//	while (n!=0) {
//		scanf("%s", command);
//		if (strcmp(command, "Push") == 0) {
//			scanf("%d\n", &value);
//			s.push(value);
//			update(value, 1);
//		}
//		else if (strcmp(command, "Pop") == 0) {
//			if(s.empty())
//				printf("Invalid\n");
//			else {
//				update(s.top(), -1);
//				printf("%d\n", s.top());
//				s.pop();
//			}
//		}
//		else if (strcmp(command, "PeekMedian") == 0) {
//			if (s.empty())
//				printf("Invalid\n");
//			else {
//				PeekMedian();
//			}
//		}
//		else
//			printf("Invalid\n");
//		n--;
//	}
//	return 0;
//}