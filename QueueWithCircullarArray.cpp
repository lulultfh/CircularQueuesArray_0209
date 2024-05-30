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
        else 
        {
            //jika REAR berada di posisi terakhir array, kembali ke awal array
            if (REAR == max -1)
                REAR = 0; //step 2a
            else 
                REAR = REAR + 1; //step 3
        }
        queue_array[REAR] = num; //step 4
    }
};