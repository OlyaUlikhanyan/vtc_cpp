#include <iostream>
int main()
{
int n;
std::cout<<"Nermucel n"<<std::endl;
std::cin>>n;
for(int i=0;i<n;++i){
for(int j=0;j<=i;++j){
std::cout<<' ';
}
for(int j=0;j<n-i;++j){
std::cout<<'*';
}
std::cout<<std::endl;
}
return 0;
}

