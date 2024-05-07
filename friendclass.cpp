#include <iostream>
using namespace std;

class siswa;
class orangtua
{
    private:
       string nama;
    
    public:
       void setNama(string pNama);
       friend class siswa;
};

