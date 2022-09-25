#include <iostream>
#include <fstream>
#include  <string>
using namespace std;

struct Siswa{
	int id;
	char name[100]; 
	int age;
	char gender[10];
	int birthYear;
	int yearIn;
	float GPA;
};
void Menu(){
	cout<<"MENU\n";
    cout<<"1. Add Student Data\n";
    cout<<"2. Edit Student Data\n";
    cout<<"3. Search Student Data\n";
    cout<<"4. Show All Student Data\n";
    cout<<"5. Delete Student Data\n";
    cout<<"6. Exit\n";
    cout<<endl;
    cout<<"Select the menu : ";
}
void InsertData(){
	Siswa val;
	FILE* write;
	write=fopen("file.txt","a");
	if(!write){
		cout<<"no file"<<endl;
	}
	cout<<"Enter the id : ";
	cin>>val.id;
	fprintf(write,"\n%d",val.id);
	cout<<"Enter the name : ";
	cin.get();
	cin.getline(val.name,100);
	fprintf(write,"\n%s",val.name);
	cout<<"Enter the Age : ";
	cin>>val.age;
	fprintf(write,"\n%d",val.age);
	cout<<"Enter the gender : ";
	cin>>val.gender;
	fprintf(write,"\n%s",val.gender);
	cout<<"Enter the Year of Birth : ";
	cin>>val.birthYear;
	fprintf(write,"\n%d",val.birthYear);
	cout<<"Enter the Year of admission to University : ";
	cin>>val.yearIn; 
	fprintf(write,"\n%d",val.yearIn);
	cout<<"Enter the Grade Point Average (GPA) : ";
	cin>>val.GPA; 
	fprintf(write,"\n%f",val.GPA);
	fclose(write);
}
void ShowData(){
	int i=1;
	FILE* read;
	Siswa val;
	cout<<"test"<<endl;
	read=fopen("file.txt","r");

	while(!feof(read)){
		
		fscanf(read,"\n%d",&val.id);
		fscanf(read,"\n%[^\n]",&val.name);
		fscanf(read,"\n%d",&val.age);
		fscanf(read,"\n%s",&val.gender);
		fscanf(read,"\n%d",&val.birthYear);
		fscanf(read,"\n%d",&val.yearIn);
		fscanf(read,"\n%f",&val.GPA);
		
		cout<<" Data-"<<i++<<endl;
		cout<<" Student Id : "<<val.id<<endl;
		cout<<" Student Name : "<<val.name<<endl;
		cout<<" Student Age : "<<val.age<<endl;
		cout<<" Gender : "<<val.gender<<endl;
		cout<<" Year of Birth : "<<val.birthYear<<endl;
		cout<<" Year of admission to University : "<<val.yearIn<<endl;
		cout<<" Grade Point Average (GPA) : "<<val.GPA<<endl;
	}
	fclose(read);                                         
}

