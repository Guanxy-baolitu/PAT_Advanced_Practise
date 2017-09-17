//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//string addPali(string a) {
//	string b = a;
//	reverse(b.begin(), b.end());
//	int len = b.length(), carry = 0;
//	for (int i = 0; i < len; i++) {
//		a[i] = a[i] + b[i] + carry - '0';
//		carry = 0;
//		if (a[i] > '9') {
//			a[i] = a[i] - 10;
//			carry=1;
//		}
//	}
//	if (carry) a += '1';
//	reverse(a.begin(), a.end());
//	return a;
//}
//
//bool isPali(string a) {
//	string b = a;
//	reverse(b.begin(), b.end());
//	if (a == b)
//		return true;
//	return false;
//}
//
//int main() {
//	int k;
//	char s[11];
//	scanf("%s%d",s,&k);
//	string a = s;
//	int count = 0;
//	while (!isPali(a) && count < k) {
//		a = addPali(a);
//		count++;
//	}
//	cout << a << endl << count;
//}