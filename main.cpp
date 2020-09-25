#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <climits>
#include <cstdlib>
#include <list>
#include <stack>
#include <map>
#include <tuple>
#include <set>
#include "Fraction.h"

using namespace std;


typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;

#define MOD 1000000007
#define N 200005
#define Fs first
#define Sc second
#define pb push_back
#define watnum(x) cout << (#x) << " is " << (x) << endl
#define all(x) (x).begin(), (x).end()
#define ang2rad(x) 180/3.14*(x)

const string ALP = "abcdefghijklmnopqrstuvwxyz";
const string ALPB = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

ostream &operator<<(ostream &out, vi &v) {
    for (int el: v)
        out << el << ' ';
    return out;
}

using namespace std;


int main(){
    Fraction a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << a << ", " << b << ", " << c << ", " << d << ", " << e;

    return 0;
}