#ifndef MACHINE_H
#define MACHINE_H
/*
 *  machine.h
 *  compiler
 *
 */

/* machine type */
typedef struct machine_type {
	int token_transitions[100][200];
	int machine_transitions[100][50];
	int final_states[100];
	int initial_state;
	int current_state;
	int machine_id;
} Machine;

/* initialize transitions for a machine */
void initialize_machine_transitions(Machine * m);



//////////////////////////////////////////////////////////
////////// GENERATED BY RADIANT FIRE LOADER //////////////
//////////////////////////////////////////////////////////

#define		APE_TOTAL_MACHINES		4

/* ape invalid transition */
#define		APE_INVALID_STATE		-1

/* ape machine ids */
#define		APE_MACHINE_PROGRAMA_ID		0
#define		APE_MACHINE_COMANDO_ID		1
#define		APE_MACHINE_EXPRESSAO_ID		2
#define		APE_MACHINE_CONDICAO_ID		3

/* ape tokens ids */
#define		APE_TOKEN_FUNCTIONS_ID		0
#define		APE_TOKEN_INT_ID		1
#define		APE_TOKEN_CHAR_ID		2
#define		APE_TOKEN_BOOLEAN_ID		3
#define		APE_TOKEN_VOID_ID		4
#define		APE_TOKEN_MAIN_ID		5
#define		APE_TOKEN_ID_ID		6
#define		APE_TOKEN_ABRE_CHAVES_ID		7
#define		APE_TOKEN_ABRE_PARENTESES_ID		8
#define		APE_TOKEN_PONTO_E_VIRGULA_ID		9
#define		APE_TOKEN_BEGIN_ID		10
#define		APE_TOKEN_FECHA_PARENTESES_ID		11
#define		APE_TOKEN_FECHA_CHAVES_ID		12
#define		APE_TOKEN_RETURN_ID		13
#define		APE_TOKEN_VIRGULA_ID		14
#define		APE_TOKEN_IF_ID		15
#define		APE_TOKEN_WHILE_ID		16
#define		APE_TOKEN_SCAN_ID		17
#define		APE_TOKEN_PRINT_ID		18
#define		APE_TOKEN_IGUAL_ID		19
#define		APE_TOKEN_STRING_ID		20
#define		APE_TOKEN_SOMA_ID		21
#define		APE_TOKEN_ELSE_ID		22
#define		APE_TOKEN_INTEIRO_ID		23
#define		APE_TOKEN_MULTIPLICACAO_ID		24
#define		APE_TOKEN_DIVISAO_ID		25
#define		APE_TOKEN_SUBTRACAO_ID		26
#define		APE_TOKEN_NOT_ID		27
#define		APE_TOKEN_BOOLEANO_ID		28
#define		APE_TOKEN_MENOR_ID		29
#define		APE_TOKEN_MENOR_IGUAL_ID		30
#define		APE_TOKEN_MAIOR_ID		31
#define		APE_TOKEN_MAIOR_IGUAL_ID		32
#define		APE_TOKEN_IGUAL_IGUAL_ID		33
#define		APE_TOKEN_DIFERENTE_ID		34
#define		APE_TOKEN_AND_ID		35
#define		APE_TOKEN_OR_ID		36
#define		APE_TOKEN_CALL_ID		37

//////////////////////////////////////////////////////////
#endif