#include <stdio.h>

void countCall() {
    int counter = 0;
    counter++;
    printf("Call Function Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first calls:\n");
    countCall();
    return 0;
}
// ผลลัพธ์ที่ได้ต่างกันเพราะVariableต่างกัน
// ค่าafter first callของnon staticมีค่าน้อยกว่าค่าของstatic
// ค่าafter first callของnon staticและstaticต่างกัน