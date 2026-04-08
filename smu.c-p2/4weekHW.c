#include <stdio.h>

int encodingRLE(unsigned char* src, int size, unsigned char* dest) {
    if (size <= 0) return 0;
    int dest_idx = 0;
    for (int i = 0; i < size; ) {
        unsigned char current_val = src[i];
        int count = 0;
        while (i < size && src[i] == current_val && count < 255) {
            count++;
            i++;
        }
        dest[dest_idx++] = (unsigned char)count;
        dest[dest_idx++] = current_val;
    }
    return dest_idx;
}

int decodingRLE(unsigned char* src, int size, unsigned char* dest) {
    int dest_idx = 0;
    for (int i = 0; i < size; i += 2) {
        int count = src[i];
        unsigned char value = src[i + 1];
        for (int j = 0; j < count; j++) {
            dest[dest_idx++] = value;
        }
    }
    return dest_idx;
}

void printArray(unsigned char* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%02X ", arr[i]);
    }
    printf("\n");
}

int main() {
    unsigned char data[] = { 0xFF, 0x00, 0x3C, 0x3C, 0x3C, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x1E, 0x1E, 0x3B, 0x3B, 0x3B };
    unsigned char data2[] = { 0xFF, 0x00, 0x3C, 0x4F, 0x3C, 0xFF, 0x0F, 0x1F, 0xFF, 0xDF, 0x1E, 0x1D, 0x3C, 0x2B, 0x3B };
    unsigned char data3[] = { 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C, 0x1F, 0x1F, 0x1F, 0x1E, 0x1D, 0x1D, 0x1D, 0x1D };

    unsigned char* datasets[] = { data, data2, data3 };
    int sizes[] = { sizeof(data), sizeof(data2), sizeof(data3) };
    unsigned char dest[256];
    unsigned char decoded[256];

    for (int i = 0; i < 3; i++) {
        printf("--- Data %d ---\n", i + 1);
        
        int comp_len = encodingRLE(datasets[i], sizes[i], dest);
        printf("Encoded: ");
        printArray(dest, comp_len);

        int decomp_len = decodingRLE(dest, comp_len, decoded);
        printf("Decoded: ");
        printArray(decoded, decomp_len);
        printf("\n");
    }

    return 0;
}