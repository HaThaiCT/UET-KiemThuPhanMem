#include <bits/stdc++.h>
using namespace std;
int tiennuoc(int thang, int khoinuoc) {
    int res;
    if(thang >= 1 && thang <= 6) {
        if (khoinuoc <= 10 && khoinuoc >= 0) {
            res = 36000 * khoinuoc;
        } else if(khoinuoc > 10) {
            res = 30000 * khoinuoc;
        } else {
            cout << "Dau vao khong hop le!";
            return -1;
        }
    }
    else if (thang >= 7 && thang <= 12) {
        if (khoinuoc <= 10 && khoinuoc >= 0) {
            res = 33000 * khoinuoc;
        } else if(khoinuoc > 10) {
            res = 26000 * khoinuoc;
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