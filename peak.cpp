#include<iostream>
#include<vector>
using namespace std;
 int peak(vector<int>a){
    int s=0;
    int e=a.size()-1;
    int mid=(s+e)/2;
    while(s<e){
        
        if(a[mid]<a[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}
int main(){
    vector<int>a{0,10,5,2};
   int ans= peak(a);
   
   int ele=a[ans];
   cout<<"peak element is"<<ele<<endl;
    cout<<"peak index  is"<<ans<<endl;

}