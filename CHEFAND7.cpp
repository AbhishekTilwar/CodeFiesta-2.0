/*The chef goes to a market to buy a bag of numbers. Where each bag contains numbers between x to y (inclusive) 
i.e if a bag is said to contain 1 to 10 it means it has [1,2,3,4,5,6,7,8,9,10] numbers in the bag. The chef's lucky number is seven. For choosing a bag, 
the chef wants to know how many sevens are in the bag.Help the chef count the number of seven in the bag.
Note: if there are multiple sevens in the number we consider all of them. I.e 777 has 3 sevens, 707 has 2 sevens etc.*/

#include <bits/stdc++.h> 
using namespace std; 
int countRepeatingDigits(int N) 
{ 	int res = 0; 
	int cnt[10] = { 0 }; 

	while (N > 0) { 

		int rem = N % 10; 

		cnt[rem]++; 

		N = N / 10; 
	} 
	for (int i = 0; i < 10; i++) { 
		if (cnt[i] > 1) { 
		    res=cnt[i]-1;
		} 
	} 
	return res; 
} 
bool isDigitPresent(int x) 
{ 
    while (x > 0) 
    { 
        if (x % 10 == 7) 
            break; 
  
        x = x / 10; 
    } 
    return (x > 0); 
} 
int printNumbers(int m, int n) 
{ 
    int c=0;
    for (int i = m; i <= n; i++) {
        if (isDigitPresent(i)) {
            c+=countRepeatingDigits(i);

        }
        if (i == 7 || isDigitPresent(i)) {
            c++;
        }
    }
    cout<< c;
} 
int main() 
{ 
    int m, n, l; 
    cin>>l;
    for(int i=1;i<=l;i++)
    {
        cin>>m>>n;
        printNumbers(m, n);
    }
    return 0; 
} 
