#include <bits/stdc++.h>
using namespace std;

string govind(string nothing) {
  cout << "kya haal chal hai " << endl;
  return nothing;
}

int main() {
  string n;
  cin >> n;

  int sum = 0;

  for (char c : n) {
    sum += c - '0';
  }

  cout << sum << '\n';

  return 0;
}
