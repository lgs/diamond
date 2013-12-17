/* Type information for objc/objc-next-runtime-abi-02.c.
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
gt_ggc_mx_VEC_ivarref_entry_gc (void *x_p)
{
  struct VEC_ivarref_entry_gc * const x = (struct VEC_ivarref_entry_gc *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        size_t l0 = (size_t)(((*x).base).prefix.num);
        for (i0 = 0; i0 != l0; i0++) {
          gt_ggc_m_9tree_node ((*x).base.vec[i0].decl);
          gt_ggc_m_9tree_node ((*x).base.vec[i0].offset);
        }
      }
    }
}

void
gt_ggc_mx_VEC_prot_list_entry_gc (void *x_p)
{
  struct VEC_prot_list_entry_gc * const x = (struct VEC_prot_list_entry_gc *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        size_t l0 = (size_t)(((*x).base).prefix.num);
        for (i0 = 0; i0 != l0; i0++) {
          gt_ggc_m_9tree_node ((*x).base.vec[i0].id);
          gt_ggc_m_9tree_node ((*x).base.vec[i0].refdecl);
        }
      }
    }
}

void
gt_ggc_mx_VEC_msgref_entry_gc (void *x_p)
{
  struct VEC_msgref_entry_gc * const x = (struct VEC_msgref_entry_gc *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        size_t l0 = (size_t)(((*x).base).prefix.num);
        for (i0 = 0; i0 != l0; i0++) {
          gt_ggc_m_9tree_node ((*x).base.vec[i0].func);
          gt_ggc_m_9tree_node ((*x).base.vec[i0].selname);
          gt_ggc_m_9tree_node ((*x).base.vec[i0].refdecl);
        }
      }
    }
}

void
gt_ggc_mx_VEC_ident_data_tuple_gc (void *x_p)
{
  struct VEC_ident_data_tuple_gc * const x = (struct VEC_ident_data_tuple_gc *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        size_t l0 = (size_t)(((*x).base).prefix.num);
        for (i0 = 0; i0 != l0; i0++) {
          gt_ggc_m_9tree_node ((*x).base.vec[i0].ident);
          gt_ggc_m_9tree_node ((*x).base.vec[i0].data);
        }
      }
    }
}

void
gt_pch_nx_VEC_ivarref_entry_gc (void *x_p)
{
  struct VEC_ivarref_entry_gc * const x = (struct VEC_ivarref_entry_gc *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_20VEC_ivarref_entry_gc, gt_ggc_e_20VEC_ivarref_entry_gc))
    {
      {
        size_t i0;
        size_t l0 = (size_t)(((*x).base).prefix.num);
        for (i0 = 0; i0 != l0; i0++) {
          gt_pch_n_9tree_node ((*x).base.vec[i0].decl);
          gt_pch_n_9tree_node ((*x).base.vec[i0].offset);
        }
      }
    }
}

void
gt_pch_nx_VEC_prot_list_entry_gc (void *x_p)
{
  struct VEC_prot_list_entry_gc * const x = (struct VEC_prot_list_entry_gc *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_22VEC_prot_list_entry_gc, gt_ggc_e_22VEC_prot_list_entry_gc))
    {
      {
        size_t i0;
        size_t l0 = (size_t)(((*x).base).prefix.num);
        for (i0 = 0; i0 != l0; i0++) {
          gt_pch_n_9tree_node ((*x).base.vec[i0].id);
          gt_pch_n_9tree_node ((*x).base.vec[i0].refdecl);
        }
      }
    }
}

void
gt_pch_nx_VEC_msgref_entry_gc (void *x_p)
{
  struct VEC_msgref_entry_gc * const x = (struct VEC_msgref_entry_gc *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_19VEC_msgref_entry_gc, gt_ggc_e_19VEC_msgref_entry_gc))
    {
      {
        size_t i0;
        size_t l0 = (size_t)(((*x).base).prefix.num);
        for (i0 = 0; i0 != l0; i0++) {
          gt_pch_n_9tree_node ((*x).base.vec[i0].func);
          gt_pch_n_9tree_node ((*x).base.vec[i0].selname);
          gt_pch_n_9tree_node ((*x).base.vec[i0].refdecl);
        }
      }
    }
}

void
gt_pch_nx_VEC_ident_data_tuple_gc (void *x_p)
{
  struct VEC_ident_data_tuple_gc * const x = (struct VEC_ident_data_tuple_gc *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_23VEC_ident_data_tuple_gc, gt_ggc_e_23VEC_ident_data_tuple_gc))
    {
      {
        size_t i0;
        size_t l0 = (size_t)(((*x).base).prefix.num);
        for (i0 = 0; i0 != l0; i0++) {
          gt_pch_n_9tree_node ((*x).base.vec[i0].ident);
          gt_pch_n_9tree_node ((*x).base.vec[i0].data);
        }
      }
    }
}

void
gt_pch_p_20VEC_ivarref_entry_gc (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct VEC_ivarref_entry_gc * const x ATTRIBUTE_UNUSED = (struct VEC_ivarref_entry_gc *)x_p;
  {
    size_t i0;
    size_t l0 = (size_t)(((*x).base).prefix.num);
    for (i0 = 0; i0 != l0; i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).base.vec[i0].decl), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).base.vec[i0].offset), cookie);
    }
  }
}

void
gt_pch_p_22VEC_prot_list_entry_gc (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct VEC_prot_list_entry_gc * const x ATTRIBUTE_UNUSED = (struct VEC_prot_list_entry_gc *)x_p;
  {
    size_t i0;
    size_t l0 = (size_t)(((*x).base).prefix.num);
    for (i0 = 0; i0 != l0; i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).base.vec[i0].id), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).base.vec[i0].refdecl), cookie);
    }
  }
}

void
gt_pch_p_19VEC_msgref_entry_gc (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct VEC_msgref_entry_gc * const x ATTRIBUTE_UNUSED = (struct VEC_msgref_entry_gc *)x_p;
  {
    size_t i0;
    size_t l0 = (size_t)(((*x).base).prefix.num);
    for (i0 = 0; i0 != l0; i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).base.vec[i0].func), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).base.vec[i0].selname), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).base.vec[i0].refdecl), cookie);
    }
  }
}

void
gt_pch_p_23VEC_ident_data_tuple_gc (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct VEC_ident_data_tuple_gc * const x ATTRIBUTE_UNUSED = (struct VEC_ident_data_tuple_gc *)x_p;
  {
    size_t i0;
    size_t l0 = (size_t)(((*x).base).prefix.num);
    for (i0 = 0; i0 != l0; i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).base.vec[i0].ident), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).base.vec[i0].data), cookie);
    }
  }
}

/* GC roots.  */

