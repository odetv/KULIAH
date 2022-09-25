#include <iostream>
#include <string>
using namespace std;

struct studentData
{
    string studentID;
    string name;
    string gender;
    unsigned int yearOfBirth; 
    unsigned int yearIn;
    float gpa;
};

string rep_getline(FILE* file, int *c ) {
    int size = 1024, pos;
    char *buffer = (char *)malloc(size);
    pos = 0;
    do{ 
        *c = fgetc(file);

        if(*c != EOF) {buffer[pos++] = (char)*c;}
    }while(*c != EOF && *c != '\n');   
    buffer[pos] = 0;
    string text = string (buffer);         
    free(buffer);
    return text;
}

int rep_find(string line, char target, int start){
    char temp;
    int count = start;
    do{
        temp = line[count];
        if (temp==target){break;}
        count++;

    }while (true);
    return count;
}

string rep_substr(string line, int start, int length){
    char substr[50];
    int count= 0;

    while (count <=length){
        substr[count]= line[start+count];
        count++;
    }
    substr[count]='\0';
    string text = string (substr);         
    return text;
}


studentData input()
{
	studentData student;
	
    cout<<"Student ID Number\t\t : ";
    cin>>student.studentID;

    cout<<"Name of Student\t\t\t : ";
    getline(cin,student.name);
    getline(cin,student.name);

    cout<<"Gender\t\t\t\t : ";
    cin>>student.gender;

    cout<<"Year of Birth \t\t\t : ";
    cin>>student.yearOfBirth;

    cout<<"Year of admission to University\t : ";
    cin>>student.yearIn;

    cout<<"Student's GPA\t\t\t : ";
    cin>>student.gpa;
    
	return student;
}


int option()
{
    int input;

    cout<<"\n";       
    cout<<"Student Data Program"<<endl;
    cout<<"1. Add data"<< endl;
    cout<<"2. Edit data"<<endl;
    cout<<"3. Display data"<<endl;
    cout<<"4. Delete data"<<endl;
    cout<<"5. Display all"<<endl;
    cout<<"6. End program"<<endl;
    cout<<"\n";

    cout<<"Input the option [1-5]\t\t : ";
    cin>>input;
    return input;
}




