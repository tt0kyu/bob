#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <arpa/inet.h> // 추가

uint32_t read_uint32_from_file(const char* file_path) {
    FILE *file;
    uint32_t num;

    file = fopen(file_path, "rb");
    if (file == NULL) {
        printf("파일 %s 열기에 실패했습니다.\n", file_path);
        exit(1);
    }
    fread(&num, sizeof(uint32_t), 1, file);
    fclose(file);
    return ntohl(num);
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Usage: %s <file1> <file2>\n", argv[0]); // 수정
        return 1;
    }

    uint32_t num1 = read_uint32_from_file(argv[1]);
    uint32_t num2 = read_uint32_from_file(argv[2]); // 수정
    uint32_t sum = num1 + num2;

    printf("%u(0x%x) + %u(0x%x) = %u(0x%x)\n", num1, num1, num2, num2, sum, sum);

    return 0;
}
