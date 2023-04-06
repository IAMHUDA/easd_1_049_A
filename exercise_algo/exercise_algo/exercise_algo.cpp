//soal
//jawaban
//1.sangat di butuhkan karna dari setiap masalah harus di analisa terlebih dahulu satu persatu supaya dapat menentukan penyelesaian yang sesuai dari masalah tersebut 
//2.struktur data dapat di bedakan menjadi dua yaitu :statik(ukuranya tetap,tidak bisa berubah)<array diguanakn saat struktur datanya sudah tertentu/valid>||,YANG KE DUA DINAMIS: (Fleksibel bisa di tambah dan di kurang )<linklist=belum di ketahui datanya>.
//3.faktor faktor yang mempengaruhi efisiensi waktu suatu program :A)kecepatan processor,B)compiler yang bertugas sebagai menerjemahkan dari bahasa pemrograman mnjadi bahasa komputer,C)operating system,D)bahasa pemrograman,E)ukuran sebuah input
//4.buble short bagi saya adalah yang paling mudah di pahami dan sederhana hanya saja hanya cocok jika mengurut kan data yang sedikit
//5.yang termasuk dalam kuadratic : bublesort,selectionsort,insertionsort,shellsort
//  yang termasuk loglinear       : mergesort,quicksort
//6.buatlah sebuah program yang mengimplementasikan mergesort

#include <iostream> 
#include <algorithm>

using namespace std;

int huda[69];
int n = sizeof(huda) / sizeof(huda[0]);


int main()
{

	while (true)
	{
		cout << "masukan jumlah data pada array :";   
		cin >> n;                         

		if (n <= 69) {                   
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan makksimal 20 elemen , \n"; 
	}
	cout << endl;
	cout << "====================" << endl;   
	cout << "masukan elemen array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "data ke-" << (i + 1) << " :";
		cin >> huda[i];
	}


	
	sort(huda, huda + n);

	
	cout << "Array nilai dari terbesar ke terkecil: " << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		cout << huda[i] << " ";
	}

	return 0;
}


