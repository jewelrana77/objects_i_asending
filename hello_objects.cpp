#include<iostream>
using namespace std;
class hello{
    public:
int i;
int j;
public:
hello(){

}
    hello(int x,int y)
    {
        i=x;
        j=y;
    }
    void show()
    {
        cout<<i<<" "<<j<<endl;
    }

};
int main()
{ hello ar[5];
ar[0]=hello(120,-300);
ar[1]=hello(350,-400);
ar[2]=hello(150,-500);
ar[3]=hello(155,-300);
ar[4]=hello(300,-300);
hello temp;
int i=0;
while(i<4){

if((ar[i].i)>(ar[i+1].i))
{
swap(ar[i].i,ar[i+1].i);


}
i++;
}



for(int  i=0;i<5;i++)

{
    ar[i].show();
}

    return 0;
}

