#include <iostream>
#include <string>
using namespace std;

//isi disini
const int MAX_MAHASISWA =100 ;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;
//isi disini
void tambahMahasiswa(){
	if (jumlahMahasiswa == MAX_MAHASISWA) {
		cout << "Kapasitas mahasiswa penuh!" << endl;
		return;
	}

	cout << "Masukkan NIM: ";
	cin >> NIM[jumlahMahasiswa];
	cin.ignore();

	cout << "Masukkan nama: ";
	getline(cin, nama[jumlahMahasiswa]);
	
	//cout << "Masukkan jurusan: ";
	//getline(cin, jurusan[jumlahMahasiswa]);

	cout << "Masukkan tahun masuk: ";
	cin >> tahunMasuk[jumlahMahasiswa];
	cin.ignore();

	jumlahMahasiswa++;

	cout << "Mahasiswa berhasil ditambahkan!" << endl;
}
//isi disini
void tampilkanSemuaMahasiswa() {
	if (jumlahMahasiswa == 0) {
		cout << "Belum ada data mahasiswa" << endl;
		return;
}
	cout << "Data Mahasiswa:" << endl;
	for (int i = 0;i < jumlahMahasiswa;i++) {
		cout << "Nim:" << NIM[i] << endl;
		cout << "Nama:" << nama[i] << endl;
		cout << "Tahun masuk:" << tahunMasuk[i] << endl;
		cout << endl;
	}
};


void algorithmacariMahasiswaByNIM() {
	if (jumlahMahasiswa == 0) {
		cout << "Belum ada data mahasiswa." << endl;
		return;
	}

	int targetNIM;
	cout << "Masukkan NIM yang ingin dicari: ";
	cin >> targetNIM;

	bool found = false;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		if (NIM[i] == targetNIM) {
			cout << "Data Mahasiswa: " << endl;
			cout << "NIM: " << NIM[i] << endl;
			cout << "Nama: " << nama[i] << endl;
			cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
			cout << endl;

			found = true;
			break;
		}
	}

	if (!found) {
		cout << "Mahasiswa dengan NIM " << targetNIM << " tidak ditemukan." << endl;
	}
};
//isi disini
void algorithmaSortByTahunMasuk(){
	if (jumlahMahasiswa == 0) {
		cout << "Belum ada data mahasiswa." << endl;
		return;
	}

	//  algoritma  bubble sort
	for (int i = 0; i < jumlahMahasiswa - 1; i++) {
		for (int j = 0; j < jumlahMahasiswa - i - 1; j++) {
			if (tahunMasuk[j] > tahunMasuk[j + 1]) {
				swap(NIM[j], NIM[j + 1]);
				swap(nama[j], nama[j + 1]);
				swap(tahunMasuk[j], tahunMasuk[j + 1]);
			}
		}
	}

	cout << "Data Mahasiswa berdasarkan Tahun Masuk: " << endl;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "NIM: " << NIM[i] << endl;
		cout << "Nama: " << nama[i] << endl;
		cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
		cout << endl;
	}
};
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			//isi disini
			tambahMahasiswa();
			break;
		case 2:
			//isi disini
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			//isi disini
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			//isi disini
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}						//JAWABAN ESSAY:	//	2. Saya menggunakan algoritma linear search untuk mencari data dan bubble sort untuk mengurutkan data.	/*		3. Perbedaan stuck dan queues yaitu :			Stuck : adalah tumpuan merupakan lumpulan data yang hanya diakses pada sisi top saja, cara kerja stuck adalah LIFO(Last in first out) 					artinya data yang terakhir masuk adalah data yang pertama kali keluar dan data yang pertama masuk adalah data yang terakhir keluar.					sedangkan			Queues: adalah antrian, cara kerjanya yaitu FIFO(Fisrt in first out) artinya data yang pertama masuk adalah data yang pertama keluar dan sebaliknya		*/ 		/*	4. cara menggunakan algoritma dalam stuck: stuck dapat diimplementasikan dengan menggunakan array dan linked list 			adapaun operator yang ada di stuck yaitu push untuk menambah element, pop untuk menghapus, isfull untuk memeriksa 			apakah ruang penuh atau tidak, dan masih banyak lagi.	*/	/*	5.	 a. Kedalaman yang dimiliki oleh pohon tree itu adalah 4 atau jumlah levelnya 4 karena hitungan dimulai dari 0 yaitu rootnya 				b.	- inOrder : salah. karena in adalah mengunjungi dari anak kiri lalu ke root setelah itu ke anak kanan.			c.  -preorder : benar. karena mengunjungi dari root lalu ke anak kiri lalu ke anak kanan			d.	- postorder : benar. karena mengunjungi dari anak kiri lalu kekanan dan terakhir ke root	*/	