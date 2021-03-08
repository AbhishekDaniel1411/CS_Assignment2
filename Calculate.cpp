#include <iostream>
#include<conio.h>

using namespace std;

class calculate
{
    protected:
    int n1, n2;
    int n[2];
    public:
    void getdata()
    {
        cout<<"Enter the value of n1: ";
        cin>>n1;
        cout<<"Enter the value of n2: ";
        cin>>n2;
    }
    void data_as_list()
    {
        int n[2] = { n1, n2 };
        cout<<"["<<n[0]<<","<<n[1]<<"]"<<endl;
    }
};

class prime : public calculate
{
    public:
    int temp = 0;
    int prime_check()
    {
        cout<<"["<< n[0]<<","<< n[1]<<"]"<<endl;
        for(int i = 0; i <= 1; i++)
        {
            int a = n[i];
            for(int j = 1; j <= n[i]; j++)
            {
                if(a % j == 0)
                {
                    temp++;
                }
            }
            if(temp == 2)
            {
                cout<<a<<" is a prime number\n";
            }
            else
            {
                cout<<a<<" is not a prime number\n";
            }
        }
    }
};


class lcm : public calculate
{
    int mul;
    public:
    int comp_lcm()
    {
       mul = n1 * n2;
        for(int i = mul; i <= mul; i--)
        {
            if(mul%i == 0 && mul%n1 == 0 && mul%n2 == 0)
            {
                cout<<i<<" is the LCM of the numbers "<<n1<<" and "<<n2<<endl;
                break;
            }
        } 
    }
    
};

class gcd : public calculate
{
    int min, gcd;
    public:
    int comp_gcd()
    {
        min = std::min(n1, n2);
        gcd = 1;
        for(int k = 1; k <= min; k++)
        {
            if(n1%k==0 and n2%k==0)
            {
                gcd = max(gcd, k);
            }
        }
        cout<<gcd<<" is the GCD of "<<n1<<" and "<<n2;
    }
};

int main()
{
    prime obj;
    lcm objA;
    gcd objB;
    obj.getdata();
    obj.data_as_list();
    obj.prime_check();
    objA.getdata();
    objA.comp_lcm();
    objB.getdata();
    objB.comp_gcd();
    
}
