#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    long long int table[15][15];

    for (int i = 0; i <= 14; i++) {
        for (int j = 0; j <= 14; j++) {
            if (j == 0 and i == 0) {
                table[i][j] = 1;
            } else if (j == 0 and i > 0) {
                table[i][j] = table[i - 1][j] * 2;
            } else {
                table[i][j] = table[i][j - 1] * 2;
            }
        }
    }

    int num; int jSize[16] = {0, 1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 7, 7, 8, 8, 9};
    cin >> num;

    while (num != 0) {
        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                if (j == num - 1) {
                    cout << right << setw(jSize[num]) << table[i][j] << endl;
                } else {
                    cout << right << setw(jSize[num]) << table[i][j] << " ";
                }
            }
        }
        cout << endl;
        cin >> num;
    }

    return 0;
}
