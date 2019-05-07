#include<iostream>
using namespace std;
int main(){
    int a[3][3],b[3][3],c[3][3];
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            cout<<"a"<<x+1<<y+1<<" = ";
            cin>>a[x][y];
        }
    }
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            cout<<"b"<<x+1<<y+1<<" = ";
            cin>>b[x][y];
        }
    }
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            c[x][y] = a[x][0]*b[0][y] + a[x][1]*b[1][y] + a[x][2]*b[2][y];
        }
    }
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            cout<<c[x][y]<<"\t";
        }
        cout<<endl;
    }
}
