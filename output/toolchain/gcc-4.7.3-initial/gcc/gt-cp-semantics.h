/* Type information for cp/semantics.c.
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
gt_ggc_mx_constexpr_call (void *x_p)
{
  struct constexpr_call * const x = (struct constexpr_call *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_16constexpr_fundef ((*x).fundef);
      gt_ggc_m_9tree_node ((*x).bindings);
      gt_ggc_m_9tree_node ((*x).result);
    }
}

void
gt_ggc_mx_constexpr_fundef (void *x_p)
{
  struct constexpr_fundef * const x = (struct constexpr_fundef *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).decl);
      gt_ggc_m_9tree_node ((*x).body);
    }
}

void
gt_ggc_mx_VEC_deferred_access_gc (void *x_p)
{
  struct VEC_deferred_access_gc * const x = (struct VEC_deferred_access_gc *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        size_t l0 = (size_t)(((*x).base).prefix.num);
        for (i0 = 0; i0 != l0; i0++) {
          gt_ggc_m_28VEC_deferred_access_check_gc ((*x).base.vec[i0].deferred_access_checks);
        }
      }
    }
}

void
gt_ggc_m_P14constexpr_call4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_14constexpr_call ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_ggc_m_P16constexpr_fundef4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_16constexpr_fundef ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_pch_nx_constexpr_call (void *x_p)
{
  struct constexpr_call * const x = (struct constexpr_call *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_14constexpr_call, gt_ggc_e_14constexpr_call))
    {
      gt_pch_n_16constexpr_fundef ((*x).fundef);
      gt_pch_n_9tree_node ((*x).bindings);
      gt_pch_n_9tree_node ((*x).result);
    }
}

void
gt_pch_nx_constexpr_fundef (void *x_p)
{
  struct constexpr_fundef * const x = (struct constexpr_fundef *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_16constexpr_fundef, gt_ggc_e_16constexpr_fundef))
    {
      gt_pch_n_9tree_node ((*x).decl);
      gt_pch_n_9tree_node ((*x).body);
    }
}

void
gt_pch_nx_VEC_deferred_access_gc (void *x_p)
{
  struct VEC_deferred_access_gc * const x = (struct VEC_deferred_access_gc *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_22VEC_deferred_access_gc, gt_ggc_e_22VEC_deferred_access_gc))
    {
      {
        size_t i0;
        size_t l0 = (size_t)(((*x).base).prefix.num);
        for (i0 = 0; i0 != l0; i0++) {
          gt_pch_n_28VEC_deferred_access_check_gc ((*x).base.vec[i0].deferred_access_checks);
        }
      }
    }
}

void
gt_pch_n_P14constexpr_call4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P14constexpr_call4htab, gt_types_enum_last))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_14constexpr_call ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P14constexpr_call4htab, gt_types_enum_last);
      }
    }
}

void
gt_pch_n_P16constexpr_fundef4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P16constexpr_fundef4htab, gt_types_enum_last))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_16constexpr_fundef ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P16constexpr_fundef4htab, gt_types_enum_last);
      }
    }
}

void
gt_pch_p_14constexpr_call (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct constexpr_call * const x ATTRIBUTE_UNUSED = (struct constexpr_call *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).fundef), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).bindings), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).result), cookie);
}

void
gt_pch_p_16constexpr_fundef (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct constexpr_fundef * const x ATTRIBUTE_UNUSED = (struct constexpr_fundef *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).body), cookie);
}

void
gt_pch_p_22VEC_deferred_access_gc (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct VEC_deferred_access_gc * const x ATTRIBUTE_UNUSED = (struct VEC_deferred_access_gc *)x_p;
  {
    size_t i0;
    size_t l0 = (size_t)(((*x).base).prefix.num);
    for (i0 = 0; i0 != l0; i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).base.vec[i0].deferred_access_checks), cookie);
    }
  }
}

void
gt_pch_p_P14constexpr_call4htab (ATTRIBUTE_UNUSED void *this_obj,
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

void
gt_pch_p_P16constexpr_fundef4htab (ATTRIBUTE_UNUSED void *this_obj,
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

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_cp_semantics_h[] = {
  {
    &constexpr_call_table,
    1,
    sizeof (constexpr_call_table),
    &gt_ggc_m_P14constexpr_call4htab,
    &gt_pch_n_P14constexpr_call4htab
  },
  {
    &constexpr_fundef_table,
    1,
    sizeof (constexpr_fundef_table),
    &gt_ggc_m_P16constexpr_fundef4htab,
    &gt_pch_n_P16constexpr_fundef4htab
  },
  {
    &deferred_access_stack,
    1,
    sizeof (deferred_access_stack),
    &gt_ggc_mx_VEC_deferred_access_gc,
    &gt_pch_nx_VEC_deferred_access_gc
  },
  LAST_GGC_ROOT_TAB
};

EXPORTED_CONST struct ggc_root_tab gt_pch_rs_gt_cp_semantics_h[] = {
  { &deferred_access_no_check, 1, sizeof (deferred_access_no_check), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

