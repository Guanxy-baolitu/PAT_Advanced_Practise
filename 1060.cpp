//#include<stdio.h>
//#include<iostream>
//#include<string>
//#include<math.h>
//#include <sstream>
//
//using namespace std;
//
//string turnToStardard(const string& str, const int& n) {
//	int i = 0;
//	int cnt = 0;
//	bool flag = false;
//	string result = "0.";
//	if (atof(str.c_str()) == 0) {
//		while (i < n) {
//			result += "0";
//			i++;
//		}
//		return result+"*10^0";
//	}
//	while (str[i] == '0') {
//		i++;
//	}
//	if (str[i] == '.') {
//		i++;
//		flag = true;
//		while (str[i] == '0') {
//			i++;
//			cnt--;
//		}
//	}
//	int valid = 0;
//	bool pointed = false;
//	while (i < str.size()) {
//		if (valid < n) {
//			valid++;
//			stringstream stream;
//			stream << str[i];
//			result += stream.str();
//		}
//		if (!flag && !pointed) cnt++;
//		i++;
//		if (str[i] == '.') {
//			pointed = true;
//			i++;
//		}
//	}
//		result += "*10^";
//		result += to_string(cnt);
//	return result;
//}
//
//int main() {
//	string a, b;
//	int n;
//	cin >> n >> a >> b;
//	string stda = turnToStardard(a, n);
//	string stdb = turnToStardard(b, n);
//	if (stda == stdb) {
//		cout << "YES " << stda << endl;
//	}
//	else {
//		cout << "NO " << stda << " "<< stdb << endl;
//	}
//	return 0;
//}