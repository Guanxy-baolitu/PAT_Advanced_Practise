//#include<stdio.h>
//#include<algorithm>
//#include<string>
//#include<iostream>
//
//using namespace std;
//
//struct P {
//	char name[9];
//	int height;
//	bool operator<(const P& b)const {
//		if (height != b.height)
//			return height > b.height;
//		else
//			return strcmp(name, b.name)<0;
//	}
//}stu[10001];
//
//int waitingLines[10][1000];
//
//int main() {
//	int n, k, m;
//	scanf("%d %d",&n, &k);
//	for (int i = 0; i < n; i++) {
//		scanf("%s %d", stu[i].name, &stu[i].height);
//	}
//	sort(stu, stu + n);
//	int t = 0,j;
//	int row = k;
//	while (row) {
//		if (row == k) {
//			m = n - n / k*(k - 1);
//		}
//		else {
//			m = n / k;
//		}
//		string * stmp = new string[m];
//		stmp[m / 2] = stu[t].name;
//		j = m / 2 - 1;
//		for (int i = t + 1; i < t + m; i += 2) {
//			stmp[j--] = stu[i].name;
//		}
//		j = m / 2 + 1;
//		for (int i = t + 2; i < t + m; i += 2) {
//			stmp[j++] = stu[i].name;
//		}
//		cout << stmp[0];
//		for (int i = 1; i < m; i++) {
//			cout << " " << stmp[i];
//		}
//		cout << endl;
//		t += m;
//		--row;
//		delete[] stmp;
//	}
//	return 0;
//}