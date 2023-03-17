/*  NAMA        : Michael Novando Napitupulu
    NIM         : A11.2022.14452
    KKELOMPOK   : A11.4212
*/

#include <iostream>
using namespace std;

int Penjumlahan(int p, int q) {
return p + q;
}

int Pengurangan(int p, int q){
return p - q;
}

int Total(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;

}

double RataRata(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    double rata_rata = (double) total / size;
    return rata_rata;
}
int main() {
    //1,2
    int x,y,i;
    //3,4
    int arr[] = {1, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);


    cout << "\nMasukan Nilai x: "; cin >> x;
    cout << "\nMasukan Nilai y: "; cin >> y;
    cout << "\n---------------------------------------------------------";
    cout << "\nHasil Penjumlahan dari x dan y yaitu " << Penjumlahan(x, y) << endl;
    cout << "\nHasil Pengurangan dari x dan y yaitu " << Pengurangan(x, y) << endl;
    int tot = Total(arr,size);
    double rata_rata = RataRata(arr, size);
    cout << "\nTotal: " << tot << endl;
    cout << "\nRata-rata: " << rata_rata << endl;

return 0;
}
