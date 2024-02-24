#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 
        
        vector<int> numbers(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> numbers[i]; 

     
        sort(numbers.begin(), numbers.end());

        int score = 0;
        
        for (int i = 0; i < n; ++i) {
            score += numbers[i]; // Add the smaller number to the score
        }

        
        cout << score << endl;
    }
    }
    return 0;
}


