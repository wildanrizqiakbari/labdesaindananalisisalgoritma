//#include <iostream>
//using namespace std;
//
//void selectionSort(int arr[], int n) {
//    int a, b, c, temp;
//    for (a = 0; a < n-1; a++) {
//        c = a;
//        for (b = a+1; b < n; b++) {
//            if (arr[b] < arr[c]) {
//                c= b;
//            }
//        }
//        if (c != a) {
//            temp = arr[a];
//            arr[a] = arr[c];
//            arr[c] = temp;
//            cout<<endl;
//            cout << "proses sorting "<<endl;
//            for (int k = 0; k < n; k++) {
//                cout << arr[k]<<" ";
//            }
//            cout << endl;
//        }
//    }
//}
//
//int main() {
//    int array[100];
//    int n ;
//
//    // Input array
//    cout << "masukan banyak array : " ;
//	cin>>n;
//	cout<<endl;
//    for(int a = 0; a < n; a++) {
//        cout << "masukan nilai elemen " << a << " : ";
//        cin >> array[a];
//       
//    }
//
//    // Sorting array
//    selectionSort(array, n);
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

void selectionSort(int arr[], int n) {
    int a, b, c, temp;
    for (a = 0; a < n-1; a++) {
        c = a;
        for (b = a+1; b < n; b++) {
            if (arr[b] > arr[c]) {
                c= b;
            }
        }
        if (c != a) {
            temp = arr[a];
            arr[a] = arr[c];
            arr[c] = temp;
            cout<<endl;
            cout << "proses sorting "<<endl;
            for (int k = 0; k < n; k++) {
                cout << arr[k]<<" ";
            }
            cout << endl;
        }
    }
}

int main() {
    int array[100];
    int n ;

    // Input array
    cout << "masukan banyak array : " ;
	cin>>n;
	cout<<endl;
    for(int a = 0; a < n; a++) {
        cout << "masukan nilai elemen " << a << " : ";
        cin >> array[a];
       
    }

    // Sorting array
    selectionSort(array, n);

    // Output hasil akhir
    cout << "\nhasil akhir "<<endl;
    for(int a = 0; a < n; a++) {
        cout << array[a]<<" ";
    }
    cout << endl;

    return 0;
}
