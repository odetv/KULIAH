#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void header(FILE *bmp, FILE *copy_bmp, unsigned int* width); //menyalin header bmp
void menu(); //pilihan menu program
bool cek(string fname); //mengecek file
unsigned char mergebit(char bmp, char text2bit); //memasukkan 2bit txt kedalam byte pixel
unsigned char merge4byte(unsigned char txt_byte[]); //menyatukan 2bit akhir dari 4 byte
void encode(string txt_file, string bmp_file); //memasukkan pesan kedalam pixel file bmp
void decode(string pesan_bmp); //membaca pesan yang tersembunyi pada file bmp
int pilih;

int main(){
    awal:
    menu();
    	switch(pilih){
            case 1:{
                char str[30];
                cout << "Nama file BMP (.bmp) : ";
                scanf("%s", str);
                string bmp_file(str);
                
                cout << "Nama file TXT (.txt) : ";
                scanf("%s", str);
                string txt_file(str);
                
                if (cek(bmp_file)){
                    if (cek(txt_file)){
                    encode(txt_file, bmp_file);
                    cout << "\nTekan ENTER untuk kembali ke menu...";
                    getch();
                    system("cls");
					goto awal;
                    }
                    else{
                        cout << "Maaf File "<< txt_file << " tidak ditemukan";
                        cout << "\n\nTekan ENTER untuk mengulang...";
                        getch();
                        system("cls");
                        goto awal;
                    }
                }
                else{
                    cout << "Maaf File " << bmp_file << " tidak ditemukan";
                    cout << "\n\nTekan ENTER untuk mengulang...";
                    getch();
                     system("cls");
                    goto awal;
                }
                break;
            }
            case 2:{
                char str[30];
                cout << "Nama file BMP (.bmp) : ";
                scanf("%s", str);
                string bmp_file(str);
                
                if (cek(bmp_file)){
                    cout << "Pesan Pada Gambar BMP :" << endl;
                    decode(bmp_file);
                    cout << "\n\nTekan ENTER untuk kembali ke menu...";
                    getch();
                    system("cls");
					goto awal;
                }
                else{
                    cout << "Maaf File " << bmp_file << " tidak ditemukan";
                    cout << "\n\nTekan ENTER untuk mengulang...";
                    getch();
                    system("cls");
                    goto awal;
                }
                break;
            }
            case 3:{
                system("cls");
				int exit;
				system("cls");
				cout << "Apakah Anda Yakin Keluar Dari Program Ini? (Y/N) : ";
				scanf ("%s", &exit);
				if(exit=='y'||exit=='Y')
				{
					system("cls");
					cout << "Terimakasih telah menggunakan program ini";
				}
				else
				{
					system("cls");
					goto awal;
				}
				return 0;
            }
            default:{
                cout << "Maaf perintah tidak valid!" << endl;
                cout << "\nTekan ENTER untuk kembali ke menu...";
                getch();
                system("cls");
				goto awal;
                break;
            }
        }
}

void header(FILE *bmp, FILE *copy_bmp, unsigned int* width){
    unsigned char data;
    for(int i = 0; i <18 ; i++){
        fread(&data, sizeof(char), 1, bmp);
        fwrite(&data, 1 , sizeof(char) , copy_bmp );
    }
    fread(width, sizeof(int), 1, bmp);
    fwrite(width, 1 , sizeof(int) , copy_bmp );
    for(int i = 0; i <32 ; i++){
        fread(&data, sizeof(char), 1, bmp);
        fwrite(&data, 1 , sizeof(char) , copy_bmp );
    }
}

void menu(){
    cout << "PERMASALAHAN MODUL KE-11\n";
	cout << "PROGRAM MEMBUAT STEGANOGRAPHY\n\n";
	cout << "PILIHAN MENU PROGRAM\n";
    cout << "1. Buat Pesan Rahasia (Encode)\n";
    cout << "2. Lihat Pesan Rahasia (Decode)\n";
    cout << "3. Keluar (Exit)\n\n";
    cout << "Masukkan Pilihan [1-3] : ";
    cin >> pilih;
}

bool cek(string fname){
    const char *filename = &fname[0];
    FILE *file;
    if (file = fopen(filename, "r")){
        fclose(file);
        return true;
    }
    else{
        return false;
    }
}

unsigned char mergebit(char bmp, char text2bit){
    unsigned char hasil_byte = 0;
    unsigned char uji_byte = 1;

    for(int i = 0; i < 2; i++){
        if ((text2bit & uji_byte) == uji_byte){
            hasil_byte += uji_byte;
        }
        uji_byte <<= 1;
    }
    for(int i = 0; i < 6; i++){
        if ((bmp & uji_byte) == uji_byte){
            hasil_byte += uji_byte;
        }
        uji_byte <<= 1;
    }
    return hasil_byte;
}

