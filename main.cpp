//bad practice but using for simplicity right now
#include <bits/stdc++.h>

//want to break my habit of using "namespace std"
using std::cout;
using std::cin;

int main(){
  double x, y;
  char op;

  cout << "Welcome to my basic Calculator program :) \n" << "---------------------------------------------- \n \n";
  cout << "Please input the numbers you'd like to use: \n";
  cin >> x >> y;

  cout << "Please input the operator you'd like: ";
  cin >> op;

  if(op == '+'){
    cout << "The answer is: " << x + y << "\n";
  }else if(op == '-'){
    cout << "The answer is: " << x - y << "\n";
  }else if(op == '*'){
    cout << "The answer is: " << x * y << "\n";
  }else if(op == '/'){
    cout << "The answer is: " << x / y << "\n";
  }else{
    cout << "Error! Input a valid mathematical operation." << "\n";
  }

  return 0;
}
