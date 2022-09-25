#include <cstdio>
#include <conio.h>
#include <string.h>
 

int main()
{
    FILE* file = fopen("Database Mahasiswa.csv", "r");
 
    if (!file)
    {
    	printf("Belum Ada File Tersimpan\n\n");
	}
 
    else
	{
        char buffer[1024];
        int row = 1;
        int column = 0;
 
        while (fgets(buffer, 1024, file))
		{
            column = 0;
            row++;

            if(row == 1)
                continue;

            char* value = strtok(buffer, ", ");
 
            while (value) {
                if (column == 0) {
                    printf("NIM \t\t:");
                }

                if (column == 1) {
                    printf("\nNama \t\t:");
                }

                if (column == 2) {
                    printf("\nJenis Kelamin \t:");
                }
                
                if (column == 3) {
                    printf("\nTahun Masuk \t:");
                }
                
                if (column == 4) {
                    printf("\nTahun Lahir \t:");
                }
                
                if (column == 5) {
                    printf("\nIPK \t\t:");
                }
 
                printf("%s", value);
                value = strtok(NULL, ",");
                column++;
            }
            printf("\n");
        }
        fclose(file);
    }
    return 0;
}