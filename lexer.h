//                 lexer.h 2021
#ifndef LEXER_H
#define LEXER_H
#include "baselexer.h"
class tLexer:public tBaseLexer{
public:
  // конструктор
  tLexer() : tBaseLexer() {
  //создать автоматы: 0-9 a-z A-Z - ? !

  // идентификатор !--    0-9*? -*?
  addrange(Aid, 0, 'a', 'z', 1);
  addrange(Aid, 0, 'A', 'Z', 1);
  addstr(Aid, 0, "?", 1);
  addrange(Aid, 1, 'a', 'z', 1);
  addrange(Aid, 1, 'A', 'Z', 1);
  addrange(Aid, 1, '0', '9', 1);
  addstr(Aid, 1, "?", 1);
  addstr(Aid, 1, "!", 1);
  addrange(Aid, 1, 'a', 'z', 2);
  addrange(Aid, 1, 'A', 'Z', 2);
  addrange(Aid, 1, '0', '9', 2);
  addstr(Aid, 1, "!", 2);
  Aid.final(2);


  // идентификатор предиката ?!    0-9*{?}
  addrange(Aidq, 0, 'a', 'z', 1);
  addrange(Aidq, 0, 'A', 'Z', 1);
  addstr(Aidq, 0, "!", 1);
  addstr(Aidq, 0, "-", 1);
  addrange(Aidq, 1, '0', '9', 1);
  addrange(Aidq, 1, 'a', 'z', 1);
  addrange(Aidq, 1, 'A', 'Z', 1);
  addstr(Aidq, 1, "!", 1);
  addstr(Aidq, 1, "-", 1);
  addrange(Aidq, 1, '0', '9', 2);
  addrange(Aidq, 1, 'a', 'z', 2);
  addrange(Aidq, 1, 'A', 'Z', 2);
  addstr(Aidq, 1, "?", 2);
  addstr(Aidq, 1, "-", 2);
  addrange(Aidq, 2, '0', '9', 2);
  addrange(Aidq, 2, 'a', 'z', 2);
  addrange(Aidq, 2, 'A', 'Z', 2);
  addstr(Aidq, 2, "?", 2);
  addstr(Aidq, 2, "-", 2);
  addstr(Aidq, 2, "?", 3);
  Aidq.final(3);
}
};
#endif
