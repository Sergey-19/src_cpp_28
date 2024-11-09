// #8. Typedef and Define

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef int songuyen;

// typedef vector<int> vi;
// typedef vector<pair<int,int>> vii;

// struct sinhvien{
// 	string name;
// };
// typedef sinhvien sv;

// using ll = long long;

// //define
// #define ll long long;
// #define songuyen int;
// #define PI 3.14
// #define MOD 1000000007
// #define INF 1000000000

// #define FOR(i, a, b) for(int i=(a);i<(b);++i)

// int main()
// {
// 	cout<< PI<< endl;
// 	cout<<MOD<<endl;
// 	cout<<INF<<endl;
// 	FOR(i,0,10){
// 		cout<<i<<' ';
// 	}
// }
// end *************************************************************************

// #9. Do phuc tap tinh toan


// #include <bits/stdc++.h>
// using namespace std;

// //O(logn)
// bool kt_so_nt(int n)
// {
// 	for(int i = 2 i<=sqrt(n); i++)
// 	{
// 		if(n%i==0)
// 			return false;
// 	}
// 	return n > 1;
// }


// // O(n)
// bool kt_so_nt_2(int n)
// {
// 	for(int i = 2;i<n;i++)
// 	{
// 		if(n%i == 0)
// 			return false;
// 	}
// 	return true;
// }
// int main()
// {
// 	int a = 10; // O(1)
// 	int a = a + 10 ; // O(1)
// 	int n; cin>>n; // O(1);
// 	// O(n*logn)
// 	for(int i=1;i<=n;i++)
// 	{
// 		if(kt_so_nt(i))
// 			cout<<i <<endl;
// 	}

// 	//O(n*n) => O(n^2)
// 	for(int i =1;i<=n;i++)
// 	{
// 		if(kt_so_nt_2(i))
// 			cout<<i<<endl;
// 	}
// }

// end **************************************************

// #14. Pair
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// pair<datatype1, datatype2> v;
// v.first
// v.second
// {}
// 

// struct pair{
// 	int first;
// 	int second;
// };



int main()
{
	// pair<int,int> v;
	// pair<long long, long long> v;
	// pair<string, int> v;


	//pair<int, int> v = make_pair(100, 200);
	// c++ 11 k can make_pair
	pair<int, int> v={100,200};
	cout<<v.first<<endl;
	cout<<v.second<<endl;
	return 0;
}