unsigned char merge4byte(unsigned char txt_byte[]){
    unsigned char tambah_byte = 1;
    unsigned char hasil_byte = 0;
    for (int i = 0 ; i < 4 ; i++){
        unsigned char uji = 1;
        if ((txt_byte[i] & uji) == uji){
            hasil_byte += tambah_byte;
        }
        uji <<= 1;
        tambah_byte <<= 1;
        if ((txt_byte[i] & uji) == uji){
            hasil_byte += tambah_byte;
        }
        tambah_byte <<= 1;
    }
    return hasil_byte;
}

void encode(string txt_file, string bmp_file){
    FILE *input_bmp, *input_text, *output_bmp;

    const char *file = &bmp_file[0];
    input_bmp = fopen(file, "rb");

    file = &txt_file[0];
    input_text = fopen(file, "rb");

    bmp_file = "Encode_"+bmp_file;
    file = &bmp_file[0];
    output_bmp = fopen(file, "wb");
    
    unsigned int width;
    unsigned char data;
    unsigned char padding;
    char data_text;
    header(input_bmp, output_bmp, &width);
    int padding_size = width % 4;
    unsigned char text2bit[width*3];
    bool text_left = true;
    int last_row;

    while (true){
        if (!(feof(input_text))){
            for (int i = 0 ; i < width*3; i += 4){
                fread(&data_text, sizeof(char), 1, input_text);
                if (feof(input_text)){
                    break;
                }
                unsigned char testbit = 1;
                for(int j = i ; j < 4 + i; j++ ){
                    unsigned char lastbit = 0;
                    if ((data_text & testbit) == testbit){
                        lastbit += 1;
                    }
                    testbit <<= 1;
                    if ((data_text & testbit) == testbit){
                        lastbit += 2;
                    }
                    testbit = testbit << 1;
                    text2bit[j] = lastbit;   
                    last_row = j; 
                }
            }
        }
        if (!(feof(input_bmp))){
            for (int i = 0 ; i < 3*width; i++){
                fread(&data, sizeof(char), 1, input_bmp);
                if (feof(input_bmp)){
                    break;
                }
                if  (text_left){
                    unsigned char write;
                    write = mergebit(data, text2bit[i]);
                    fwrite(&write, 1, sizeof(char),  output_bmp );
                    if (feof(input_text)&& i ==last_row){
                        text_left = false;
                        unsigned char ETX[4] = {3, 0, 0, 0};
                        for( int j = 0; j < 4; j++){
                            fread(&data, sizeof(char), 1, input_bmp);
                            write = mergebit(data, ETX[j]);
                        
                            fwrite(&write, 1, sizeof(char),  output_bmp );
                        }
                        i +=4;
                    }
                }
                else{
                    fwrite(&data, 1, sizeof(char), output_bmp);
                }
            }
            for(int i = 0; i< padding_size; i++){
                fread(&padding, sizeof(char), 1, input_bmp);
                fwrite(&padding, 1 ,sizeof(char),  output_bmp);
            }
        }
        else {
            break;
        }
    }
    fclose(input_bmp);
    fclose(input_text);
    fclose(output_bmp);
    cout << "BERHASIL" << endl;
    cout << "Hasil encode : " << bmp_file << endl;
}

void decode(string pesan_bmp){
    FILE *msg, *output_text;
    
    const char* file = &pesan_bmp[0];
    msg = fopen(file, "rb");
    
    pesan_bmp = "Decode_Teks.txt";
    file = &pesan_bmp[0];
    output_text = fopen(file, "w");
    
    unsigned char OneByteText[4];
    unsigned int width;
    bool text_left = true;
    
    FILE *tmp_header = fopen("tmp","w");
    header(msg, tmp_header, &width);
    fclose(tmp_header);
    remove("tmp");
    int padding_size = width % 4;
    char padding ;

    while((!feof(msg) )&& (text_left)){
        for (int i = 0; i < width*3; i += 4){
            for (int j = 0; j < 4; j++ ){
                fread(&OneByteText[j], 1, sizeof(char), msg);
            }
            unsigned char write = merge4byte(OneByteText);
            if (write == 3){
                text_left = false;
                break;
            }
            if (write == 13){
                continue;
            }
            cout<<write;
            fwrite(&write, sizeof(char), 1, output_text);
        }
        for(int i = 0; i < padding_size; i++ ){
            fread(&padding, 1, sizeof(char), msg);
        }
    }
    fclose(msg);
    fclose(output_text);
}