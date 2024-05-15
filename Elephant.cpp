 #include<iostream>
  using namespace std;

  int main()
  {
      long int n,rest;
      cin>>n;

      rest=n/5;
      if ( n==(rest*5))
        cout<<rest<<endl;
      else
        cout<<(rest+1)<<endl;

      return 0;
  }















