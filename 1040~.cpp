//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//const int MAX_LENGTH = 1001;
//
//int dp[MAX_LENGTH][MAX_LENGTH];//表示从i开始到j结束的字符串是否为回文，是为1
//
//int main() {
//	string s;
//	getline(cin,s);
//	int ans = 1;
//	int length = s.length();
//	for(int i=0;i<length;i++){
//		dp[i][i] = 1;
//		if(i < length -1&&s[i]==s[i+1]) {
//			dp[i][i + 1] = 1;
//			ans = 2;
//		}
//	}
//	int tmpL = 3;
//	for (; tmpL <= length; tmpL++) {
//		for (int i = 0,j = i + tmpL - 1; j < length; i++) {
//			j = i + tmpL - 1;
//			if (s[i] == s[j]&&dp[i+1][j-1]==1) {
//				dp[i][j] = 1;
//				ans = tmpL;
//			}
//		}
//	}
//	printf("%d",ans);
//	return 0;
//}