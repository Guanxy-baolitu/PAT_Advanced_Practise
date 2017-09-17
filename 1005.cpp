//#include<stdio.h>
//#include<string>
//#include<stack>
//using namespace std;
//int main() {
//	char num[101];
//	scanf("%s",num);
//	string s = num;
//	int sum = 0,tmp=0;
//	for (int i = 0; i < s.size(); i++) {
//		tmp = s[i] - '0';
//		sum += tmp;
//	}
//	stack<int> S;
//	if (sum == 0) {
//		printf("zero");
//		return 0;
//	}
//	while (sum != 0) {
//		S.push(sum % 10);
//		sum /= 10;
//	}
//	int isFirst = true;
//	while(S.empty() == false) {
//		if (isFirst) isFirst = false;
//		else printf(" ");
//		switch (S.top()) {
//		case 1:printf("one"); break;
//		case 2:printf("two"); break;
//		case 3:printf("three"); break;
//		case 4:printf("four"); break;
//		case 5:printf("five"); break;
//		case 6:printf("six"); break;
//		case 7:printf("seven"); break;
//		case 8:printf("eight"); break;
//		case 9:printf("nine"); break;
//		case 0:printf("zero"); break;
//		}
//		S.pop();
//	}
//	return 0;
//}