/* Automatically generated file. Do not edit. Edit wrapawk/wrapfunc.inp. */
#ifndef WRAPTMPF_H
#define WRAPTMPF_H


int TMP_LSTAT LSTAT_ARG(int ver, const char *file_name, struct stat *buf){
  load_library_symbols();
  return  NEXT_LSTAT_NOARG LSTAT_ARG(ver, file_name, buf);
}

int TMP_STAT STAT_ARG(int ver, const char *file_name, struct stat *buf){
  load_library_symbols();
  return  NEXT_STAT_NOARG STAT_ARG(ver, file_name, buf);
}

int TMP_FSTAT FSTAT_ARG(int ver, int fd, struct stat *buf){
  load_library_symbols();
  return  NEXT_FSTAT_NOARG FSTAT_ARG(ver, fd, buf);
}

#ifdef HAVE_FSTATAT
int TMP_FSTATAT FSTATAT_ARG(int ver, int dir_fd, const char *path, struct stat *buf, int flags){
  load_library_symbols();
  return  NEXT_FSTATAT_NOARG FSTATAT_ARG(ver, dir_fd, path, buf, flags);
}

#endif /* HAVE_FSTATAT */

#ifdef STAT64_SUPPORT
int TMP_LSTAT64 LSTAT64_ARG(int ver, const char *file_name, struct stat64 *buf){
  load_library_symbols();
  return  NEXT_LSTAT64_NOARG LSTAT64_ARG(ver, file_name, buf);
}

int TMP_STAT64 STAT64_ARG(int ver, const char *file_name, struct stat64 *buf){
  load_library_symbols();
  return  NEXT_STAT64_NOARG STAT64_ARG(ver, file_name, buf);
}

int TMP_FSTAT64 FSTAT64_ARG(int ver, int fd, struct stat64 *buf){
  load_library_symbols();
  return  NEXT_FSTAT64_NOARG FSTAT64_ARG(ver, fd, buf);
}

#ifdef HAVE_FSTATAT
int TMP_FSTATAT64 FSTATAT64_ARG(int ver, int dir_fd, const char *path, struct stat64 *buf, int flags){
  load_library_symbols();
  return  NEXT_FSTATAT64_NOARG FSTATAT64_ARG(ver, dir_fd, path, buf, flags);
}

#endif /* HAVE_FSTATAT */
#endif /* STAT64_SUPPORT */

#ifdef __APPLE__
#ifdef __LP64__
int tmp_getattrlist (const char *path, void *attrList, void *attrBuf, size_t attrBufSize, unsigned int options){
  load_library_symbols();
  return  next_getattrlist (path, attrList, attrBuf, attrBufSize, options);
}

#ifdef HAVE_FGETATTRLIST
int tmp_fgetattrlist (int fd, void *attrList, void *attrBuf, size_t attrBufSize, unsigned int options){
  load_library_symbols();
  return  next_fgetattrlist (fd, attrList, attrBuf, attrBufSize, options);
}

#endif
#else
int tmp_getattrlist (const char *path, void *attrList, void *attrBuf, size_t attrBufSize, unsigned long options){
  load_library_symbols();
  return  next_getattrlist (path, attrList, attrBuf, attrBufSize, options);
}

#ifdef HAVE_FGETATTRLIST
int tmp_fgetattrlist (int fd, void *attrList, void *attrBuf, size_t attrBufSize, unsigned long options){
  load_library_symbols();
  return  next_fgetattrlist (fd, attrList, attrBuf, attrBufSize, options);
}

#endif
#if MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_5
int tmp_getattrlist$UNIX2003 (const char *path, void *attrList, void *attrBuf, size_t attrBufSize, unsigned long options){
  load_library_symbols();
  return  next_getattrlist$UNIX2003 (path, attrList, attrBuf, attrBufSize, options);
}

#endif
#endif
#if MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_5
int tmp_lstat$INODE64 (const char *file_name, struct stat *buf){
  load_library_symbols();
  return  next_lstat$INODE64 (file_name, buf);
}

int tmp_stat$INODE64 (const char *file_name, struct stat *buf){
  load_library_symbols();
  return  next_stat$INODE64 (file_name, buf);
}

int tmp_fstat$INODE64 (int fd, struct stat *buf){
  load_library_symbols();
  return  next_fstat$INODE64 (fd, buf);
}

#endif
#endif /* ifdef __APPLE__ */

int TMP_MKNOD MKNOD_ARG(int ver, const char *pathname, mode_t mode, dev_t XMKNOD_FRTH_ARG dev){
  load_library_symbols();
  return  NEXT_MKNOD_NOARG MKNOD_ARG(ver, pathname, mode, dev);
}


