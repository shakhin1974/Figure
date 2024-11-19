#include"Header.h"
int main()
{
     Figure k(9);
     Figure p(11, 6);
     Figure tr(13, 8, 15);
     Figure pir(13, 8, 15, 10);
     float a = k.kvadr();
     float b = p.pryam();
     float c = tr.treug();
     float d = pir.piramida();
     cout <<"Kvadr = " << a << endl;
     cout <<"Pryamouglnik = " << b << endl;
     cout <<"Treugolnik = " << c << endl;
     cout<< "Piramida = " << d << endl;
     
}
