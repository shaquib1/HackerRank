#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
   int n;
   cin>>n;
   
   vector<int> v;
   
   for (int i=0; i<n; i++) {
       int item;
       cin>>item;
       v.push_back(item);
   
   }
   
   sort(v.begin(), v.end());
   
   for (int i=0; i<n; i++) {
   
            cout<<v[i]<<" "; 
             
   }
     
    return 0;
}
