#include <stdio.h>

int main() {
    float score = 90.5; // Assigning afloat value to int variable

    printf("score = %.1f\n", score);

    return 0;
}
// ผลลัพธ์ที่ได้ต่างกัน 0.5
// เพื่อที่จะแสดงค่าถูกต้อง
// การเลือกData typeที่ถูกต้อง จะแสดงผลค่าที่ถูกต้อง