#include <iostream>
using namespace std;

void VerificNum(int N, int Vet[N], int *pMax, int *pMin){

*pMax=Vet[0];
*pMin=Vet[0];

for(int i=1;i<N;i++){
    if(Vet[i]>*pMax){
      *pMax=Vet[i];
    }
    if(Vet[i]<*pMin){
      *pMin=Vet[i];
    }
  }
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

cout << "\nOs Máximos e Mínimos entre os números: (";
for(int i;i<N;i++){
  if(i==(N-1)){cout <<Vet[i]<<".";}
  else{cout <<Vet[i]<<", ";}
}
cout << ") São :\nMáximo: "<<Max<<"\nMínimo: "<<Min<<"\n\n";
    return 0;
}