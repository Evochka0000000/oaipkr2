#include <iostream>
#include <string>
using namespace std;


int V[100];

void func_a(int K, int L, int& result) {
    result = 0;
    for (int i = K; i <= L; i++) {
        if (V[i] > 0) {
            result += V[i];
        }
    }
}

void func_b(int V[], int K, int L, int& result) {
    result = 0;
    for (int i = K; i <= L; i++) {
        if (V[i] > 0) {
            result += V[i];
        }
    }
}

int main() {
    //Пример
    V[0] = 3;  V[1] = -2; V[2] = 5;  V[3] = 0;  V[4] = -1;
    V[5] = 7;  V[6] = -4; V[7] = 2;  V[8] = 6;  V[9] = -3;

    int result;

    func_a(1, 6, result);
    cout << "От индекса 1 до 6 (а): " << result << endl;

    func_b(V, 2, 8, result);
    cout << "От индекса 2 до 8 (б): " << result << endl;

    return 0;
}


