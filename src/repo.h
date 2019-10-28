#ifndef _GIT_REPO_H
#define _GIT_REPO_H

#include <stdlib.h>
typedef struct repo {
	char *name;
	char *url;
} repo;

struct el {
	size_t  size;
	void   *data;
	void   *next;
};

struct list {
	size_t length;
	struct el *first;
	struct el *last;
};

struct el * new_el(void *data);

int add_el(struct list *li, struct el *elm);

repo * new_repo(char *name, char *url);

void print_repos(struct list *li);

#endif