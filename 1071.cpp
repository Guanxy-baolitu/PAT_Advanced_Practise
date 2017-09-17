//#include<stdio.h>
//#include<iostream>
//#include<string>
//#include<map>
//#include<limits.h>
//using namespace std;
//
//
//
//int main() {
//	string str;
//	getline(cin, str);
//	map<string,int> m;
//	int pos1=0;
//	string word;
//	int d = 'A' - 'a';
//	for (int i = 0; i < str.size(); i++) {
//		if (str[i] >= 'A'&&str[i] <= 'Z') {
//			str[i] -= d;
//			word += str[i];
//		}
//		else if (str[i] >= 'a'&&str[i] <= 'z') {
//			word += str[i];
//			continue;
//		}
//		else if (str[i] >= '0'&&str[i] <= '9') {
//			word += str[i];
//			continue;
//		}
//		else if(word!="") {
//			if (m.find(word) != m.end())
//				m[word] += 1;
//			else
//				m[word] = 1;
//			word.clear();
//		}
//		else
//			continue;
//	}
//	if (word != "") //注意最后一个测试点！不能因字符串停止而漏记！
//		if (m.find(word) != m.end())
//			m[word] += 1;
//		else
//			m[word] = 1;
//	int maxnum=INT_MIN;
//	string pattern;
//	for (auto it = m.begin(); it != m.end(); it++) {
//		if ((*it).second > maxnum) {
//			maxnum = (*it).second;
//			pattern = (*it).first;
//		}
//		if ((*it).second == maxnum) {
//			if ((*it).first < pattern)
//				pattern = (*it).first;
//		}
//	}
//	cout<<pattern << " " << maxnum;
//	return 0;
//}