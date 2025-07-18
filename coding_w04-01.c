#include <stdio.h>

int main() {
    // ANSI escape codes:
    // \033[ = เริ่มต้นรหัส
    // 35m = สีชมพู (Magenta)
    // 33m = สีส้ม (Yellow/Orange)
    // 36m = สีฟ้า (Cyan)
    // 0m = รีเซ็ตสี

    printf("\033[35mHello,\n");  // ชมพู
    printf("\033[33mC ");  // ส้ม
    printf("\033[35mTokens");  // ชมพู
    printf("\033[36m!\033[0m\n");  // ฟ้า + รีเซ็ตสี

    return 0;
    // บรรทัดที่ 3และ16 คือ keyword
    // บรรทัดที่ 3 คือ identifiers
    // บรรทัดที่ 11ถึง14 คือ constants
    // บรรทัดที่ 5ถึง9 คือ operators
}