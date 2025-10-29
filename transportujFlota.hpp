#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    Stocznia stocznia{};
    int transported = 0;
    int ile_zagl = 0;

    while(transported < towar)
    {
        Statek* s = stocznia();

        Zaglowiec* z = dynamic_cast<Zaglowiec*>(s);
        if(z != nullptr)
        {
            ile_zagl++;
        }

        transported += s->transportuj();
        delete s;
    }

    return ile_zagl;
}