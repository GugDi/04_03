#include <iostream>
#include <fstream>
using namespace std;
class TPen {
private:
    int FColor;
public:
    void setColor(int newColor) {
        FColor = newColor;
    }
    int getColor() const {
        return FColor;
    }
};
int main() {
    const int n = 10;
    TPen pens[n];
    ifstream file("colors.txt");
    int color;
    int i = 0;
    while (file >> hex >> color && i < n) {
        pens[i].setColor(color);
        i++;
    }
    for (int i = 0; i < n; i++) {
        cout << "Color of pen " << i << " is #" << hex << pens[i].getColor() << endl;
    }
    return 0;
}
