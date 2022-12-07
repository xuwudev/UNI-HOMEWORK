/*5. В одновимірному масиві, що складається з дійсних елементів, обчислити кількість елементів масиву, менших введеного з клавіатури числа 𝐴; 
суму цілих частин елементів масиву, розташованих після останнього від’ємного елемента. Перетворити масив таким чином, щоб спочатку 
розташовувалися всі елементи, що відрізняються від максимального не більше ніж на 20%, а потім − всі інші.*/

#include <iostream>
#include <cmath>

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
       
        double a, summary = 0;
        int k = 0, j = 0;
        bool check = false;
        cout << "A:=";
        cin >> a;

        for (int i = 0; i < n; i++) {
            if (array[i] < a) k++;

            if (array[i] < 0) { j = i; check = true; }
        }
       
        if (check) {
            double temp, temp2;
            for (int i = j + 1; i < n; i++) {
                temp = array[i];
                modf(temp, &temp2);
                summary = summary + temp2;
            }
        }
        cout << "least then A:=" << k << " summary after last<0:=" << summary;
       
        double max = array[0];

        for (int i = 0; i < n; i++) {
            if (array[i] > max) {
                max = array[i];
            }
        }

        double array2[n], diff = max * 0.2;;
        int b = 0;

        
        for (int i = 0; i < n; i++) {

            if ((array[i] <= (max + diff)) && (array[i] >= (max - diff))) {
                array2[b] = array[i];
                b++;
            }
        }

        for (int i = b - 1; i < n; i++) {
            if ((array[i] >= (max + diff)) || (array[i] <= (max - diff))) {
                array2[b] = array[i];
                b++;
            }
        }
        
        cout << '\n' << "Massive: ";
        for (int i = 0; i < n; i++) {
            cout << array2[i] << " ";
        }

    }
    return 0;
}