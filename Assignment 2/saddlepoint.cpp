#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {4, 5, 6},
        {3, 2, 7},
        {2, 9, 1}
    };

    bool found = false;

    for (int i = 0; i < 3; i++) {
   
        int rowmin = arr[i][0];
        int colinx = 0;
        for (int j = 1; j < 3; j++) {
            if (arr[i][j] < rowmin) {
                rowmin = arr[i][j];
                colinx = j;
            }
        }
        bool issaddle = true;
        for (int k = 0; k < 3; k++) {
            if (arr[k][colinx] > rowmin) {
                issaddle = false;
                break;
            }
        }

        if (issaddle) {
            cout << "Saddle point found: " << rowmin
                 << " at position (" << i << "," << colinx << ")\n";
            found = true;
        }
    }

    if (!found) {
        cout << "No saddle point exists in the matrix.\n";
    }

    return 0;
}
