//#include<stdio.h>
//#include<vector>
//#include<set>
//#define N 201
//using namespace std;
//
//bool Roads[N][N];
//set<int> isOne;
//
//int main() {
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int a, b;
//	for (int i = 0; i < m; ++i) {
//		scanf("%d%d", &a, &b);
//		Roads[a][b] = true;
//		Roads[b][a] = true;
//	}
//	int k;
//	scanf("%d", &k);
//	int tmpN;
//	bool result;
//	int tmpV, lastV, initV;
//	set<int> occured;
//	vector<int> tmpHami;
//	for (int i = 0; i < k; ++i) {
//		scanf("%d", &tmpN);
//		result = false;
//		occured.clear();
//		tmpHami.clear();
//		do {
//			for (int j = 0; j < tmpN; ++j) {
//				scanf("%d", &tmpV);
//				tmpHami.push_back(tmpV);
//			}
//			if (tmpN != n + 1) {
//				result = false;
//				break;
//			}
//			if (tmpHami[0] != tmpHami[tmpN - 1]) {
//				break;
//			}
//			lastV = 0; tmpV = 1;
//			while (tmpV < tmpN) {
//				if (Roads[tmpHami[lastV]][tmpHami[tmpV]] == false) {
//					break;
//				}
//				if (occured.find(tmpHami[tmpV]) != occured.end()) {
//					break;
//				}
//				occured.insert(tmpHami[tmpV]);
//				++lastV;
//				++tmpV;
//			}
//			if (tmpV == tmpN) {
//				result = true;
//			}
//		} while (0);
//		if (result)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//
//
//	return 0;
//}