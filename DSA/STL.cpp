//Now let's try to understand the STL and see what are various containers and algorithms and functions of STL
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


void print(deque<int> &arr){
    int n = arr.size();
    cout<<"[";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    cout<<endl;
}

int main(){
//ARRAYS

    int arr[5] = {1,2,3,4,5}; //this is normal array in cpp
    array<int,5> a = {1,2,3,4,5}; //so we need to include either current fule or <array> and here format is array<dtype,size> and then we enter variable name
    //so array has been made here and has certain functionality and remember array is static and thus never used in cp
    
    //size finding
    int size = a.size();
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }

    //Returning element at nth position
    cout<<"Element at second index is: "<<a.at(3)<<endl;

    //Empty or not?
    cout<<"It is empty? - "<<a.empty()<<endl;

    //first and last element
    cout<<"First Element: "<<a.front()<<endl;

    //last element 
    cout<<"Last Element: "<<a.back()<<endl;
    
//VECTORS

    //Now let's understand Vectors!
    //It is a dynamic array, now here the difference is that the limit on elements is non existent 
    //Every time we make a vector of n length it is created and once the limit is reached it doubles its space and becomes a larger vector and thus it is often called dynamic array. It then copies all the element into the second vector

    //The size can be shrinked as well, so it is a very useful stuff!

    //Include vector library or normal stdc++.h

    //initialising
    vector<int> v;
    cout<<"Size: "<<v.capacity()<<endl; ///to check the capacity of vector or say assigned size and initially its 0

    v.push_back(1); //adds th element into the vector 
    cout<<"Size: "<<v.capacity()<<endl;

    v.push_back(2); //adds 2 
    cout<<"Size: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size: "<<v.capacity()<<endl; //now size becomes 4 because it adds twice memory everytime 

    //also remember capacity shows the allotted memory size, while size shows the current used space

    cout<<"Space Used: "<<v.size()<<endl;
    //at, front and back can also be used

    //to remove the top latest added element we use pop_back

    v.pop_back();

    //clearning the vector, upon clearing the size becomes 0, capacity is still same

    cout<<v.size()<<endl;
    v.clear();
    cout<<v.size()<<endl;

    //vector ka size agar pehle se pata hai to initiate kr sakte 


    //begin and end gives iteable in start and end 
    //interesting way to use for loop here

    for(int i:v){
        cout<<i<<" ";
        cout<<endl;
    }


    vector<int> b(5,1); //this will initialise the vector with 5 space and initialise it with element of choice i.e all element is 1; thus vector<dtype> var(size, initialise)
    //we can also copy the elements to the other vector like a into another

    vector<int> last(b); //saare elements of a aa gaye into last


//DEQUE
    //This is doubly ended queue
    //This means we can do insertion and deletion from both ends, front as well as back
    //Here the memory location is not contagious and it is complex in implementation and it basically works somewhat like list in python and also it is implemented using static arrays
    //slow hai
    //Dynamic space hai

    //making deque

    deque<int> d;
    d.push_back(1); //peeche dalega
    d.push_front(2); //aage dalega

    print(d);
    d.pop_front(); //removes front element
    d.pop_back(); //removes last element

    d.push_back(3);
    d.push_back(2);


    cout<<"Empty or not? "<<d.empty()<<endl;
    //begin and end are used here, erase function, size function works here

    //but in erase we need to specify a range or element
    d.erase(d.begin(), d.begin()+1);
    print(d);
    //capacity works like: The memory assigned to deque doesn't go zero even if we erase something from deque


//LISTS
    //This is implemented through double linked list ---> This means that there are two pointers one in front and one at back
    //direct access/ at operation is not possible and we need to traverse to element to get it

    //include library of <list> or bits stdc++.h

    list<int> l;
    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    //begin, end, empty works and erase ki time complexity is O(n)
    //erase mei jaise jaise element dete jaoge wo hatata jayega

    l.erase(l.begin());
    //size can be easily found using size function

    cout<<"Size of list is: "<<l.size()<<endl;
    //we can initialise it with known size like deque

    list<int> n1(10,100);

//STACKS
    //Works on the LIFO concept and that's the crux and often we have to implement it 
    stack<string> s;
    s.push("Aviral");  //instead of pushback we have only push
    s.push("Mishra");
    s.push("Official");

    //using pop we can remove the top element
    s.pop();

    //size and empty are valid here

    //top or peek is used to give and show us the top most element

//Queue
    //Works on FIFO concept and its like line, jo sabse pehle aya wahi sabse pehle jayega

    //<queue> include kr skte

    queue<string> q;
    q.push("Aviral");
    q.push("Kshitij");
    q.push("Aditya");

    //front gives the first element entered or say first in 
    q.front(); //gives the first element
    q.pop(); //this removes the element which was entered first i.e Aviral
    //now if we go for front we will get the top element
    q.front();
    

