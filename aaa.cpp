

#include <iostream>
#include<vector>
using namespace std;
int main()
{
    string names[] = { "Lily","Tom","Austin","Joe","Alice" };
    /*
    bool result = "ABC" < "ACB";
    cout <<result ;
   
    int a = 3;
    int b = 4;

    int temp = a;
    a = b;
    b = temp;

    cout << a <<" "<< b << endl;

    //int arr[] = { 8,1,4,6,2,3 };
    
    vector<int> vec;
    vec.push_back(100);
    vec.push_back(200);
    vec.push_back(300);
    while (!vec.empty())
    {
        vec.erase(vec.begin() + 0);
    }
    cout << vec.empty() << endl;
    
    for (int i = 5; i >= 0; i--)
    {
        cout << i << endl;
    }
    
    vector<int> vec;
    vec.push_back(100);
    vec.push_back(200);
    vec.push_back(300);
    vec[0] = 1000;
    cout << vec.empty() << endl;
    cout << vec.size() << endl;
    vec.insert(vec.begin() + 1, 150);
    //vec.erase(vec.begin() + 1);
    //vec.pop_back();
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
    
  
    
    int arr2[4];
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
    {
        arr2[i] = arr[i + 1];
    }
    delete[]arr;
    
    arr = arr2;
    for (int a = 0; a < sizeof(arr) / sizeof(arr[0]); a++)
    {
        cout << arr[a] << endl;
    }
    
    //int result[5];
    //result[0] = 100;
    //result[1] = 99;
    //cout << arr[0] << endl;
    int arr[] = { 88,96,79,100,53 };
    int arr2[4];
    delete[]arr;
    arr = arr2;
    

    cout << arr[0] << endl;
    cout << arr << endl;
    cout << sizeof(arr) / sizeof(arr[0]) << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    int value;
    cout << "Enter an integer:" << endl;
    cin >> value;
    for (int i = 0; i < 100; i++)
    {
        if (i == 3)
        {
            break;
        }
        cout << "hello" << endl;
    }

    //cout<<(int)129/10;

    for (int i = 0; i < 3; i += 2)
    {

    }

    int salary;
    string x = "hello";
    double pi = 3.14;
    bool result = false;

    cout << "Hello World!\n";
    cin >> salary;
    cout << salary + 1;

    int value;
    cin >> value;
    if (value > 0)
    {
        if (value % 2 != 0)
        {
            cout << "positive odd";
        }
        else
        {
            cout << "positive even";
        }
    }
    /*
    cout << "your tax is" << 5000;
    double pi = 3.14;
    if (pi > 3)
    {
        cout << "hello"<<endl;
        cout << "Lily";
    }
   
    
    else if(pi<4)
    {
        cout << "morning";
    }
    else
    {
        cout << "good";
    }
     */
    
}


