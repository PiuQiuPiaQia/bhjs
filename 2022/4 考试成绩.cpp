#include <stdio.h>

struct Student {
	int id;
	char name[20];
	double score;
};

int main() {
	int N;
	scanf("%d", &N);
	struct Student stus[N];
	for (int i = 0; i < N; i++) {
		scanf("%d %s %lf", &stus[i].id, &stus[i].name, &stus[i].score);
	}


	for (int i = 0; i < N; i++) {
		printf("%d %s %.2f", stus[i].id, stus[i].name, stus[i].score);
	}
	
	
	

	return 0;
}
