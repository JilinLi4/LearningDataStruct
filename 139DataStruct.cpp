#include <iostream>
#include "bin_tree.h"
using namespace std;
int main()
{

	BiTreeNode* head = create_bitree();
	cout << endl;
	level_order(head);
	return 0;
	/*BiTreeNode* head1 = create_bitree();

	bool wpl = is_similar(head, head1);
	cout << " is_similar:  " << wpl << endl;*/
}

