# включить  < iostream >
# включить  " modAlphaCipher.h "
# включить  " exception.h "
# include  < codecvt >
используя  пространство имен  std ;
int  main ()
{
    локаль loc ( " ru_RU.UTF-8 " );
    locale :: global (место);
    bool isTrue = true ;
    wstring rejim, wstr, wstr_kl;
    cout << " Здравствуйте! Время что-нибудь зашифровать / расшифровать! " << endl;
    cout << " Режимы работы программы: \ n encode - режим шифрования русскоязычных сообщений методом Гронсвельда. \ n decode - режим расшифрования русскоязычных сообщений методом Гронсвельда. \ n exit - режим завершения программы. \ n " << endl;

    do {
        cout << " Укажите режим работы: " ;
        wcin >> rejim;
        if (rejim == L " кодировать " ) {
            cout << " Введите строку для шифрования: " ;
            wcin. получить (); getline (wcin, wstr);
            cout << " Введите ключ: " ;
            getline (wcin, wstr_kl);
            попробуйте {
                modAlphaCipher cipher (wstr_kl);
                wstring cipherText = шифр. зашифровать (wstr);
                wstring_convert <codecvt_utf8 < wchar_t >, wchar_t > кодек;
                cout << codec. to_bytes (cipherText) << endl;
            } catch (exc & ex) {

                cout << ex. what () << endl;

            }
        }
        if (rejim == L " декодировать " ) {
            cout << " Введите для расшифрования: " ;
            wcin. получить (); getline (wcin, wstr);
            cout << " Введите ключ: " ; getline (wcin, wstr_kl);
            попробуйте {
                modAlphaCipher cipher (wstr_kl);
                wstring OpenText = шифр. расшифровать (wstr);
                wstring_convert <codecvt_utf8 < wchar_t >, wchar_t > кодек;
                cout << codec. to_bytes (OpenText) << endl;
            } catch (exc & ex) {

                cout << ex. what () << endl;
            }
        }
        if (rejim == L " выход " ) {
            cout << " Программа завершила работу. " << endl;
            isTrue = false ;
            перерыв ;
        }
        
    } while (isTrue! = false );
    возврат  0 ;

}
