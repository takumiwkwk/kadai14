#include <stdio.h>
struct students
{
	int student_no;
	char area[256];
	int old, exp, wage;
};

void student_view(struct students data[10]) {
	int i = 0;
	printf("学籍番号\t出身\t年齢\tアルバイト経験\t時給\n");
	do {
		printf("%d\t\t%s\t%d\t%d\t\t%d\n", data[i].student_no, data[i].area, data[i].old, data[i].exp, data[i].wage);
		i++;
	} while (data[i].student_no != 0);
}

int main() {
	struct students data[10];
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d番目のデータ\n", i+1);
		printf("学籍番号：");
		scanf("%d", &data[i].student_no);
		if (data[i].student_no == 0) {
			break; 
	}
		printf("出身：");
		scanf("%s", data[i].area);
		printf("年齢：");
		scanf("%d", &data[i].old);
		printf("アルバイト経験：");
		scanf("%d", &data[i].exp);
		printf("時給：");
		scanf("%d", &data[i].wage);
	}
	student_view(data);
	return 0;
}
