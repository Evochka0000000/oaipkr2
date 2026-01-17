#include <iostream>
#include <string>
using namespace std;


int akkerman(int n, int m) {
    if (n == 0){
        return m + 1;
    }
    else if (m == 0){
        return akkerman(n - 1, 1);
    }
    else {
        return akkerman(n - 1, akkerman(n, m - 1));
    }
}


int main() {
    // Примеры
    cout << akkerman(1, 1) << endl;
    cout << akkerman(2, 2) << endl;
    cout << akkerman(0, 5) << endl;
    return 0;
}


