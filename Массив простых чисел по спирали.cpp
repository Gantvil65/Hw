#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream fin("zadacha1.in");
    ofstream fout("zadacha1.out");
    int N;
    fin >> N;
    int nach=0, nach1=N-2, nach2=N-2, nach3=1;
    int kon=N-1, kon1=0, kon2=0, kon3=N-2;
    int st=N-1, st1=0, str=N-1, str1=0;
    int i=0, j, s=0, m, k=0;
    int A[N][N], B[1000], P[N*N];
     
    for(i=0; i<1000; i++) B[i] = i;
    B[1]=0;
       for(m=2; m<1000; m++)
           if(B[m]!=0)
               for(j=m*2; j<1000; j+=m)
                   B[j]=0;
       j=0;
       for(i=0; i<1000; i++){
          if(B[i]!=0){
                P[j]=B[i];
                j++;
           }
           if (j==N*N) break;
           }
    while(s!=(N*N)){
                  for(i=nach; i<=kon; i++){
                              A[i][st]=P[k];
                              k++;
                              s++;
                              }
                              st--; nach++; kon--;
                  for(i=nach1; i>=kon1; i--){
                              A[str][i]=P[k];
                              k++;
                              s++;
                              }
                              str--; nach1--; kon1++;
                  for(i=nach2; i>=kon2; i--){
                              A[i][st1]=P[k];
                              k++;
                              s++;
                              }
                              st1++; nach2--; kon2++;
                  for(i=nach3; i<=kon3; i++){
                              A[str1][i]=P[k];
                              k++;
                              s++;
                              }
                              str1++; nach3++; kon3--;
                  }
    for(i=0; i<N; i++){
    for(j=0; j<N; j++){
     fout << A[i][j] << "\t";}
     fout << endl;
     }
   return 0;
}
