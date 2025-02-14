#include <iostream>
#include <valarray>
#include <vector>

using namespace std;

int main()
{
    double temp;
    vector<double> data;

    cout << "Enter numbers (<= 0 to quit): " << endl;
    while(cin >> temp && temp > 0)
        data.push_back(temp);
    sort(data.begin(), data.end());
    int size = data.size();

    valarray<double> numbers(size);
    int i;
    for (i = 0; i < size; i ++)
        numbers[i] = data[i];
    valarray<double> result(size);
    result = numbers + 2.0;

    for(i = 0; i < size; i ++)
        cout << numbers[i] << ": " << result[i] << endl;

    return 0;
}