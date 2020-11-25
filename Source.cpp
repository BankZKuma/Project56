#include<stdio.h>
const int N = 5;
bool isPrime(int n) {
	if (n < 2)
		return false;
	else
		for (int i = 2; i < n; i++) {
			if (n % i == 0)
				return false;
		}
	return true;
}
const  char* yes() {
	return "isPrime";
}
const char* no() {
	return "isnotPtime";
}
int main() {
	int arr[N];
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < N; i++) {
		if (isPrime(arr[i]))
		{
			printf("%d = ", arr[i]);
			printf(yes());
			printf("\n");
		}
		else
		{
			printf("%d = ", arr[i]);
			printf(no());
			printf("\n");
		}
	}

} 