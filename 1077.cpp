//#include<stdio.h>
//#include<algorithm>
//#include<string>
//#include<iostream>
//using namespace std;
//
//string sentence[1001];
//int n;
//bool isK(int pos) {
//	char toCheck = sentence[0][pos];
//	int i;
//	for ( i= 1; i < n; i++) {
//		if (sentence[i][pos]!=toCheck)
//			break;
//	}
//	if (i == n)return true;
//	else
//		return false;
//}
//int main() {
//	scanf("%d", &n);
//	getchar();
//	for (int i = 0; i < n; i++) {
//		getline(cin, sentence[i]);
//		reverse(sentence[i].begin(), sentence[i].end());
//	}
//	int pos = 1;
//	while (isK(pos))
//		pos++;
//	if(pos==1)
//		cout << "nai";
//	else {
//		string ans = sentence[0].substr(0, pos);
//		reverse(ans.begin(), ans.end());
//		cout << ans;
//	}
//	return 0;
//}