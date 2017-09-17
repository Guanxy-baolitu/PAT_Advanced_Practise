//#include<stdio.h>
//#include<algorithm>
//#include<string.h>
//
//using namespace std;
//
//struct node {
//	char ID[10];
//	int virtue;
//	int talent;
//	bool operator <(const node& b)const {
//		if ((virtue + talent) != (b.virtue + b.talent))
//			return (virtue + talent) > (b.virtue + b.talent);
//		if (virtue != b.virtue)
//			return virtue > b.virtue;
//		int cmp = strcmp(ID, b.ID);
//		return cmp < 0;
//	}
//}buf[4][100001];
//
//int low, high;
//int findLevel(int tmpV, int tmpT) {
//	if (tmpV >= high&&tmpT >= high)
//		return 0;
//	if (tmpV >= high&&tmpT >= low)
//		return 1;
//	if (tmpV >= low&&tmpT >= low) {
//		if (tmpV >=tmpT)
//			return 2;
//		else
//			return 3;
//	}
//	return 4;
//}
//
//int main() {
//	int n,pos;
//	scanf("%d %d %d",&n,&low,&high);
//	char tmpID[10];
//	int tmpV,tmpT,tmpL,tmpN;
//	int num[4] = { 0,0,0,0 };
//	pos = n;
//	while (pos != 0) {
//		pos--;
//		scanf("%s %d %d", &tmpID, &tmpV, &tmpT);
//		tmpL = findLevel(tmpV, tmpT);
//		if (tmpL > 3) continue;
//		tmpN=num[tmpL]++;
//		strcpy(buf[tmpL][tmpN].ID,tmpID);
//		buf[tmpL][tmpN].virtue = tmpV;
//		buf[tmpL][tmpN].talent = tmpT;
//	}
//		printf("%d\n",num[0]+num[1]+num[2]+num[3]);
//		bool isFirst = true;
//		for (int i = 0; i < 4; i++) {
//			sort(buf[i], buf[i] + num[i]);
//			for (int a = 0; a < num[i]; a++) {
//				if (isFirst)
//					isFirst = false;
//				else
//					printf("\n");
//				printf("%s %d %d", buf[i][a].ID, buf[i][a].virtue, buf[i][a].talent);
//			}
//		}
//	return 0;
//}