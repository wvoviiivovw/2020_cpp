#include <iostream>

using namespace std;

int main ()
{
    int use = 0;
    cout<<"Enter the size of the square"<<endl;
    cin>>use;
    for(int j = 1; j <=use;j++ )
    {
        if(j==1||j==use)
        {
            for(int l = 1; l <= use ; l++)
            {
                cout<<"* ";
            }
        }
        else
        {
          for(int h = 1; h <= use; h++)
          {
              if (h == 1 || h==use)
              {
                  cout<<"* ";
              }
              else
              {
                  cout<<"  ";
              }
          }
        }
            cout<<endl;
      }
}


