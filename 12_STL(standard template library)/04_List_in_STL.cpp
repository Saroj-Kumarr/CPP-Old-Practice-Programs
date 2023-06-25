#include<iostream>
#include<algorithm>
#include<list>
#include<iterator>
using namespace std;

void show(list<int> List)
{
    list<int>::iterator it;  //--->iterator()
    for(it=List.begin();it!=List.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

}
                    
int main()
{
    list<int> list1,list2;

    for(int i=1;i<=10;i++)
    {
        list1.push_back(i*2);    //---->push_back() 
        list2.push_front(i*2);   //---->push_front()
    }

    cout<<list1.size()<<endl;    //----->size()

    show(list1);
    show(list2);

    reverse(list1.begin(),list1.end());  //------>reverse()

    show(list1);

    cout<<list1.front()<<endl;  //------>front()
    cout<<list1.back()<<endl;   //------>back()

    list1.pop_front();         //--->pop_back()
    list1.pop_back();          //---->pop_front()

    show(list1);

    list1.reverse();        //----->reverse()

    show(list1);

    list<int> list3={5,3,4,1,2};

    list3.sort();          //----->sort()

    show(list3);

    list<int> lis={10,20,30,40,50};
    
    for(auto i=lis.begin();i!=lis.end();i++)
    cout<<*i<<" ";
    cout<<endl;

    for(auto i=lis.rbegin();i!=lis.rend();i++)
    cout<<*i<<" ";
    cout<<endl;

    cout<<list3.empty()<<endl;  //----->empty()

    show(lis);

    lis.remove(10);            //------->remove()

    show(lis);

    list<int>:: iterator ite=lis.begin();

    lis.insert(ite,5);      //------->insert()

    show(lis);

    lis.assign(5,3);       //------->assign()

    show(lis);

     auto iter1=lis.begin(); // or list<int>:: iterator

    lis.erase(iter1);

    show(lis);

    //lis.clear();          //------->clear()
     
    show(lis);

    list<int> L1={0,1,2,3,4};
    list<int> L2={5,6,7,8,9};

    show(L1);
    show(L2);

    L1.swap(L2);             //------>swap()

    cout<<"after swap\n";
    show(L1);
    show(L2);

    L1.merge(L2);          //------->merge()

    show(L1);      

    auto it=L1.emplace(L1.begin(),1);

    L1.emplace(it, 0);

    show(L1);
    
    cout<<L1.size()<<endl;

return 0;
}