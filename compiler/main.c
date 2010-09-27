#include <stdio.h>
#include <stdlib.h>
#include "reader.h"
#include "token.h"
#include "analyser.h"
#include "tables.h"

int main (int argc, const char * argv[]) {
	
	
	/* initialize the file reader */
	init_reader("../../../resources/test_lex.poli");
	
	/* initialize transducer automata transitions */
	initialize_transitions();
	
	/* initialize semantic tables */
	initialize_semantic_tables();
	
	/* loop that reads all tokens from source code */
	while (token.type != TOKEN_TYPE_END_OF_FILE) {
		get_next_token();
		
		if (token.type != TOKEN_TYPE_END_OF_FILE) {
			printf("Token: %s (%d) :: %s (%d) :: line %i, column %i\n", 
				   token.value, token.index, token_type_name(), token.type, token.line, token.column);
		}
		
	}
	
	char *a;
	
	hash_table t;
	t = init_table(t);
	t = init_table(t);
	
	a = "ola";
	
	add(&t, "ola2");
	add(&t, "ola3");
	
	printf("valor:%d\n", find_by_key(&t, a));
	printf("valor:%d\n", find_by_key(&table_symbols, "bc") >= 0);
	
	return 0;
}