#ifdef HAVE_FSTATAT
#ifdef HAVE_MKNODAT
int TMP_MKNODAT MKNODAT_ARG(int ver, int dir_fd, const char *pathname, mode_t mode, dev_t dev){
  load_library_symbols();
  return  NEXT_MKNODAT_NOARG MKNODAT_ARG(ver, dir_fd, pathname, mode, dev);
}

#endif /* HAVE_MKNODAT */
#endif /* HAVE_FSTATAT */


int tmp_chown (const char *path, uid_t owner, gid_t group){
  load_library_symbols();
  return  next_chown (path, owner, group);
}

int tmp_lchown (const char *path, uid_t owner, gid_t group){
  load_library_symbols();
  return  next_lchown (path, owner, group);
}

int tmp_fchown (int fd, uid_t owner, gid_t group){
  load_library_symbols();
  return  next_fchown (fd, owner, group);
}

int tmp_chmod (const char *path, mode_t mode){
  load_library_symbols();
  return  next_chmod (path, mode);
}

int tmp_fchmod (int fd, mode_t mode){
  load_library_symbols();
  return  next_fchmod (fd, mode);
}

#if defined HAVE_LCHMOD
int tmp_lchmod (const char *path, mode_t mode){
  load_library_symbols();
  return  next_lchmod (path, mode);
}

#endif
#if defined __APPLE__ && !defined __LP64__
#if MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_5
int tmp_lchown$UNIX2003 (const char *path, uid_t owner, gid_t group){
  load_library_symbols();
  return  next_lchown$UNIX2003 (path, owner, group);
}

int tmp_chmod$UNIX2003 (const char *path, mode_t mode){
  load_library_symbols();
  return  next_chmod$UNIX2003 (path, mode);
}

int tmp_fchmod$UNIX2003 (int fd, mode_t mode){
  load_library_symbols();
  return  next_fchmod$UNIX2003 (fd, mode);
}

#endif
#endif /* if defined __APPLE__ && !defined __LP64__ */
int tmp_mkdir (const char *path, mode_t mode){
  load_library_symbols();
  return  next_mkdir (path, mode);
}

int tmp_unlink (const char *pathname){
  load_library_symbols();
  return  next_unlink (pathname);
}

int tmp_rmdir (const char *pathname){
  load_library_symbols();
  return  next_rmdir (pathname);
}

int tmp_remove (const char *pathname){
  load_library_symbols();
  return  next_remove (pathname);
}

int tmp_rename (const char *oldpath, const char *newpath){
  load_library_symbols();
  return  next_rename (oldpath, newpath);
}


#ifdef FAKEROOT_FAKENET
pid_t tmp_fork (void){
  load_library_symbols();
  return  next_fork ();
}

pid_t tmp_vfork (void){
  load_library_symbols();
  return  next_vfork ();
}

int tmp_close (int fd){
  load_library_symbols();
  return  next_close (fd);
}

int tmp_dup2 (int oldfd, int newfd){
  load_library_symbols();
  return  next_dup2 (oldfd, newfd);
}

#endif /* FAKEROOT_FAKENET */


uid_t tmp_getuid (void){
  load_library_symbols();
  return  next_getuid ();
}

gid_t tmp_getgid (void){
  load_library_symbols();
  return  next_getgid ();
}

uid_t tmp_geteuid (void){
  load_library_symbols();
  return  next_geteuid ();
}

gid_t tmp_getegid (void){
  load_library_symbols();
  return  next_getegid ();
}

int tmp_setuid (uid_t id){
  load_library_symbols();
  return  next_setuid (id);
}

int tmp_setgid (gid_t id){
  load_library_symbols();
  return  next_setgid (id);
}

int tmp_seteuid (uid_t id){
  load_library_symbols();
  return  next_seteuid (id);
}

int tmp_setegid (gid_t id){
  load_library_symbols();
  return  next_setegid (id);
}

int tmp_setreuid (SETREUID_ARG ruid, SETREUID_ARG euid){
  load_library_symbols();
  return  next_setreuid (ruid, euid);
}

int tmp_setregid (SETREGID_ARG rgid, SETREGID_ARG egid){
  load_library_symbols();
  return  next_setregid (rgid, egid);
}

#if defined __APPLE__ && !defined __LP64__
#if MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_5
int tmp_setreuid$UNIX2003 (SETREUID_ARG ruid, SETREUID_ARG euid){
  load_library_symbols();
  return  next_setreuid$UNIX2003 (ruid, euid);
}

int tmp_setregid$UNIX2003 (SETREGID_ARG rgid, SETREGID_ARG egid){
  load_library_symbols();
  return  next_setregid$UNIX2003 (rgid, egid);
}

#endif
#endif /* if defined __APPLE__ && !defined __LP64__ */
#ifdef HAVE_GETRESUID
int tmp_getresuid (uid_t *ruid, uid_t *euid, uid_t *suid){
  load_library_symbols();
  return  next_getresuid (ruid, euid, suid);
}

