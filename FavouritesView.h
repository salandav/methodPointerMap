#include <map>
#include <stdio.h>

class FavouritesView
{

    public:
    typedef enum
    {
        ONE = 0,
        TWO,
        THREE
    } IDs;

    FavouritesView()
    {
        initCallBacks();
        testCallBacks();
    }

    ~FavouritesView()
    {
    }
    void f_display(int i)
    {
        printf("FUNCTION %d\n", i);
    }
    private:
    void callBackFunction1()
    {
        printf("Ahoj, ja jsem jedna\n");
    }
    void callBackFunction2()
    {
        printf("Ahoj, ja jsem dve\n");
    }
    void callBackFunction3()
    {
        printf("Ahoj, ja jsem tri\n");
    }
    void initCallBacks();
    void testCallBacks();
    typedef void (FavouritesView::*functionPtr)(void);
    std::map<IDs,functionPtr> mapa;
};