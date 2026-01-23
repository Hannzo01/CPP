#include <iostream>


int main()
{

    int i = 5;
    const int *p =  &i;

    int *pp = const_cast<int*>(p);
     *pp = 10;
     std::cout << i << std::endl;

    // int c = 65;
    // char *cc = reinterpret_cast<char *>(&c);


    // for (int i = 0; i < 4; i++)
    // {
    //     std::cout << *cc << std::endl;
    //     cc++;
    // }


    // la le cast c a fait reintrepreet cast in c++
    // int a = 42;
    // int *ptr = &a;

    // long v = (long)ptr; //change laddress 0x12445 into a long value it dont change the value itself but the etiquette
    // std::cout << v << std::endl;


    // class boo{public: char cc = 'a';};
    // class voo {public : int c = 5;};

    // boo *b1 = new boo();
    // voo *v1 = (voo*)b1; //pointeur voo qui pointe vers laddress de boo
    // std::cout << v1->c << std::endl;
//Il essaie static_cast ? Échec (pas de lien de parenté).
// Il essaie reinterpret_cast ? Succès.


    // const int i = 10;
    // int *p = (int*)&i;

    // *p = 5;
    // std::cout << i << std::endl;
    // std::cout << *p << std::endl;
    // std::cout << &i << std::endl;
    // std::cout << p << std::endl;


}