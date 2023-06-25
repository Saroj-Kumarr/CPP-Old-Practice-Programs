#include<iostream>
#include<forward_list>
using namespace std;

void show(forward_list<int> f) 
{
    forward_list<int>::iterator i;

    for(i=f.begin();i!=f.end();i++)
    cout<<*i<<" ";
    cout<<endl;
} 


int main()
{
    forward_list<int> flist1={5,3,1,2,3,2,1,4};

    forward_list<int> flist2;

    flist2.assign({3,3,4,5,1}); //---->assign()

    show(flist1);
    show(flist2);

    flist1.push_front(1);     //push_front()
    flist1.emplace_front(0);  //emplace_front()

    show(flist1);

    flist1.pop_front();      //pop_front()

    show(flist1);

   auto it_new=flist1.begin();  //iterator

   flist1.insert_after(it_new,20);   //---->insert_after()

   show(flist1);

   flist1.insert_after(it_new,{10,20,30});
   //emplace_after() is almost same as insert_after()

   show(flist1);

  auto it=flist1.begin();

  flist1.erase_after(it); //--->erase_after

  show(flist1);
  
  forward_list<int> f1={10,20,30,40,50};

  show(f1);

  f1.clear();     //--->clear()

  show(f1);

   flist1.remove(20);   //remove()

   show(flist1);

   cout<<flist1.front()<<endl;   //----->front()
   
   flist1.reverse();         //----->reverse()

   show(flist1);                

   cout<<"max size : "<<flist1.max_size()<<endl;

   flist1.resize(5);     //------>resize()

   show(flist1);

   flist1.unique();     //------->unique()

   show(flist1);
  
   
return 0;
}