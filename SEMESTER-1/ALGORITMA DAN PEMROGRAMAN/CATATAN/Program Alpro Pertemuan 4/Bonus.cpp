#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(){
system("cls");
int i,j;
system("color b");// huruf b kode warna.
for(i=1;i<=22;i++){
         for(j=1;j<=60;j++){
         if(i==1) if(((j>=14)&&(j<=23))||((j>=39)&&(j<=48))) cout<<"*"; else cout<<" ";
         else if(i==2) if(((j>=11)&&(j<=26))||((j>=36)&&(j<=51))) cout<<"*"; else cout<<" ";
         else if(i==3) if(((j>=9)&&(j<=28))||((j>=34)&&(j<=53))) cout<<"*"; else cout<<" ";
         else if(i==4) if(((j>=7)&&(j<=30))||((j>=32)&&(j<=55))) cout<<"*"; else cout<<" ";
         else if((i>=5)&&(i<=8)) if((j>=5)&&(j<=57)) cout<<"*"; else cout<<" ";
         else if(i==9)  if((j>=7)&&(j<=55))  cout<<"*"; else cout<<" ";
         else if(i==10) if((j>=9)&&(j<=53))  cout<<"*"; else cout<<" ";
         else if(i==11) if((j>=11)&&(j<=51)) cout<<"*"; else cout<<" ";
         else if(i==12) if((j>=13)&&(j<=49)) cout<<"*"; else cout<<" ";
         else if(i==13) if((j>=15)&&(j<=47)) cout<<"*"; else cout<<" ";
         else if(i==14) if((j>=17)&&(j<=45)) cout<<"*"; else cout<<" ";
         else if(i==15) if((j>=19)&&(j<=43)) cout<<"*"; else cout<<" ";
         else if(i==16) if((j>=21)&&(j<=41)) cout<<"*"; else cout<<" ";
         else if(i==17) if((j>=23)&&(j<=39)) cout<<"*"; else cout<<" ";
         else if(i==18) if((j>=25)&&(j<=37)) cout<<"*"; else cout<<" ";
         else if(i==19) if((j>=27)&&(j<=35)) cout<<"*"; else cout<<" ";
         else if(i==20) if((j>=29)&&(j<=33)) cout<<"*"; else cout<<" ";
         else if(i==21) if((j>=30)&&(j<=32)) cout<<"*"; else cout<<" ";
         else if(i==22) if(j==31) cout<<"*"; else cout<<" ";
      }
      cout<<"\n";
   }
   return 0;
}

