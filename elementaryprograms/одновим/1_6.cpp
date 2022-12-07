/*6. В одновимірному масиві, що складається з дійсних елементів, обчислити кількість від’ємних елементів масиву; 
суму модулів елементів масиву, розташованих після мінімального за модулем елемента. 
Замінити всі від’ємні елементи масиву їхніми квадратами й упорядкувати елементи масиву за зростанням*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "n= ";
    cin >> n;
   
    if (n < 1) {
        cout << "try again";
    }
    else {
        double array[n];
       
        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }
        int k = 0, mini;
        double min = abs(array[0]), summary = 0;
       

        for (int i = 0; i < n; i++) {
            if (array[i] < 0) k++;

            if (abs(array[i]) < min) { min = abs(array[i]); mini = i; }

        }

       
        for (int i = mini + 1; i < n; i++) {
            summary = summary + abs(array[i]);
        }
        cout << "countofnum<0:=" << k << "summary after abs min abs: = " << summary;

        for (int i = 0; i < n; i++) {
            if (array[i] < 0) { array[i] = array[i] * array[i]; };
        }

        int temp;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
      
        cout << '\n' << "Massive: ";
        for (int i = 0; i < n; i++) {
            cout << array[i] << " ";
        }

    }
    return 0;
}