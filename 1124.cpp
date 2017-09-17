//#include<stdio.h>
//#include<string>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//#define MAX_N 1001
//
//char followers[MAX_N][21];
//
//int main() {
//	int m, n, s;
//	scanf("%d %d %d", &m, &n, &s);
//	for (int i = 1; i <= m; i++) {
//		scanf("%s", followers[i]);
//	}
//	vector<string> winners;
//	int sPos = s;
//	bool exist;
//	while (sPos <= m) {
//		string candidate = string(followers[sPos]);
//		exist = (find(winners.begin(), winners.end(), candidate) == winners.end()) ? false : true;
//		if (exist) {
//			sPos += 1;
//		}
//		else {
//			winners.push_back(candidate);
//			sPos += n;
//		}
//	}
//	if (winners.size() == 0) {
//		printf("Keep going...");
//	}
//	else {
//		for (auto it = winners.begin(); it != winners.end(); it++) {
//			printf("%s\n", (*it).c_str());
//		}
//	}
//	return 0;
//}