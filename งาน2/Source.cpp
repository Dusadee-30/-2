#include<Stdio.h>
int main()
{
	int n;
	int num[100];
	int maxnumber, minnumber;
	printf("input number of elements to be stored in the array : ");
	scanf_s("%d", &n);
	for (int i = 1;i <= n;i++) {
		printf(" %d. number : ",i);
		scanf_s("%d", &num[i]);
	}
	maxnumber = num[1];
	minnumber = num[1];
	for (int i = 1; i <= n;i++) {
		if (num[i] > maxnumber) {
			maxnumber = num[i];
		}
		else if (num[i] < minnumber) {
			minnumber = num[i];
		}
	}
	printf("max number = %d\n", maxnumber);
	printf("min number = %d", minnumber);
	return 0;
}