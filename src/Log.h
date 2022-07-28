#include <iostream>
#include <string>

namespace Nash
{

/*

N.B. This is Russian software, and each function is set out to display either/both an English or a Russian
message. Comment out each line to suit your needs, or alternitivly request a new langugage to be added as an
issue at https://github.com/DDC-Development/Nash/issues/new. 

Russian language comments are commented out by default.

Remember, if you do put in a request, that good manners do not cost anything!

Пожалуйста, имейте в виду, что это русское программное обеспечение, и каждая функция настроена на отображение 
либо английского, либо русского сообщения. Закомментируйте каждую строку в соответствии с вашими потребностями, 
или, в качестве альтернативы, попросите добавить новый язык, как в https://github.com/DDC-Development/Nash/issues/new. 

Русскоязычные комментарии по умолчанию закомментированы. 

Помните, если вы сделаете запрос, что хорошие манерыничего не стоят!

*/

namespace Logger
{
    class Logger
    {
        public:
            void Error(std::string message)
            {
                std::cout << "\x1B[31m[ERROR]: " << message << "\x1B[37m" << std::endl;
                //std::cout << "\x1B[31m[ОШИБКА]: " << message << "\x1B[37m" << std::endl;
            }
            void Warning(std::string message)
            {
                std::cout << "\x1B[93m[WARNING]: " << message << "\x1B[37m" << std::endl;
                //std::cout << "\x1B[93m[ПРЕДУПРЕЖДЕНИЕ]: " << message << "\x1B[37m" << std::endl;
            }
            void Info(std::string message)
            {
                std::cout << "\x1B[34m[INFO]: " << message << "\x1B[37m" << std::endl;
                //std::cout << "\x1B[34m[ИНФОРМАЦИЯ]: " << message << "\x1B[37m" << std::endl;
            }
        };
    };
}