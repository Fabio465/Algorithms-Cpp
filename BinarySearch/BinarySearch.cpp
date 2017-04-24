#include <iostream>
#include <cstdlib>

using namespace std;


int main() {
    int set[1000];
    for(int i = 0; i < 1000; i++){
        set[i] = i;
    }
    int top = 1000, bot = 0, pos, req;      //top e bot sono i margini tra cui
    bool found = false;                     //cercare il numero richiesto (req)
                                            //(bot<req<top)
    cout<<"Please enter the number to find: "<<endl;
    cin>>req;

    while(!found){
        pos = ((top-bot)/2)+bot;            //cerco il numero a metà tra top bot
        if(req == set[pos]){
            cout<<"Number found: "<<set[pos]<<endl;
            found=true;
        }else if(req < set[pos]){
            top = pos;
        }else{
            bot = pos;
        }

    }

    system("PAUSE");
    return 0;
}
