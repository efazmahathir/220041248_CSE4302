#include<iostream>
using namespace std;
class Counter
{
    private:
        int Count=0;
        int increment;
        
    public:
        void setIncrementStep(int Increment)
        {
            increment = Increment;
        }

        int  getcount()
        {
            return increment;
        }
        void increment(int Increment)
        {
            Count += increment;
        }
        void resetCount()
        {
            Count = 0;
        }
};
int main()
{
    Counter counter;

    
    counter.setIncrementStep(4);
    counter.increment(2);
    cout<<counter.getcount()<<"\n";
    
    counter.resetCount();
    cout<<counter.getcount()<<"\n";

}