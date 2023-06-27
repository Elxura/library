#include <iostream>
#include <string>

using namespace std;
int daftar = 2, n, urut = 0;
string judul;
string code[100] = {"b156", "a122", "c124"};
string buku[100] = {"pemprograman dasar", "kalkulus 1\t", "matematika diskrit"};
bool stok[100] = {1, 1, 1};

string nama[100];
string code2[100];
string waktu[100];
int sequential_search(string data[], string k)
{
    int posisi, i, ketemu;

    if (daftar <= 0)
    {
        posisi = -1;
    }
    else
    {
        ketemu = 0;
        i = 0;
        while ((i < daftar - 1) && (!ketemu))
        {
            if (data[i] == k)
            {
                posisi = i;
                ketemu = 1;
            }
            else
            {
                i++;
            }
            if (!ketemu)
            {
                posisi = -1;
            }
        }
    }
    return posisi;
}
void ulang()
{
    cout << endl
         << "masukkan pilihan anda : ";
}
void format()
{
    cout << "code"
         << "\t\tjudul buku"
         << "\t\t status" << endl;
}
void tabel()
{
    for (int i = 0; i <= daftar; i++)
    {
        if (code[i] != "" && buku[i] != "")
        {
            cout << code[i] << "\t\t" << buku[i];
            if (stok[i] == 1)
            {
                cout << "\t tersedia" << endl;
            }
            else
            {
                cout << "\t dipinjam" << endl;
            }
        }
    }
}
int pinjam(string kode, string orang)
{
    for (int i = 0; i <= daftar; i++)
    {
        if (code[i] == kode && code[i] != "")
        {
            stok[i] = 0;
            code2[urut] = code[i];
            nama[urut] = orang;
            cout << "masukkan Waktu Peminjaman (hari) :";
            cin >> waktu[urut];
            cout << "berhasil dipinjam" << endl;
            urut = urut + 1;
        }
    }
    return 0;
}

void kembali(string balik)
{
    for (int i = 0; i <= daftar; i++)
    {
        if (code[i] == balik && code[i] != "")
        {
            stok[i] = 1;
            nama[i] = "";
            code2[i] = "";
            urut = urut - 1;
            cout << "berhasil dikembalikan" << endl;
        }
    }
}

void peminjam()
{
    cout << "code"
         << "\t nama"
         << "\t waktu peminjaman(hari)" << endl;

    for (int i = 0; i <= urut; i++)
    {
        if (nama[i] != "")
        {
            cout << code2[i] << "\t" << nama[i] << "\t";
            if (waktu[i] != "")
            {
                cout << waktu[i] << endl;
            }
        }
    }
}
int tambah()
{
    string c;
    cout << "code buku : ";
    cin >> c;
    int posisi = sequential_search(code, c);
    if (posisi != -1)
    {
        cout << "Kode tidak dapat sama";
    }
    else
    {
        daftar = daftar + 1;
        code[daftar] = c;
        cout << "judul buku : ";
        getline(cin >> std::ws, buku[daftar]);
        stok[daftar] = 1;
        cout << "berhasil ditambahkan" << endl;
    }
    return 0;
}

void hapus(string c)
{
    for (int i = 0; i <= daftar; i++)
    {
        if (code[i] == c)
        {
            code[i] = "";
            buku[i] = "";
            stok[i] = "";
            cout << "berhasil dihapus" << endl;
        }
    }
}

int main()
{
    string kode, orang;

    cout << "perpustakaan " << endl;
    cout << "1. Daftar Buku" << endl;
    cout << "2. Pinjam Buku" << endl;
    cout << "3. Kembalikan Buku " << endl;
    cout << "4. Tambahkan Buku " << endl;
    cout << "5. Hapus Buku " << endl;
    cout << "6. Peminjam Buku" << endl;
    cout << "masukkan pilihan anda : ";
    cin >> n;
    while (n == 1 || n == 2 || n == 3 || n == 4 || n == 5 || n == 6)
    {

        switch (n)
        {
        case 1:
        {
            format();
            tabel();
            ulang();
            break;
        }

        case 2:
        {
            cout << "Masukkan kode :";
            cin >> kode;
            cout << "Masukkan Nama Peminjam : ";
            cin >> orang;
            pinjam(kode, orang);
            ulang();
            break;
        }
        case 3:
        {
            cout << "Masukkan kode :";
            cin >> kode;
            kembali(kode);
            ulang();
            break;
        }
        case 4:
        {
            tambah();
            ulang();
            break;
        }
        case 5:
        {
            cout << "Masukkan kode untuk dihapus :";
            cin >> kode;
            hapus(kode);
            ulang();
            break;
        }
        case 6:
        {
            peminjam();
            ulang();
            break;
        }
        };
        cin >> n;
    }
}