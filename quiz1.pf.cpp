 #include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of rides: ";
    cin >> N;

    int duration;
    int cost;
    int totalRevenue = 0;

    for (int i = 1; i <= N; i++) {
        cout << "Enter duration  for ride " << i;
        cin >> duration;

        if (duration > 20) {
            cout << "Long ride" << endl;
        }

        if (duration <= 20) {
            cost = 0;
        } else {
            cost = (duration - 20) * 4;
        }

        cout << "Cost for ride " << i << cost << endl;

        totalRevenue += cost;
    }

    cout << "Total revenue = " << totalRevenue << endl;

    return 0;
}
