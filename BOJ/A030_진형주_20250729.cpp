#include <iostream>
#include <cmath>
using namespace std;
double N, goodDayPercentage, badDayPercentage, currentGoodDayPercentage, temp;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> N >> currentGoodDayPercentage;

    currentGoodDayPercentage = 1 - currentGoodDayPercentage;

    cin >> goodDayPercentage >> temp >> badDayPercentage >> temp;

    while (N--)
    {
        temp = 1 - currentGoodDayPercentage;

        currentGoodDayPercentage = currentGoodDayPercentage * goodDayPercentage + temp * badDayPercentage;
    }

    int goodDay = round(currentGoodDayPercentage * 1000);
    cout << goodDay << endl << 1000 - goodDay;

    return 0;
}
    //float gandg, gandb, bandg, bandb;

