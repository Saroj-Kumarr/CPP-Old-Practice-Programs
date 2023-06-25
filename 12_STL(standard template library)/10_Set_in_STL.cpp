#include<iostream>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std;

void show(set<int, greater<int>> s)
{
    set<int, greater<int> >:: iterator it;

    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";5
        
    }

    cout<<endl;
}

void show(set<int> s)
{
    set<int>:: iterator it;

    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;
}
                    
int main()
{
    set<int> s;                // for storing elements in increasing order
    set<int,greater<int>> st;  //for storing elements in decreasing order

     int n;
     cout<<"enter size of set\n";
     cin>>n;
     cout<<"enter elements of set\n";
     
     for(int i=0;i<n;i++)
     {
         int x;
         cin>>x;
         s.insert(x);
     }

    s.emplace(10); // existing value can not be added 10 is already existed

    // emplace function is same as insert function, it little bit fast than that
    show(s);

    set<int> s2(s.begin(), s.end());     //assining elements from s to s2

    show(s2);

    s.erase(s.begin());


    s.erase(5); //---->erase()

    show(s);
  
     //s2.erase(s2.begin(), s2.find(30));  //upto 30 every element will be deleted

     show(s2);
     
     s2.erase(s2.begin(), s2.end());     //erase() all elements

     show(s2);

     cout<<"lower bound"<<*s.lower_bound(40)<<endl;  //lower bound
     cout<<"upper bound"<<*s.upper_bound(40)<<endl;  //upper bound

     cout<<"size : "<<s.size()<<endl;                //--->size()
     cout<<"max size : "<<s.max_size()<<endl;        //max_size()
     cout<<s.empty()<<endl;                          //empty()

     s2.clear();                                    //clear()

     auto a=s.find(30);                            //find() it gives address of that value
                                                   //otherwise address of next after the last element
     if(a!=s.end())
     cout<<"found at "<<*a<<" position\n";
     else
     cout<<"not found\n";

     cout<<"count : "<<s.count(30)<<endl;   //present return 1 otherwise 0

    /* set<int> s3;
    
      int size;
      cout<<"enter the size of s3 set\n";
      cin>>size;
      for(int i=0;i<size;i++)
      {
          int x;
          cin>>x;
          s3.insert(x);
      }

     set<int> s4;
    
      int size2;
      cout<<"enter the size of s3 set\n";
      cin>>size2;
      for(int i=0;i<size2;i++)
      {
          int x;
          cin>>x;
          s4.insert(x);
      }
   
      show(s3);
      show(s4);

      s3.swap(s4);
      cout<<"after swap\n";
      
      show(s3); 
      show(s4);   */

     unordered_set <int> ust;   // it assigning the value in reverse order without sorting

     int N;
     cout<<"enter size of unodered set\n";
     cin>>N;

     for(int i=0;i<N;i++)
     {
         int x;
         cin>>x;
         ust.insert(x);
     }

  for(auto it=ust.begin();it!=ust.end();it++) 

  /* every function of set is applicable with unorderd set*/



  
return 0;
}