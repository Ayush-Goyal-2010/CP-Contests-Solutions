#include <iostream>
#include <vector>
 
int main(){
    int t, a, b, c;
    std::cin >> t;
    std::vector<int> numbers;
 
    while(t--){
        std::cin >> a >> b >> c;
        if (a == b){
            numbers.push_back(c);
        }
        else if (a == c){
            numbers.push_back(b);
        }
        else if (b == c){
            numbers.push_back(a);
        }
    }
 
    for(int i = 0; i < numbers.size(); i++){
        std::cout << numbers[i] << std::endl;
    }
}