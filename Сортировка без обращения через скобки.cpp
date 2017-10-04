#include <iostream>
using namespace std;
void Qsort (int *A, int from, int to){
     int x, i, j, t;
     if (from>=to) return;
     i=from;
     j=to;
     x=*(A+(from+to)/2);
     while (i<=j){
           while (*(A+i)<x) i++;
           while (*(A+j)>x) j--;
           if (i<=j) {
                     t=*(A+i); *(A+i)=*(A+j); *(A+j)=t;
                     i++; j--;
                     }
           }
                     Qsort(A, from, j);
                     Qsort(A, i, to);
     }
int main(){
    int N, i;
    int *A;
    cout << "Vvedite razmer massiva: ";
    cin >> N;
    A = new int[N];
    for (i=0; i<N; i++) cin >> *(A+i);  
    Qsort( A, 0, N);
    for (i=0; i<N; i++) cout << *(A+i) << endl;
    delete []A;
    system ("pause");
    return 0;
}
