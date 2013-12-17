/* Type information for lto-symtab.c.
   Copyright (C) 2004, 2007, 2009 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This file is machine generated.  Do not edit.  */

void
gt_ggc_mx_lto_symtab_entry_def (void *x_p)
{
  struct lto_symtab_entry_def * const x = (struct lto_symtab_entry_def *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).id);
      gt_ggc_m_9tree_node ((*x).decl);
      gt_ggc_m_11cgraph_node ((*x).node);
      gt_ggc_m_12varpool_node ((*x).vnode);
      gt_ggc_m_20lto_symtab_entry_def ((*x).next);
    }
}

void
gt_ggc_m_P20lto_symtab_entry_def4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_20lto_symtab_entry_def ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_pch_nx_lto_symtab_entry_def (void *x_p)
{
  struct lto_symtab_entry_def * const x = (struct lto_symtab_entry_def *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_20lto_symtab_entry_def, gt_ggc_e_20lto_symtab_entry_def))
    {
      gt_pch_n_9tree_node ((*x).id);
      gt_pch_n_9tree_node ((*x).decl);
      gt_pch_n_11cgraph_node ((*x).node);
      gt_pch_n_12varpool_node ((*x).vnode);
      gt_pch_n_20lto_symtab_entry_def ((*x).next);
    }
}

void
gt_pch_n_P20lto_symtab_entry_def4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P20lto_symtab_entry_def4htab, gt_types_enum_last))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_20lto_symtab_entry_def ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P20lto_symtab_entry_def4htab, gt_types_enum_last);
      }
    }
}

void
gt_pch_p_20lto_symtab_entry_def (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct lto_symtab_entry_def * const x ATTRIBUTE_UNUSED = (struct lto_symtab_entry_def *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).id), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).node), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).vnode), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
}

void
gt_pch_p_P20lto_symtab_entry_def4htab (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct htab * const x ATTRIBUTE_UNUSED = (struct htab *)x_p;
  if ((*x).entries != NULL) {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
      if ((void *)((*x).entries) == this_obj)
        op (&((*x).entries[i0]), cookie);
    }
    if ((void *)(x) == this_obj)
      op (&((*x).entries), cookie);
  }
}

/* GC roots.  */

EXPORTED_CONST struct ggc_cache_tab gt_ggc_rc_gt_lto_symtab_h[] = {
  {
    &lto_symtab_identifiers,
    1,
    sizeof (lto_symtab_identifiers),
    &gt_ggc_mx_lto_symtab_entry_def,
    &gt_pch_nx_lto_symtab_entry_def,
    &lto_symtab_entry_marked_p
  },
  LAST_GGC_CACHE_TAB
};

EXPORTED_CONST struct ggc_root_tab gt_pch_rc_gt_lto_symtab_h[] = {
  {
    &lto_symtab_identifiers,
    1,
    sizeof (lto_symtab_identifiers),
    &gt_ggc_m_P20lto_symtab_entry_def4htab,
    &gt_pch_n_P20lto_symtab_entry_def4htab
  },
  LAST_GGC_ROOT_TAB
};

