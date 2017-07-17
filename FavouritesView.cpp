#include "FavouritesView.h"

void FavouritesView::initCallBacks()
{
    mapa[ONE] = &FavouritesView::callBackFunction1;
    mapa[TWO] = &FavouritesView::callBackFunction2;
    mapa[THREE] = &FavouritesView::callBackFunction3;
}

void FavouritesView::testCallBacks()
{
    (this->*(mapa[ONE]))();
    (this->*(mapa[TWO]))();
    (this->*(mapa[THREE]))();
}