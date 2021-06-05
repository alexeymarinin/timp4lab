 * *
* @file exception.h
* @author marinin.a.v
* @ версия 1.0
* @ краткое Описание класса отл.
* @copyright ИБСТ ПГУ
* /
# pragma once
# включить  < stdexcept >
# include  < строка >

используя  пространство имен  std ;
// / @brief Класс для обработки ошибок, которые могут возникнуть при работе с программой
// / @details Класс наследует существующий класс обработки исключений с именем "invalid_argument" из библиотеки "
класс  exc : public  invalid_argument
{

общественность:
    exc ( константная строка и ошибка): недопустимый_аргумент (ошибка) {};
        статический  int  pr_kl ( const wstring & data, const string str_key);
        Статическая  INT  pr_st ( Const строки данных);
    };
