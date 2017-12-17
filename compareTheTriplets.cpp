#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int count_a=0;
int count_b=0;

void Compare(int x, int y)
{
    if(x>y)
        count_a++;
    else if (y>x)
        count_b++;
}

int main(){
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    Compare(a0,b0);
    Compare(a1,b1);
    Compare(a2,b2);
    cout<<count_a<<"\t"<<count_b<<endl;
    return 0;
}
