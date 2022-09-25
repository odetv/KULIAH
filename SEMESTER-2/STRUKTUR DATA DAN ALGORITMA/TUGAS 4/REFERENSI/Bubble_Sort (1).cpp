#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int validInt(int *var){
	char buff[1024];
	char check;
	if (fgets(buff, sizeof(buff), stdin) !=NULL) {
		if (sscanf(buff, "%d %c", var, &check) ==1){
			return 1;
		}
	}
	return 0;
}
void error(){
    printf("\nInput Invalid!\n");
}
void akhir(){
    int pilihan;
    printf("\n=====================================================================================================\n");
    printf("\nSilahkan pilih langkah yang ingin anda lakukan selanjutnya\n");
    printf(" 1. Kembali ke Menu Utama\n");
    printf(" 2. Keluar\n");
    printf("\nMasukkan pilihan: ");
    
        if(!validInt(&pilihan)){
            error();
        }else{
            if (pilihan == 1){
                main();
            }else if (pilihan == 2){
                cetakAkhir();
            }else{
                error();
            }
        }
}

void cetakAkhir(){
    system("clear");
    printf("-----------------------------------------------\n");
    printf("* TERIMA KASIH SUDAH MENGGUNAKAN PROGRAM KAMI *\n");
    printf("-----------------------------------------------\n");
    exit(0);
}

void seedArray(int arr[], int n){
    int i;
    srand(0);
    for (i = 0; i < n; i++){
        arr[i] = rand();
    }
}

void printArray(int arr[], int n){
    int i;
    for (i = 0; i < n; i++) {
        printf("\n-Angka ke-%d : %d", i, arr[i]);
    }
}

void dupArray(int source[], int target[], int n){
    int i;
    for (i = 0; i < n; i++){
        target[i] = source[i];
    }    
}

void bubbleSort(int arr[], int n){
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void swap(int * i1, int * i2){
    int temp = * i1;
    * i1 = * i2;
    * i2 = temp;
}

void bubbleSortPointer(int arr[], int n){
    int i, a;
    for (i = 0; i < n - 1; i++){
        int flag = 0;
        for (a = 0; a < n - 1 - i; a++){
            if (arr[a] > arr[a + 1]){
                swap( & arr[a], & arr[a + 1]);
                flag = 1;
            }
        }
        if (flag == 0){
            break;
        }
    }
}

float countBubbleSort(int arr[], int n){
    clock_t start = clock();
    bubbleSort(arr, n);
    clock_t end = clock();
    float detik = (float)(end - start) / CLOCKS_PER_SEC;
    return detik;
}

float countBubbleSortPointer(int arr[], int n){
    clock_t start = clock();
    bubbleSortPointer(arr, n);
    clock_t end = clock();
    float detik = (float)(end - start) / CLOCKS_PER_SEC;
    return detik;
}

int menu(){
    int pilihan, n;
    system("clear");
    printf("|==========[ MENU BUBBLE SORTING ]===========|\n");
    printf("|1. 1000 Angka                               |\n");
    printf("|2. 16000 Angka             	             |\n");
    printf("|3. 64000 Angka                              |\n");
    printf("|4. Keluar                                   |\n");
    printf("|============================================|\n");
    printf("\nMasukkan pilihan: ");
    
        if (!validInt(&pilihan)){
            error();
            sleep(1);
            system("clear");
            menu();
        }else{
            if (pilihan == 1){
                n = 1000;
            }else if (pilihan == 2){
                n = 16000;
            }else if (pilihan == 3){
                n = 64000;
            }else if (pilihan == 4){
            	system("clear");
                cetakAkhir();
                exit(0);
            }else{
                error();
                sleep(1);
                system("clear");
                menu();
            }
        }
        
    int arr[n];
    int arr2[n];
    seedArray(arr, n);
    printf("Array %d data random sebelum di sort :", n);
    printArray(arr, n);
	dupArray(arr, arr, n);
    dupArray(arr, arr2, n);

    float detik1 = countBubbleSortPointer(arr, n);
    float detik2 = countBubbleSort(arr2, n);
    printf("\n=====================================================================================================\n");
    printf("Array %d data random sesudah di sort :", n);
    printArray(arr, n);
    printf("\n=====================================================================================================\n");
    printf("\nWaktu Bubble Sort pointer : %f", detik1);
    printf("\nWaktu Bubble Sort tanpa pointer: %f\n", detik2);
    if (detik2 <= detik1) {
        printf("\nBubble Sort tanpa pointer yang paling cepat\n");
    } else {
        printf("\nBubble Sort pointer yang paling cepat\n");
    }
    akhir();
}

int main(){

    menu();

    return 0;
}
