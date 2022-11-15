/**
 * @file points_on_the_line_reborn.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-15
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/940/A
 */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, j, n, d, ans = 0, count = 1;
    cin>>n>>d;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    if (arr[n-1] - arr[0] <= d) {
        cout<<"0"<<endl;
    }
    else {
        for (i = 0; i < n; i++) {
            count = 1;
            for (j = i + 1; j < n; j++) {
                if ((arr[j] - arr[i]) <= d) {
                    count++;
                }
                else {
                    ans = max(ans, count);
                    break;
                }
            }
            ans = max(ans, count);
        }
        cout<< (n-ans)<<endl;
    }
}
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, d, p = 0, ans = 0, count = 1;
    cin>>n>>d;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    //for (i = 0; i < n; i++) {
      //  cout<<arr[i]<<"\t";
    //}
    //cout<<endl;
    if (arr[n-1] - arr[0] <= d) {
        cout<<"0"<<endl;
    }
    else {
        for (i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((arr[j] - arr[i]) <= d) {
                    count++;
                }
                else {
                    ans = max(ans, count);
                    count = 1;
                    break;
                }
            }
        }
        cout<<n-ans<<endl;
    }
    ans = min(ans, p);
    p = 0;
    for (i = n - 1; i >= 0; i--) {
        if (abs(arr[i] - arr[0]) > d) {
            p++;
        }
        else {
            break;
        }
    }
    ans = min(ans, p);
    p = 0;
    for (i = 0; i <= n/2; i++) {
        if (abs(arr[n-1-i] - arr[i]) > d) {
            p = p + 2;
        }
        else {
            break;
        }
    }
    ans = min(ans, p);
    cout<<ans<<endl;
    */

/*
22 
75 
26 
45 
72 
81 
47 
29 
97 
2 
75 
25 
82 
84 
17 
56 
32 
2 
28 
37 
57 
39 
18 
11 
79 
6 
40 
68 
68 
16 
40 
63 
93 
49 
91 
10 
55 
68 
31 
80 
57 
18 
34 
28 
76 
55 
21 
80 
22 
45 
11 
67 
67 
74 
91 
4 
35 
34 
65
80
21
95 
1 
52 
25 
31 
2 
53 
96 
22 
89 
99 
7 
66 
32 
2 
68 
33 
75 
92 
84 
10 
94 
28 
54 
12 
9 
80 
43 
21 
51 
92 
20 
97 
7 
25 
67 
17 
38 
100

*/

/*
22
75
26
45
72
81
47
29
97
2
75
25
82
84
17
56
32
2
28
37
57
39
18
11
79
6
40
68
68
16
40
63
93
49
91
10
55
68
31
80
57
18
34
28
76
55
21
80
22
45
11
67
67
74
91
4
35
34
65
80
21
95
1
52
25
31
2
53
96
22
89
99
7
66
32
2
68
33
75
92
84
10
94
28
54
12
9
80
43
21
51
92
20
97
7
25
67
17
38
100
*/
