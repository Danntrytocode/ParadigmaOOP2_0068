#include <iostream>
using namespace std;


class Orang {};
class Pekerja : virtual public Orang{};
class Pelajar : virtual public Orang{};
class Ucup : public Pekerja, public Pelajar{};