#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <linux/a.out.h>
#include <iomanip>

using namespace std;

string dataMember;
int pilihan=0;

//KOP PERPUSTAKAAN
string kop() {
    cout << endl <<endl;
    cout.width(125);
    cout << "::::::::::::::::::: SELAMAT DATANG DI PERPUSTAKAAN UII :::::::::::::::::::" << endl;
    cout.width(125);
    cout << "--------------------------------------------------------------------------" << endl << endl;
}

string loading()  {
    cout << endl << endl << endl <<endl;
    cout.width(86);
    cout << "LOADING PROGRAM...";
	Sleep (500);
	cout << "na..";
	Sleep (500);
	cout << "su..";
	Sleep (500);
	cout << "ti..";
	Sleep (500);
	cout << "on..";
	Sleep (500);
	cout << "" << endl;
	system("cls");
	kop();
}


string buku()  {
    struct {
        char idBuku[10];
        char namaBuku[25];
        char pengarangBuku[25];
        int stokBuku;
    } dataBuku[] = {
        {"","","",}
    };

    int n;

    cout << "Masukan Jumlah inputan :" ;
    cin >> n;

    for(int i = 0; i<n; i++)  {
        dataBuku[i].idBuku;
        cout << "Masukan idBUKU :" ;
        cin >> dataBuku[i].idBuku;

        dataBuku[i].namaBuku;
        cout << "Masukan nama buku :";
        cin >> dataBuku[i].namaBuku;

        dataBuku[i].pengarangBuku;
        cout << "Masukan pengarang :" ;
        cin >> dataBuku[i].pengarangBuku;

        dataBuku[i].stokBuku;
        cout << "Masukan stok :"  ;
        cin >> dataBuku[i].stokBuku;

        ofstream data_buku("Data Buku.txt");
        data_buku << setiosflags(ios::left) << setw(16)
              << " ID BUKU "
              << "     NAMA BUKU     "
              << "     PENGARANG     "
              << "     STOK BUKU     "
              << resetiosflags(ios::left)
              << "======================================================================================"
              << endl;

         for(int i = 0; i<4; i++) {
                data_buku << setiosflags(ios::left) <<setw(16)
                  << dataBuku[i].idBuku
                  << resetiosflags(ios::left)

                  << setiosflags(ios::left) <<setw(16)
                  << dataBuku[i].namaBuku
                  << resetiosflags(ios::left)

                  << setiosflags(ios::right) <<setw(16)
                  << dataBuku[i].pengarangBuku
                  << resetiosflags(ios::right)

                  << setiosflags(ios::right) <<setw(16)
                  << dataBuku[i].stokBuku
                  << resetiosflags(ios::right)
                  << endl <<endl <<endl;
    }

    data_buku.close();
    cout << "Data Terinput !!" <<endl;

        data_buku.close();

    }






}

//LIST MENU
string menu() {
    int pilMenu;
    cout.width(125);
    cout << "--------------------------------------------------------------------------" << endl;
    cout.width(65);
    cout << "Pilihan Menu :" << endl;
    cout.width(71);
    cout << "[1] Daftar Buku \n";
    cout.width(75);
    cout << "[2] Input Data Buku \n";
    cout.width(71);
    cout << "[3] Data Member \n";
    cout.width(125);
    cout << "--------------------------------------------------------------------------" << endl;
    cout.width(59);
    cout << "Menu : " ;
    cin >> pilMenu;
    system("cls");

    switch(pilMenu) {
    case 1:
        kop();
        cout.width(125);
        cout << ":: Menu >> Daftar Buku ::\n";
        cout.width(125);
        cout << "--------------------------------------------------------------------------" << endl;

        char idBuku[10];
        char namaBuku[25];
        char pengarangBuku[25];
        int stokBuku;

//        char namaFile[]  = {'D','a','t','a',' ','B','u','k','u','.','t','x','t','\0'};
//
//        ifstream bacaDataBuku;
//        bacaDataBuku.open(namaFile);
//
//        int n;
//        cout << "masukan jumlah yang ingin ditampilkan : ";
//        cin >> n;

     //   for(int i=0; i <= n; i++) {
     //       getline(bacaDataBuku, idBuku[i]);
      //  cout << idBuku[i] << endl;
  //  }

   // }

//        break;
    case 2:
        kop();
        cout << "Anda Berada : Menu >> Input Data Buku \n";
        buku();




        break;
    case 3:
        kop();
        cout.width(125);
        cout << ":: Menu >> Data Member ::\n";
        cout.width(125);
        cout << "--------------------------------------------------------------------------" << endl;

        ifstream ReadMember;
        ReadMember.open("E:\\TubesPSD\\TubesPerpustakaan\\database\\data member\\data member.txt");

        if (ReadMember.is_open())
        {
            while(getline(ReadMember,dataMember) )
            {
              cout.width(80);
              cout << dataMember << '\n';
            }
            ReadMember.close();
        }

        else cout << "Unable to open file";
        break;
    }
}

