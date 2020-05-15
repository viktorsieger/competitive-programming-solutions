#include <iostream>

int main()
{
    int i = 0, T, n, cityNumber, uniqueCities, j;
    std::string cityName, visitedCities[100];
    bool cityIsVisited;

    std::cin >> T;

    while (i < T) {
        cityNumber = 0;
        uniqueCities = 0;

        std::cin >> n;

        while (cityNumber < n) {
            j = 0;
            cityIsVisited = false;
            std::cin >> cityName;

            while (j < uniqueCities) {
                if (visitedCities[j] == cityName) {
                    cityIsVisited = true;
                }
                j++;
            }

            if (!cityIsVisited) {
                visitedCities[uniqueCities] = cityName;
                uniqueCities++;
            }

            cityNumber++;
        }

        std::cout << uniqueCities << std::endl;

        i++;
    }

    return 0;
}
