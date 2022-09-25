#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
int pl;
cout<<"================================================"<<endl<<endl;		
cout<<"|    PRICE LIST MOMENTKITA BALI DOCUMENTARY    |"<<endl<<endl;
cout<<"================================================"<<endl;
cout<<"Silahkan pilih sesuai yang diinginkan :)"<<endl;
cout<<"1. Photo Only"<<endl;
cout<<"2. Video Ony"<<endl;
cout<<"3. Photo & Video"<<endl;
cout<<"================================================"<<endl<<endl;
cout<<"Masukkan Pilihan : "; cin>>pl;

if(pl==1)
{
cout<<"================== PHOTO ONLY =================="<<endl;
cout<<"1. Wedding (1000K)"<<endl;
cout<<"2. Three Moon Ceremony (700K)"<<endl;
cout<<"3. Event (400K)"<<endl;
cout<<"4. Birthday (500K)"<<endl;
cout<<"================================================"<<endl;
}

else if(pl==2)
{
cout<<"================== VIDEO ONLY =================="<<endl;
cout<<"1. Wedding (1500K)"<<endl;
cout<<"2. Three Moon Ceremony (1000K)"<<endl;
cout<<"3. Event (700K)"<<endl;
cout<<"4. Short Movie (1300K)"<<endl;
cout<<"5. Birthday (600K)"<<endl;
cout<<"================================================"<<endl;
}

else if(pl==3)
{
cout<<"================= PHOTO & VIDEO ================"<<endl;
cout<<"1. Wedding (2400K)"<<endl;
cout<<"2. Three Moon Ceremony (1600K)"<<endl;
cout<<"3. Event (1000K)"<<endl;
cout<<"4. Birthday (1000K)"<<endl;
cout<<"================================================"<<endl;
}

else
{
cout<<"List Yang Dipilih Tidak Ada!"<<endl;
}
cout<<endl;

system("pause");
return 0;
}
