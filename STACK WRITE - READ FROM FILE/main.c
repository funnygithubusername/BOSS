#include "stack.h"
#include "stackdbio.h"

const char *db_file_name = "stack_db_file.bin\0";

int main(int argc, char **argv) {

    DBFile* db = initialize(db_file_name);
    node *test_data = generate_test_data();
    open_db(db);
    save_node_to_db(db, test_data);
	close_db(db);

	open_db(db);
	node *new_test_data = (node*)malloc(sizeof(node));
	read_from_db(db, new_test_data);
    close_db(db);
    delete_test_data(test_data);
    free_db(db);

    return 0;
}
