#include <iostream>
using namespace std;

int main() {
    
    int i;
    int arr[5];

    for (i = 60; i > 10; i -= 10) {
        cout << i << " Selama Pagi Dunia " << endl;
    }

    cout << "Nilai i terakhir : " << i << endl;

    for (i = 0; i < 5; i++) {
        cout << "Masukan Nilai index ke-" << i << " :";
        cin >> arr[i];
    }
   
    
}
