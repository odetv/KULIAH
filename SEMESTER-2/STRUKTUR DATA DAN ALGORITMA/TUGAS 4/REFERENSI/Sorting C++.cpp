#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int validInt(int *var);
void cetak_arr(int arr[], int n);
void salin_arr(int asal[], int target[], int n);
void seedArray(int arr[], int n);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void insertionSort(int arr[], int n);
void bubbleSort(int arr[], int n);
void pilihanMenu ();
int Sorting();
double binarySearch(int arr[], int low, int high, int angkaDicari);
int Searching();
void error();
void printQuit();
void quit();


int main() {
    int pilihan;
    system("cls");
    printf("|===================================================|\n");
    printf("|            PROGRAM SORTING AND SEARCHING          |\n");
    printf("|        PRAKTIKUM ALGORITMA PEMROGRAMAN MODUL 3    |\n");
    printf("|                    KELOMPOK 06                    |\n");
    printf("|===================================================|\n");
    printf("|PILIHAN MENU :                                     |\n");
    printf("|1. Sorting                                         |\n");
    printf("|2. Searching                                       |\n");
    printf("|3. Keluar                                          |\n");
    printf("|===================================================|\n");
	printf("\nMasukkan pilihan: ");
    if(!validInt(&pilihan)){
		error();
		sleep(1);
		main();
  	}else{
        if (pilihan == 1){
            Sorting();
        }else if (pilihan == 2){
            Searching();
        }else if (pilihan == 3){
            printQuit();
			exit(0);
        }else {
        	error();
            sleep(1);
            main();
        }
    }
}


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

void cetak_arr(int arr[], int n){
    int i;
    for (i = 0; i < n; i++) {
        printf("-Angka ke-%d : %d", i, arr[i]);
        printf("\n");
    }
}

void salin_arr(int asal[], int target[], int n){
    int i;
    for (i = 0; i < n; i++){
        target[i] = asal[i];
    }
}

