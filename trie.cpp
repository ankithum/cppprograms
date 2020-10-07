//https://www.hackerrank.com/challenges/contacts/problem

#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; i < n; i++)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%I64d", &x)
#define ss(s) scanf("%s", s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
// int mod(int a,int b){
//    return (((a % m) x (b % m)) % m );
// }
// int dp[]
struct node
{
    int cnt = 0;
    node *next[26];
    node()
    {
        int i;
        fo(i, 26)
        {
            next[i] = NULL;
        }
    }
};

void addnode(node *head, string s)
{
    for (auto i : s)
    {
        if (!head->next[i - 'a'])
            head->next[i - 'a'] = new node();
        head = head->next[i - 'a'];
        head->cnt++;
    }
}

int findstr(node *head, string s)
{
    for (auto i : s)
    {
        if (!head->next[i - 'a'])
            return false;
        head = head->next[i - 'a'];
    }
    return head->cnt;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int n;
    cin >> n;
    node root;
    node *head = &root;
    int i;
    string t, s;
    fo(i, n)
    {
        head = &root;
        cin >> t >> s;
        addnode(head, s);
    }
    fo(i, n)
    {
        head = &root;
        cin >> t >> s;
        cout << findstr(head, s) << "\n";
    }

    return 0;
}