void DeleteData(){
	int id,found=0;
	FILE* read;
	Siswa val;
	FILE* newF;
	read=fopen("C://PraktikumAlpro/Text/file.txt","r");
	newF=fopen("C://PraktikumAlpro/Text/tmp.txt","w");
	cout<<"Enter student id to delete : ";
	cin>>id;
	while(!feof(read)){
		fscanf(read,"\n%d",&val.id);
		fscanf(read,"\n%[^\n]",&val.name);
		fscanf(read,"\n%d",&val.age);
		fscanf(read,"\n%s",&val.gender);
		fscanf(read,"\n%d",&val.birthYear);
		fscanf(read,"\n%d",&val.yearIn);
		fscanf(read,"\n%f",&val.GPA);
		if (val.id != id) {
            fprintf(newF,"\n%d",val.id);
            fprintf(newF,"\n%s",val.name);
            fprintf(newF,"\n%d",val.age);
            fprintf(newF,"\n%s",val.gender);
            fprintf(newF,"\n%d",val.birthYear);
            fprintf(newF,"\n%d",val.yearIn);
            fprintf(newF,"\n%f",val.GPA);
        }else if(val.id == id){
        	found++;
		}
	}
	fclose(read);
	fclose(newF);
	remove("C://PraktikumAlpro/Text/file.txt");
	rename("C://PraktikumAlpro/Text/tmp.txt","C://PraktikumAlpro/Text/file.txt");
	if(found>0){
		cout<<"Deleted succesfully"<<endl;
	}else{
		cout<<"Can't find the id, please input it correctly"<<endl;
	}
	
}
void SearchData(){
	FILE* read;
	int id,found=0;
	Siswa val;
	read=fopen("C://PraktikumAlpro/Text/file.txt","r");
	cout<<"Search a Student by its id : ";
	cin>>id;
	while(!feof(read)){
		fscanf(read,"\n%d",&val.id);
		fscanf(read,"\n%[^\n]",&val.name);
		fscanf(read,"\n%d",&val.age);
		fscanf(read,"\n%s",&val.gender);
		fscanf(read,"\n%d",&val.birthYear);
		fscanf(read,"\n%d",&val.yearIn);
		fscanf(read,"\n%f",&val.GPA);
		if (val.id == id){
			found++;
            cout<<" Student Id : "<<val.id<<endl;
			cout<<" Student Name : "<<val.name<<endl;
			cout<<" Student Age : "<<val.age<<endl;
			cout<<"Gender : "<<val.gender<<endl;
			cout<<"Year of Birth : "<<val.birthYear<<endl;
			cout<<"Year of admission to University : "<<val.yearIn<<endl;
			cout<<"Grade Point Average (GPA) : "<<val.GPA<<endl;
        }
	}
	if(found<1){
		cout<<"Can't find the id, please input it correctly"<<endl;
	}
	fclose(read);
	
}
void ChangeData(){
	FILE* read;
	FILE* newF;
	int id,found=0;
	Siswa val,newVal;
	read=fopen("C://PraktikumAlpro/Text/file.txt","r");
	newF=fopen("C://PraktikumAlpro/Text/tmp.txt","w");
	cout<<"Change a Student data by its id : ";
	cin>>id;
	cout<<"\n Change Student id :";
	cin>>newVal.id;
	cout<<"\n Change Student name : ";
	cin.getline(newVal.name,100);
	cin.getline(newVal.name,100);
	cout<<"\n Change Student age : ";
	cin>>newVal.age;
	cout<<"\n Change Student Gender : ";
	cin>>newVal.gender;
	cout<<"\n Change Student Year of Birth : ";
	cin>>newVal.birthYear;
	cout<<"\n Change Student Year of admission to University : ";
	cin>>newVal.yearIn;
	cout<<"\n Change Student GPA : ";
	cin>>newVal.GPA;
	while(!feof(read)){
		fscanf(read,"\n%d",&val.id);
		fscanf(read,"\n%[^\n]",&val.name);
		fscanf(read,"\n%d",&val.age);
		fscanf(read,"\n%s",&val.gender);
		fscanf(read,"\n%d",&val.birthYear);
		fscanf(read,"\n%d",&val.yearIn);
		fscanf(read,"\n%f",&val.GPA);
		if (val.id != id){
			found++;
            fprintf(newF,"\n%d",val.id);
            fprintf(newF,"\n%s",val.name);
            fprintf(newF,"\n%d",val.age);
            fprintf(newF,"\n%s",val.gender);
            fprintf(newF,"\n%d",val.birthYear);
            fprintf(newF,"\n%d",val.yearIn);
            fprintf(newF,"\n%f",val.GPA);
        }else if(val.id==id){
        	found++;
        	fprintf(newF,"\n%d",newVal.id);
            fprintf(newF,"\n%s",newVal.name);
            fprintf(newF,"\n%d",newVal.age);
            fprintf(newF,"\n%s",newVal.gender);
            fprintf(newF,"\n%d",newVal.birthYear);
            fprintf(newF,"\n%d",newVal.yearIn);
            fprintf(newF,"\n%f",newVal.GPA);
		}
	}
	if(found<1){
		cout<<"Nothing found"<<endl;
	}
	fclose(read);
	fclose(newF);
	remove("C://PraktikumAlpro/Text/file.txt");
	rename("C://PraktikumAlpro/Text/tmp.txt","C://PraktikumAlpro/Text/file.txt");
	cout<<"Changed Succesfully"<<endl;
}
int main(){
	FILE* fu;
	fu=fopen("C://PraktikumAlpro/Text/file.txt","r");
	fclose(fu);                                
	int choice=0;
	while(true){
		Menu();
		cin>>choice;
		cout<<endl;
		if(choice==1){
			char again;
			while(true){
				InsertData();
				cout<<"Want to add data again?y/n ";
				cin>>again;
				if(again=='n'){
					choice=0;
					break;
				}
			}	
		}else if(choice==2){
			ChangeData();
		}else if(choice==3){
			SearchData();
		}else if(choice==4){
			ShowData();
		}else if(choice==5){
			DeleteData();
		}else{
			break;
		}	
	}


}