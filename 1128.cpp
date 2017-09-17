//#include<stdio.h>
//#include<vector>
//
//using namespace std;
//
//int main() {
//	int k, n;
//	scanf("%d", &k);
//	bool isSolution;
//	vector<int> chessBoard;
//	int tmpQ;
//	int crossPos1, crossPos2;
//	for (int i = 0; i < k; i++) {
//		chessBoard.push_back(-1);
//		isSolution = true;
//		scanf("%d", &n);
//		for (int j = 1; j <= n; j++) {
//			scanf("%d", &tmpQ);
//			if(isSolution == true){
//				for (int t = 1; t < j; t++) {
//					crossPos1 = tmpQ - j + t;
//					crossPos2 = tmpQ + j - t;
//					if (chessBoard[t] == crossPos1 || chessBoard[t] == crossPos2||chessBoard[t]==tmpQ) {
//						isSolution = false;
//						break;
//					}
//				}
//				chessBoard.push_back(tmpQ);
//			}
//		}
//		if (isSolution) printf("YES\n");
//		else printf("NO\n");
//		chessBoard.clear();
//	}
//	return 0;
//}