//#include <stdio.h>
//#include <math.h>
//#include <algorithm>
//
//using namespace std;
//
//#define MAX_N 10001
//
//int sequence[MAX_N];
//
//int waitSpace[101][10001];
//
//int direct[4][2] = {
//	0,1,
//	1,0,
//	0,-1,
//	-1,0
//};
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &sequence[i]);
//	}
//	int m= sqrt((double)N)+1, n;
//	while (m != 0) {
//		if (N%m == 0) {
//			n = N / m;
//			break;
//		}
//		--m;
//	}
//	if (n > m) {
//		int tmp = n;
//		n = m;
//		m = tmp;
//	}
//	sort(sequence, sequence + N);
//	int dir = 0;
//	int rid = 0;
//	int lenM, lenN;
//	int posX=0, posY = -1;
//	while (N > 0) {
//		lenN = n - rid;
//		while (lenN != 0) {
//			N--;
//			posX += direct[dir][0];
//			posY += direct[dir][1];
//			waitSpace[posX][posY] = sequence[N];
//			lenN--;
//		}
//		dir = (dir + 1) % 4;
//		++rid;
//		lenM = m - rid;
//		while (lenM != 0) {
//			N--;
//			posX += direct[dir][0];
//			posY += direct[dir][1];
//			waitSpace[posX][posY] = sequence[N];
//			lenM--;
//		}
//		dir = (dir + 1) % 4;		
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			if (j != 0) {
//				printf(" ");
//			}
//			printf("%d", waitSpace[i][j]);
//		}
//		printf("\n");
//	}
//		
//	return 0;
//}