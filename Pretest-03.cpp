/*Nama : Anugerah Prima Bagaskara
NPM : 140810180006
Tanggal Buat : 13/03/2019
Deskripsi : membuat struct mahasiswa
*/
#include <iostream>
using namespace std;

struct r_mhs{
	char npm[14];
	char nama[40];
	float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int&n){
	cout<<"Masukkan jumlah mahasiswa : ";cin>>n;
}

void inputMhs(larikMhs& data, int n){
	for(int i=0;i<n;i++){
		cout<<"NPM : ";cin>>data[i].npm;
		cout<<"Nama : ";cin>>data[i].nama;
		cout<<"IPK : ";cin>>data[i].ipk;
	}
}

void cetakMhs(larikMhs data,int n){
	for(int i=0;i<n;i++){
		cout<<"Mahasiswa ke-"<<(i+1)<<endl;
		cout<<"NPM : "<<data[i].npm<<endl;
		cout<<"Nama : "<<data[i].nama<<endl;
		cout<<"IPK : "<<data[i].ipk<<endl;
	}
}

void sortNama(larikMhs& data,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		}
	}
}

int main(){
	int n;
	larikMhs data;
	banyakData(n);
	inputMhs(data,n);
	sortNama(data,n);
	cetakMhs(data,n);
	
}
