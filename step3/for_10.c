// star 오른쪽부터
#include <stdio.h>


int main() {
	
	int n;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		for(int a = 0; a < n - i; a++) {
			printf(" ");
		}
		
		for(int a = 0; a < i;a++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}