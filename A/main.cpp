#include<iostream>
#include<cmath>

int main(){
    int n;
    float a;
    bool flag=true;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>a;
        a/=2;
        if( (a-(int)a) == 0){
            std::cout<<a<<std::endl;
        }
        else if(flag){
            std::cout<<(int)floor(a)<<std::endl;
            flag=false;
        }
        else{
            std::cout<<(int)ceil(a)<<std::endl;
            flag=true;
        }
    }
    return 0;
}