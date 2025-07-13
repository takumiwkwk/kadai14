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
	do{
		printf("%d\t\t%s\t%d\t%d\t\t%d\n", data[i].student_no, data[i].area, data[i].old, data[i].exp, data[i].wage);
		i++;
	} while (data[i].student_no != 0);
}

int main() {
	struct students data[10] = {
		{1835101,"長野",21,15,800},
		{1835406,"広島",22,20,800 },
		{1835407,"福岡",18,6,790},
		{1835609,"大阪",19,4,890},
		{1835610,"秋田",19,16,1100},
		{0,"a",0,0,0}
	};
	student_view(data);
	return 0;
}
