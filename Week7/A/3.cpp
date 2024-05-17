#include <iostream>

int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int count_first = count_even(arr, 5);
    std::cout << "So so chan trong 5 ptu dau mang: " << count_first << std::"\n";

    int count_last = count_even(arr + 5, 5);
    std::cout << "So so chan trong 5 ptu cuoi mang: " << count_last << std::"\n";

    return 0;
}

