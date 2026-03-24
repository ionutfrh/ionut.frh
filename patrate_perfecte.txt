#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cout << "N= "; cin >> N;

    int contor = 0;

    for (int i = 1; i <= N; i++) {
        int nr;
        cout << "nr= "; cin >> nr;

        if (nr >= 0) {
            int radical = (int)round(sqrt(nr));
            if (radical * radical == nr)
                contor++;
        }
    }

    cout << "Numere patrat perfect: " << contor;
    return 0;
}
