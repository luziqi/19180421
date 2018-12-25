#ifndef BOOK_H_

#define BOOK_H_

struct Book
{
	char name[50];
	char writer[20];
	char ISBN[8];
	double price;
	struct Book* next;
};

void addbook(struct Book *head);
struct Book* constructNode();
struct Book* deleteBook(struct Book *head,struct Book *target);
void modify(struct Book *target);
struct Book* readfile();
void rewritefile(struct Book *head);
struct Book* searchISBN(struct Book *head,char isbn[]);
void searchname(struct Book *head,char name[]);
void searchwriter(struct Book *head,char writer[]);
void showBooks(struct Book *head);
void menu();
int information(struct Book* pBook);
int newcpy(struct Book* pBook);
int pcmp(double a,double b);

#endif
