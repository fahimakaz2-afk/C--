#include <iostream>
using namespace std;

class temp
{
    float c, f;

public:
void ftoc(float f)
    {
        c = (5.0 / 9.0) * (f - 32);
        cout << "the temp in celsius is: " << c << " degrees Celsius" << endl;
    }
};
int main(void)
{
    float f;
    cout << "enter  in farenhite:\t";
    cin >> f;
    temp t1;
    t1.ftoc(f);
    return 0;

}
