//#include <stdio.h>
//#include<vector>
//
//using namespace std;
//
//#define N 10010
//
//vector<int> primes;
//bool notPrime[N];
//
//void initPrime() {
//	notPrime[1] = true;
//	for (int i = 2; i < N; i++) {
//		if (notPrime[i]) continue;
//		else primes.push_back(i);
//		if (i*i < N)
//		for (int j = i*i; j < N; j+=i) {
//			notPrime[j] = true;
//		}
//	}
//}
//
//bool occupied[N];
//
//int main() {
//	int size, n;
//	scanf("%d%d", &size, &n);
//	initPrime();
//	if (notPrime[size]) {
//		for (auto it = primes.begin(); it != primes.end(); ++it) {
//			if (*it > size) {
//				size = (*it);
//				break;
//			}
//		}
//	}
//	int result;
//	bool nonFirst = false;
//	int tmpN;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &tmpN);
//		if (nonFirst) printf(" ");
//		else nonFirst = true;
//		result = tmpN%size;
//		if (occupied[result] == true) {
//			int step = 1;
//			do {
//				result = (tmpN + step*step) % size;
//				++step;
//			} while (step<size&&occupied[result] == true);
//		}
//		if (result < size&&occupied[result] == false) {
//			occupied[result] = true;
//			printf("%d", result);
//		}
//		else {
//			printf("-");
//		}
//	}
//	printf("\n");
//
//	return 0;
//}