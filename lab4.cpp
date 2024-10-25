#include <iostream>

using namespace std;

int main() {
    const int size = 10;
    int arr[size] = {5, 2, 8, 1, 9, 3, 7, 4, 6, 10};

    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > min && arr[i] < max) {
            count++;
        }
    }

    cout << "Кількість елементів між мінімумом та максимумом: " << count << endl;

    return 0;
}
