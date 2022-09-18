// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int w, x;
//     cout << "enter the weight of watermelon\n";
//     cin >> w;
//     if (w % 2 != 0)
//     {
//         cout << "NO\n";
//     }
//     else
//     {
//         cout << "YES\n";
//         x = (w / 2);

//         if (x % 2 == 0)

//             cout << x << " " << x;

//         else
//         {

//             cout << x - 1 << " " << x + 1;
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    int n;
    cin>>n;
    if (n%5==0)
    {
        cout<<n/5;

    }
    else
    {
        cout<< (n/5)+1;
    }
    

    return 0;
}