static void gt_ggc_ma_extern_names (void *);
static void
gt_ggc_ma_extern_names (ATTRIBUTE_UNUSED void *x_p)
{
  if (extern_names != NULL) {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(SIZEHASHTABLE); i0++) {
      gt_ggc_m_12hashed_entry (extern_names[i0]);
    }
    ggc_mark (extern_names);
  }
}

static void gt_pch_pa_extern_names
    (void *, void *, gt_pointer_operator, void *);
static void gt_pch_pa_extern_names (ATTRIBUTE_UNUSED void *this_obj,
      ATTRIBUTE_UNUSED void *x_p,
      ATTRIBUTE_UNUSED gt_pointer_operator op,
      ATTRIBUTE_UNUSED void * cookie)
{
  if (extern_names != NULL) {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(SIZEHASHTABLE); i0++) {
      if ((void *)(extern_names) == this_obj)
        op (&(extern_names[i0]), cookie);
    }
    if ((void *)(&extern_names) == this_obj)
      op (&(extern_names), cookie);
  }
}

static void gt_pch_na_extern_names (void *);
static void
gt_pch_na_extern_names (ATTRIBUTE_UNUSED void *x_p)
{
  if (extern_names != NULL) {
    size_t i1;
    for (i1 = 0; i1 != (size_t)(SIZEHASHTABLE); i1++) {
      gt_pch_n_12hashed_entry (extern_names[i1]);
    }
    gt_pch_note_object (extern_names, &extern_names, gt_pch_pa_extern_names, gt_types_enum_last);
  }
}

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_objc_objc_next_runtime_abi_02_h[] = {
  {
    &objc_eh_personality_decl,
    1,
    sizeof (objc_eh_personality_decl),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &next_v2_EHTYPE_id_decl,
    1,
    sizeof (next_v2_EHTYPE_id_decl),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &next_v2_ehvtable_decl,
    1,
    sizeof (next_v2_ehvtable_decl),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &objc_v2_ehtype_template,
    1,
    sizeof (objc_v2_ehtype_template),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ehtype_list,
    1,
    sizeof (ehtype_list),
    &gt_ggc_mx_VEC_ident_data_tuple_gc,
    &gt_pch_nx_VEC_ident_data_tuple_gc
  },
  {
    &ivar_offset_refs,
    1,
    sizeof (ivar_offset_refs),
    &gt_ggc_mx_VEC_ivarref_entry_gc,
    &gt_pch_nx_VEC_ivarref_entry_gc
  },
  {
    &protlist,
    1,
    sizeof (protlist),
    &gt_ggc_mx_VEC_prot_list_entry_gc,
    &gt_pch_nx_VEC_prot_list_entry_gc
  },
  {
    &nonlazy_category_list,
    1,
    sizeof (nonlazy_category_list),
    &gt_ggc_mx_VEC_tree_gc,
    &gt_pch_nx_VEC_tree_gc
  },
  {
    &category_list,
    1,
    sizeof (category_list),
    &gt_ggc_mx_VEC_tree_gc,
    &gt_pch_nx_VEC_tree_gc
  },
  {
    &nonlazy_class_list,
    1,
    sizeof (nonlazy_class_list),
    &gt_ggc_mx_VEC_tree_gc,
    &gt_pch_nx_VEC_tree_gc
  },
  {
    &class_list,
    1,
    sizeof (class_list),
    &gt_ggc_mx_VEC_tree_gc,
    &gt_pch_nx_VEC_tree_gc
  },
  {
    &metaclass_super_refs,
    1,
    sizeof (metaclass_super_refs),
    &gt_ggc_mx_VEC_ident_data_tuple_gc,
    &gt_pch_nx_VEC_ident_data_tuple_gc
  },
  {
    &class_super_refs,
    1,
    sizeof (class_super_refs),
    &gt_ggc_mx_VEC_ident_data_tuple_gc,
    &gt_pch_nx_VEC_ident_data_tuple_gc
  },
  {
    &protrefs,
    1,
    sizeof (protrefs),
    &gt_ggc_mx_VEC_prot_list_entry_gc,
    &gt_pch_nx_VEC_prot_list_entry_gc
  },
  {
    &msgrefs,
    1,
    sizeof (msgrefs),
    &gt_ggc_mx_VEC_msgref_entry_gc,
    &gt_pch_nx_VEC_msgref_entry_gc
  },
  {
    &classrefs,
    1,
    sizeof (classrefs),
    &gt_ggc_mx_VEC_ident_data_tuple_gc,
    &gt_pch_nx_VEC_ident_data_tuple_gc
  },
  {
    &extern_names,
    1,
    sizeof (extern_names),
    &gt_ggc_ma_extern_names,
    &gt_pch_na_extern_names
  },
  {
    &objc_v2_global_trees[0],
    1 * (OCTI_V2_MAX),
    sizeof (objc_v2_global_trees[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &objc_rt_trees[0],
    1 * (OCTI_RT_META_MAX),
    sizeof (objc_rt_trees[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  LAST_GGC_ROOT_TAB
};

