//                 lexer.h 2021
#ifndef LEXER_H
#define LEXER_H
#include "baselexer.h"
class tLexer:public tBaseLexer{
public:
//�����������
 tLexer():tBaseLexer(){
//������� ��������:

//________________________________________

// ������������
    addrange(Adec,0,'0','9',1);
    addstr  (Adec,1,".",   2);
  Adec.final(2);
//________________________________________

// �������������
    addstr  (Aid,0,"!",   1);
  Aid.final(1);
//________________________________________

// ������������� ���������
    addstr  (Aidq,0,"?",   1);
  Aidq.final(1);
}
};
#endif