string prosesRegis() {
    cout << endl << endl << endl <<endl;
    cout.width(91);
    cout << "PROSES REGISTRASI...";
	Sleep (500);
	cout << "na..";
	Sleep (500);
	cout << "su..";
	Sleep (500);
	cout << "ti..";
	Sleep (500);
	cout << "on..";
	Sleep (500);
	cout << "" << endl;
	system("cls");
}

string prosesLogin() {
    cout << endl << endl << endl <<endl;
    cout.width(86);
    cout << "PROSES LOGIN...";
	Sleep (500);
	cout << "na..";
	Sleep (500);
	cout << "su..";
	Sleep (500);
	cout << "ti..";
	Sleep (500);
	cout << "on..";
	Sleep (500);
	cout << "" << endl;
	system("cls");
}

string Login()  {
    system("cls");
    loading();
    cout.width(95);
    cout << "--------------------------------------------" << endl;
    cout.width(76);
    cout << ":::    SILAHKAN LOGIN :" << endl;
    string username, password, un, ps, filename, directory;

    do {
        cout.width(96);
        cout << "Masukan Username : ";
        cin >> username;
        cout.width(96);
        cout << "Masukan Password : ";
        cin >> password;

        directory = ("E:\\TubesPSD\\TubesPerpustakaan\\database\\akun\\");

        filename = directory + username + ".txt";

        ifstream readAkun(filename.c_str());
        getline(readAkun, un);
        getline(readAkun, ps);


        if(un == username && ps == password) {
            cout.width(96);
            cout << "Login Berhasil !!!" << endl;
            prosesLogin();
            kop();
            menu();
        }else {
            cout.width(96);
            cout << "Login Gagal !! Perhatikan Username dan Password" << endl;
        }
    }while(un != username && ps != password);
}


string Register() {
    cout.width(95);
    cout << "--------------------------------------------" << endl;
    cout.width(76);
	cout << "::: SILAHKAN REGISTRASI :" << endl;
    string username, password, nama, alamat, filename, directory, un, ps;

    do{
        cout.width(96);
        cout << "Masukan Username : ";
        cin >> username;
        cout.width(96);
        cout << "Masukan Password : ";
        cin >> password;
        cout.width(96);
        cout << "Masukan Nama : ";
        cin >> nama;
        cout.width(96);
        cout << "Masukan Alamat : ";
        cin >> alamat;

        directory = ("E:\\TubesPSD\\TubesPerpustakaan\\database\\akun\\");

        filename = directory + username + ".txt";

        ifstream readAkun(filename.c_str());
        getline(readAkun, un);
        getline(readAkun, ps);

        if(un == username) {\
            cout << endl;
            cout.width(102);
            cout << ">> Username Sudah Ada <<\a\n" <<endl ;
        }else {
            ofstream file(filename.c_str());
            file << username << endl;
            file << password << endl;
            file << nama << endl;
            file << alamat << endl;
            file.close();
            prosesRegis();

            kop();
            cout << endl <<endl;
            cout.width(104);
            cout << "Selamat Anda Telah Terdaftar !!! " << endl;

        }
    }while(un == username);
}


int main()
{
    kop();

    cout <<endl;
    cout.width(95);
    cout << "::: Silahkan Melakukan Login atau Register :" << endl;
    cout.width(65);
    cout << "[1] REGISTER" << endl;
    cout.width(63);
	cout << "[2] LOG-IN" << endl;
    cout.width(95);
    cout << "--------------------------------------------" << endl;
    cout.width(82);
    cout << "::: Masukan Pilihan [1]/[2] ? :";
    cin >> pilihan;

    if(pilihan == 2) {
        Login();
    }

    else if(pilihan == 1) {
        Register();
            cout.width(104);
            cout << "Ingin Melakukan Login ? klik [2] :" ;
            cin >> pilihan;
            if(pilihan == 2) {
                cout.width(95);
                cout << "--------------------------------------------" << endl;
                cout.width(71);
                cout << "::: SILAHKAN LOGIN :" << endl << endl;
                Login();
            }
    }

    return 0;
}
