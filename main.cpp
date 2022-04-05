#include <iostream>
#include "skiplist.h"
#define FILE_PATH "./store/dumpFile"

int main() {
	SkipList<int, std::string> skipList(6);
	skipList.insert_element(1, "����");
	skipList.insert_element(3, "���");
	skipList.insert_element(7, "���Ӻ�");
	skipList.insert_element(8, "������");
	skipList.insert_element(9, "���");
	skipList.insert_element(19, "������");
	skipList.insert_element(19, "����");

	std::cout << "skipList size:" << skipList.size() << std::endl;

	skipList.dump_file();

	// skipList.load_file();

	skipList.search_element(9);
	skipList.search_element(18);


	skipList.display_list();

	skipList.delete_element(3);
	skipList.delete_element(7);

	std::cout << "skipList size:" << skipList.size() << std::endl;

	skipList.display_list();
}
