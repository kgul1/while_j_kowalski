#include <iostream>
using namespace  std;
int miejscowoscZamieszkania=1 , iloscMinutDojazdu=0;
int main() {

    while(miejscowoscZamieszkania <=1000000000){

        iloscMinutDojazdu +=7;
        miejscowoscZamieszkania *=2;
        cout<<"minelo minut: "<<iloscMinutDojazdu<<endl;
        cout<<"liczba zamieszkanych osob: "<<miejscowoscZamieszkania<<endl;
    }

 return 0;
}
