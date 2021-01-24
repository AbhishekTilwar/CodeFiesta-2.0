/*Chef is planning to setup a secure password for his Codechef account. For a password to be secure the following conditions should be satisfied:

1) Password must contain at least one lower case letter [a−z];

2) Password must contain at least one upper case letter [A−Z] strictly inside, i.e. not as the first or the last character;

3) Password must contain at least one digit [0−9] strictly inside;

4) Password must contain at least one special character from the set { '@', '#', '%', '&', '?' } strictly inside;

5) Password must be at least 10 characters in length, but it can be longer.

Chef has generated several strings and now wants you to check whether the passwords are secure based on the above criteria. Please help Chef in doing so.*/

// C++ code to validate a password 
#include<bits/stdc++.h> 
using namespace std; 

// A utility function to check 
// whether a password is valid or not 
bool isValid(string password) 
{ 

	// For checking if password length 
	// is between 8 and 15 
	if (!((password.length() >= 10)))
		return false; 

	// To check space 
	if (password.find(" ") != 
		std::string::npos) 
		return false; 

	if (true) 
	{ 
		int count = 0; 

		// Check digits from 0 to 9 
		for(int i = 0; i <= 9; i++) 
		{ 
			
			// To convert int to string 
			string str1 = to_string(i); 

			if (password.find(str1) != 
				std::string::npos) 
				count = 1; 
		} 
		if (count == 0) 
			return false; 
	} 

	// For special characters 
	if (!((password.find("@") != std::string::npos) || 
		(password.find("#") != std::string::npos) || 
		(password.find("%") != std::string::npos) || 
		(password.find("&") != std::string::npos) || 
		(password.find("?") != std::string::npos))) 
		return false; 
	
	if (true) 
	{ 
		int count = 0; 

		// Checking capital letters 
		for(int i = 65; i <= 90; i++) 
		{ 
			
			// Type casting 
			char c = (char)i; 
			string str1(1, c); 
			
			if (password.find(str1) != 
				std::string::npos) 
				count = 1; 
		} 
		if (count == 0) 
			return false; 
	} 

	if (true) 
	{ 
		int count = 0; 

		// Checking small letters 
		for(int i = 90; i <= 122; i++) 
		{ 
			
			// Type casting 
			char c = (char)i; 
			string str1(1, c); 

			if (password.find(str1) != 
				std::string::npos) 
				count = 1; 
		} 
		if (count == 0) 
			return false; 
	} 

	// If all conditions fails 
	return true; 
} 

void print(string pass){
    
    if (isValid(pass))
        cout << "Yes" << endl;
	else
	    cout << "No" << endl;
}
// Driver code 
int main() 
{ 
	string password,pass;
	int n;
	string arr[10];
	int i=1;
	cin>>n;
	while(i<=n){
	    cin>>password;
	    arr[i]=password;
	 i++;
	}
	for(i=1;i<=n;i++){
	    pass=arr[i];
	    print(pass);
	}
}
