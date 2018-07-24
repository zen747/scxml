#ifndef SCM_UNCOPYABLE_H
#define SCM_UNCOPYABLE_H

namespace SCM {
    
class Uncopyable
{
protected:
    Uncopyable () {}
    ~Uncopyable () {}
private:
    Uncopyable (Uncopyable const&rhs);
    Uncopyable &operator=(Uncopyable const&rhs);
};

}

#endif