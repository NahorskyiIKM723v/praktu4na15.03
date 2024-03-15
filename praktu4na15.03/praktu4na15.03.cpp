#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size: "<< endl;
    cin >> n;
    cout << "Enter array numbers: " << endl;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
                cin >> arr[i];}
    int sum = 0;
    int i;
    double min = arr[0];
    double max = arr[0];
    int even = 0;
    int odd = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
        if (fmod(arr[i], 2) == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    for (int i = 1; i < n; i++) {
    if (arr[i] < min) {
        min = arr[i];
    }
    if (arr[i] > max) {
        max = arr[i];
    }
    }
    double average = sum / n;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
             
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sum: " <<sum<< endl; 
    cout << "Min: " <<min<< endl;
    cout << "Max: " <<max<< endl;
    cout << "Average value: " <<average<< endl;
    cout << "number of paired numbers: "<<even<< endl;
    cout << "number of unpaired numbers: "<<odd<< endl;
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout <<arr[i]<<" ";
    }
}