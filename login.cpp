#include<iostream>
#include<string>
using namspace std;
intmain ()
{
    string username, password;
    cout<<"Enter Username";
    getline(cin,username);
    cout<<"Enter Password";
    getline(cin,password);
    if(username == "admin" && password == "Password")
    {
        cout<<"Login Successful" << endl;
    }
    else
    {
        cout<<"Incorrect Username or Password" << endl:  
    }
    return 0;
}