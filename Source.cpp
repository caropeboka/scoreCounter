#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct StudentRecord
{
	char Name[50];
	long Id;
	char Dept[50];
	char Gender[9];
};
struct mahasiswa
{
	float MatDas;
	float RanEle1;
	float PraRanEle1;
	float RanDig1;
	float PraRanDig1;
	float KonTek;
	float PemDas1;
	float PraPemDas1;
	float IPS;
	char IPShuruf;
};
struct Date {
	int day;
	int month;
	int year;
};
void main() {
	struct StudentRecord mahasiswa01;
	struct Date tanggalmahasiswa;
	struct mahasiswa nilai;
	printf("Masukkan Nama Mahasiswa : ");
	scanf("%s", &mahasiswa01.Name);
	printf("Masukkan NRP : ");
	scanf("%d", &mahasiswa01.Id);
	printf("Masukkan Jurusan : ");
	scanf("%s", &mahasiswa01.Dept);
	printf("Masukkan Jenis Kelamin : ");
	scanf("%s", &mahasiswa01.Gender);
	printf("Masukkan Tanggal Lahir : ");
	scanf("%d", &tanggalmahasiswa.day);
	printf("Masukkan Bulan Lahir : ");
	scanf("%d", &tanggalmahasiswa.month);
	printf("Masukkan Tahun Lahir : ");
	scanf("%d", &tanggalmahasiswa.year);
	printf("Masukkan Nilai Matematika Dasar 1 : ");
	scanf("%f", &nilai.MatDas);
	printf("Masukkan Nilai Rangkaian Elektronika 1 : ");
	scanf("%f", &nilai.RanEle1);
	printf("Masukkan Nilai Praktikum Rangkaian Elektronika 1 : ");
	scanf("%f", &nilai.PraRanEle1);
	printf("Masukkan Nilai Rangakaian Digital 1 : ");
	scanf("%f", &nilai.RanDig1);
	printf("Masukkan Nilai Praktikum Rangkaian Digital 1 : ");
	scanf("%f", &nilai.PraRanDig1);
	printf("Masukkan Nilai Konsep Teknologi : ");
	scanf("%f", &nilai.KonTek);
	printf("Masukkan Nilai Pemrograman Dasar 1 : ");
	scanf("%f", &nilai.PemDas1);
	printf("Masukkan Nilai Praktikum Pemrograman Dasar 1 : ");
	scanf("%f", &nilai.PraPemDas1);
	nilai.IPS = (nilai.MatDas + nilai.RanEle1 + nilai.PraRanEle1 + nilai.RanDig1 + nilai.PraRanDig1 + nilai.KonTek + nilai.PemDas1 + nilai.PraPemDas1) / 8;
	printf("\nPROGRAM PENGHITUNG NILAI INDEKS PRESTASI\n");
	printf("DIBUAT OLEH 2210191034_2210191037\n");
	printf("Nama : %s", mahasiswa01.Name);
	printf("\nNRP : %d", mahasiswa01.Id);
	printf("\nJurusan : %s", mahasiswa01.Dept);
	printf("\nJenis Kelamin : %s", mahasiswa01.Gender);
	printf("\nTanggal Lahir : %d %d %d\n", tanggalmahasiswa.day, tanggalmahasiswa.month, tanggalmahasiswa.year);
	if (nilai.MatDas >= 0 && nilai.MatDas <= 40) {
		printf("Nilai Matematika Dasar 1 = E");
	}
	else if (nilai.MatDas >= 41 && nilai.MatDas <= 55) {
		printf("Nilai Matematika Dasar 1 = D");
	}
	else if (nilai.MatDas >= 56 && nilai.MatDas <= 60) {
		printf("Nilai Matematika Dasar 1 = C");
	}
	else if (nilai.MatDas >= 61 && nilai.MatDas <= 65) {
		printf("Nilai Matematika Dasar 1 = BC");
	}
	else if (nilai.MatDas >= 66 && nilai.MatDas <= 70) {
		printf("Nilai Matematika Dasar 1 = B");
	}
	else if (nilai.MatDas >= 71 && nilai.MatDas <= 80) {
		printf("Nilai Matematika Dasar 1 = AB");
	}
	else if (nilai.MatDas >= 81 && nilai.MatDas <= 100) {
		printf("Nilai Matematika Dasar 1 = A");
	}
	printf("\n");
	if (nilai.RanEle1 >= 0 && nilai.RanEle1 <= 40) {
		printf("Nilai Rangkaian ELektronika 1 = E");
	}
	else if (nilai.RanEle1 >= 41 && nilai.RanEle1 <= 55) {
		printf("Nilai Rangkaian ELektronika 1 = D");
	}
	else if (nilai.RanEle1 >= 56 && nilai.RanEle1 <= 60) {
		printf("Nilai Rangkaian ELektronika 1 = C");
	}
	else if (nilai.RanEle1 >= 61 && nilai.RanEle1 <= 65) {
		printf("Nilai Rangkaian ELektronika 1 = BC");
	}
	else if (nilai.RanEle1 >= 66 && nilai.RanEle1 <= 70) {
		printf("Nilai Rangkaian ELektronika 1 = B");
	}
	else if (nilai.RanEle1 >= 71 && nilai.RanEle1 <= 80) {
		printf("Nilai Rangkaian ELektronika 1 = AB");
	}
	else if (nilai.RanEle1 >= 81 && nilai.RanEle1 <= 100) {
		printf("Nilai Rangkaian ELektronika 1 = A");
	}
	printf("\n");
	if (nilai.PraRanEle1 >= 0 && nilai.PraRanEle1 <= 40) {
		printf("Nilai Praktikum Rangkaian Elektronika 1  = E");
	}
	else if (nilai.PraRanEle1 >= 41 && nilai.PraRanEle1 <= 55) {
		printf("Nilai Praktikum Rangkaian Elektronika 1  = D");
	}
	else if (nilai.PraRanEle1 >= 56 && nilai.PraRanEle1 <= 60) {
		printf("Nilai Praktikum Rangkaian Elektronika 1  = C");
	}
	else if (nilai.PraRanEle1 >= 61 && nilai.PraRanEle1 <= 65) {
		printf("Nilai Praktikum Rangkaian Elektronika 1  = BC");
	}
	else if (nilai.PraRanEle1 >= 66 && nilai.PraRanEle1 <= 70) {
		printf("Nilai Praktikum Rangkaian Elektronika 1  = B");
	}
	else if (nilai.PraRanEle1 >= 71 && nilai.PraRanEle1 <= 80) {
		printf("Nilai Praktikum Rangkaian Elektronika 1  = AB");
	}
	else if (nilai.PraRanEle1 >= 81 && nilai.PraRanEle1 <= 100) {
		printf("Nilai Praktikum Rangkaian Elektronika 1  = A");
	}
	printf("\n");
	if (nilai.RanDig1 >= 0 && nilai.RanDig1 <= 40) {
		printf("Nilai Rangkaian DIgital 1 = E");
	}
	else if (nilai.RanDig1 >= 41 && nilai.RanDig1 <= 55) {
		printf("Nilai Rangkaian DIgital 1 = D");
	}
	else if (nilai.RanDig1 >= 56 && nilai.RanDig1 <= 60) {
		printf("Nilai Rangkaian DIgital 1 = C");
	}
	else if (nilai.RanDig1 >= 61 && nilai.RanDig1 <= 65) {
		printf("Nilai Rangkaian DIgital 1 = BC");
	}
	else if (nilai.RanDig1 >= 66 && nilai.RanDig1 <= 70) {
		printf("Nilai Rangkaian DIgital 1 = B");
	}
	else if (nilai.RanDig1 >= 71 && nilai.RanDig1 <= 80) {
		printf("Nilai Rangkaian DIgital 1 = AB");
	}
	else if (nilai.RanDig1 >= 81 && nilai.RanDig1 <= 100) {
		printf("Nilai Rangkaian DIgital 1 = A");
	}
	printf("\n");
	if (nilai.PraRanDig1 >= 0 && nilai.PraRanDig1 <= 40) {
		printf("Nilai Praktikum Rangkaian Digital 1 = E");
	}
	else if (nilai.PraRanDig1 >= 41 && nilai.PraRanDig1 <= 55) {
		printf("Nilai Praktikum Rangkaian Digital 1 = D");
	}
	else if (nilai.PraRanDig1 >= 56 && nilai.PraRanDig1 <= 60) {
		printf("Nilai Praktikum Rangkaian Digital 1 = C");
	}
	else if (nilai.PraRanDig1 >= 61 && nilai.PraRanDig1 <= 65) {
		printf("Nilai Praktikum Rangkaian Digital 1 = BC");
	}
	else if (nilai.PraRanDig1 >= 66 && nilai.PraRanDig1 <= 70) {
		printf("Nilai Praktikum Rangkaian Digital 1 = B");
	}
	else if (nilai.PraRanDig1 >= 71 && nilai.PraRanDig1 <= 80) {
		printf("Nilai Praktikum Rangkaian Digital 1 = AB");
	}
	else if (nilai.PraRanDig1 >= 81 && nilai.PraRanDig1 <= 100) {
		printf("Nilai Praktikum Rangkaian Digital 1 = A");
	}
	printf("\n");
	if (nilai.KonTek >= 0 && nilai.KonTek <= 40) {
		printf("Nilai Konsep Teknologi = E");
	}
	else if (nilai.KonTek >= 41 && nilai.KonTek <= 55) {
		printf("Nilai Konsep Teknologi = D");
	}
	else if (nilai.KonTek >= 56 && nilai.KonTek <= 60) {
		printf("Nilai Konsep Teknologi = C");
	}
	else if (nilai.KonTek >= 61 && nilai.KonTek <= 65) {
		printf("Nilai Konsep Teknologi = BC");
	}
	else if (nilai.KonTek >= 66 && nilai.KonTek <= 70) {
		printf("Nilai Konsep Teknologi = B");
	}
	else if (nilai.KonTek >= 71 && nilai.KonTek <= 80) {
		printf("Nilai Konsep Teknologi = AB");
	}
	else if (nilai.KonTek >= 81 && nilai.KonTek <= 100) {
		printf("Nilai Konsep Teknologi = A");
	}
	printf("\n");
	if (nilai.PemDas1 >= 0 && nilai.PemDas1 <= 40) {
		printf("Nilai Pemrograman Dasar 1 = E");
	}
	else if (nilai.PemDas1 >= 41 && nilai.PemDas1 <= 55) {
		printf("Nilai Pemrograman Dasar 1 = D");
	}
	else if (nilai.PemDas1 >= 56 && nilai.PemDas1 <= 60) {
		printf("Nilai Pemrograman Dasar 1 = C");
	}
	else if (nilai.PemDas1 >= 61 && nilai.PemDas1 <= 65) {
		printf("Nilai Pemrograman Dasar 1 = BC");
	}
	else if (nilai.PemDas1 >= 66 && nilai.PemDas1 <= 70) {
		printf("Nilai Pemrograman Dasar 1 = B");
	}
	else if (nilai.PemDas1 >= 71 && nilai.PemDas1 <= 80) {
		printf("Nilai Pemrograman Dasar 1 = AB");
	}
	else if (nilai.PemDas1 >= 81 && nilai.PemDas1 <= 100) {
		printf("Nilai Pemrograman Dasar 1 = A");
	}
	printf("\n");
	if (nilai.PraPemDas1 >= 0 && nilai.PraPemDas1 <= 40) {
		printf("Nilai Praktikum Pemrograman Dasar 1 = E");
	}
	else if (nilai.PraPemDas1 >= 41 && nilai.PraPemDas1 <= 55) {
		printf("Nilai Praktikum Pemrograman Dasar 1 = D");
	}
	else if (nilai.PraPemDas1 >= 56 && nilai.PraPemDas1 <= 60) {
		printf("Nilai Praktikum Pemrograman Dasar 1 = C");
	}
	else if (nilai.PraPemDas1 >= 61 && nilai.PraPemDas1 <= 65) {
		printf("Nilai Praktikum Pemrograman Dasar 1 = BC");
	}
	else if (nilai.PraPemDas1 >= 66 && nilai.PraPemDas1 <= 70) {
		printf("Nilai Praktikum Pemrograman Dasar 1 = B");
	}
	else if (nilai.PraPemDas1 >= 71 && nilai.PraPemDas1 <= 80) {
		printf("Nilai Praktikum Pemrograman Dasar 1 = AB");
	}
	else if (nilai.PraPemDas1 >= 81 && nilai.PraPemDas1 <= 100) {
		printf("Nilai Praktikum Pemrograman Dasar 1 = A");
	}
	printf("\nNilai Total = %f", nilai.IPS);
	printf("\nIndeks Prestasi Sementara : %f\n", nilai.IPS / 25);
	if (nilai.IPS >= 0 && nilai.IPS <= 40) {
		printf("Indeks Prestasi Sementara = E");
	}
	else if (nilai.IPS >= 41 && nilai.IPS <= 55) {
		printf("Indeks Prestasi Sementara = D");
	}
	else if (nilai.IPS >= 56 && nilai.IPS <= 60) {
		printf("Indeks Prestasi Sementara = C");
	}
	else if (nilai.IPS >= 61 && nilai.IPS <= 65) {
		printf("Indeks Prestasi Sementara = BC");
	}
	else if (nilai.IPS >= 66 && nilai.IPS <= 70) {
		printf("Indeks Prestasi Sementara = B");
	}
	else if (nilai.IPS >= 71 && nilai.IPS <= 80) {
		printf("Indeks Prestasi Sementara = AB");
	}
	else if (nilai.IPS >= 81 && nilai.IPS <= 100) {
		printf("Indeks Prestasi Sementara = A");
	}
}
