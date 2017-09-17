//#include<stdio.h>
//#include<string.h>
//
//int main() {
//	int n, count = 0;
//	scanf("%d", &n);
//	char a[50], b[50];
//	double temp, sum = 0;
//	for (int i = 0; i < n; i++) {
//		scanf("%s", a);
//		sscanf(a, "%lf", &temp);
//		sprintf(b, "%.2lf", temp);
//	
//	bool flag = 0;
//	for (int j = 0; j < strlen(a); j++) {
//		if (a[j] != b[j]) {
//			flag = true;
//		}
//	}
//	if (flag || temp < -1000 || temp>1000) {
//		printf("ERROR: %s is not a legal number\n", a);
//		continue;
//	}
//	else {
//		sum += temp;
//		count++;
//	}
//	}
//	if (count == 1) {
//		printf("The average of 1 number is %.2lf", sum);
//	}
//	else if (count > 1) {
//		printf("The average of %d numbers is %.2lf", count, sum / count);
//	}
//	else {
//		printf("The average of 0 numbers is Undefined");
//	}
//
//	return 0;
//}