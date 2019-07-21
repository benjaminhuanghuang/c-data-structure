struct stats {
	int account;
	float balance;
	struct stats *next;
};

void fill_structure(struct stats *s);
struct stats *create(void);