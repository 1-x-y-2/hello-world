#include <stdio.h>

int main(void) {
	int rn, n;
	int gs;
	int cnt = 0;
	scanf("%d %d", &rn, &n);
	int i;
	int flag = 1;
	for (i = 0; i < n; i++) {
		scanf("%d", &gs);
		cnt++;
		if (gs < 0) {
			printf("Game Over\n");
			break;
		} else if (gs < rn) {
			printf("Too small\n");
		} else if (gs > rn) {
			printf("Too big\n");
		} else {
			flag = 0;
			if (cnt == 1) {
				printf("Bingo!\n");
			} else if (cnt <= 3) {
				printf("Lucky You!\n");
			} else {
				printf("Good Guess!\n");
			}
			break;
		}
	}
	if (i == n && flag) 
		printf("Game Over\n");
	return 0;
}
