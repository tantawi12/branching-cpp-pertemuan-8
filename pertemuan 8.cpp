#include <stdio.h>
#include <string.h>


struct Zodiak {
    char nama[20];
    int mulaiBulan;
    int mulaiTanggal;
    int akhirBulan;
    int akhirTanggal;
};


struct Zodiak zodiaks[] = {
    {"CAPRICORN", 12, 22, 1, 19},
    {"AQUARIUS", 1, 20, 2, 18},
    {"PISCES", 2, 19, 3, 20},
    {"ARIES", 3, 21, 4, 19},
    {"TAURUS", 4, 20, 5, 20},
    {"GEMINI", 5, 21, 6, 20},
    {"CANCER", 6, 21, 7, 22},
    {"LEO", 7, 23, 8, 22},
    {"VIRGO", 8, 23, 9, 22},
    {"LIBRA", 9, 23, 10, 22},
    {"SCORPIO", 10, 23, 11, 21},
    {"SAGITTARIUS", 11, 22, 12, 21}
};

void tentukanZodiak(int tanggal, int bulan) {
    for (int i = 0; i < 12; i++) {
        if ((bulan == zodiaks[i].mulaiBulan && tanggal >= zodiaks[i].mulaiTanggal) ||
            (bulan == zodiaks[i].akhirBulan && tanggal <= zodiaks[i].akhirTanggal)) {
            printf("Zodiak Anda adalah: %s\n", zodiaks[i].nama);
            return;
        }
    }
    printf("Tanggal dan bulan tidak valid.\n");
}

int main() {
    int tanggal, bulan, tahun;


    printf("Tanggal Lahir Anda [tgl-bln-tahun]: ");
    scanf("%d-%d-%d", &tanggal, &bulan, &tahun);


    tentukanZodiak(tanggal, bulan);

    return 0;
}
