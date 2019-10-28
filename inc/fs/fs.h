#ifndef INC_FS_FS_H
#define INC_FS_FS_H

struct file_system_type {
	const char               *name;
	struct dentry            *(*mount) (struct file_system_type *, int, )
};

struct file {

};

struct file_operations {

};

struct inode {

};
