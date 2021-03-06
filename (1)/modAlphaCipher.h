 * *
* @file exception.h
* @author marinin.a.v
* @ версия 1.0
* @ краткое Описание класса отл.
* @copyright ИБСТ ПГУ
* /
# pragma once
# include  < вектор >
# include  < строка >
# include  < карта >
# include  < locale >
# включить  < cctype >
# включить  " exception.h "
используя  пространство имен  std ;
/ * * @brief Класс, который реализует шифрование сообщений "Гронсвельда"
* @warning Работает только с русскоязычными сообщениями!
* * /
класс  modAlphaCipher
{
частный:
// / @brief Используемый алфавит для сообщений
    wstring numAlpha = L " АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ " ; // алфавит по порядку
    // / @brief Ассоциативный массив "номер по символу"
    map < char , int > alphaNum; // ассоциативный массив "номер по символу"
// / @ краткий Атрибут для ключа
    вектор < int > ключ; // ключ
      / * * @brief Преобразование строки в векторе
     * @details В вектор типа "int" с именем "Result" формируются числа, которые являются индексами алфавита "numAlpha" из строки, 
     * которая пришла на вход.
     * @return std :: vector <int>, в котором хранятся индексы букв сообщения из алфавита "numAlpha"
     * /
    вектор < int > convert ( const wstring & s); // преобразование строка-вектор
      / * * @brief Преобразование вектора (чисел) в строке
     * @details В переменную типа "wstring" с именем "Result" формируется строка по индексам алфавита "numAlpha".
     * Индексы хранятся в векторе типа "int", который пришёл на вход.
     * @return строка текста типа "wstring"
     * /
    wstring convert ( const vector < int > & v); // преобразование вектор-строка
    / * * @brief Валидация ключа
     * @details Ключяется на пустоту при помощи обычных условий.
     * @throw exc, если ключ является пустым или в нём присутствуют недопустимые символы.
     * @return Ключ в виде строки типа "wstring", который успешно прошёл валидацию.
     * /
    wstring get_val_kl ( const wstring & s);
     / * * @brief Валидация текста при шифровании / расшифровании
     * @details Текст проверяется на пустоту при помощи обычных условий.
     * @throw exc, если текст является пустым или в нём присутствуют недопустимые символы.
     * @return Текст в виде строки типа "wstring", который успешно прошёл валидацию
     * /
    wstring get_val_txt ( const wstring & s);

общественность:
// / @brief Запрещающий конструктор без параметров
    modAlphaCipher () = удалить ; // запретим конструктор без параметров
    / * * @brief Конструктор для ключа
      * @param std :: wstring - ключ в виде строки
      * / 
    modAlphaCipher ( строковый скей ); // конструктор для установки ключа
    / * *
     * @brief Метод, предназначенный для шифрования
     * @details Формируется вектор работы из строки открытого текста с помощью метода convert (). 
     * @throw exc, если строка, которая пришла на вход оказывается пустой в ней есть недопустимые символы
     * @return строка шифротекста типа "wstring"
     * /
    wstring шифровать ( константный wstring & open_text); // шифрование
    / * *
     * @brief Метод, предназначенный для расшифрования
     * @details сначала формируется вектор из строки щифратекста с помощью Здесь метода convert ().  
     * @ param std :: wstring cipher_text - сообщение, которое нужно расшифровать
     * @throw exc, если строка, которая пришла на вход оказывается пустой в ней есть недопустимые символы
     * @return строка расшифрованного текста типа "wstring"
     * /
расшифровка     wstring ( const wstring & cipher_text); // расшифрование
};
