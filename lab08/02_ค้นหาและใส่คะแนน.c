/*
จงเติมโค้ดเพื่อให้โปรแกรมสามารถทำงานได้อย่างสมบูรณ์ โดยที่ฟังก์ชัน int charcount(char *s) จะนับจำนวนอักขระที่ปรากฏอยู่ในสายอักษรที่ส่งผ่านเข้ามาในฟังก์ชันตั้งแต่อักขระตัวแรกจนถึงอักขระตัวสุดท้ายก่อนหน้าอักขระนัลล์ (null character)
ส่วนฟังก์ชัน void charweave(char *s,char *result) จะถักอักขระโดยเก็บผลลัพธ์ของการถักนี้ไว้ในตัวแปร result การถักอักขระมีลักษณะดังนี้ สมมติให้ตัวแปร s มีอักขระอยู่ n ตัวและรูปแบบการเรียงของอักขระเป็น C1C2C3C4...Cn ดังนั้นผลลัพธ์ที่ได้จากถักจะมีลักษณะเป็น C1CnC2Cn-1C3Cn-2C4Cn-3...Cn-1C2CnC1
Output 1:
    String: hello, world
    Output: hdellrloow,  ,woolrlledh
Output 2:
    String: 12345
    Output: 1524334251
*/
#include <stdio.h>
#include <string.h>

typedef struct {
    char id[12];
    int score;

} studentRecord;

void init(studentRecord list[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        strcpy(list[i].id, 5510000+(i+1));
        list[i].score = 0;
    }
}

void enterScore(studentRecord list[], int size){
    int i;
    for (i = 0; i < size; i++) {
        printf("Enter score for student %s: ", list[i].id);
        scanf("%d", &list[i].score);
    }

}

void printRecords(studentRecord list[], int size) {
	int i;

	printf("   ID        Score\n");
	for (i = 0; i < size; i++) {
		printf("%s       %d\n", list[i].id, list[i].score);
	}
}




int main() {
	int enter;
	studentRecord list[3];

	init(list, 3);
        enterScore(list, 3);
	printRecords(list, 3);
	return 0;
}