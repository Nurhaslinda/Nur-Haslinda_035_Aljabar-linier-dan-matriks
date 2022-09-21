 #include <iostream>
 using namespace std;
 
 int main()
 {
 	//inisialisasi variabel
 	int matriks[50][50];
 	int hasil [50][50];
 	int baris;
 	int kolom;
 	
 	
 	
 	cout<<"\tTRANSPOSE MATRIKS"<<endl<<endl;
 	
 	//input baris, kolom, dan skalar
 	cout<<"Masukkan baris matriks: ";
 	cin>>baris;
 	cout<<"Masukkan kolom matriks: ";
 	cin>>kolom;
 	cout<<endl;
 	
 	
 	//looping untuk pembuatan matriks
 	cout<<"Matriks"<<endl;
 	for (int i = 0; i<baris; i++)
	 {
 		for (int j = 0; j<kolom; j++)
		 {
 			cin>>matriks[i][j];
		 }
	 }
	 cout<<endl;
	
	//looping hasil matriks
	cout<<"Hasil transpose matriks"<<endl;
	for (int i=0; i<baris; i++){
		for (int j=0; j<kolom; j++)
		{
			//Rumus transpose matriks
			hasil[i][j] = matriks[j][i];
			//Menampilkan hasil transpose matriks
			cout<<hasil[i][j]<<" ";
		}
		cout<<endl;
	}
	 return 0;
 }