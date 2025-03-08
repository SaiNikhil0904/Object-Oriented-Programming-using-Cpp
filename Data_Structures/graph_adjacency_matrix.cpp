#include <iostream>
using namespace std;

int Arr[30][30];

void displayMatrix(int u) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << Arr[i][j] << " ";
        }
        cout << endl;
    }
}

void edge(int u, int v) {
    Arr[u][v] = 1;
    Arr[v][u] = 1;
}

int main(int argc, char* argv[]) {
    int u;
    edge(0, 1);
    edge(0, 4);
    edge(4, 1);
    edge(4, 3);
    edge(1, 3);
    edge(1, 2);
    edge(3, 2);
    displayMatrix(u);
}
