#include <iostream>
#include <stack>
using namespace std;

//Author: Rennie Bevineau

int main() {

  int bookIDs[4] = {1000, 2000, 3000, 4000};

  //create the stack data structure
  stack<int> bookIDStack;

  //push items onto the stack
  for (int id : bookIDs) 
          bookIDStack.push(id);

  cout<< "bookID Stack:"<< endl;
  //pop all the elements off the stack, show the ids one by one and then get the size of the array
   while(!bookIDStack.empty()){
       cout << bookIDStack.top() << endl;
       
       bookIDStack.pop();
   }

   //show stack size
   cout<< "stack size: ";
   cout << bookIDStack.size();



  
}
