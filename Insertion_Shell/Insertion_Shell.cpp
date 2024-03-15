#include <iostream>
using namespace std;
int Arr[11];
int n;


void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada array = ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen, \n";
        }
    }
    cout << endl;
    cout << "===================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "===================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "DAta ke-" << (i + 1) << "; ";
        cin >> Arr[i];
    }
}

void insertionShort() {
    int i, n, temp, j;
    

    for (i = 1; i <= n - 1; i++)
    {
        temp = Arr[i];
        j = i - 1;
        while (j >= 0 && Arr[j] > temp)
        {
            Arr[j + 1] = Arr[j];
            j = j + 1;
        }
        Arr[j + 1] = temp;
    }

}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << Arr[j] << endl;
    }
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
}


int main()
{
    
}


