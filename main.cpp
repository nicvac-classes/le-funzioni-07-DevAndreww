#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    bool flag;
    cout << "Quanti numeri vuoi generare?" << endl;
    cin>>n;
    int V[n];
    int W[n];
    cout << "Vettore V:" << endl;
    riempiVettore(V, n);
    cout << "Vettore W:" << endl;
    riempiVettore(W, n);
    flag=false;
    visualizzaVettore(n,V,flag);
    flag=true;
    visualizzaVettore(n,W,flag);
    //maxV
    maxVettore(n,V);
    //maxW
    maxVettore(n,W);
    cout << "Vettore ordinato V:" << endl;
    ordinaVettore(n,V);
    cout << "Vettore ordinato W" << endl;
    ordinaVettore(n,W);
}
void maxVettore (int n, int V[])
{
    int i, idx;
    int massimo;
    massimo=V[0];
    i=0;
    idx=0;
    while(i<=n-1)
    {
        if(V[i]>massimo)
        {
            massimo=V[i];
            idx=i;
        }
        i=i+1;
    }
    cout << "Il numero massimo è " << massimo << "." << endl;
    cout << "La posizione del numero più alto è " << idx << "." << endl;
}
void ordinaVettore(int n, int V[])
{
    int i, j, t;
    bool scambio;

    i=0;
    scambio=true;
    while(i<=n-1 and scambio)
    {
        scambio=false;
        j=0;
        while(j<=(n-2)-i)
        {
            if(V[j]>V[j+1])
            {
                scambio=true;
                t=V[j];
                V[j]=V[j+1];
                V[j+1]=t;
            }
            j=j+1;
        }
        i=i+1;
    }
    i=0;
    while(i<n)
    {
        cout << V[i] << endl;
        i=i+1;
    }

}
void riempiVettore (int V[], int n)
{
    int i;
    i=0;
    while(i<=n-1)
    {
        int x;
        x=rand() % (n*10);
        V[i]=x;
        i=i+1;
    }
    i=0;
    while(i<n)
    {
        cout << V[i] << endl;
        i=i+1;
    }
}
void visualizzaVettore (int n, int V[], bool flag)
{
    int i;
    i=0;
    while(i<=n-1)
    {
        cout << "Visualizza vettore:" << endl;
        cout << V[i] << endl;
        if(flag)
        {
            cout << "La posizione di " << V[i] << " è " << i << "." << endl;
        }
        i=i+1;
    }
}

