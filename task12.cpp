#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, num;
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;
        
        if(num < 200) {
            p1++;
        }
        else if(num >= 200 && num < 400) {
            p2++;
        }
        else if(num >= 400 && num < 600) {
            p3++;
        }
        else if(num >= 600 && num < 800) {
            p4++;
        }
        else if(num >= 800) {
            p5++;
        }
    }
    
    cout << fixed << setprecision(2);
    cout << (p1 * 100.0 / n) << "%" << endl;
    cout << (p2 * 100.0 / n) << "%" << endl;
    cout << (p3 * 100.0 / n) << "%" << endl;
    cout << (p4 * 100.0 / n) << "%" << endl;
    cout << (p5 * 100.0 / n) << "%" << endl;
    
    return 0;
}