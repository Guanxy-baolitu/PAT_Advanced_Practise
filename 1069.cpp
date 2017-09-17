//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//int buf[4];
//int a, b;
//int twoN(int d) {
//	buf[0] = d % 10;
//	d /= 10;
//	buf[1] = d % 10;
//	d /= 10;
//	buf[2] = d % 10;
//	d /= 10;
//	buf[3] = d % 10;
//	sort(buf,buf+4);
//	b = buf[3] + buf[2]*10 + buf[1]*100 + buf[0]*1000;
//	a = buf[3] * 1000 + buf[2] * 100 + buf[1] * 10 + buf[0];
//	return a-b;
//}
//
//
//
//int main(){
//	int d;
//	scanf("%d", &d);
//	int sub=twoN(d);
//	while ( sub!= 0 && sub != 6174) {
//		printf("%04d - %04d = %04d\n", a, b, sub);
//		sub=twoN(sub);
//	}
//	printf("%04d - %04d = %04d", a, b, sub);
//	return 0;
//}