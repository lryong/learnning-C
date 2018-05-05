# include <stdio.h>
# include <string.h>

/* 结构体 */

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void print_book(struct Books book);
void print_book1(struct Books *book);

int main() {
    struct Books book1;
    struct Books book2;

    /* About book1 */
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;

    /* About book2 */

    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Zara Ali");
    strcpy(book2.subject, "Telecom Billing Tutorial");
    book2.book_id = 4522333;

    /* Output about book1 */
    printf("=======================\n");
    printf("Book1's title :%s\n",book1.title);
    printf("Book1's author :%s\n",book1.author);
    printf("Book1's subject :%s\n",book1.subject);
    printf("Book1's book_id :%d\n",book1.book_id);
    
    /* Output about book2 */
    printf("=======================\n");
    printf("Book2's title :%s\n",book2.title);
    printf("Book2's author :%s\n",book2.author);
    printf("Book2's subject :%s\n",book2.subject);
    printf("Book2's book_id :%d\n",book2.book_id);

    printf("=======================\n");
    print_book1(&book1);
    print_book1(&book2);
}

void print_book( struct Books book) {
    printf("=======================\n");
    printf("Book's title :%s\n",book.title);
    printf("Book's author :%s\n",book.author);
    printf("Book's subject :%s\n",book.subject);
    printf("Book's book_id :%d\n",book.book_id);
}

void print_book1( struct Books *book) {
    printf("=======================\n");
    printf("Book's title :%s\n",book->title);
    printf("Book's author :%s\n",book->author);
    printf("Book's subject :%s\n",book->subject);
    printf("Book's book_id :%d\n",book->book_id);
}
