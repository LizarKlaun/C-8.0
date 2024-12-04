#include <iostream>

using namespace std;

namespace First {
    class Auto {
        int speed;
        int size;
    public:
        Auto() {
            speed = 90;
            size = 4;
        }
        int GetSpeed() {
            return speed;
        }
        int GetSize() {
            return speed;
        }
    };
}

namespace Second {
    class Auto {
        int speed;
        int size;
    public:
        Auto() {
            speed = 90;
            size = 4;
        }
        Auto(First::Auto & obj) {
            speed = obj.GetSpeed();
            size = obj.GetSpeed();
        }
        void PrintInfo() {
            cout << "Speed: " << speed << " Size: " << size << endl;
        }
    };
}

using namespace First;

int main()
{
    First::Auto obj = First::Auto();
    Second::Auto obj2 = Second::Auto(obj);
    obj2.PrintInfo();
}