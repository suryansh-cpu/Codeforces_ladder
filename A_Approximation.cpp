#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    // Calculate the real number and round it to the nearest integer
    int result = round((double)A / B);

    cout << result << endl;
    return 0;
}
