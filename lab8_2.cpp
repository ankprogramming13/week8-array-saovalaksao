#include <iostream>

using namespace std;

int main () {

        char name[] = {"Saovalak"};
        int nameLength = 0;
        cout << name <<endl;

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้
        char Saovalak[8];
        for (nameLength = 0; nameLength <7; nameLength++) {
            Saovalak[nameLength] = name [6-nameLength]+1;
        }
        Saovalak[8] = '\0';

        cout << Saovalak << endl;

        return 0;
}
