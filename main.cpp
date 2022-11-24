#include <iostream>
using namespace std;

int main() {
    int wybor;
    cin >> wybor;
    switch (wybor) {
        default:{
            cout<<"Blad ";}
        case 1:{
            static const int rozmiar = 6;
            double tablica[rozmiar];
            double MEM;
            for (int n=0;n<rozmiar;n++){
                cin >> MEM;
                if (MEM<=10 && MEM>=0)
                    tablica[n] = MEM;
                else
                    n--;
            }
            for (int j = 0; j < rozmiar; j++) {
                cout << tablica[j] << " ";

            }
        }
        case 2:{
            const int rozmiar = 5;
            int tab1[rozmiar];
            int tab2[rozmiar];
            string MEM_S;
            for (int n=0;n<rozmiar;n++) {
                cin >> MEM_S;
                bool czy_liczba = false;
                bool czy_inny = false;
                for(int i=0; i<MEM_S.size();i++){
                    if(
                                    MEM_S[i] == '0' ||
                                    MEM_S[i] == '1' ||
                                    MEM_S[i] == '2' ||
                                    MEM_S[i] == '3' ||
                                    MEM_S[i] == '4' ||
                                    MEM_S[i] == '5' ||
                                    MEM_S[i] == '6' ||
                                    MEM_S[i] == '7' ||
                                    MEM_S[i] == '8' ||
                                    MEM_S[i] == '9' ||
                                    MEM_S[i] == '.'){
                        czy_liczba = true;
                        //cout << "liczba " << MEM_S[i] << endl;
                    }
                    else{
                        czy_inny = true;
                        //cout<<"kompletny blad " << MEM_S[i] << endl;
                    }

                }
                if (czy_liczba == true && czy_inny == false){
                    tab1[n]=stoi(MEM_S);
                    //cout <<"wykryta liczba " << tab1[n] << endl;
                }else if (czy_inny ==  true){
                    //cout <<"czy inny= " << czy_inny << endl;
                    n--;
                }


            }
            for (int n=0;n<rozmiar;n++) {
                cin >> MEM_S;
                bool czy_liczba = false;
                bool czy_inny = false;
                for(int i=0; i<MEM_S.size();i++){
                    if(
                            MEM_S[i] == '0' ||
                            MEM_S[i] == '1' ||
                            MEM_S[i] == '2' ||
                            MEM_S[i] == '3' ||
                            MEM_S[i] == '4' ||
                            MEM_S[i] == '5' ||
                            MEM_S[i] == '6' ||
                            MEM_S[i] == '7' ||
                            MEM_S[i] == '8' ||
                            MEM_S[i] == '9' ||
                            MEM_S[i] == '.'){
                        czy_liczba = true;
                        //cout << "liczba " << MEM_S[i] << endl;
                    }
                    else{
                        czy_inny = true;
                        //cout<<"kompletny blad " << MEM_S[i] << endl;
                    }

                }
                if (czy_liczba == true && czy_inny == false){
                    tab2[n]=stoi(MEM_S);
                    //cout <<"wykryta liczba " << tab1[n] << endl;
                }else if (czy_inny ==  true){
                    //cout <<"czy inny= " << czy_inny << endl;
                    n--;
                }

            }
            //test
            //for (int i = 0; i < rozmiar ; ++i) {
            //    cout << tab1[i] << " ";
            //}
            //cout << " " << endl;
            //for (int i = 0; i < rozmiar ; ++i) {
            //    cout << tab2[i] << " ";
            //}
            //test
            bool nequal = false;
            for(int n=0; n<rozmiar; n++){ //blednie napisane, trzeba poprawic poniwaz nie sprawdza kolejnosci
                if (tab1[n] != tab2[n])
                    nequal = true;
                else continue;
            }
            if (nequal == true)
                cout << "Equal" << endl;
            else
                cout << "Not equal" << endl;
        }

    }
    return 0;
}
