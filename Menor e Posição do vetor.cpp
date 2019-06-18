#include <iostream>


using namespace std;

int main(){
int n = 0,i,pos,valor;

   cin>>n;

   int vetor[n];
   cin>>vetor[0];
   pos=0;
   valor=vetor[0];

   for(i=1;i<n;i++){
      cin>>vetor[i];
      if(vetor[i]<valor){
         pos=i;
         valor=vetor[i];
      }
   }
   cout<<"Menor valor: "<<valor<<endl;
   cout<<"Posicao: "<<pos<<endl;
}
