#include "FavouritesView.h"
#include <functional>

int main()
{
    FavouritesView* view = new FavouritesView();

    std::function<void(FavouritesView&, int)> f_display = &FavouritesView::f_display;
    //f_display(view, 1);

    delete view;
}
