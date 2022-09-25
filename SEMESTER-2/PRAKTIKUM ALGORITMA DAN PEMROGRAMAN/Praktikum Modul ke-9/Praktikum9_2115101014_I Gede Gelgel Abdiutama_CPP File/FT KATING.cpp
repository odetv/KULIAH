#include <iostream>
#include <string>
using namespace std;

struct orang{
	string nama;
	int id_ayah;
};

string rep_getline(FILE* file, int *c ) {
    int size = 1024, pos;
    char *buffer = (char *)malloc(size);
    pos = 0;
    do{ 
        if(*c==EOF){
            cout<<"stop";
        }
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


orang CsvToArr (FILE* file, bool *stop){
	//mengubah data dalam file csv menjadi array of struct
	orang array;
	string buffer;
	int stop1;
	
	buffer = rep_getline(file, &stop1);
	if (stop1==EOF){
		*stop=false;
	}
	else{
		int comma1 = rep_find(buffer,',', 0),
    	comma2 = rep_find(buffer,',', comma1+1),
    	line = rep_find(buffer,'\n',comma2+1);
    	
	//format data: index, nama, ID_ayah
    	array.nama=rep_substr(buffer,comma1+1, comma2-(comma1+2));
    	string Strid = rep_substr(buffer, comma2+1, line-(comma2+2));
    	array.id_ayah=atoi(&Strid[0]);
    
		return array;
	}

}

int ID_tracker(orang Ftree[], int index){
	//menghitung jumlah keturunan secara recursive 
	int decendant=0;

	for(int i=0;i<50;i++){
		if (Ftree[i].id_ayah == index){
			cout<<Ftree[i].nama<<endl;// print nama keturunan
			decendant++;
			int child = ID_tracker(Ftree,i);// recursion
			decendant += child;
		} 
	}
	return decendant;
}

int main(){
	FILE* Ftree;
	Ftree = fopen("norse gods family tree.csv","r");// HAIL FOR THE MIGHTY ODIN
	int stop1, decendant;
	orang norse_god[50];
	bool stop=true;
	rep_getline(Ftree, &stop1);	//get rid of the header
	
	int index=0;
	
	while (stop){
        norse_god[index] =CsvToArr(Ftree,&stop);
		index++;
    }   

	cout << "masukan index: ";
	cin >> index;
	cout << "keturunan "<<norse_god[index].nama<<" :"<<endl;
	decendant = ID_tracker(norse_god, index);			//LET THE FUCKIN SHOW BEGIN
	cout << " jumlah keturunan :"<<decendant<<endl;
	
	return 0;
}