#include <iostream>
using namespace std;

class Queues {
private:
    static const int max = 3;
    int FRONT, REAR;
    int queue_array[max];
public:
    Queues() {
        FRONT = -1;
        REAR = -1; //jika array masih belum ada isinya
    }

    void insert() {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << endl;
    }
};