# включить  " Shifr.h "
# включить  < iostream >
# включить  " exception.h "
# include  < locale >
# include  < codecvt >
int  main ()
{
    bool isTrue = true ;
    строка rejim, str, str_kl;
    cout << " Здравствуйте! Время что-нибудь зашифровать / расшифровать c помощью шифра табличной маршрутной перестановки. " << endl;
    cout << " Режимы работы программы: \ n encode - режим шифрования. \ n decode - режим расшифрования. \ n exit - режим завершения программы. \ n " << endl;

    do {
        локаль loc ( " ru_RU.UTF-8 " );
        locale :: global (место);
        cout << " Укажите режим работы: " ;
        getline (cin, rejim);
        if (rejim == " кодировать " ) {
            cout << " Введите строку для шифрования: " ;
            getline (cin, str);
            попробуйте {
                exc :: pr_st (str);
                cout << " Введите ключ: " ;
                getline (cin, str_kl);
                wstring_convert <codecvt_utf8 < wchar_t >, wchar_t > кодек;
                wstring wstren = кодек. from_bytes ( строка );
                exc :: pr_kl (wstren, str_kl);
                int ключ = стои (str_kl);
                Шифр кодировать (ключ);
                cout << codec. to_bytes (кодировать. Enshifr (кодировать, wstren)) << endl;

            } catch (exc & ex) {
                cout << ex. what () << endl;
            }
        }
        if (rejim == " декодировать " ) {
            cout << " Введите для расшифрования: " ;
            getline (cin, str);
            попробуйте {
                exc :: pr_st (str);
                cout << " Введите ключ: " ;
                getline (cin, str_kl);
                wstring_convert <codecvt_utf8 < wchar_t >, wchar_t > кодек;
                wstring wstren = кодек. from_bytes ( строка );
                exc :: pr_kl (wstren, str_kl);
                int ключ = стои (str_kl);
                Shifr dec (клавиша);
                cout << codec. to_bytes ( десятичный decshifr (dec, wstren)) << endl;

            } catch (exc & ex) {
                cout << ex. what () << endl;
            }
        }
        if (rejim == " exit " ) {
            cout << " Программа завершила работу. " << endl;
            isTrue = false ;
            перерыв ;
        }
    } while (isTrue! = false );
    возврат  0 ;
}
