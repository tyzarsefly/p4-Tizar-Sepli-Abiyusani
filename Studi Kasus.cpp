#include <iostream>
using namespace std;
int matriks1[2][2];
int matriks2[2][2];
int hasil[2][2];
int matriks3[2][2];
int matriks4[2][2];
int hasil2[2][2];
int hasiltotal[2][2];
int x,y,a,b;
void penjumlahan();
void pengurangan2();
int main()
{
    string username,pass;
    int menu,ulang;
 cout<<"Menu Login\n";
 cout<<"***TIZAR-SEPLI-A_KLP26_P4***\n\n\n";
    cout<<"Masukkan Username Anda :"; 
	cin>>username;
    cout<<"Masukkan Password Anda :"; 
	cin>>pass;
    if(username=="Tizar_Sepli_A"&&pass=="f1b019138")
	{
       cout<<"\nAnda Berhasil Masuk"<<endl;
    	awal:
       system("cls");
       cout<<"Program Operasi Penjumlahan Matriks\n\n";
       	penjumlahan();
       	cout<<"Apakah anda ingin melakukan operasi pengurangan pada kedua hasil?";
       	cout<<"\nTekan 1 untuk menjumlahkan tekan 2 untuk tidak:";
       	cin>>menu;
       	if (menu==1){
       		pengurangan2();
		   }
		else{
			cout<<"\n";
		}
    	cout<<"\nApakah anda ingin mengulang??\n1.Ya\n2.Tidak";
    	cout<<"------------";
		cout<<" \nMasukkan pilihan:";
		cin>>ulang;
   			if (ulang==1)
			{
			goto awal;
			}
			if(ulang==2) 
			{
			goto akhir;
			}
	}
 	else{
       cout<<"\nUsername atau password anda salah";
    }
    akhir:
 return 0; 

}
void penjumlahan(){
	cout<<"Operasi penjumlahan matriks:\n";
	for (x = 0; x < 2; x++){
	for (y = 0; y < 2; y++){
		cout <<"Masukkan index matriks A pertama:" << x << "," << y << " = ";
		cin >>matriks1[x][y];
		}
	}
	cout<<"\n";
	for (x = 0; x < 2; x++){
	for (y = 0; y < 2; y++){
		cout <<"Masukkan index matriks A kedua:" << x << "," << y << " = ";
		cin >> matriks2[x][y];
		}
	}
	cout<<"\n";
	for (x = 0; x < 2; x++){
	for (y = 0; y < 2; y++){
		hasil[x][y]=matriks1[x][y]+matriks2[x][y];
		cout <<hasil[x][y] <<" ";
		}
		cout <<"\n";
	}
	cout<<"OPERASI PENGURANGAN MATRIKS\n";
	for (x = 0; x < 2; x++){
	for (y = 0; y < 2; y++){
		cout <<"Masukkan index matriks B pertama:" << x << "," << y << " = ";
		cin >>matriks3[x][y];
		}
	}
	cout<<"\n";
	for (x = 0; x < 2; x++){
	for (y = 0; y < 2; y++){
		cout <<"Masukkan index matriks B kedua:" << x << "," << y << " = ";
		cin >> matriks4[x][y];
		}
	}
	cout<<"\n";
	for (x = 0; x < 2; x++){
	for (y = 0; y < 2; y++){
		hasil2[x][y]=matriks3[x][y]-matriks4[x][y];
		cout <<hasil2[x][y] <<" ";
		}
		cout <<"\n";
	}	
}
void pengurangan2(){
	for (x = 0; x < 2; x++){
	for (y = 0; y < 2; y++){
		hasiltotal[x][y]=hasil[x][y]-hasil2[x][y];
		cout <<hasiltotal[x][y] <<" ";
		}
		cout <<"\n";
	}	
}
