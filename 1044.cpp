//#include<stdio.h>
//#include<vector>
//#define N 100001
//using namespace std;
//int diamd[N];
//
//int n, m;
//void Func(int i, int& j, int &tmpSum) {
//	int left = i, right = n;
//	while (left < right) {
//		int mid = (left + right) / 2;
//		if (diamd[mid] - diamd[i - 1] >= m) {
//			right = mid;
//		}
//		else {
//			left = mid + 1;
//		}
//	}
//	j = right;
//	tmpSum = diamd[j] - diamd[i - 1];
//}
//
//int main() {
//	scanf("%d%d", &n, &m);
//	diamd[0] = 0;
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &diamd[i]);
//		diamd[i] += diamd[i - 1];
//	}
//	int minans = diamd[n];//keep the min value when have to waste 
//	vector<int> resultArr;
//	for (int i = 1; i <= n; ++i) {
//		int j, tmpSum;
//		Func(i, j, tmpSum);
//		if (tmpSum > minans)
//			continue;
//		if (tmpSum >= m) {
//			if (tmpSum < minans) {
//				resultArr.clear();
//				minans = tmpSum;
//			}
//			resultArr.push_back(i);
//			resultArr.push_back(j);
//		}
//	}
//	for (int i = 0; i < resultArr.size(); i += 2) {
//		printf("%d-%d\n", resultArr[i], resultArr[i + 1]);
//	}
//	return 0;
//}