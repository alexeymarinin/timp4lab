# включить  " modAlphaCipher.h "
modAlphaCipher :: modAlphaCipher ( скей wstring)
{
    for ( unsigned i = 0 ; i <numAlpha. size (); i ++) {
        alphaNum [numAlpha [i]] = i;
    }
    ключ = конвертировать ( get_val_kl ( skey ));
}
wstring modAlphaCipher :: шифровать ( Const wstring & open_text)
{
    vector < int > work = convert ( get_val_txt (open_text));
    for ( unsigned i = 0 ; i <work. size (); i ++) {
        work [i] = (work [i] + key [i% key. size ()])% alphaNum. размер ();
    }
    return  convert (работа);
}
wstring modAlphaCipher :: Расшифровать ( Const wstring & cipher_text)
{
    vector < int > work = convert ( get_val_txt (cipher_text));
    for ( unsigned i = 0 ; i <work. size (); i ++) {
        work [i] = (work [i] + alphaNum. size () - key [i% key. size ()])% alphaNum. размер ();
    }
    return  convert (работа);
}
встроенный вектор < int > modAlphaCipher :: convert ( const wstring & s)
{
    vector < int > result;
    for ( auto c: s) {
        результат. push_back (alphaNum [c]);
    }
    вернуть результат;
}
встроенный wstring modAlphaCipher :: convert ( const vector < int > & v)
{
    результат wstring;
    for ( auto i: v) {
        результат. push_back (numAlpha [i]);
    }
    вернуть результат;
}
встроенный wstring modAlphaCipher :: get_val_kl ( const wstring & s)
{ 
    локаль loc ( " ru_RU.UTF-8 " );
    locale :: global (место);
    если (s. empty ())
        throw  exc ( string ( " вы ввели пустой ключ. " ));
    wstring wst = s;
    for ( auto & el: wst) {
        if ( iswalpha (el) == 0 ) {
            throw  exc ( string ( " в вашем ключе присутствуют недопустимые символы. " ));
            перерыв ;
        }
        if ( iswlower (el)) {
        el = буксир (el);
        }
    }
    return wst;
}

встроенный wstring modAlphaCipher :: get_val_txt ( const wstring & s)
{
    локаль loc ( " ru_RU.UTF-8 " );
    locale :: global (место);
    если (s. empty ())
        throw  exc ( string ( " Был введен пустой текст. " );
    wstring wst = s;
    for ( auto & el: wst) {
        if ( iswalpha (el) == 0 ) {
            throw  exc ( string ( " Текст должен состоять только из строки русских букв. " ));
            перерыв ;
        }
        if ( iswlower (el)) {
        el = буксир (el);
        }
    }
    return wst;
}
