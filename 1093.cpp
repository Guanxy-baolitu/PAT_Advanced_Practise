//#include<stdio.h>
//#include<vector>
//using namespace std;
//#define MAX_N 100001
//
//
//vector<int> P;
//vector<int> A;
//
//int main() {
//	int numP = 0, numA = 0, numT = 0;
//	int i = 0;
//	char c;
//
//	while ((c=getchar())!='\n') {
//		switch (c) {
//		case 'P': {
//				P.push_back(numA);
//				++numP;
//				break;
//			}
//		case 'A': {
//				A.push_back(numT);
//				++numA;
//				break;
//			}
//		case 'T': {
//				++numT;
//				break;
//			}
//			i++;
//		}
//		
//	}
//	int posP = 0, posA = 0, posT = 0;
//	int result = 0;
//	if (numP > 0) {
//		int remainT;
//		for (posA = P[0]; posA < numA; ++posA) {
//			remainT = (numT - A[posA]);
//			A[posA] = result;
//			result += remainT;
//		}
//		for (posA = P[0]; posA < numA; ++posA) {
//			A[posA] = result-A[posA];
//		}
//		++posP;
//		for (; posP < numP; ++posP) {
//			posA = P[posP];
//			if (posA < numA) {
//				result = (result + (A[posA] % 1000000007)) % 1000000007;
//			}
//		}
//	}
//	printf("%d", result % 1000000007);
//
//	return 0;
//}