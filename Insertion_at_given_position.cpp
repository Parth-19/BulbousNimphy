#include<iostream>
using namespace std;
int main()
{
    int arr[6], i, elem, pos, tot;
    cout<<"Enter the Size for Array: ";// size of the array
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";// entering array elements
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";// element to insert
    cin>>elem;
    cout<<"At What Position ? ";// piosition
    cin>>pos;
    for(i=tot; i>=pos; i--)
        arr[i] = arr[i-1];
    arr[i] = elem;
    tot++;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}
