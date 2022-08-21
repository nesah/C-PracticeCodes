#include <iostream>
using namespace std;

int main(void){

    double Mars = 0.38, Jupiter = 2.56, Earth;

    cout << "Weight in Earth in pounds: ";
    cin >> Earth;

    Mars = Mars * Earth;
    Jupiter = Jupiter * Earth;

    cout << "Weight in Mars: " << Mars << endl;
    cout << "Weight in Jupiter: " << Jupiter;

return 0;    
}