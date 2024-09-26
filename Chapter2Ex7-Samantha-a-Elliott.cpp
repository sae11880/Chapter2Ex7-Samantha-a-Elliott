// Chapter2Ex7-Samantha-a-Elliott

#include <iostream>
using namespace std;

int main() {
    const double risePerYear = 1.5; // millimeters per year

    int years[] = { 5, 7, 10 };
    for (int i = 0; i < 3; ++i) {
        cout << "In " << years[i] << " years, the ocean level will be "
            << risePerYear * years[i] << " millimeters higher than the current level." << endl;
    }

    return 0;
}