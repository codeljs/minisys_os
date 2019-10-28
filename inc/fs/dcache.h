#ifndef INC_FS_DCACHE_H
#define INC_FS_DCACHE_H

struct dentry {
	struct dentry            *d_parent;
	const char               *d_name;
	struct inode             *d_inode;
	struct node_dentry       *d_subdirs_head;
};

/* node of doubly linked list */
struct node_dentry {
	struct dentry            *dentry;
	struct node_dentry       *prev;
	struct node_dentry       *next;
};
