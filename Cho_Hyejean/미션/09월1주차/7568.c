#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int n;
	scanf("%d", &n);
	int x[200] = { 0 }, y[200] = { 0 }, rank[200] = { 0 };

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x[i], &y[i]);
		rank[i] = 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (x[i] < x[j] && y[i] < y[j])
				rank[i]++;			
		}
		printf("%d ", rank[i]);
	}
}
