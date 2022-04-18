#include <iostream>
using namespace  std;
int main() {
    string toplam;
    string kullaniciadi;
    string sifre;
    string girilenad;
    string girilensifre;
    int baslangic;
    int menu;
    int bakiye = 500;
    int miktar;
    int a;
    int b;
    int i;
    int hesapmenu;
    cout << " MERHABA MULTI ISLEM UYGULAMASINA HOSGELDINIZ " << endl;
    cout << "Lutfen hesap olusturunuz : " << endl;

    cout << "kullanici adi : " << endl;
    cin >> kullaniciadi;
    cout << "sifre :  " << endl;
    cin >> sifre;
    cout << "tebrikler hesap olusturdunuz " << endl;
bektos:
    cout << "lutfen kullanici adinizi girin : " << endl;

    cin >> girilenad;
faktos:
    cout << "lutfen sifrenizi girin : " << endl;

    cin >> girilensifre;


    if (kullaniciadi == girilenad && sifre == girilensifre) {

        cout << " basarili sekilde giris yaptiniz : " << endl;

    }
    else if (kullaniciadi != girilenad && sifre == girilensifre) {

        cout << " kullanici adiniz yanlis lutfen tekrar deneyin : " << endl;

        goto bektos;
    }
    else if (kullaniciadi == girilenad && sifre != girilensifre) {

        cout << " sifreniz yanlis lutfen tekrar deneyin : " << endl;

        goto faktos;
    }
    else if (kullaniciadi != girilenad && sifre != girilensifre) {

        cout << " kullanici adi ve  sifreniz yanlis lutfen tekrar deneyin : " << endl;
    }

    cout << "Hosgeldiniz lutfen yapmak istediginiz islemi seciniz :\n " << endl;

    cout << "1 BANKACILIK ISLEMLERİ  / 2 HESAP MAKINESI     /3 DONGULER / 4 CIKIS    \n" << endl;

    cin >> baslangic;

    switch (baslangic) {
        git:
    case 1:   cout << "Hosgeldiniz lutfen yapmak istediginiz islemi seciniz :\n " << endl;
        cout << "1 PARA CEKME / 2 PARA YATIRMA / 3 CIKIS \n" << endl;
        cin >> menu;

        switch (menu) {


        case 1: cout << "hesabinizdaki  para:  " << bakiye << endl;
            cout << "\nlütfen cekmek istediginiz tutari giriniz \n" << endl;
            cin >> miktar;

            bakiye = bakiye - miktar;

            cout << "hesabinizda kalan para: \n " << bakiye << endl;

            break;

            if (bakiye < miktar) {

                cout << "yetersiz bakiye \n" << endl;
            }

            else {
                cout << "hesabinizda kalan para:   \n" << bakiye << endl;
                bakiye = bakiye - miktar;

            }
              
            break;
            goto son;

        case 2:  cout << "hesabinizdaki  para:  " << bakiye << endl;
            cout << "\n lütfen yatirmak istediginiz tutarı giriniz \n" << endl;
            cin >> miktar;

            bakiye = bakiye + miktar;

            cout << "hesabinizdaki  para:  " << bakiye << endl;

            break;

        case 3: 	 cout << "hayirli gunler dileriz \n" << endl;

            goto son;
            

           

        }
        goto git;

    case 2:    cout << "ilk degeri gir" << endl;
        cin >> a;
        cout << "ikinci degeri gir" << endl;
        cin >> b;


        cout << "lutfen yapmak istediginiz islem isaretini seciniz + - x / olarak giriniz" << endl;
        cin >> toplam;

        if (toplam == "+") {

            cout << a + b;
        }
        else if (toplam == "-") {

            cout << a - b;
        }
        else if (toplam == "x") {

            cout << a * b;
        }

        else {

            cout << a / b;
        }

        break;

    case 3:        for (i = 0; i <= 20; i++) {




        cout << "  oc kadir  \n " << i << endl;

        int v = 1, top = 76;
        while (true)
        {
            if (v == 101)
            {
                break;
            }
            toplam += v;
            v++;
        }
          cout << top << endl;

    }
            

    }
        son:
        cout << "hayirli gunler dileriz \n" << endl;


    return 0;


}