void seedArray(int arr[], int n){
    int i;
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 1000;
        arr[i] = rand() % 1000;
    }
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int temp;
    int i = (low - 1);
    int j;
    for (j = low; j <= high - 1; j++){
        if (arr[j] <= pivot){
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high){
    int pi = partition(arr, low, high);
    if (low < high){
        pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void insertionSort(int arr[], int n){
    int i, j, key;

    for (i = 1; i < n; i++){
        key = arr[i];

        j = i - 1;

        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void bubbleSort(int arr[], int n){
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void pilihanMenu (){
	printf("| Pilihan Menu :                        |\n");
    printf("|---------------------------------------|\n");
    printf("|1. 1000 data                           |\n");
    printf("|2. 16000 data                          |\n");
    printf("|3. 64000 data                          |\n");
    printf("|4. Kembali                             |\n");
    printf("|5. Keluar                              |\n");
    printf("|---------------------------------------|\n");
}

int Sorting(){
    clock_t waktu;
    double detik1, detik2, detik3;
    int i, n, pilihan;

    system("cls");
    printf("|=======================================|\n");
    printf("|               MENU SORTING            |\n");
    printf("|=======================================|\n");
	pilihanMenu();
    printf("\nMasukkan pilihan: ");
    if(!validInt(&pilihan)){
		error();
		sleep(1);
		Sorting();
    } else {
        if (pilihan == 1){
            n = 1000;
        }else if (pilihan == 2){
            n = 16000;
        }else if (pilihan == 3) {
            n = 64000;
        }else if (pilihan == 4) {
        	main();
        } else if (pilihan == 5) {
        	printQuit();
            return 0;
        } else {
            error();
            sleep(1);
            system("cls");
            Sorting();
        }
    }

    int arr1[n];
    int arr2[n];
    int arr3[n];
    //Mencetak Bilangan Random
    seedArray(arr1, n);
    printf("\nArray %d data random sebelum di sort :\n", n);
    cetak_arr(arr1, n);
	salin_arr(arr1, arr2, n);
	salin_arr(arr1, arr3, n);

    //Insertion Sort
    waktu = clock();
    insertionSort(arr1, n);
    waktu = clock() - waktu;
    detik1 = (double)(waktu) / CLOCKS_PER_SEC;

    //Bubble Sort
    waktu = clock();
    bubbleSort(arr2, n);
    waktu = clock() - waktu;
    detik2 = (double)(waktu) / CLOCKS_PER_SEC;

    //Quick Sort
    waktu = clock();
    quickSort(arr3, 0, n - 1);
    waktu = clock() - waktu;
    detik3 = (double)(waktu) / CLOCKS_PER_SEC;

    printf("\n==================================================================================");
    printf("\nArray %d data random sesudah di sort :\n", n);
    cetak_arr(arr1, n);
    printf("\n==================================================================================");
    printf("\n\nPerbandingan Waktu:");
    printf("\n\nInsertion Sort Membutuhkan %f Detik Untuk Mensortir Data\n", detik1);
    printf("Bubble Sort Membutuhkan %f Detik Untuk Mensortir Data\n", detik2);
    printf("Quick Sort Membutuhkan %f Detik Untuk Mensortir Data\n", detik3);
    if (detik1 <= detik2 && detik1 <= detik3){
        printf("\nInsertion sort yang paling cepat\n");
    }else if (detik2 <= detik1 && detik1 <= detik3){
        printf("\nBubble sort yang paling cepat\n");
    }else{
        printf("\nQuick sort yang paling cepat\n");
    }
    quit();
}

double sequentialSearch(int arr[], int n, int angkaDicari){
    clock_t waktu;
    double detik;
    int i, counter = 0;

    waktu = clock();
    for (i = 0; i < n; i++){
        if (arr[i] == angkaDicari){
            counter++;
        }
        printf("-Angka ke-%d : %d", i, arr[i]);
        printf("\n");
    }
    waktu = clock() - waktu;
    detik = (double)(waktu) / CLOCKS_PER_SEC;
    if (counter == 0){
        printf("\n==================================================================================\n");
        printf("\nTidak Ada Angka Yang Sesuai, pada sequential search!");
    }else{
        int indexAngkaDicari[counter];
        counter = 0;

        for (i = 0; i < n; i++){
            if (arr[i] == angkaDicari){
                indexAngkaDicari[counter] = i;
                counter++;
            }
        }
        printf("\n==================================================================================");
        printf("\n\nAngka Ditemukan Pada Index sequential search: ");
        for (i = 0; i < counter; i++) {
            if (i == 0 && i == counter - 1){
                printf(" %d", indexAngkaDicari[i]);
            }else{
                if (i == counter - 1){
                    printf(" dan %d.", indexAngkaDicari[i]);
                }else{
                    printf(" %d,", indexAngkaDicari[i]);
                }
            }
        }
    }
    return detik;
}

double binarySearch(int arr[], int low, int high, int angkaDicari){
    clock_t waktu;
    double detik;
    int i, counter = 0;

    waktu = clock();
    while (low <= high){
        int mid = low + (high - low) / 2;

        if (arr[mid] == angkaDicari){
            counter++;
            for (i = mid + 1; i < high + 1 && arr[i] == angkaDicari; i++){
                counter++;
            }
            for (i = mid - 1; i < high + 1 && arr[i] == angkaDicari; i++){
                counter++;
            }
            break;
        }else if (arr[mid] > angkaDicari){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    waktu = clock() - waktu;
    detik = (double)(waktu) / CLOCKS_PER_SEC;

    if (counter == 0){
        printf("\n\nTidak Ada Angka Yang Sesuai pada binary search!");
    }else{
        int indexAngkaDicari[counter];
        counter = 0;

        while (low <= high){
            int mid = low + (high - low) / 2;

            if (arr[mid] == angkaDicari){
                indexAngkaDicari[counter] = mid;
                counter++;
                for (i = mid + 1; i < high + 1 && arr[i] == angkaDicari; i++){
                    indexAngkaDicari[counter] = i;
                    counter++;
                }
                for (i = mid - 1; i > 0 && arr[i] == angkaDicari; i--){
                    indexAngkaDicari[counter] = i;
                    counter++;
                }
                break;
            }else if (arr[mid] > angkaDicari){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        printf("\n\nAngka Ditemukan Pada Index, binary search: ");
        bubbleSort(indexAngkaDicari, counter);
        for (i = 0; i < counter; i++){
            if (i == 0 && i == counter - 1){
                printf(" %d.", indexAngkaDicari[i]);
            }else{
                if (i == counter - 1){
                    printf(" dan %d.", indexAngkaDicari[i]);
                }else{
                    printf(" %d,", indexAngkaDicari[i]);
                }
            }
        }
    }
    return detik;
}

int Searching(){
    clock_t waktu;
    double detik1, detik2;
    int i, n;
    int menu, angkaDicari, pilihan;

    system("cls");
    printf("|=======================================|\n");
    printf("|             MENU SEARCHING            |\n");
    printf("|=======================================|\n");
    pilihanMenu();
    printf("\nMasukkan pilihan: ");
    if(!validInt(&pilihan)){
		error();
		sleep(1);
		Searching();
  	}else{
    	if (pilihan == 1){
            n = 1000;
        }else if (pilihan == 2){
            n = 16000;
        }else if (pilihan == 3){
  	        n = 64000;
    	}else if (pilihan == 4){
            main();
        }else if (pilihan == 5){
        	printQuit();
            return 0;
        }else{
            error();
            sleep(1);
            system("cls");
            Searching();
        }
    }

    int arr1[n];
    int arr2[n];
    seedArray(arr1, n);
    cetak_arr(arr1, n);

        printf("\nMasukkan Angka Yang Ingin Dicari: ");
    	if(!validInt(&angkaDicari)){
			error();
			sleep(1);
			Searching();
  		} else {
            if (angkaDicari < 0) {
                printf("Inputan tidak boleh dibawah '0'");
            } else {
            }
        }

    system("cls");

    bubbleSort(arr1, n);
    detik1 = sequentialSearch(arr1, n, angkaDicari);
    detik2 = binarySearch(arr1, 0, n - 1, angkaDicari);

    printf("\n\n==================================================================================");
    printf("\n\nPerbandingan Waktu: \n");
    printf("\nSequential Search Membutuhkan %f Detik Untuk Mencari Data", detik1);
    printf("\nBinary Search Membutuhkan %f Detik Untuk Mencari Data\n", detik2);
    if (detik1 <= detik2) {
        printf("Maka Pada Pencarian Kali Ini, Sequential Search Lebih Cepat Dari Binary Search\n");
    } else {
        printf("Maka Pada Pencarian Kali Ini, Binary Search Lebih Cepat Dari Sequential Search\n");
    }

    quit();
}

void error(){
	printf("\nInput Invalid!\n");
}

void printQuit(){
    system("cls");
    printf("-----------------------------------------------\n");
    printf("| TERIMA KASIH SUDAH MENGGUNAKAN PROGRAM KAMI |\n");
    printf("-----------------------------------------------\n");
}

void quit(){
    int pilihan;
    printf("\n==================================================================================\n");
    printf("\nSilahkan pilih langkah yang ingin anda lakukan selanjutnya\n");
    printf(" 1. Kembali ke Menu Utama\n");
    printf(" 2. Keluar\n");
    printf("\nMasukkan pilihan: ");
    if(!validInt(&pilihan)){
		error();
		sleep(1);
		quit();
  	} else {
        if (pilihan == 1) {
            main();
        } else if (pilihan == 2) {
            printQuit();
        } else {
            error();
            sleep(1);
            system("cls");
            quit();
        }
    }
}


