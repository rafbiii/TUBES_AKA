#include <iostream>

using namespace std;
/*
function(string a,b)->integer
kamus
    ketemu : boolean
    i,j    :integer
algoritma
    ketemu ← false
    i ← 0
    j ← 0

    if length(b) ≥ length(a) then
        While (j < length(b) AND a[i] ≠ NULL) do:
            if a[i] = b[j] then
                i ← i + 1
                j ← j + 1
            else:
                if i = 0 then
                    j ← j + 1
                else:
                    i ← 0
        endWhile
    endif
    if a[i] != NULL then
        ketemu <- true
    endif
    if ketemu then
        return 0
    else
        return 1
    endif
endfunction

     */

int iteratif(string a, string b){
    bool ketemu=false;
    int i = 0;
    int j=0;
    if(b.length()>=a.length()){
        while(j<b.length()&&i<a.length()){
            if(a[i]==b[j]){
                i++;
                j++;
            }else{
                if(i==0){
                    j++;
                }else{
                    i=0;
                }
            }
        }
    }
    if (a[i]==NULL){
        ketemu=true;
    }
    if(ketemu){
        return 0;
    }else{
        return 1;
    }
}

int main()
{
    string a,b;
    cin>>a>>b;
    int hasil=iteratif(a,b);
    if (hasil == 0) {
        cout << "ada";
    } else {
        cout << "tidak ada";
    }
    return 0;
}
