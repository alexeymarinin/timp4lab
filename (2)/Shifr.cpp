# включить  " Shifr.h "
Шифр :: Шифр ( int a)
{
    ключ = а;
}
wstring Shifr :: enshifr ( Shifr obj, wstring и данные)
{
    int spis = 0 ;
    int dlina = data. размер ();
    const  int lines = ((data. size () - 1 ) / obj. key ) + 1 ;
    wchar_t массив [строки] [объект. ключ ];
    for ( int i = 0 ; i <lines; i ++) {
        for ( int j = 0 ; j <obj. key ; j ++) {
            if (spis <длина) {
                array [i] [j] = data [spis];
                spis ++;
            } else {
                массив [я] [j] = '  ' ;
              
            }
        }
    }
    данные. clear ();
    int check = 0 ;
    for ( int i = 0 ; i <obj. key ; i ++) {
        for ( int j = 0 ; j <lines; j ++) {
            if (check <= dlina) {
                данные. push_back (массив [j] [i]);
                чек ++;
            }
        }
    }
    данные [проверка] = ' \ 0 ' ;
    вернуть данные;
}
wstring Shifr :: decshifr ( Shifr obj, wstring и данные)
{
    int spis = 0 ;
    int dlina = data. размер ();
    const  int lines = ((data. size () - 1 ) / obj. key ) + 1 ;
    wchar_t массив [строки] [объект. ключ ];
    for ( int i = 0 ; i <obj. key ; i ++) {
        for ( int j = 0 ; j <lines; j ++) {
            if (spis <длина) {
                массив [j] [i] = данные [spis];
                spis ++;
            } else {
                массив [j] [i] = '  ' ;
                spis ++;
            }
        }
    }
    данные. clear ();
    int check = 0 ;
    for ( int i = 0 ; i <lines; i ++) {
        for ( int j = 0 ; j <obj. key ; j ++) {
            if (check <длина) {
                данные. push_back (массив [i] [j]);
                чек ++;
            }
        }
    }
    данные [проверка] = ' \ 0 ' ;
    вернуть данные;
}
