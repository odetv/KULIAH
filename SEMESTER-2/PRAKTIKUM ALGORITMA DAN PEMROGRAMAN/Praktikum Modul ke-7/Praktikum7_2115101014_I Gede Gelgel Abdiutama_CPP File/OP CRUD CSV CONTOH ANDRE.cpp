#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>

using namespace std;

struct student
{
    char idNumber[11];
    char name[51];
    char gender[7];
    char year[5];
    char enteredYear[5];
    char PI[5];
};
student limit[100];

int a, operation, dataLength;
char w;

FILE* file;

void insertData(){
    system("clear");
    int dataLength;

    file = fopen("Database Mahasiswa.csv", "a");

    cout << "How many data you want to insert? : ";
    cin >> dataLength;

    for (int i = 0; i < dataLength; i++)
    {
        cout << "Student number : " << i + 1 << endl;
        insert:
        cout << "Student ID \t: ";
        cin >> limit[a].idNumber;
        for (int i = 0; i < a; i++)
        {
            if (strcmp(limit[i].idNumber, limit[a].idNumber) == 0)
            {
                cout << "Student id already exist. Please try again" << endl;
                goto insert;
            }
        }
        cout << "Name \t\t: ";
        cin >> limit[a].name;
        cout << "Gender \t\t: ";
        cin >> limit[a].gender;
        printf("Birth Year \t: ");
        cin >> limit[a].year;
        cout << "Entered Year \t: ";
        cin >> limit[a].enteredYear;
        cout << "PI \t\t: ";
        cin >> limit[a].PI;
        cout << endl;

        fprintf(file, "%s,%s,%s,%s,%s,%s\n", limit[a].idNumber, limit[a].name, limit[a].gender, limit[a].year, limit[a].enteredYear, limit[a].PI);
        a++;
    }
    fclose(file);
}

void displayData(){
    system("clear");
    cout << "Students data : " << endl;
    for (int i = 0; i < a; i++)
    {
        cout << "No. \t\t: " << i + 1 << endl;
        cout << "Student ID \t: " << limit[i].idNumber << endl;
        cout << "Name \t\t: " << limit[i].name << endl;
        cout << "Gender \t\t: " << limit[i].gender << endl;
        cout << "Birthdate \t: " << limit[i].year << endl;
        cout << "Admission year \t: " << limit[i].enteredYear << endl;
        cout << "GPA \t\t: " << limit[i].PI << endl;
        cout << endl;
    }
}

void deleteData(){
    system("clear");
    char id[11];
    int x = 0;
    cout << "Insert student ID you want to delete : ";
    cin >> id;

    for (int i = 0; i < a; i++)
    {
        x++;
        system("clear");
        if (strcmp(limit[i].idNumber, id) == 0)
        {
            a--;
            for (int j = x; i < a; i++)
            {
                limit[i] = limit[i + 1];

            }

            file = fopen("Database Mahasiswa.csv", "w");
            for (i = 0; i < a; i++)
            {
                fprintf(file, "%s,%s,%s,%s,%s,%s\n", limit[a].idNumber, limit[a].name, limit[a].gender, limit[a].year, limit[a].enteredYear, limit[a].PI);
            }
            fclose(file);
            
        }
        else
        {
            cout << "Student ID is not exist. Please input the correct ID." << endl;
        }

        
        
    }
    return;
}

void editData(){
    system("clear");
    char id[11];
    cout << "Insert student ID you want to edit : ";
    cin >> id;

    for (int i = 0; i < a; i++)
    {
        system("clear");
        if (strcmp(limit[i].idNumber, id) == 0)
        {
            cout << endl << "Student number : " << i + 1 << endl;
            cout << "Student ID \t: ";
            cin >> limit[i].idNumber;
            cout << "Name \t\t: ";
            cin >> limit[i].name;
            cout << "Gender \t\t: ";
            cin >> limit[i].gender;
            cout << "Birthdate \t: ";
            cin >> limit[i].year;
            cout << "Admission Year \t: ";
            cin >> limit[i].enteredYear;
            cout << "GPA \t\t: ";
            cin >> limit[i].PI;

            file = fopen("Database Mahasiswa.csv", "w");
            for (int i = 0; i < a; i++)
            {
                fprintf(file, "%s,%s,%s,%s,%s,%s\n", limit[a].idNumber, limit[a].name, limit[a].gender, limit[a].year, limit[a].enteredYear, limit[a].PI);
            }
            fclose(file);
            
            return;
        }
        else
        {
            cout << "Student ID is not exist. Please input the correct ID." << endl;
        }
    }
}

void searchData(){
    system("clear");
    char id[11];
search:
    cout << "Insert student ID you want to search: ";
    cin >> id;
    cout << endl << endl;

    for (int i = 0; i < a; i++)
    {
        if (strcmp(limit[i].idNumber, id) == 0)
        {
            cout << "Data has found" << endl << endl;
            cout << "Student ID \t: " << limit[i].idNumber << endl;
            cout << "Name \t\t: " << limit[i].name << endl;
            cout << "Gender \t\t: " << limit[i].gender << endl;
            cout << "Birthdate \t: " << limit[i].year << endl;
            cout << "Admission year \t: " << limit[i].enteredYear << endl;
            cout << "GPA \t\t: " << limit[i].PI << endl << endl;
            return;
        }
        else
        {
            cout << "Checking data.." << endl;
            cout << "Data " << i + 1 << " not the same" << endl;
        }
        cout << "No result" << endl << endl;
    }
}

int main(){
    
    file = fopen("Database Mahasiswa.csv", "w");
    if (!file)
    {
        cout << "File not created" << endl;
    }
    else
    {
        while (!feof(file))
        {
            fprintf(file, "%s,%s,%s,%s,%s,%s\n", limit[a].idNumber, limit[a].name, limit[a].gender, limit[a].year, limit[a].enteredYear, limit[a].PI);
            a++;
        }
        
    }
    
    fclose(file);
    
start:

    cout << "Choose one of the operation below : " << endl;
    cout << "1. Insert data " << endl;
    cout << "2. Delete data " << endl;
    cout << "3. Edit data" << endl;
    cout << "4. Show all data" << endl;
    cout << "5. Search data" << endl;
    cout << "6. Quit" << endl << endl;
    cout << "Select Operation : ";
    cin >> operation;

    switch (operation)
    {
    case 1:
        insertData();
        goto start;
        break;
    case 2:
        deleteData();
        goto start;
        break;
    case 3:
        editData();
        goto start;
        break;
    case 4:
        displayData();
        goto start;
        break;
    case 5:
        searchData();
        goto start;
        break;
    case 6:
        cout << "Are you sure to you want to quit? (Y/N) : ";
        cin >> w;

        if (w == 'n' || w == 'N')
        {
            goto start;
        }
        else
        {
            cout << endl << "Thank you for using this program.";
            return 0;
        }
        break;
    default:
        cout << "Please select the number between 1 to 6." << endl;
        goto start;
        break;
    }

    return 0;
}