//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<string>
//using namespace std;
//char highdic[13][5] = { "0","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
//char dic[13][5]= { "tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	char tmp[8];
//	int num;
//	int high, low;
//	getchar();
//	while (n != 0) {
//		num = 0;
//		high = low = 0;
//		gets_s(tmp,8);
//		string str = tmp;
//		if (tmp[0] >= '0'&&tmp[0] <= '9') {
//			num = atoi(tmp);
//			low = num % 13;
//			high = num / 13;
//			if (high != 0) {
//				if (low != 0) {
//					printf("%s ", highdic[high]);
//					printf("%s\n", dic[low]);
//				}
//				else
//					printf("%s", highdic[high]);
//			}
//			else
//				printf("%s\n", dic[low]);
//		}
//		else {
//			if (str.size() > 4) {//Á½Î»
//				for (int i = 0; i < 13; i++) {
//					if (highdic[i] == str.substr(0,3)) {
//						high = i;
//						str = str.substr(4);
//						break;
//					}
//				}
//			}
//			for (int i = 0; i < 13; i++) {
//				if (dic[i] == str) {
//					low = i;
//					break;
//				}
//				if (highdic[i] == str) {
//					high = i;
//					break;
//				}
//			}
//			printf("%d\n", high * 13 + low);
//		}
//		n--;
//	}
//	return 0;
//}