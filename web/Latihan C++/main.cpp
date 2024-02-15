#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inisialisasi seed untuk fungsi rand() agar menghasilkan nilai acak setiap kali program dijalankan
    srand(static_cast<unsigned int>(time(0)));

    // Array berisi teka-teki
    string tekaTeki[] = {
        "Siapa Orang Paling Jomok Di Hubbul Khoir?",
        "Siapa Pacar Farros?",
        "Apakah Hudzaifah Adalah Seorang Manusia?",
        "Apakah Michael Pernah Menonton Keramat?",
        "Apakah Ayyub Adalah Jamet Prindapan?"
    };

    // Memilih teka-teki secara acak
    int indexTekaTeki = rand() % (sizeof(tekaTeki) / sizeof(tekaTeki[0]));

    // Menampilkan teka-teki kepada pengguna
    cout << "Teka-teki: " << tekaTeki[indexTekaTeki] << endl;

    // Menunggu jawaban dari pengguna
    string jawaban;
    cout << "Jawaban Anda: ";
    getline(cin, jawaban);

    // Memeriksa jawaban
    if ((jawaban == "Farros Dan Nafis" ) && indexTekaTeki == 0
        || jawaban == "Nafis" && indexTekaTeki == 1
        || jawaban == "Bukan" && indexTekaTeki == 2
        || jawaban == "Ya" && indexTekaTeki == 3
        || jawaban == "Ya" && indexTekaTeki == 4) {
        cout << "Hoki Aja Lu Bisa Bener WKWKWK" << endl;
    } else {
        cout << "SALAH GOBLOK!!!!" << endl;
    }

    return 0;
}
