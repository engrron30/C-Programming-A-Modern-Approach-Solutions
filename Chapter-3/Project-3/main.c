#include <stdio.h>

typedef struct isbn_s{
	char gs1_index[3];
	int grp_id;
	int pblshr_cd;
	int item_no;
	int chk_dgt;
} isbn_t;

// Requires length for string in scanf: %3s
int query_book_dets(isbn_t *bk_isbn)
{
	int rv = -1;
	printf("Enter ISBN: ");
	scanf("%3s-%d-%d-%d-%d",  
			bk_isbn->gs1_index,
			&bk_isbn->grp_id,
			&bk_isbn->pblshr_cd,
			&bk_isbn->item_no,
			&bk_isbn->chk_dgt);
	//printf("GS1 Index: %s\n", book_isbn->gs1_index);

exit:
	return rv;
}

int displ_book_dets(isbn_t bk_isbn)
{
	int rv = -1;
	printf("-------------------------------\n");
	printf("GS1 Index:        %s\n", bk_isbn.gs1_index);
	printf("Group Identifier: %d\n", bk_isbn.grp_id);
	printf("Publisher Code:   %d\n", bk_isbn.pblshr_cd);
	printf("Item Number:      %d\n", bk_isbn.item_no);
	printf("Check Digit:      %d\n", bk_isbn.chk_dgt);

exit:
	return rv;
}

int main() {
	isbn_t book_eg;
	query_book_dets( &book_eg );
	displ_book_dets( book_eg );


	return 0;
}
