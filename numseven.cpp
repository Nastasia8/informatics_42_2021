#include <iostream>
#include <cmath>

using namespace std;


void draw(int h, int w, char sum)
{
    for (int i =0;i < h;i++)
    {
        if(i == 0)
        {
            for(int i=0;i<w;i++)
            {
                cout<<sum;
            }
            cout<<endl;
        }
        else if (i == h-1)
        {

            for(int i = 0;i < w;i++)
            {
                cout<<sum;
            }
            cout<<endl;
        }
        else if ((i !=0) && (i!= h-1))
        {
            cout << sum;

            for(int i=0; i< w-2;i++)
            {
                cout << " ";
            }
            cout << sum << endl;


        }





    }

}

int main()
{
    int h,w;
    char sym;
    cin >> h >> w >>sym;
    draw(h,w,sym);
} 