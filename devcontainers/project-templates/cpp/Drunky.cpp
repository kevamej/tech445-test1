#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main (){
  srand(time(0));
  const int size=60;
  cout << "Enter a letter to begin, be careful he may not make it. \n ";
  char x; cin>> x;
  int position = size /2;
  while (true) {
    cout << "|Oh boy, here we go|" ;
    for (int i=0; i<size;i++) {
      if (i == position) 
        cout << x;
      else cout << " ";}
    cout << "|Sleep time!|" << endl;
    int move= rand()%4 - 1;
    position = position + move; 
    if (position <1) {cout << "Aw, didnt make it, the side walk isnt so bad." <<endl; break;}
    if (position >size-1) {cout << "Yay! It wasn't much of a race but getting home to bed" << endl; break;}
    for(int sleep=0; sleep< 1000000 ; ++ sleep);
  }   
  return 0; 
}