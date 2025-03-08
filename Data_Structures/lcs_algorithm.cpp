#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int lcs(char *A, char *B, int M, int N) {
    if (M == 0 || N == 0)
        return 0;
    if (A[M - 1] == B[N - 1])
        return 1 + lcs(A, B, M - 1, N - 1);
    else
        return max(lcs(A, B, M, N - 1), lcs(A, B, M - 1, N));
}

int main() {
    char A[] = "abaaba";
    char B[] = "babbab";
    
    int M = strlen(A);
    int N = strlen(B);
    
    cout << "First Sequence: " << A << endl;
    cout << "Second Sequence: " << B << endl;
    cout << "Length of the LCS is " << lcs(A, B, M, N);
    
    return 0;
}