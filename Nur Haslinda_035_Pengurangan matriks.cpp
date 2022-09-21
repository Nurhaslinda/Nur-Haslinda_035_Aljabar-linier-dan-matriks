#include<iostream>
using namespace std;

int main()
{
	//inisialisasi variabel
	int matA[20][20];
	int matB[20][20];
	int hasil[20][20];
	int baris;
	int kolom;
	
	cout<<"\t PENGURANGAN MATRIKS DENGAN MATRIKS"<<endl<<endl;
	
	//input baris dan kolom
	cout<<"Masukkan baris matriks: ";
	cin>>baris;
	cout<<"Masukkan kolom matriks: ";
	cin>>kolom;
	
	cout<<endl;
	
	//input matriks A
	cout<<"Masukkan matriks A :"<<endl;	
	for (int i=0; i<baris; i++)
	{
		for (int j=0; j<kolom; j++)
		{
			cin>>matA[i][j];
		}
	}
	cout<<endl;
	
	//input matriks B
	cout<<"Masukkan matriks B : "<<endl;
	for (int i=0; i<baris; i++)
	{
		for(int j=0; j<kolom; j++)
		{
			cin>>matB[i][j];
		}
	}
	cout<<endl;
	
	//Hasil dari penjumlahan matriks A dan B
	cout<<"Hasil penjumlahan matriks A dan B "<<endl;
	for(int i=0; i<baris; i++)
	{
		for (int j=0; j<kolom; j++)
		{
			//Rumus pengurangan kedua matriks
			hasil[i][j]=matA[i][j]-matB[i][j];
			//Menampilakan hasil penjumlahan matriks
			cout<<hasil[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
