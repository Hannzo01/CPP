#include <iostream>


template<typename T, typename U>

class Pair{
        T _first;
        U _second;
    public :
        Pair(T value): _first(value){};
        T fst(){
            return _first;
        }
        T snd(){
            return _second;
        }
};

template<typename T>
class Box{
        T _content;
    public :
        Box(T value) : _content(value){}
        T getcontent()const{
            return _content;
        }
        void Setcontent(T v);
};
template<typename T>

void Box<T>::Setcontent(T v)
{
    _content = v;
}


#include <iostream>
#include <string>

int main() {
    // --- EXERCISE 1: Pair (Two different types) ---
    std::cout << "--- Ex 1: Pair ---" << std::endl;
    
    // Stores an int key and string value
    Pair<int, std::string> p1(42, "Forty-Two");
    
    std::cout << "Key: " << p1.fst() << std::endl;   // Should print 42
    std::cout << "Value: " << p1.snd() << std::endl; // Should print "Forty-Two"

    // Stores a string key and float value
    Pair<std::string, float> p2("Pi", 3.14f);
    std::cout << "Key: " << p2.fst() << ", Value: " << p2.snd() << std::endl;


    // --- EXERCISE 2: Box (Method definition drill) ---
    std::cout << "\n--- Ex 2: Box ---" << std::endl;
    
    Box<std::string> b("Secret Message");
    
    // Should print: "Box contains: Secret Message"
    std::cout << b.getContent() << std::endl; 
    
    b.setContent("New Message");
    std::cout << b.getContent() << std::endl;

    return 0;
}
