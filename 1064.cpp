//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int n;
//vector<int> result;
//
//bool compareV = true;
//
//struct node {
//	int value;
//	int pos;
//	bool operator < (const node &b)const {
//		if (compareV)
//			return value < b.value;
//		else
//			return pos < b.pos;
//	}
//}num[1001];
//
//void getPos(int levOrder) {
//	if (levOrder > n)//首位是1，总数是n
//		return;
//	getPos(2 * levOrder);
//	result.push_back(levOrder);
//	getPos(2 * levOrder + 1);
//	return;
//}
//
//
//int main() {
//	scanf("%d",&n);
//	int pos = n;
//	while (pos != 0) {
//		scanf("%d",&(num[n-pos].value));
//		pos--;
//	}
//	sort(num, num + n);
//	compareV = false;
//	getPos(1);
//	for (int i = 0; i < n; i++)
//		num[i].pos = result[i];
//	sort(num, num + n);
//	bool isFirst = true;
//	while (pos < n) { 
//		if (isFirst)
//			isFirst = false;
//		else
//			printf(" ");
//		printf("%d",num[pos].value); 
//		pos++;
//	}
//	return 0;
//}