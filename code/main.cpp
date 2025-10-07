#include <bits/stdc++.h>
using namespace std;
int tiennuoc(int t, int kn) {
    int res;
    if(t >= 1 && t <= 6) {
        if (kn <= 10 && kn >= 0) {
            res = 36000 * kn;
        } else if(kn > 10) {
            res = 30000 * kn;
        } else {
            cout << "Dau vao khong hop le!";
            return -1;
        }
    }
    else if (t >= 7 && t <= 12) {
        if (kn <= 10 && kn >= 0) {
            res = 33000 * kn;
        } else if(kn > 10) {
            res = 26000 * kn;
        } 
        else {
            cout << "Dau vao khong hop le!";
            return -1;            
        }
    }
    else {
        cout << "Dau vao khong hop le!";
        return -1;
    }
}


int main() {

    int thang, khoinuoc;
    cout << "Nhap thang:";
    cin >> thang;
    cout << "Nhap so khoi nuoc da tieu thu:";
    cin >> khoinuoc;
    cout << "Hoa don tien nuoc thang nay la: " << tiennuoc(thang, khoinuoc) << " dong";
    return 0;
}