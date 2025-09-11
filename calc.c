#include<bits/stdc++.h>
using namespace std;

int add(int a, int b){
  return a + b;
}
int subtract(int a, int b){
  return a - b;
}

int main(){
  int num1, num2;
  cin >> num1 >> num2;
  int sum = add(num1, num2);
  int diff = subtract(num1, num2);
  cout << "Sum of " + num1 + "and " + num2 + "is: " + sum << endl;
  cout << "Diff of " + num1 + "and " + num2 + "is: " + diff << endl;
}
