#include <iostream>
using namespace std;

int main(){

int N;
cout <<"How many rooms booked :";
cin >>N;
cout <<endl;

cout <<" Now enter the price of "<<N <<" booked rooms" <<endl;

int i;
int price;
int total = 0;
int deluxe = 0;

for(i = 1; i<=N; i++){
cin >>price;
total = total+price;
 if(price > 3000){
    deluxe++;
 }

}

cout <<"Total price = "<<total<<endl;
cout <<"Total deluxe = "<<deluxe<<endl;

return 0;

}