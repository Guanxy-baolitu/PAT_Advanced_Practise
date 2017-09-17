//#include<stdio.h>
//#include<math.h>
//#include<vector>
//
//using namespace std;
//
//vector<int> powed;
//vector<int> result;
//vector<int> tmpResult;
//int tmpSum = 0, tmpFactorSum = 0, maxFactorSum = 0;
//int maxK = 1, tmpK = 0;
//
//
//int n, k, p;
//
//void dfs(int index,int tmpSum,int tmpK,int facSum) {
//	if (tmpSum == n&&tmpK == k) {
//		if (facSum > maxFactorSum) {
//			result = tmpResult;
//			maxFactorSum = facSum;
//		}
//		return;
//	}
//	if (tmpSum > n || tmpK > k) return;
//	if (index >= 1) {
//		tmpResult.push_back(index);
//		dfs(index, tmpSum + powed[index], tmpK + 1, facSum + index);
//		tmpResult.pop_back();
//		dfs(index - 1, tmpSum, tmpK, facSum);
//	}
//}
//
//
//
//int main() {
//	scanf("%d%d%d", &n, &k, &p);
//	int tmp = 0, index = 1;
//	while (tmp <= n) {
//		powed.push_back(tmp);
//		tmp = pow(index, p);
//		++index;
//	}
//	dfs(powed.size() - 1, 0, 0, 0);
//	if (result.empty()) {
//		printf("Impossible\n");
//	}
//	else {
//		printf("%d = ", n);
//		bool isFirst = true;
//		for (auto it = result.begin(); it !=result.end(); ++it) {
//			if (isFirst) isFirst = false;
//			else printf(" + ");
//			printf("%d^%d", *it,p);
//		}
//		printf("\n");
//	}
//	return 0;
//}