#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int c, total, aboveAverage, n, j, grade;
    double average;
    vector<int> grades;

    cout << fixed << setprecision(3);

    cin >> c;

    for(int i = 0; i < c; ++i) {

        total = 0;
        aboveAverage = 0;
        grades.clear();

        cin >> n;

        for(j = 0; j < n; ++j) {

            cin >> grade;

            grades.push_back(grade);

            total += grade;
        }

        average = (double)total / (double)n;

        for(int grade : grades) {
            if(grade > average) {
                aboveAverage++;
            }
        }

        cout << (double)aboveAverage / (double)n * 100 << '%' << '\n';
    }

    return 0;
}
