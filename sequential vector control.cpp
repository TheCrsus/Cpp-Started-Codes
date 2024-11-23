#include <iostream>
#include<vector>
using namespace std ;

int main() {
    bool flag = true ;
    int x,size=0 ;
    vector <int> v;
    cout << "Enter Number (-1 is the closing number) : " << endl ;
    
for(;;){
    cin >> x ;
    if(x==-1){
        break ;
    }
    else
    v.push_back(x);
    size++ ;
}
for(int i = 0 ; i < size ; i++){
    for(int j = 0 ; j < i ; j++){
        if(v[i]<v[j]){
            swap(v[i],v[j]);
        }
    }
}
for(int i = 0 ; i < size-1 ; i ++){
    if(v[i]!=(v[i+1])-1){
        flag = false ;
        break ;
    }
    else{
    flag = true ;
    }
}
if(flag){
    cout << "vector can sequential " ;
}
else{
    cout << "vector cannot sequential " ;
}
for(int i = 0 ; i < size ; i++){
    cout << v[i] << " " ; 
}
    return 0;
}

