#include <iostream>
using namespace std;

int main() {
    int wybor;
    cin >> wybor;
    switch (wybor) {
        default:
            cout<<"Blad ";
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

    }
    return 0;
}
