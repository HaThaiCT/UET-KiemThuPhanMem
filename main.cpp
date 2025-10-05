#include <bits/stdc++.h>
using namespace std;

int main() {

    int thang, khoinuoc;
    int tiennuoc;
    cout << "Nhap thang:";
    cin >> thang;
    cout << "Nhap so khoi nuoc da tieu thu:";
    cin >> khoinuoc;
    if(thang >= 1 && thang <= 6) {
        if (khoinuoc <= 10 && khoinuoc >= 0) {
            tiennuoc = 36000 * khoinuoc;
        } else if(khoinuoc > 10) {
            tiennuoc = 30000 * khoinuoc;
        } else {
            cout << "Dau vao khong hop le!";
            return 0;
        }
    }
    else if (thang >= 7 && thang <= 12) {
        if (khoinuoc <= 10 && khoinuoc >= 0) {
            tiennuoc = 33000 * khoinuoc;
        } else if(khoinuoc > 10) {
            tiennuoc = 26000 * khoinuoc;
        } 
        else {
            cout << "Dau vao khong hop le!";
            return 0;            
        }
    }
    else {
        cout << "Dau vao khong hop le!";
        return 0;
    }

    cout << "Hoa don tien nuoc thang nay la: " << tiennuoc << " dong";
    return 0;
}