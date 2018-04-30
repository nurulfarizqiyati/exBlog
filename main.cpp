#include <iostream>

using namespace std;

struct Kecamatan {
    string nama;
    Kecamatan *sebelahKanan;
    Kecamatan *sebelahKiri;
};

int main()
{
    Kecamatan sukolilo;
    Kecamatan kenjeran;
    Kecamatan jemursari;
    Kecamatan waru;

    sukolilo.nama = "Kec. Sukolilo";
    kenjeran.nama = "Kec. Kenjeran";
    jemursari.nama = "Kec. Jemursari";
    waru.nama = "Kec. Waru";

    sukolilo.sebelahKanan = &kenjeran;
    sukolilo.sebelahKiri = &jemursari;
    jemursari.sebelahKiri = &waru;
    waru.sebelahKanan = &kenjeran;

    kenjeran.sebelahKanan = NULL;

//    cout << sukolilo.nama << endl;
//    cout << kenjeran.nama << endl << endl;
//
//    cout << sukolilo.sebelahKanan->nama << endl;
//    cout << sukolilo.sebelahKiri->nama << endl;
//
//    cout << jemursari.sebelahKiri->nama << endl;
//    cout << sukolilo.sebelahKiri->sebelahKiri->nama << endl;

//    cout << "Jalan pintas waru-jemur: "
//         << waru.sebelahKanan->nama << endl;

    jemursari.sebelahKanan = &sukolilo;
    waru.sebelahKanan = &jemursari;  //
    cout << "Jalan waru-kenjeran: "
         << waru.sebelahKanan
               ->sebelahKanan
               ->sebelahKanan->nama
         << endl;

    Kecamatan *cetak = &waru;

    while (cetak != NULL) {
        cout << cetak->nama << endl;
//        if (cetak->nama == "Kec. Sukolilo") {
//            cout << endl << "Loop: " << cetak->nama;
//            cout << endl;
//        }
        cetak = cetak->sebelahKanan;
    }
}
