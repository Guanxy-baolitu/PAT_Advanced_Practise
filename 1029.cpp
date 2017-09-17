//#include<stdio.h>
//#include<vector>
//
//using namespace std;
//
//vector <long int > seq1;
//vector<long int> seq2;
//
//int main() {
//	int n, m;
//	scanf("%d", &m);
//	long int tpN;
//	for (int i = 0; i < m; i++) {
//		scanf("%ld", &tpN);
//		seq1.push_back(tpN);
//	}
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%ld", &tpN);
//		seq2.push_back(tpN);
//	}
//	int medianIdx = (n + m-1) / 2;
//	int p = 0, q = 0;
//	while (medianIdx) {
//		while (p < m&&q < n&&seq1[p] < seq2[q] && medianIdx) {
//			p++;
//			medianIdx--;
//		}
//		while (p < m&&q < n&&seq1[p] >= seq2[q] && medianIdx) {
//			q++;
//			medianIdx--;
//		}
//		while (p < m&&q >= n&&medianIdx) {
//			++p;
//			--medianIdx;
//		}
//		while (p >= m&&q < n&&medianIdx) {
//			++q;
//			--medianIdx;
//		}
//	}
//	long int ans;
//	if (p < m&&q < n) {
//		ans = seq1[p] < seq2[q] ? seq1[p] : seq2[q];
//	}
//	else {
//		ans = p < m ? seq1[p] : seq2[q];
//	}
//	printf("%ld", ans);
//	return 0;
//}