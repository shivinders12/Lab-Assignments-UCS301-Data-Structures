// #include <stdio.h>
// #define N 4   
// diagonal matrix

// void add(int diag[], int i, int j, int val) {
//     if (i == j) {
//         diag[i] = val;
//     }
// }

// int get(int diag[], int i, int j) {
//     if (i == j)
//         return diag[i];
//     else
//         return 0;
// }

// void display(int diag[]) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             if (i == j)
//                 printf("%d ", diag[i]);
//             else
//                 printf("0 ");
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int diag[N] = {0};  

   
//     add(diag, 0, 0, 5);
//     add(diag, 1, 1, 8);
//     add(diag, 2, 2, 3);
//     add(diag, 3, 3, 6);


//     display(diag);

    
//     printf("\nElement at (2,2): %d\n", get(diag, 2, 2));
//     printf("Element at (1,3): %d\n", get(diag, 1, 3));

//     return 0;
// }



#include <stdio.h>
#define N 5 
// tri diagonal matrix

int arr[3 * N - 2] = {0};

void add(int i, int j, int val) {
    if (i - j == 1) {               
        arr[i - 1] = val;
    } else if (i == j) {            
        arr[(N - 1) + i] = val;
    } else if (j - i == 1) {        
        arr[(2 * N - 1) + i] = val;
    }
    
}

int get(int i, int j) {
    if (i - j == 1) {               
        return arr[i - 1];
    } else if (i == j) {            
        return arr[(N - 1) + i];
    } else if (j - i == 1) {        
        return arr[(2 * N - 1) + i];
    } else {
        return 0;                  
    }
}

void display() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", get(i, j));
        }
        printf("\n");
    }
}

int main() {
  
    add(0,0,4); 
    add(0,1,1);
    add(1,0,2);
     add(1,1,5);
      add(1,2,3);
    add(2,1,6);
     add(2,2,9); 
     add(2,3,7);
    add(3,2,8); 
    add(3,3,10); 
    add(3,4,11);
    add(4,3,12); 
    add(4,4,15);

   
    display();

    return 0;
}

