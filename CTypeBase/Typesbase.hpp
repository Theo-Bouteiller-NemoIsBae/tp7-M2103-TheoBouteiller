#ifndef TYPESBASE_HPP
#define TYPESBASE_HPP
#include <cstdint>

namespace std {
    template <class T>
    class TypeBase {
        T myVal;

    public :
        explicit TypeBase (T val = T()) noexcept : myVal (val){}
        operator T & () noexcept {return myVal;}
        operator T & () const noexcept {return myVal;}
    };

    typedef TypeBase <int32_t>  Integer;
    typedef TypeBase <int32_t>  Short;
    typedef TypeBase <unsigned char>  Character;
}

#endif // TYPESBASE_HPP
