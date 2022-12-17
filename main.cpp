#include <iostream>
using namespace std;

int main() {
    int wybor;
    cin >> wybor;
    switch (wybor) {
        default:{
            cout<<"Wrong task number! ";
            return 0;
        }
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
            //int d_rozmiar_tab1 = 0;
            //int d_rozmiar_tab2 = 0;
            int d_rozmiar_all = 0;
            //int tab_mem[d_rozmiar_all];
            int suma_tab1 = 0;
            int suma_tab2 = 0;
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
            //poczatek starego rozwiazania z tablica chwilowa zawierajaca niepowtarzajace sie dac oraz tablica przechowywujaca ilosc powtorzen kazdej liczby (zbyt skomplikowane rozwiazanie)
            /*for (int n=0; n<rozmiar; n++){
                if (tab1[n] != tab1[n+1])
                    d_rozmiar_tab1++;
                cout << "rozmiar= " << d_rozmiar_tab1 <<" n= " << n << endl;
            }
            for (int n=0; n<rozmiar; n++){
                if (tab2[n] != tab2[n+1])
                    d_rozmiar_tab2++;
                cout << "rozmiar= " << d_rozmiar_tab2 <<" n= " << n << endl;
            }
            if (d_rozmiar_tab1 == d_rozmiar_tab2)
                d_rozmiar_all = d_rozmiar_tab1;
            else
               cout << "Not equal";*/
            for (int i = 0; i <rozmiar ; i++) {
                suma_tab1 = suma_tab1+tab1[i];
                suma_tab2 = suma_tab2+tab2[i];

            }
            if (suma_tab1 == suma_tab2)
                cout << "Equal";
            else
                cout << "Not equal";

        }
        case 3:{
            string input;
            //bool ok = false;
            cin >> input;
            int LT=0; // liczba tymczasowa
            int LPR=0; // licznik powtórzeń równych
            int wynik;


            static const int I = 1;
            static const int V = 5;
            static const int L = 50;
            static const int C = 100;
            static const int M = 1000;
            static const int D = 500;
            static const int X = 10;

            for (int n=0; n<input.size(); n++){
                if (input[n] == 'I'||
                input[n] == 'V'||
                input[n] == 'X' ||
                input[n] == 'L'||
                input[n] == 'C' ||
                input[n] == 'M' ||
                input[n] == 'D'){
                    //cout << "Right input letter " << input[n] << endl;
                    continue;
                }else{
                    cout << "Not roman number!"<< endl;
                    return 0;
                }


            }
            int MEM[input.size()];
            for (int n=0; n<input.size();n++){
                if (input[n] == 'I')
                    MEM[n] = I;
                if (input[n] == 'V')
                    MEM[n] = V;
                if (input[n] == 'X')
                    MEM[n] = X;
                if (input[n] == 'M')
                    MEM[n] = M;
                if (input[n] == 'C')
                    MEM[n] = C;
                if (input[n] == 'D')
                    MEM[n] = D;
                if (input[n] == 'L')
                    MEM[n] = L;
            }
            for (int n=0; n<input.size();n++){
                cout << MEM[n] << " ";
            }
                cout << " " << endl;

            if (MEM[input.size()-2] == MEM[input.size()-1]){
                cout << "input -1 " << MEM[input.size()-1]<< endl;
                cout << "input -2 " << MEM[input.size()-2]<< endl;
// plan na zrobienie dalej 1.petla for do operacji zliczania i odejmowanie do najwiekszej 2. przesuniecie pętli do największej 3. petla sumujca

            }

        }

    }
    return 0;
}
