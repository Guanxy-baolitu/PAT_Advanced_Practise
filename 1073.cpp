//#include<stdio.h>
//#include<string>
//#include<iostream>
//#include<ctype.h>
//#include<math.h>
//using namespace std;
//int main() {
//	string str;
//	getline(cin,str);
//	string body;
//	int ex;
//	if (str[0] == '-')
//		printf("-");
//	int end = str.find("E");
//	body = str.substr(1, end-1);
//	ex = atoi(str.substr(end+1).c_str());
//	if (ex == 0) cout << body;
//	else {
//		if (str[end + 1] == '-') {
//			printf("0.");
//		for (int i = 0; i < -ex-1; i++)
//			printf("0");
//		for (int i = 0; i < body.length(); i++)
//			if (body[i] == '.')
//				continue;
//			else
//				printf("%c", body[i]);
//		}
//		else {
//			int i;
//			for (i = 0; i < body.length(); i++){
//				if (i-2 == ex) 
//					printf(".");
//				if (body[i] == '.')
//					continue;
//				else
//					printf("%c", body[i]);
//			}
//			while (i < ex+2) {
//				printf("0");
//				i++;
//			}
//		}
//	}
//	return 0;
//}