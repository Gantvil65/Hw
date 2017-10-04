#include <iostream>
using namespace std;
int Akker(int m, int n){
    int A;
    if (m==0) A=n+1;
    if (m>0 && n==0) A=Akker(m-1, 1);
    if (m>0 && n>0) A=Akker(m-1, Akker(m, n-1));
    return A;
}
int main(){
    int m, n;
    cout << "Vvedite m: ";
    cin >> m;
    cout << "Vvedite n: ";
    cin >> n;
    cout << "A(" << m << "," << n << ")= "<< Akker(m, n) << endl;
    system("pause");
    return 0;
}
