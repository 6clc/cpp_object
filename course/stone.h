#ifndef __STONE__
#define __STONE__

class Stone
{
    public:
    Stone(int w, int h, int we)
    :_w(w), _h(h), _weight(we)
    {}

    bool operator < (const Stone& s) const{
        return _weight < s._weight;
    }

    private:
    int _w;
    int _h;
    int _weight;
};

#endif