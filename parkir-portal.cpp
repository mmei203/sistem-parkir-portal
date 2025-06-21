#include <iostream>
#include <unordered_map>
#include <ctime>
#include <thread>
using namespace std;

struct parkir{
    string kartuID;
    string kendaraan;
    time_t waktuMasuk;
};


void tampilkanMenu(){
    cout << "\n === Sistem Parkir Portal ===\n";
    cout << "1. Tampilkan kartu\n";
    cout << "2. Hapus kartu\n";
    cout << "3. Daftar lahan parkir kosong\n";
    cout << "4. Keluar dari parkir\n";
    cout << "5. Keluar dari program\n";
}

int main(){


    return 0;
}