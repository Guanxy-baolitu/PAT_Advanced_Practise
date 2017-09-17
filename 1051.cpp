//#include<stdio.h>
//#include<stack>
//
//#define N 1001
//
//using namespace std;
//
//int checkseq[N];
//stack<int> mockstack;
//
//int main() {
//	int m, n, k;
//	scanf("%d%d%d", &m, &n, &k);
//	bool complete;
//	for (int i = 0; i < k; ++i) {
//		complete = true;
//		for (int j = 0; j < n; ++j) {
//			scanf("%d", &checkseq[j]);
//		}
//		int pos = 0;
//		while (!mockstack.empty()) {
//			mockstack.pop();
//		}
//		int tmpN = 1;
//		while (pos < n) {
//			while (!mockstack.empty()&&mockstack.top() == checkseq[pos]) {
//				mockstack.pop();
//				++pos;
//			}
//				if (mockstack.size() < m) {
//					if (tmpN >n&&pos<n) {
//						complete = false;
//						break;
//					}
//					else {
//						mockstack.push(tmpN);
//						++tmpN;
//					}
//				}
//				else {
//					complete = false;
//					break;
//				}
//		}
//		if (complete) {
//			printf("YES\n");
//		}
//		else {
//			printf("NO\n");
//		}
//	}
//	return 0;
//}
