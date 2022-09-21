//Nur Haslinda_21091397035

#include <iostream>
using namespace std;

int main(){
	
	//inisialisasi variabel
	int matA[20][20];
	int matB[20][20];
	int hasil[20][20];
	int jumlah=0;
	int baris1;
	int kolom1;
	int baris2;
	int kolom2;
	
	
	cout<<"\tPERKALIAN MATRIKS DENGAN MATRIKS"<<endl<<endl;
	
	//input jumlah baris dan kolom matriks
	cout<<"Masukkan jumlah baris matriks pertama : ";
	cin>>baris1;
	cout<<"Masukkan jumlah kolom matriks pertama : ";
	cin>>kolom1;
	cout<<"Masukkan jumlah baris matriks kedua : ";
	cin>>baris2;
	cout<<"Masukkan jumlah kolom baris kedua : ";
	cin>>kolom2;
	
	//proses konversi matriks
	if (kolom1 != baris2)
	{
		cout<<"MATRIKS TIDAK DAPAT DIKALIKAN SATU SAMA LAIN"<<endl;
	}
	else
	{
		//input elemen matriks pertama
		cout<<"Masukkan elemen matriks A : "<<endl;
		//looping untuk matriks pertama
		for(int i=0; i<baris1; i++)
		{
			for (int j=0; j<kolom1; j++)
			{
				cin>>matA[i][j];
			}
		}
		cout<<endl;
		
		//input elemen matriks kedua
		cout<<"Masukkan elemen matriks B :"<<endl;
		//looping untuk matriks kedua
		for(int i=0; i<baris2; i++)
		{
			for(int j=0; j<kolom2; j++)
			{
				cin>>matB[i][j];
			}
		}
		cout<<endl;
		
		//looping untuk konversi perkalian matriks dengan matriks
		for(int i=0; i<baris1; i++)
		{
			for(int j=0; j<kolom2; j++)
			{
				for(int k=0; k<baris2; k++)
				{
					//rumus perkalian matriks dengan matriks
					jumlah = jumlah + matA[i][k]*matB[k][j];
				}
				hasil[i][j] = jumlah;
				jumlah = 0;
			}
		}
		
		//Looping untuk menampilkan hasil perkalian matriks
		cout<<"Hasil Perkalian matriks"<<endl;
		for(int i=0; i<baris1; i++)
		{
			for(int j=0; j<kolom1; j++)
			{
				//perintah untuk menampilkan hasil perkalian matriks
				cout<<hasil[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	return 0;
}