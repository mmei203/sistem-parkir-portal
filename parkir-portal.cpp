#include <iostream>
#include <unordered_map>
#include <ctime>
#include <thread>
#include <vector>
using namespace std;

struct parkir{
    string kartuID;
    string kendaraan;
    time_t waktuMasuk;
};

class sistemParkir{
private:
    unordered_map<string , parkir> parkirAktif;
    vector<int> lahanKosong;
    int kapasitas;
public:
    sistemParkir(int kapasitas) : kapasitas(kapasitas){
        for (int i = 1; i <= kapasitas; i++){
            lahanKosong.push_back(i);
        }
    }

    void tampilkanMenu(){
        cout << "\n === Sistem Parkir Portal ===\n";
        cout << "1. Tampilkan kartu\n";
        cout << "2. Hapus kartu\n";
        cout << "3. Daftar lahan parkir kosong\n";
        cout << "4. Keluar dari parkir\n";
        cout << "5. Keluar dari program\n";
    }
};

int main () {

    return 0;
}
