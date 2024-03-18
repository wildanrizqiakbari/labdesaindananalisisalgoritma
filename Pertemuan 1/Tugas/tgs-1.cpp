//#include <iostream>
//using namespace std;
//
//void insertionSort(int arr[], int n) {
//    int a, z, x;
//    for (a = 1; a < n; a++) {
//        z = arr[a];
//        x = a - 1;
//        while (x >= 0 && arr[x] > z) {
//            arr[x + 1] = arr[x];
//            x = x - 1;
//        }
//        arr[x + 1] = z;
//        cout<<endl;
//        cout << "proses sorting "<<endl;
//        for (int k = 0; k < n; k++) {
//            cout << arr[k]<<" ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int array[6];
//    int n ;
//
//    // Input array
//    cout << "masukan banyak array : " ;
//	cin>> n ;
//	cout<<endl;
//    for(int a = 0; a < n; a++) {
//        cout << "masukan angka ke " << a << " : ";
//        cin >> array[a];
//    }
//
//    // Sorting array
//    insertionSort(array, n);
//
//    // Output hasil akhir
//    cout << "\nhasil akhir "<<endl;
//    for(int a = 0; a < n; a++) {
//        cout << array[a]<<" ";
//    }
//    cout << endl;
//
//    return 0;
//}

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int a, z, x;
    for (a = 1; a < n; a++) {
        z = arr[a];
        x = a - 1;
        while (x >= 0 && arr[x] < z) {
            arr[x + 1] = arr[x];
            x = x - 1;
        }
        arr[x + 1] = z;
        cout<<endl;
        cout << "proses sorting "<<endl;
        for (int k = 0; k < n; k++) {
            cout << arr[k]<<" ";
        }
        cout << endl;
    }
}

int main() {
    int array[100];
    int n ;

    // Input array
    cout << "masukan banyak array : " ;
	cin>> n ;
	cout<<endl;
    for(int a = 0; a < n; a++) {
        cout << "masukan angka ke " << a << " : ";
        cin >> array[a];
    }

    // Sorting array
    insertionSort(array, n);

    // Output hasil akhir
    cout << "\nhasil akhir "<<endl;
    for(int a = 0; a < n; a++) {
        cout << array[a]<<" ";
    }
    cout << endl;

    return 0;
}

