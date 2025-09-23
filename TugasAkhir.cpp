#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct ItemBelanja {
    string nama;
    int jumlah;
};

int main() {
    vector<ItemBelanja> daftar;
    int pilihan;

    do {
        cout << "\n=== Aplikasi Daftar Belanja ===\n";
        cout << "1. Tambah Item\n";
        cout << "2. Lihat Daftar\n";
        cout << "3. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1) {
            ItemBelanja item;
            cout << "Nama Barang : ";
            getline(cin, item.nama);
            cout << "Jumlah      : ";
            cin >> item.jumlah;
            cin.ignore();
            daftar.push_back(item);
            cout << ">> Item berhasil ditambahkan!\n";
        } 
        else if (pilihan == 2) {
            if (daftar.empty()) {
                cout << "Belum ada item di daftar belanja.\n";
            } else {
                cout << "\n--- Daftar Belanja ---\n";
                for (int i = 0; i < daftar.size(); i++) {
                    cout << i+1 << ". " << daftar[i].nama 
                         << " (" << daftar[i].jumlah << ")\n";
                }
            }
        }
    } while (pilihan != 3);

    cout << "Program selesai. Terima kasih\n";
    return 0;
}