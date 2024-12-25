#include <iostream>

using namespace std;
/*
Function rekursif(a: string, b: string, i: integer = 0, j: integer = 0) -> boolean:
    If i = length(a) then
        Return true
    Else If j = length(b) then
        Return false
    endif

    If a[i] = b[j] then
        Return rekursif(a, b, i + 1, j + 1)

    Else If i > 0 then
        Return rekursif(a, b, 0, j)

    Else:
        Return rekursif(a, b, i, j + 1)
    endif
endfunction
*/
bool rekursif(string a, string b, int i = 0, int j = 0) {
    if (i == a.length()) {
        return true;
    } else if (j == b.length()) {
        return false;
    }
    if (a[i] == b[j]) {
        return rekursif(a, b, i + 1, j + 1);
    } else if (i > 0) {
        return rekursif(a, b, 0, j);
    } else {
        return rekursif(a, b, i, j + 1);
    }
}

int main() {
    string a, b;
    cin >> a >> b;
    if (rekursif(a, b)) {
        cout << "ada";
    } else {
        cout << "tidak ada";
    }
    return 0;
}
