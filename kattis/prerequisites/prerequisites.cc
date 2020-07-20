#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int i, j, k, m, c, r, coursesTaken;
    unordered_set<string> courses;
    string course;
    bool isDegreeRequirementsMet;

    while(cin >> k) {

        if(k == 0) {
            break;
        }

        courses.clear();
        isDegreeRequirementsMet = true;

        cin >> m;

        for(i = 0; i < k; ++i) {
            cin >> course;
            courses.insert(course);
        }

        for(i = 0; i < m; ++i) {

            if(!isDegreeRequirementsMet) {
                cin.ignore(1000, '\n');
                continue;
            }

            cin >> c >> r;

            if(r == 0) {
                cin.ignore(1000, '\n');
                continue;
            }

            coursesTaken = 0;

            for(j = 0; j < c; ++j) {

                cin >> course;

                if(courses.find(course) != courses.end()) {

                    ++coursesTaken;

                    if(coursesTaken == r) {
                        cin.ignore(1000, '\n');
                        break;
                    }
                }
            }

            if(j == c) {
                isDegreeRequirementsMet = false;
                cin.ignore(1000, '\n');
            }
        }

        cout << (isDegreeRequirementsMet ? "yes\n" : "no\n");
    }

    return 0;
}
