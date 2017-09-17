//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//
//#define MAX_N 100000
//
//using namespace std;
//
//struct Node {
//	int id;
//	char name[9];
//	int grade;
//}Students[MAX_N];
//
//bool cmpC1(Node a, Node b) {
//	return a.id < b.id;
//}
//
//bool cmpC2(Node a, Node b) {
//	if (strcmp(a.name, b.name) != 0)
//	return (strcmp(a.name, b.name) < 0);
//	else
//		return a.id < b.id;
//}
//
//bool cmpC3(Node a, Node b) {
//	if(a.grade!=b.grade)
//	return a.grade < b.grade; else
//		return a.id < b.id;
//
//}
//
//int main() {
//	int n, c;
//	scanf("%d %d", &n, &c);
//	for (int i = 0; i < n; i++) {
//		scanf("%d %s %d", &Students[i].id, Students[i].name, &Students[i].grade);
//	}
//	switch (c) {
//	case 1:sort(Students, Students+n, cmpC1); break;
//	case 2:sort(Students, Students + n, cmpC2); break;
//	case 3:sort(Students, Students + n, cmpC3); break;
//	}
//	for (int i = 0; i < n; i++) {
//		printf("%06d %s %d\n", Students[i].id, Students[i].name, Students[i].grade);
//	}
//	return 0;
//}