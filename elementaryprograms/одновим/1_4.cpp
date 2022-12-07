/*4. В одновимірному масиві, що складається з цілих елементів, обчислити мінімальний за модулем елемент масиву; суму модулів елементів масиву, 
розташованих після першого елемента, рівного нулю. Перетворити масив таким чином, щоб у першій його половині розташовувалися елементи, що стояли
на парних позиціях, а в другій половині − елементи, що стояли на непарних позиціях.*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "n = ";
    cin >> n;
    if (n < 1) {
        cout << "try again";
    }
    else {
        int array[n];
       
        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }

      
        int min = abs(array[0]), k = 0;
        bool first = true;
        for (int i = 0; i < n; i++) {
            if (abs(array[i]) < min) {
                min = array[i];
            }
            if (array[i] == 0 && first) {
                k = i;
                first = !first;
            }
        }
    
        int summary = 0;
        if (!first) {
            for (int i = k; i < n; i++) {
                summary = summary + abs(array[i]);
            }
        }
        cout << "min:=" << min << "; sumarry after first 0:=" << summary;
        int array2[n], b = 0, a = n / 2;
        if (n % 2 == 1) { a++; } //neparni
       
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                array2[b] = array[i];
                b++;
            }
            else {
                array2[a] = array[i];
                a++;
            }
        }
       
        cout << '\n' << "<Massive>: ";
        for (int i = 0; i < n; i++) {
            cout << array2[i] << " ";
        }
    }
    return 0;
}