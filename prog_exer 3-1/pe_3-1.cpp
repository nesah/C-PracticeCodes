#include <iostream>
using namespace std;

int main(void){
    int Volume, Length, Width, Height;

    cout << "Input Length:" << endl;
    cin >> Length;
    cout << "Input Width: \n";
    cin >> Width;
    cout << "Input Height: \n";
    cin >> Height;

    Volume = Length * Width * Height;

    cout << "Volume: " << Volume;

return 0;
}