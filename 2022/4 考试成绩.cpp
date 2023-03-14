#include <string.h>
#include <stdio.h>

typedef struct {
  int id;
  char name[20];
  double score;
} Student;

Student sort(Student stus[], int n) {
  Student max;
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (stus[j].score < stus[j + 1].score) {
        max = stus[j];
        stus[j] = stus[j + 1];
        stus[j + 1] = max;
      } else if (stus[j].score == stus[j + 1].score) {
        if (strcmp(stus[j].name, stus[j + 1].name) < 0) {
          max = stus[j];
          stus[j] = stus[j + 1];
          stus[j + 1] = max;
        } else if (strcmp(stus[j].name, stus[j + 1].name) == 0) {
          if (stus[j].id < stus[j + 1].id) {
            max = stus[j];
            stus[j] = stus[j + 1];
            stus[j + 1] = max;
          }
        }
      }
    }
  }
  return *stus;
}
int main() {
  int N;
  scanf("%d", &N);
  Student stus[N];
  for (int i = 0; i < N; i++) {
    scanf("%d %s %lf", &stus[i].id, &stus[i].name, &stus[i].score);
  }

  *stus = sort(stus, N);

  for (int i = 0; i < N; i++) {
    printf("%d %d %s %.2f\n", i, stus[i].id, stus[i].name, stus[i].score);
  }

  return 0;
}
