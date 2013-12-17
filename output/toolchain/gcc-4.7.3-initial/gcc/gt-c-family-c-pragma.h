/* Type information for c-family/c-pragma.c.
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
gt_ggc_mx_opt_stack (void *x_p)
{
  struct opt_stack * const x = (struct opt_stack *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9opt_stack ((*x).prev);
      gt_ggc_m_9tree_node ((*x).target_binary);
      gt_ggc_m_9tree_node ((*x).target_strings);
      gt_ggc_m_9tree_node ((*x).optimize_binary);
      gt_ggc_m_9tree_node ((*x).optimize_strings);
    }
}

void
gt_ggc_mx_VEC_pending_redefinition_gc (void *x_p)
{
  struct VEC_pending_redefinition_gc * const x = (struct VEC_pending_redefinition_gc *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        size_t l0 = (size_t)(((*x).base).prefix.num);
        for (i0 = 0; i0 != l0; i0++) {
          gt_ggc_m_9tree_node ((*x).base.vec[i0].oldname);
          gt_ggc_m_9tree_node ((*x).base.vec[i0].newname);
        }
      }
    }
}

void
gt_ggc_mx_VEC_pending_weak_gc (void *x_p)
{
  struct VEC_pending_weak_gc * const x = (struct VEC_pending_weak_gc *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        size_t l0 = (size_t)(((*x).base).prefix.num);
        for (i0 = 0; i0 != l0; i0++) {
          gt_ggc_m_9tree_node ((*x).base.vec[i0].name);
          gt_ggc_m_9tree_node ((*x).base.vec[i0].value);
        }
      }
    }
}

void
gt_ggc_mx_align_stack (void *x_p)
{
  struct align_stack * const x = (struct align_stack *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).id);
      gt_ggc_m_11align_stack ((*x).prev);
    }
}

void
gt_pch_nx_opt_stack (void *x_p)
{
  struct opt_stack * const x = (struct opt_stack *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9opt_stack, gt_ggc_e_9opt_stack))
    {
      gt_pch_n_9opt_stack ((*x).prev);
      gt_pch_n_9tree_node ((*x).target_binary);
      gt_pch_n_9tree_node ((*x).target_strings);
      gt_pch_n_9tree_node ((*x).optimize_binary);
      gt_pch_n_9tree_node ((*x).optimize_strings);
    }
}

void
gt_pch_nx_VEC_pending_redefinition_gc (void *x_p)
{
  struct VEC_pending_redefinition_gc * const x = (struct VEC_pending_redefinition_gc *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_27VEC_pending_redefinition_gc, gt_ggc_e_27VEC_pending_redefinition_gc))
    {
      {
        size_t i0;
        size_t l0 = (size_t)(((*x).base).prefix.num);
        for (i0 = 0; i0 != l0; i0++) {
          gt_pch_n_9tree_node ((*x).base.vec[i0].oldname);
          gt_pch_n_9tree_node ((*x).base.vec[i0].newname);
        }
      }
    }
}

void
gt_pch_nx_VEC_pending_weak_gc (void *x_p)
{
  struct VEC_pending_weak_gc * const x = (struct VEC_pending_weak_gc *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_19VEC_pending_weak_gc, gt_ggc_e_19VEC_pending_weak_gc))
    {
      {
        size_t i0;
        size_t l0 = (size_t)(((*x).base).prefix.num);
        for (i0 = 0; i0 != l0; i0++) {
          gt_pch_n_9tree_node ((*x).base.vec[i0].name);
          gt_pch_n_9tree_node ((*x).base.vec[i0].value);
        }
      }
    }
}

void
gt_pch_nx_align_stack (void *x_p)
{
  struct align_stack * const x = (struct align_stack *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_11align_stack, gt_ggc_e_11align_stack))
    {
      gt_pch_n_9tree_node ((*x).id);
      gt_pch_n_11align_stack ((*x).prev);
    }
}

void
gt_pch_p_9opt_stack (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct opt_stack * const x ATTRIBUTE_UNUSED = (struct opt_stack *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).prev), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).target_binary), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).target_strings), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).optimize_binary), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).optimize_strings), cookie);
}

void
gt_pch_p_27VEC_pending_redefinition_gc (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct VEC_pending_redefinition_gc * const x ATTRIBUTE_UNUSED = (struct VEC_pending_redefinition_gc *)x_p;
  {
    size_t i0;
    size_t l0 = (size_t)(((*x).base).prefix.num);
    for (i0 = 0; i0 != l0; i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).base.vec[i0].oldname), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).base.vec[i0].newname), cookie);
    }
  }
}

void
gt_pch_p_19VEC_pending_weak_gc (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct VEC_pending_weak_gc * const x ATTRIBUTE_UNUSED = (struct VEC_pending_weak_gc *)x_p;
  {
    size_t i0;
    size_t l0 = (size_t)(((*x).base).prefix.num);
    for (i0 = 0; i0 != l0; i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).base.vec[i0].name), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).base.vec[i0].value), cookie);
    }
  }
}

void
gt_pch_p_11align_stack (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct align_stack * const x ATTRIBUTE_UNUSED = (struct align_stack *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).id), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).prev), cookie);
}

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_c_family_c_pragma_h[] = {
  {
    &options_stack,
    1,
    sizeof (options_stack),
    &gt_ggc_mx_opt_stack,
    &gt_pch_nx_opt_stack
  },
  {
    &pending_redefine_extname,
    1,
    sizeof (pending_redefine_extname),
    &gt_ggc_mx_VEC_pending_redefinition_gc,
    &gt_pch_nx_VEC_pending_redefinition_gc
  },
  {
    &pending_weaks,
    1,
    sizeof (pending_weaks),
    &gt_ggc_mx_VEC_pending_weak_gc,
    &gt_pch_nx_VEC_pending_weak_gc
  },
  {
    &alignment_stack,
    1,
    sizeof (alignment_stack),
    &gt_ggc_mx_align_stack,
    &gt_pch_nx_align_stack
  },
  {
    &pragma_extern_prefix,
    1,
    sizeof (pragma_extern_prefix),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  LAST_GGC_ROOT_TAB
};

