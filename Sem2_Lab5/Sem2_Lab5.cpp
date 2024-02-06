#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    
    const int n = 5;
    int a[n];
    int a_a[n][n];
    srand(time(0));

    //Задаем рандомное значение в массиве кратное количеству строк
    cout << "Одномерный массив: " << endl;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 101 - 50;
        while (a[i] % n != 0 || a[i] == 0)
        {
            a[i] = rand() % 101 - 50;
        }
        cout.width(3);
        cout << a[i] << " ";
    }

    cout << endl << "Двумерный массив: " << endl;
    //Двумерный массив
    for (int i = 0; i < n; i++) {
        int temp = a[i];
        for (int j = 0; j < n; j++) {
            a_a[j][i] = temp / n;
        }
    }

    // Вывод двумерного массива
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout.width(3);
            cout << a_a[i][j] << " "; 
        }
        cout << endl;
    }

    return 0;
}