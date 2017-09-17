//#include<stdio.h>
//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//#include<set>
//#define N 10001
//
//using namespace std;
//
//
//int id;
//string title;
//string author;
//string keyword;
//string publisher;
//string year;
//
//map<string, set<int>> titM, authM, keywM, pubM, yearM;
//
//void query(map<string, set<int>> &m, string& str) {
//	if (m.find(str) != m.end()) {
//		for (auto it = m[str].begin(); it != m[str].end(); ++it) {
//			printf("%07d\n", *it);
//		}
//	}
//	else {
//		cout << "Not Found\n";
//	}
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &id);
//		getchar();
//		getline(cin, title);
//		titM[title].insert(id);
//		getline(cin, author);
//		authM[author].insert(id);
//		while (cin >> keyword) {
//			keywM[keyword].insert(id);
//			char c = getchar();
//			if (c == '\n') break;
//		}
//		getline(cin, publisher);
//		pubM[publisher].insert(id);
//		getline(cin, year);
//		yearM[year].insert(id);
//	}
//	int m, num;
//	scanf("%d", &m);
//	for (int i = 0; i < m; ++i) {
//		scanf("%d: ", &num);
//		string tmp;
//		getline(cin, tmp);
//		cout << num << ": " << tmp << endl;
//		switch (num) {
//		case 1:query(titM, tmp); break;
//		case 2:query(authM, tmp); break;
//		case 3:query(keywM, tmp); break;
//		case 4:query(pubM, tmp); break;
//		case 5:query(yearM, tmp); break;
//		}
//	}
//	return 0;
//}