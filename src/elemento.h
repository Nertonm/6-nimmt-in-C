#ifndef ELEMENTO_H_INCLUDED
#define ELEMENTO_H_INCLUDED


struct elemento{
    struct carta data;
    struct elemento *prx;
};
typedef struct elemento* Elemento;

#endif // ELEMENTO_H_INCLUDED
