//#include<stdio.h>
//#include<algorithm>
//#include<set>
//using namespace std;
//
//const int N = 26 * 26 * 26 * 10 + 10;
//
//set<int> courseList[N];
//
//int getid(char* name) {
//	int id = 0;
//	for (int i = 0; i < 3; i++) {
//		id = 26 * id + (name[i] - 'A');
//	}
//	id = id * 10 + (name[3] - '0');
//	return id;
//}
//
//int main() {
//	int n, K;
//	scanf("%d %d",&n,&K);
//	int cID, num;
//	char sID[6];
//	int idx;
//	for (int i = 0; i < K; i++) {
//		scanf("%d %d",&cID,&num);
//		for (int j = 0; j < num; j++) {
//			scanf("%s", sID);
//			idx = getid(sID);
//			courseList[idx].insert(cID);
//		}
//	}
//	while (n != 0) {
//		scanf("%s", sID);
//		idx = getid(sID);
//		printf("%s %d", sID, courseList[idx].size());
//			for (auto it = courseList[idx].begin(); it != courseList[idx].end(); it++)
//				printf(" %d",(*it));
//		printf("\n");
//		n--;
//	}
//	return 0;
//}