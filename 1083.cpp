//#include<stdio.h>
//#include<algorithm>
//#include<string>
//
//
//using namespace std;
//
//struct student {
//	char name[11];
//	char ID[11];
//	int grade;
//	bool operator <(const student& b)const {
//		return b.grade < grade;
//	}
//}buf[1000];
//
//int main() {
//	int n,pos=0;
//	scanf("%d",&n);
//	while (pos != n) {
//		scanf("%s %s %d", &buf[pos].name, &buf[pos].ID, &buf[pos].grade);
//		pos++;
//	}
//	sort(buf, buf + n);
//	int low, high;
//	scanf("%d %d",&low,&high);
//	bool has = false;
//	bool isFirst = true;
//	for (int i = 0; i < n; i++) {
//		if (buf[i].grade > high)
//			continue;
//		if (buf[i].grade < low)
//			break;
//		has = true;
//		if (isFirst)
//			isFirst = false;
//		else
//			printf("\n");
//		printf("%s %s",buf[i].name,buf[i].ID);
//	}
//	if (has == false)
//		printf("NONE");
//	return 0;
//}