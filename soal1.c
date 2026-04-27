/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : Structures and Dynamic Array
 *   Hari dan Tanggal    : Senin, 27 April 2026
 *   Nama (NIM)          : Danny Rahmat Pratama (13224019)
 *   Nama File           : Soal1.c
 *   Deskripsi           : Membuat sensor badai
 * 
 */

 #include <stdio.h>
 #include <stdlib.h>
 #define SIZE_AWAL 100

// Code from Geeks for geeks
int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

 int main(){
    int* Array = (int*)malloc(SIZE_AWAL * sizeof(int));
    int input = 0;
    int idx = 0;
    float median = 0;
    while(input != -1){
        scanf("%d", &input);
        if(input == -1){
            break;
        }
        Array[idx] = input;
        idx++;
    }

    qsort(Array, idx, sizeof(Array[0]), comp);

    if(idx % 2 != 0){
        median = Array[((idx + 1) / 2) - 1];
    } else{ // 
        median = (((float)Array[(idx / 2) - 1] + (float)Array[(idx / 2)]) / 2);
    }

    printf("COUNT %d\n", idx);
    printf("SORTED ");
    for (int i = 0; i < idx; i++){
        printf("%d ", Array[i]);
    }
    printf("\nMEDIAN %.2f", median);

 }


