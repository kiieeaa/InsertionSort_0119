#include <iostream>
using namespace std;

int arr[20];        //membuat array dengan panjang data 20
int n;              //membuat variable inputan n

void input() { //procedure input
    while (true) {
        cout << "masukan jumlah data pada array: "; //meminta user untuk memasukkan banyaknya elemen pada array
        cin >> n; //menerima inputan banyaknya elemen pada array

        if (n <= 20) { //jika banyaknya elemen pada array kurang dari atau sama dengan 20
            break; //keluar dari loop
        }
        else {
            cout << "\nArray tidak boleh lebih dari 20\n." << endl; //memberikan pesan error jika banyaknya elemen pada array lebih dari 20
        }
    }
    cout << endl;
    cout << "=======================================";
    cout << "==========Masukan Element Array==========";
    cout << "=======================================";

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void insertionsort()
{ // procedure insertion sort
    int temp;
    int j;
    