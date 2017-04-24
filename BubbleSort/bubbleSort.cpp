#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void showArray(int arr[], int leng){
    for(int i = 0; i < leng; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<endl;
}

int main() {
    int l = 0;
    cout<<"Inserisci dimensione array: ";
    cin>>l;                            //lunghezza array da generare e ordinare

    int set[l];                        //dichiaro l'array da ordinare
    srand(time(NULL));
    for(int i = 0; i < l; i++){        //preparo l'array di numeri
        set[i]=rand()%100;
    }
    showArray(set,l);                  //mostro l'array
    int c=0;
    while(c<l){
        for(int i = (l-1); i > 0; i--){    //ciclo partendo dal fondo
            if(set[i]<set[i-1]){        //se il numero più a destra è < del vicino
                int temp=set[i];        //Scambio
                set[i]=set[i-1];        //degli
                set[i-1]=temp;          //elementi
            }
        }
        c++;
    }

    showArray(set,l);                  //mostro l'array
    system("PAUSE");
    return 0;
}