int main()
{
     
    cout<<"\n\n";
    cout<<"Fourth Module : Array of Struct"<<endl;
    cout<<"2115101059_Ni Putu Karisma Dewi"<<endl;
    cout<<"Deadline : 22nd March 2022"<<endl;
    cout<<"-------------------------------"<<endl;

    studentData array[100];

    int choice=0;
    unsigned int length;

    while (choice!=6)
    {
        choice = option();
        switch(choice)
        {
            case 1: //add student data
                {
                    

                    cout<<"\nInput number of student data\t : ";
                    cin>>length;

                    cout <<"\n"<<endl;

                    FILE *fptr;

                    fptr = fopen("Data Mahasiswa.csv","a");

                    for(int i=0; i<length; i++)
                    {

                        studentData data = input();
                        char str[20]; 
                        sprintf(str, "%.2f", data.gpa);

                        string text = data.studentID + ", "+data.name+", "+data.gender+ ", " + str + ", "+to_string(data.yearIn)+", "+to_string(data.yearOfBirth)+"\n";
                        
                        const char *to_file=&text[0];
                        fprintf(fptr, "%s", to_file);

                    }
                    fclose(fptr);
                    break;
                }

            case 2: //edit student data
                {   
                    string inputID;
                    
                    unsigned int ID;

                    cout<<"Edit Student Data\n"<<endl;
                    cout<<"---------------------------"<<endl;
                    cout<<"Insert Student ID you wish to change : ";
                    cin>>inputID;

                    FILE *CsvFile;
                    CsvFile = fopen("Data Mahasiswa.csv","r");
                    remove("temp.csv"); 
                    if (CsvFile){
                        FILE *tempfile;
                        tempfile = fopen("temp.csv","a+");
                        cout<<"mengubah data siswa no :"<<inputID <<endl; 
                        string buffer;
                        int stop, count=1;
                        bool nofound= false;
                
                        while (stop != EOF){
                            buffer=rep_getline(CsvFile,&stop);
                            int comma1 = rep_find(buffer,',', 0);
                            string  studentID=rep_substr(buffer,0, comma1-1);
                            if (studentID==inputID){
                                fclose(tempfile);
                                nofound= true;
                                break;
                                }
                            const char *to_file= &buffer[0];
                            fprintf(tempfile, "%s", to_file);
                        }
                        if(nofound){
                            studentData data = input();
                            char str[20]; 
                            sprintf(str, "%.2f", data.gpa);

                            string text = data.studentID + ", "+data.name+", "+data.gender+ ", " + str + ", "+to_string(data.yearIn)+", "+to_string(data.yearOfBirth)+"\n";
                            cout<< text;
                            const char *to_file=&text[0];
                            tempfile = fopen("temp.csv","a+");
                            fprintf(tempfile, "%s", to_file);
                            while (stop!=EOF){
                                buffer=rep_getline(CsvFile,&stop);
                                const char *to_file= &buffer[0];
                                fprintf(tempfile, "%s", to_file);
                            }
                        }else{cout<<"data siswa no : "<<inputID<<" tidak ditemukan dalam file ini";}
                        fclose(tempfile);
                        fclose(CsvFile);

                        remove("Data Mahasiswa.csv");
                        rename("temp.csv","Data Mahasiswa.csv");
                        }
                        else{ cout << "File d tidak ditemukan di dalam directory ini";}
                    break;
                }
                
            case 3:
                {
                    cout<<"Display Student Data\n"<<endl;
                    cout<<"---------------------------"<<endl;
                    string inID;
                    cout<<"Input Student ID : ";
                    cin>>inID;

                    FILE *CsvFile;
                    CsvFile = fopen("Data Mahasiswa.csv","r");
                    if (CsvFile){
                        cout << "melihat data siswa nim :"<<inID << endl;
                        string buffer;
                        int stop =0 , count=1;
                        bool nofound= false;
                        while (stop != EOF){
                            buffer=rep_getline(CsvFile,&stop);
                            int comma1 = rep_find(buffer,',', 0);
                            string  studentID=rep_substr(buffer,0, comma1-1);
                            if (studentID==inID){
                                nofound= true;
                                break;
                                }
                        }
                        if (nofound){
                            int comma1 = rep_find(buffer,',', 0),
                                comma2 = rep_find(buffer,',', comma1+1),
                                comma3 = rep_find(buffer,',', comma2+1),
                                comma4 = rep_find(buffer,',', comma3+1),
                                comma5 = rep_find(buffer,',', comma4+1);
                            
                            string  studentID=rep_substr(buffer,0, comma1-1),
                                    name=rep_substr(buffer,comma1+1, comma2-(comma1+2)),
                                    gender=rep_substr(buffer,comma2+1, comma3-(comma2+2)),
                                    gpa=rep_substr(buffer,comma3+1,comma4-(comma3+2)),
                                    yearIn=rep_substr(buffer,comma4+1,comma5-(comma4+2)),
                                    yearOfBirth=rep_substr(buffer,comma5+1,4);

                            cout<<"Student ID Number\t\t : "<<studentID<<endl;
                            cout<<"Name of Student\t\t\t : "<<name<<endl;
                            cout<<"Gender \t\t\t\t : "<<gender<<endl;
                            cout<<"Year of Birth \t\t\t : "<<yearOfBirth<<endl;
                            cout<<"Year  of admission to university : "<<yearIn<<endl;
                            cout<<"Student's GPA \t\t\t : "<<gpa<<endl;
                        }else{cout<<"data siswa no : "<<inID<<" tidak ditemukan dalam file ini";}
                    }
                    else{ cout << "File tidak ditemukan di dalam directory ini";}
                    fclose(CsvFile);
                    break;
                }
            case 4:
                {
                    cout<<"Delete Student Data\n"<<endl;
                    cout<<"---------------------------"<<endl;
                    string inID;
                    cout<<"Input Student ID : ";
                    cin>>inID;

                    FILE *CsvFile;
                    CsvFile = fopen("Data Mahasiswa.csv","r");
                    remove("temp.csv");
                    if (CsvFile){
                        cout<<"menghapus data siswa no :"<<inID<<endl;
                        FILE *tempFile;
                        tempFile = fopen("temp.csv","a+");
                        string buffer;
                        int stop =0 , count=1;
                        bool nofound= false;
                        while (stop != EOF){
                            buffer=rep_getline(CsvFile,&stop);
                            int comma1 = rep_find(buffer,',', 0);
                            string  studentID=rep_substr(buffer,0, comma1-1);
                            if (studentID==inID){
                                fclose(tempFile);
                                nofound= true;
                                break;
                                }
                            const char *to_file= &buffer[0];
                            fprintf(tempFile, "%s", to_file);
                        }
                        if (nofound){
                        tempFile = fopen("temp.csv","a+");
                            while (stop!=EOF){
                                buffer=rep_getline(CsvFile,&stop);
                                const char *to_file= &buffer[0];
                                fprintf(tempFile, "%s", to_file);
                            }
                        }else{cout<<"data siswa no : "<<inID<<" tidak ditemukan dalam file ini";}
                        fclose(tempFile);
                        fclose(CsvFile);

                        remove("Data Mahasiswa.csv");
                        rename("temp.csv","Data Mahasiswa.csv");
                        }
                        else{ cout << "File d tidak ditemukan di dalam directory ini";}
                    break;
                }

            case 5:
                {
                    cout<<"\nDisplay All Student Data"<<endl;
                    cout<<"---------------------------"<<endl;
                    FILE *CsvFile;
                    CsvFile = fopen("Data Mahasiswa.csv","r");
                    if (CsvFile){
                        string buffer;
                        int stop = 0;
                        // buffer=rep_getline(CsvFile,&stop);
                
                        while (stop != EOF){
                            buffer=rep_getline(CsvFile,&stop);
                            int comma1 = rep_find(buffer,',', 0),
                                comma2 = rep_find(buffer,',', comma1+1),
                                comma3 = rep_find(buffer,',', comma2+1),
                                comma4 = rep_find(buffer,',', comma3+1),
                                comma5 = rep_find(buffer,',', comma4+1);
                            
                            string  studentID=rep_substr(buffer,0, comma1-2),
                                    name=rep_substr(buffer,comma1+1, comma2-(comma1+2)),
                                    gender=rep_substr(buffer,comma2+1, comma3-(comma2+2)),
                                    gpa=rep_substr(buffer,comma3+1,comma4-(comma3+2)),
                                    yearIn=rep_substr(buffer,comma4+1,comma5-(comma4+2)),
                                    yearOfBirth=rep_substr(buffer,comma5+1,4);
                            
                            cout<<"Student ID Number\t\t : "<<studentID<<endl;
                            cout<<"Name of Student\t\t\t : "<<name<<endl;
                            cout<<"Gender \t\t\t\t : "<<gender<<endl;
                            cout<<"Year of Birth \t\t\t : "<<yearOfBirth<<endl;
                            cout<<"Year  of admission to university : "<<yearIn<<endl;
                            cout<<"Student's GPA \t\t\t : "<<gpa<<endl;
                        }
                    }
                    else{cout << "File tidak ditemukan di dalam directory ini";}
                    fclose(CsvFile);    
                    }
                default:
                    cout<<"---------------------------"<<endl;
                    cout<<"\n\nYou end the program"<<endl;
    
        }

    }


 

    return 0; 

}