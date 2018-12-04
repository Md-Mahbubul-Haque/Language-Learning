#include<iostream>
#include<cstdio>
#include<set>
#include<queue>
#include<cstring>
#include<math.h>
#include<map>
#include<string>
#include<climits>
#include<algorithm>
#include <iomanip>
#include <vector>
#include <stack>
#include <list>
#include <iterator>
using namespace std;

#define pb push_back
#define pii pair<int,int>
#define ll long long
#define pll pair<long,long>
#define vi vector<int>
#define vii vector<pii>
#define vll vector<ll>
#define MOD 1000000007
#define EPS 1e-7
#define mem(x,y) memset(x,y,sizeof x)
#define INF 1e9
#define ff(i,a,b) for(int i=(a);i<=(b);i++)
#define fb(i,a,b) for(int i=(a);i>=(b);i--)
#define dist2D(x1,y1,x2,y2) ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))
#define dist3D(x1,y1,z1,x2,y2,z2) ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2))
#define sortv(v) sort(v.begin(),v.end())
#define debugx(x) cout<<"WTH! "<<x<<endl
#define debug(x,y) cout<<x<<" "<<y<<endl

class compare{
public:
    bool operator()(pii x,pii y){
        if(x.second==y.second){
            return x.first<y.first;
        }
        return x.second<y.second;
    }
};

int Set(int N,int pos) { return N=N|(1<<pos); }
int reset(int N,int pos){ return N=N&~(1<<pos);}
bool check(int N,int pos){  return (bool) (N&(1<<pos));}

void showList(list<int> templist){
    list<int> :: iterator it=templist.begin();

    while(it!=templist.end()) cout<<*it++<<" ";
    cout<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    list<int> list1,list2;

    for(int i=0;i<=10;i++) list1.pb(i*i),list2.pb(100-i);

    showList(list1);
    showList(list2);

    cout<<list1.front()<<endl;
    cout<<list2.front()<<endl;
    cout<<list1.back()<<endl;
    list1.pop_back();
    showList(list1);
    list2.pop_front();
    showList(list2);

    cout<<boolalpha<<list1.empty()<<endl;

    list1.reverse();
    showList(list1);
    list2.sort();
    showList(list2);

    list<int> list3;
    list3.assign(3,2);
    showList(list3);

    list<int>::iterator it=list1.begin();
    cout<<*it<<endl;
    advance(it,2);
    cout<<*it<<endl;

    list1.insert(it,5);
    showList(list1);

    cout<<*it<<endl;

    list1.insert(it,6,7);
    showList(list1);

    cout<<*it<<endl;

    list1.erase(it);

    showList(list1);

    list<int>::iterator it1=list1.begin(),it2=list1.begin();
    advance(it1,14);

    list1.erase(it2,it1);

    showList(list1);

    list1.swap(list2);
    showList(list1);
    showList(list2);

    it=list1.begin();

    advance(it,4);
    list1.insert(it,5,3);

    showList(list1);

    list1.remove(3);
    showList(list1);

    cout<<list1.size()<<endl;


    return 0;
}
