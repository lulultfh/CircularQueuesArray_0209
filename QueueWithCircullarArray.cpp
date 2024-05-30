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

        //cek apakah antrian penuh
        if ((FRONT==0 && REAR == max -1) || (FRONT == REAR + 1)) {
            cout << "\nQueue Overflow\n";
            return;
        }
        //cek apakah antrian kosong
        if (FRONT == -1) { //step 1
            FRONT = 0; //step 1a
            REAR = 0; //step 1b
        }

    }
};