#endif /* HAVE_GETRESUID */
#ifdef HAVE_GETRESGID
int tmp_getresgid (gid_t *rgid, gid_t *egid, gid_t *sgid){
  load_library_symbols();
  return  next_getresgid (rgid, egid, sgid);
}

#endif /* HAVE_GETRESGID */
#ifdef HAVE_SETRESUID
int tmp_setresuid (uid_t ruid, uid_t euid, uid_t suid){
  load_library_symbols();
  return  next_setresuid (ruid, euid, suid);
}

#endif /* HAVE_SETRESUID */
#ifdef HAVE_SETRESGID
int tmp_setresgid (gid_t rgid, gid_t egid, gid_t sgid){
  load_library_symbols();
  return  next_setresgid (rgid, egid, sgid);
}

#endif /* HAVE_SETRESGID */
#ifdef HAVE_SETFSUID
uid_t tmp_setfsuid (uid_t fsuid){
  load_library_symbols();
  return  next_setfsuid (fsuid);
}

#endif /* HAVE_SETFSUID */
#ifdef HAVE_SETFSGID
gid_t tmp_setfsgid (gid_t fsgid){
  load_library_symbols();
  return  next_setfsgid (fsgid);
}

#endif /* HAVE_SETFSGID */
int tmp_initgroups (const char *user, INITGROUPS_SECOND_ARG group){
  load_library_symbols();
  return  next_initgroups (user, group);
}

int tmp_setgroups (SETGROUPS_SIZE_TYPE size, const gid_t *list){
  load_library_symbols();
  return  next_setgroups (size, list);
}


#ifdef HAVE_FSTATAT
#ifdef HAVE_FCHMODAT
int tmp_fchmodat (int dir_fd, const char *path, mode_t mode, int flags){
  load_library_symbols();
  return  next_fchmodat (dir_fd, path, mode, flags);
}

#endif /* HAVE_FCHMODAT */
#ifdef HAVE_FCHOWNAT
int tmp_fchownat (int dir_fd, const char *path, uid_t owner, gid_t group, int flags){
  load_library_symbols();
  return  next_fchownat (dir_fd, path, owner, group, flags);
}

#endif /* HAVE_FCHOWNAT */
#ifdef HAVE_MKDIRAT
int tmp_mkdirat (int dir_fd, const char *pathname, mode_t mode){
  load_library_symbols();
  return  next_mkdirat (dir_fd, pathname, mode);
}

#endif /* HAVE_MKDIRAT */
#ifdef HAVE_OPENAT
int tmp_openat (int dir_fd, const char *pathname, int flags){
  load_library_symbols();
  return  next_openat (dir_fd, pathname, flags);
}

#endif /* HAVE_OPENAT */
#ifdef HAVE_RENAMEAT
int tmp_renameat (int olddir_fd, const char *oldpath, int newdir_fd, const char *newpath){
  load_library_symbols();
  return  next_renameat (olddir_fd, oldpath, newdir_fd, newpath);
}

#endif /* HAVE_RENAMEAT */
#ifdef HAVE_UNLINKAT
int tmp_unlinkat (int dir_fd, const char *pathname, int flags){
  load_library_symbols();
  return  next_unlinkat (dir_fd, pathname, flags);
}

#endif /* HAVE_UNLINKAT */
#endif /* HAVE_FSTATAT */

#ifdef HAVE_SYS_ACL_H
int tmp_acl_set_fd (int fd, acl_t acl){
  load_library_symbols();
  return  next_acl_set_fd (fd, acl);
}

int tmp_acl_set_file (const char *path_p, acl_type_t type, acl_t acl){
  load_library_symbols();
  return  next_acl_set_file (path_p, type, acl);
}

#endif /* HAVE_SYS_ACL_H */

#ifdef HAVE_FTS_READ
FTSENT * tmp_fts_read (FTS *ftsp){
  load_library_symbols();
  return  next_fts_read (ftsp);
}

#ifdef __APPLE__
#if MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_5
FTSENT * tmp_fts_read$INODE64 (FTS *ftsp){
  load_library_symbols();
  return  next_fts_read$INODE64 (ftsp);
}

#endif
#endif /* ifdef __APPLE__ */
#endif /* HAVE_FTS_READ */
#ifdef HAVE_FTS_CHILDREN
FTSENT * tmp_fts_children (FTS *ftsp, int options){
  load_library_symbols();
  return  next_fts_children (ftsp, options);
}

#ifdef __APPLE__
#if MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_5
FTSENT * tmp_fts_children$INODE64 (FTS *ftsp, int options){
  load_library_symbols();
  return  next_fts_children$INODE64 (ftsp, options);
}

#endif
#endif /* ifdef __APPLE__ */
#endif /* HAVE_FTS_CHILDREN */
#endif