//Priority Queue
    //VERY IMPORTANT {MinHeap/MaxHeap}
    //Its a queue jiska first element is always the max element (max heap)
    //If we make minheap then the element we fetch is always the minimum element

    //MAX HEAP
    priority_queue<int> maxi; //initialised using <queue>

    //MIN HEAP
    priority_queue<int, vector<int>, greater<int> > mini;  //yahi format hai dost :/

    maxi.push(1);
    mini.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    mini.push(2);
    mini.push(5);
    int n = maxi.size(); //aisa iss liye kiya instead of maxi.size() directly into the loop because waha size change ho raha bhai lagatar!!
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";  //top means the last element
        maxi.pop();  //pop means to remove the last entered element
    } cout<<endl;


    int k = mini.size();
    for(int i=0; i<k; i++){
        cout<<mini.top()<<" ";  //top means the last element
        mini.pop();  //pop means to remove the last entered element
    } cout<<endl;

    //hence clearly it adds elements on a priority

    //EMPTY, TOP, SIZE, CLEAR exist karta hai idhar bhi

    cout<<"Tu Khali Hai? -> "<<mini.empty()<<endl;


//SETS
    //Like Python wale sets, every element is unique and even if we 5 11 times it'll take 5 only once 

    //Implemented using BST in backend, once you enter an element it becomes immutable, i.e you can remove it or add new but not change it

    //It returns ordered set, that means sorted series return karta

    //Unordered set is faster than set because waha sorting nahi hoti

    set<int> sashd; //include <set>

    sashd.insert(5);
    sashd.insert(6);
    sashd.insert(0);

    for(auto i : sashd ){ //auto is a very important and cool thing which can be used in this way to create python like iterator, basically auto means whatever is format of dtype of i just assume it and work!
        cout<<i;
    }
    cout<<endl;
    sashd.insert(0);
    sashd.insert(0); //the time complexity of this insert operation is O(logN)

     for(auto i : sashd ){ //0 inserted only once
        cout<<i;
    }
    cout<<endl;


    sashd.erase(sashd.begin()); //that is first element;

    for(auto i : sashd ){ 
        cout<<i;
    }
    cout<<endl;

    //Count Is Another Thing

    cout<<"Is 5 THERE? : "<<sashd.count(5)<<endl; //Count tells whether an element is present or not!

    //You can also find the loc of the element that is present
    set<int>::iterator itr = sashd.find(5);
    for(auto it = itr; it!=sashd.end(); it++){
        cout<<*it<<" ";
    } cout<<endl;   //so find returns the pointer to the element 5 and see *ptr krke humne nikal liya elements!


//Maps
    //This is like dictionary in python and here the keys are pointing to values and one key points only to a particular value and not to all

    map<int, string> map;

    map[1] = "Aviral";
    map[4] = "Vikramaditya";
    map[21] = "Ojha";
    map[5] = "Arnava";  
    
    for(auto i:map){
        cout<<i.first<<"  "<<i.second<<endl;  //This is the procedure i.first to display the keys, and as you can see the output is always ordered i.e ascending 
    }

    map.insert({7,""});
    cout<<"Finding 7 -> "<<map.count(7)<<endl; //checking for a key

    //now let's try to see how to erase elements

    map.erase(21);
    cout<<"After erasing: "<<endl;
     for(auto i:map){
        cout<<i.first<<endl;  //This is the procedure i.first to display the keys, and as you can see the output is always ordered i.e ascending 
    }

    //the complexity is O(log n) in case of this map because this one is implemented by random black tree and balance tree but in unordered map the implementation is via hashmaps and complexity is O(1) 

    auto it = map.find(7);

    for(auto i=it; i!=map.end(); i++){
        cout<<(*i).first<<endl;
    }

    //codewise the unordered map and unordered set are similar to the previous ones, but they are faster, unordered i.e unsorted

//ALGORITHMS IN STL
    //These are prebuilt functions 
    //Include <algorithm>

    vector<int> rv;
    rv.push_back(3);
    rv.push_back(6);
    rv.push_back(7);
    rv.push_back(8);

    cout<<"We're trying to find 7: "<<binary_search(rv.begin(), rv.end(), 7)<<endl;

    // cout<<"Uppper bound: "<<upper_bound(rv.begin(), rv.end(), 6);
    // cout<<"Lower bound: "<<lower_bound(rv.begin(), rv.end(), 6);
    //This returns an iterator and 2,3 respectively


    //You have already used Swap, Min, Max, sort etc;

    //reverse is another interesting function
    string abcd = "abcd";
    cout<<abcd<<endl;
    reverse(abcd.begin(), abcd.end());

    cout<<abcd<<endl;

   for(auto i:rv){
        cout<<i<<" ";
    } cout<<endl;
    //rotating vectors or arrays
    //You need to tell start, how many elements you wanna rotate, end?

    rotate(rv.begin(), rv.begin()+2, rv.end());
    for(auto i:rv){
        cout<<i<<" ";
    } cout<<endl;
    return 0;
    }

    //sort has already been used and it works on intro sort which is combo of three algorithms quick sort, heap sort and insertion sort

    //that's the end of STL knowledge!!
    //PEACE!


