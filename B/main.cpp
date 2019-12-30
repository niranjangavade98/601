#include<iostream>
#include<map>
#include<vector>
int main(){
    int cars,temp;
    std::map<int,int> entry;
    std::map<int,int>::iterator it;
    std::vector<int> time;
    std::cin>>cars;
    for (int i = 1; i <= cars; i++)     //storing entry sequence with time in map
    {
        std::cin>>temp;
        entry[temp]=i;
        time.push_back(0);
    }
    for (int i = 1; i <= cars; i++)     //storing exit time according to exit sequence
    {
        std::cin>>temp;
        it = entry.find(temp);
        if(it!=entry.end()){
            time[(it->second) -1]=i;
        }
    }
    int max=time[0],count=0;
    for(int i=1; i<cars; i++){
        if(time[i]<max){
            count++;
        }
        else{
            max=time[i];
        }
    }
    std::cout<<count<<std::endl;
    return 0;
}