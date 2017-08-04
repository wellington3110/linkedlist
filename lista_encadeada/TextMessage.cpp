#include "TextMessage.h"
#include <iostream>

void TextMessage::createTxtMessages()
{
   mapTxtMessages[ADD          ]= "Elemento adicionado\n\n";
   mapTxtMessages[N_ADD        ]= "Erro ao adicionar\n\n";
   mapTxtMessages[DEL          ]= "Elemento deletado\n\n";
   mapTxtMessages[N_DEL        ]= "Erro ao remover\n\n";
   mapTxtMessages[EMPTY_LIST   ]= "A lista est� vazia\n\n";
   mapTxtMessages[INVALID_VALUE]= "Valor inv�lido\n\n";
   mapTxtMessages[POS          ]= "Posi��o: ";
   mapTxtMessages[VALUE        ]= "Valor: ";
   mapTxtMessages[BACK_MAINMENU]= "Voltando ao menu principal\n\n";
   mapTxtMessages[OPTION       ]= "Op��o: ";
   mapTxtMessages[NUM_ELEMNT   ]= "   N�mero de elementos: ";
   mapTxtMessages[N_SORT       ]= "Lista j� foi ordenada ou est� vazia\n\n";
   mapTxtMessages[N_CON        ]= "A outra lista est� vazia\n\n";
   mapTxtMessages[ENDL         ]= "\n";
}

void TextMessage::createTxtOptions()
{
   ///////////List Menu Options//////////////
   mapTxtOptions[OPT_ADD     ]= "1.  Adicionar elemento\n";
   mapTxtOptions[ADD_POS     ]= "2.  Adicionar elemento na posi��o\n";
   mapTxtOptions[DEL_POS     ]= "3.  Deletar elemento na posi��o\n";
   mapTxtOptions[DEL_BEG     ]= "4.  Deletar primeiro elemento\n";
   mapTxtOptions[DEL_LAST    ]= "5.  Deletar �ltimo elemento\n";
   mapTxtOptions[FOR_ALL     ]= "6.  Listar elementos a partir do inicio da lista\n";
   mapTxtOptions[FOR_ALL_END ]= "7.  Listar elementos a partir do fim da lista\n";
   mapTxtOptions[SORT        ]= "8.  Ordernar lista\n";
   mapTxtOptions[CON         ]= "9.  Concatenar Listas\n";
   mapTxtOptions[CLEAR_LIST  ]= "10. Limpar lista\n";
   mapTxtOptions[CHOSEN_LIST1]= "Lista 1\n";
   mapTxtOptions[CHOSEN_LIST2]= "Lista 2\n";
   //////////////////////////////////////////

   ///////////Main Menu Options//////////////
   mapTxtOptions[TITLE        ]= "Selecione a op��o desejada:\n";
   mapTxtOptions[LIST1        ]= "1.  Configurar Lista 1\n";
   mapTxtOptions[LIST2        ]= "2.  Configurar Lista 2\n";
   mapTxtOptions[SHOW_LISTMENU]= "3.  Exibir opera��es dispon�veis\n";
   //////////////////////////////////////////

   //////////Options in commom//////////////
   mapTxtOptions[DOTTED_LINE ]= "---------------------------------------------------\n";
   mapTxtOptions[CLS ]= "90. Limpar tela\n";
   mapTxtOptions[EXIT]= "99. Sair da lista\n";
   ////////////////////////////////////////
}

std::string TextMessage::getTextForMessage(TxtMessageId mId)
{ 
   return mapTxtMessages[mId];
}

std::string TextMessage::getTextForOptions(TxtOptionsId mId)
{
   return mapTxtOptions[mId];
}



