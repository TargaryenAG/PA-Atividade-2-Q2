#include <iostream>
using namespace std;

void VerificNum(int N, int Vet[N], int *pMax, int *pMin){

*pMax=Vet[0];
*pMin=Vet[0];

for(int i=1;i<N;i++){

}

int main (){
  int N,Max,Min;
  cout << "Informe quantos números deseja analisar: ";
  cin >> N;
  int Vet[N];
  cout << "Informe os "<<N<<" números:\n";
  for(int i;i<N;i++){
    cin >> Vet[i];
  }
  int *Ptr = Vet;
  VerificNum(N, Ptr, &Max, &Min);

}