#include <iostream>
#include <string>
#include <vector>
using namespace std;
int sum(int a, int b) { return a + b; };

int main() {

  // 2d array
  // row&column
  string s = "hhhhh\n";
  int len = s.size();
  cout << len << s;

  pair<int, int> p = {1, 4};
  cout << "\n" << p.first;

  vector<int> v(4, 13);
  v.push_back(4);
  cout << "\n" << v[1];
  v.emplace_back(23);
  cout << "\n" << v[4] << "\n";
  cout << v.size() << "\n";

  vector<int>::iterator it = v.begin();
  it++;
  cout << *(it) << "\n";
  cout << *(v.end());

  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {

    cout << "\n" << *(it);
  };
  cout << "hey niggaz";
  for (auto it = v.begin(); it != v.end(); it++) {
    cout << "\n" << *(it)<<"\n";
  };
v.erase(v.begin(),v.end()-2) ;

for(auto p : v){
    cout<<p<<"\n" ;
};
cout<<"hhh" ;
v.insert(v.begin()+2,3,100) ;
for (int t : v) {
  cout<<t<<"\n" ;


} ;



}