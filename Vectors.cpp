// In this code we will learn a rough idea about vectors  in  c++.

#include<bits\stdc++.h>
using namespace std;

int main()
{
    // vectors are containers you can think it like an empty array.
    // syntax => vector<data type> vector name;
      vector <int> v;
      // To add elements in vector.
      v.push_back(1);
      v.emplace_back(2);
      cout<<v[0]<< " " <<v[1]<<endl;
      // we can use vector of paires
     vector<pair<int,int >> vec;
     // to do input in  vectors of pairs
     vec.push_back({1,2});
     vec.emplace_back(3,4);
    // this prints pairs.
     cout<<"{"<<vec[0].first << " "<< vec[0].second<<"}"<<" ";
     cout<<"{"<<vec[1].first << " "<< vec[1].second<<"}"<<" ";
      cout<<endl;
    // we can iniitialize an vector we a size and data.
    vector <int> V(5,10);
      for (int i = 0; i < 5; i++)
      {
         cout<<V[i]<<" ";   // this will print 5 times 10 because V(5,10)
      }
      cout<<endl;
// Unlike arrays here we can increace the size of vector at anytime
       V.push_back(15);
 for (int i = 0; i < 6; i++)
      {
         cout<<V[i]<<" ";   
      }
      cout<<endl;
      // we can initialize like this 
      vector<int> vec1(5);
       for (int i = 0; i < 5; i++)
      {
         cout<<vec1[i]<<" ";   // this will print 5 times 0 as gravage value
      }
      cout<<endl;
// we can also copy one vector to another like this
      
       vector<int>v1(5,100);
       vector<int>v2(v1); //  so in this way we can copy v1 and pase it the v2 you get it.   
       
        for (int i = 0; i < 5; i++)
      {
         cout<<v2[i]<<" ";   // this will print 5 times 100 because  v2(5,100) copy of v1(5,100) 
      }
      cout<<endl;
     return 0;
}