#include<stdio.h>
struct students {
	int students_no;
	char gakubu[256], gakka[256], name[256];
	int age;
};

int main() {
	struct students data[7];
	FILE* fp = fopen("kadai_data.txt", "r");
	for (int i = 0; i < 7; i++) {
		fscanf(fp, "%d %s %s %s %d", &data[i].students_no, data[i].gakubu, data[i].gakka, data[i].name, &data[i].age);
	}
	printf("学籍番号\t学部\t\t学科\t\t氏名\t\t年齢\n");
	for (int j = 0; j < 7; j++) {
		printf("%d\t\t%s\t%s\t%s\t%d\n", data[j].students_no, data[j].gakubu, data[j].gakka, data[j].name, data[j].age);
	}
	
	return 0;
}
