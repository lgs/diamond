/* Generated automatically by the program `genopinit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "recog.h"
#include "expr.h"
#include "optabs.h"
#include "reload.h"

void
init_all_optabs (void)
{
#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  int i, j;
#endif

  if (HAVE_zero_extendqidi2)
    set_convert_optab_handler (zext_optab, DImode, QImode, CODE_FOR_zero_extendqidi2);
  if (HAVE_zero_extendhidi2)
    set_convert_optab_handler (zext_optab, DImode, HImode, CODE_FOR_zero_extendhidi2);
  if (HAVE_extendqidi2)
    set_convert_optab_handler (sext_optab, DImode, QImode, CODE_FOR_extendqidi2);
  if (HAVE_extendhidi2)
    set_convert_optab_handler (sext_optab, DImode, HImode, CODE_FOR_extendhidi2);
  set_convert_optab_handler (sext_optab, SImode, HImode, CODE_FOR_extendhisi2);
  set_convert_optab_handler (sext_optab, SImode, QImode, CODE_FOR_extendqisi2);
  set_convert_optab_handler (sext_optab, HImode, QImode, CODE_FOR_extendqihi2);
  set_optab_handler (ctz_optab, HImode, CODE_FOR_ctzhi2);
  set_optab_handler (ctz_optab, SImode, CODE_FOR_ctzsi2);
  if (HAVE_ctzdi2)
    set_optab_handler (ctz_optab, DImode, CODE_FOR_ctzdi2);
  if (HAVE_popcounthi2)
    set_optab_handler (popcount_optab, HImode, CODE_FOR_popcounthi2);
  if (HAVE_popcountsi2)
    set_optab_handler (popcount_optab, SImode, CODE_FOR_popcountsi2);
  if (HAVE_popcountdi2)
    set_optab_handler (popcount_optab, DImode, CODE_FOR_popcountdi2);
  if (HAVE_sqrtxf2)
    set_optab_handler (sqrt_optab, XFmode, CODE_FOR_sqrtxf2);
  if (HAVE_sincosxf3)
    set_optab_handler (sincos_optab, XFmode, CODE_FOR_sincosxf3);
  if (HAVE_rintxf2)
    set_optab_handler (rint_optab, XFmode, CODE_FOR_rintxf2);
  if (HAVE_smaxsf3)
    set_optab_handler (smax_optab, SFmode, CODE_FOR_smaxsf3);
  if (HAVE_sminsf3)
    set_optab_handler (smin_optab, SFmode, CODE_FOR_sminsf3);
  if (HAVE_smaxdf3)
    set_optab_handler (smax_optab, DFmode, CODE_FOR_smaxdf3);
  if (HAVE_smindf3)
    set_optab_handler (smin_optab, DFmode, CODE_FOR_smindf3);
  if (HAVE_floatv8siv8sf2)
    set_convert_optab_handler (sfloat_optab, V8SFmode, V8SImode, CODE_FOR_floatv8siv8sf2);
  if (HAVE_floatv4siv4sf2)
    set_convert_optab_handler (sfloat_optab, V4SFmode, V4SImode, CODE_FOR_floatv4siv4sf2);
  if (HAVE_fix_truncv8sfv8si2)
    set_convert_optab_handler (sfixtrunc_optab, V8SImode, V8SFmode, CODE_FOR_fix_truncv8sfv8si2);
  if (HAVE_fix_truncv4sfv4si2)
    set_convert_optab_handler (sfixtrunc_optab, V4SImode, V4SFmode, CODE_FOR_fix_truncv4sfv4si2);
  if (HAVE_floatv4siv4df2)
    set_convert_optab_handler (sfloat_optab, V4DFmode, V4SImode, CODE_FOR_floatv4siv4df2);
  if (HAVE_fix_truncv4dfv4si2)
    set_convert_optab_handler (sfixtrunc_optab, V4SImode, V4DFmode, CODE_FOR_fix_truncv4dfv4si2);
  if (HAVE_mulv32qi3)
    set_optab_handler (smul_optab, V32QImode, CODE_FOR_mulv32qi3);
  if (HAVE_mulv16qi3)
    set_optab_handler (smul_optab, V16QImode, CODE_FOR_mulv16qi3);
  if (HAVE_mulv4di3)
    set_optab_handler (smul_optab, V4DImode, CODE_FOR_mulv4di3);
  if (HAVE_mulv2di3)
    set_optab_handler (smul_optab, V2DImode, CODE_FOR_mulv2di3);
  if (HAVE_ashrv16hi3)
    set_optab_handler (ashr_optab, V16HImode, CODE_FOR_ashrv16hi3);
  if (HAVE_ashrv8hi3)
    set_optab_handler (ashr_optab, V8HImode, CODE_FOR_ashrv8hi3);
  if (HAVE_ashrv8si3)
    set_optab_handler (ashr_optab, V8SImode, CODE_FOR_ashrv8si3);
  if (HAVE_ashrv4si3)
    set_optab_handler (ashr_optab, V4SImode, CODE_FOR_ashrv4si3);
  if (HAVE_ashlv16hi3)
    set_optab_handler (ashl_optab, V16HImode, CODE_FOR_ashlv16hi3);
  if (HAVE_lshrv16hi3)
    set_optab_handler (lshr_optab, V16HImode, CODE_FOR_lshrv16hi3);
  if (HAVE_ashlv8hi3)
    set_optab_handler (ashl_optab, V8HImode, CODE_FOR_ashlv8hi3);
  if (HAVE_lshrv8hi3)
    set_optab_handler (lshr_optab, V8HImode, CODE_FOR_lshrv8hi3);
  if (HAVE_ashlv8si3)
    set_optab_handler (ashl_optab, V8SImode, CODE_FOR_ashlv8si3);
  if (HAVE_lshrv8si3)
    set_optab_handler (lshr_optab, V8SImode, CODE_FOR_lshrv8si3);
  if (HAVE_ashlv4si3)
    set_optab_handler (ashl_optab, V4SImode, CODE_FOR_ashlv4si3);
  if (HAVE_lshrv4si3)
    set_optab_handler (lshr_optab, V4SImode, CODE_FOR_lshrv4si3);
  if (HAVE_ashlv4di3)
    set_optab_handler (ashl_optab, V4DImode, CODE_FOR_ashlv4di3);
  if (HAVE_lshrv4di3)
    set_optab_handler (lshr_optab, V4DImode, CODE_FOR_lshrv4di3);
  if (HAVE_ashlv2di3)
    set_optab_handler (ashl_optab, V2DImode, CODE_FOR_ashlv2di3);
  if (HAVE_lshrv2di3)
    set_optab_handler (lshr_optab, V2DImode, CODE_FOR_lshrv2di3);
  if (HAVE_absv32qi2)
    set_optab_handler (abs_optab, V32QImode, CODE_FOR_absv32qi2);
  if (HAVE_absv16qi2)
    set_optab_handler (abs_optab, V16QImode, CODE_FOR_absv16qi2);
  if (HAVE_absv16hi2)
    set_optab_handler (abs_optab, V16HImode, CODE_FOR_absv16hi2);
  if (HAVE_absv8hi2)
    set_optab_handler (abs_optab, V8HImode, CODE_FOR_absv8hi2);
  if (HAVE_absv8si2)
    set_optab_handler (abs_optab, V8SImode, CODE_FOR_absv8si2);
  if (HAVE_absv4si2)
    set_optab_handler (abs_optab, V4SImode, CODE_FOR_absv4si2);
  if (HAVE_absv8qi2)
    set_optab_handler (abs_optab, V8QImode, CODE_FOR_absv8qi2);
  if (HAVE_absv4hi2)
    set_optab_handler (abs_optab, V4HImode, CODE_FOR_absv4hi2);
  if (HAVE_absv2si2)
    set_optab_handler (abs_optab, V2SImode, CODE_FOR_absv2si2);
  if (HAVE_atomic_fetch_addqi)
    set_direct_optab_handler (atomic_fetch_add_optab, QImode, CODE_FOR_atomic_fetch_addqi);
  if (HAVE_atomic_fetch_addhi)
    set_direct_optab_handler (atomic_fetch_add_optab, HImode, CODE_FOR_atomic_fetch_addhi);
  if (HAVE_atomic_fetch_addsi)
    set_direct_optab_handler (atomic_fetch_add_optab, SImode, CODE_FOR_atomic_fetch_addsi);
  if (HAVE_atomic_fetch_adddi)
    set_direct_optab_handler (atomic_fetch_add_optab, DImode, CODE_FOR_atomic_fetch_adddi);
  set_direct_optab_handler (atomic_exchange_optab, QImode, CODE_FOR_atomic_exchangeqi);
  set_direct_optab_handler (atomic_exchange_optab, HImode, CODE_FOR_atomic_exchangehi);
  set_direct_optab_handler (atomic_exchange_optab, SImode, CODE_FOR_atomic_exchangesi);
  if (HAVE_atomic_exchangedi)
    set_direct_optab_handler (atomic_exchange_optab, DImode, CODE_FOR_atomic_exchangedi);
  set_direct_optab_handler (atomic_add_optab, QImode, CODE_FOR_atomic_addqi);
  set_direct_optab_handler (atomic_add_optab, HImode, CODE_FOR_atomic_addhi);
  set_direct_optab_handler (atomic_add_optab, SImode, CODE_FOR_atomic_addsi);
  if (HAVE_atomic_adddi)
    set_direct_optab_handler (atomic_add_optab, DImode, CODE_FOR_atomic_adddi);
  set_direct_optab_handler (atomic_sub_optab, QImode, CODE_FOR_atomic_subqi);
  set_direct_optab_handler (atomic_sub_optab, HImode, CODE_FOR_atomic_subhi);
  set_direct_optab_handler (atomic_sub_optab, SImode, CODE_FOR_atomic_subsi);
  if (HAVE_atomic_subdi)
    set_direct_optab_handler (atomic_sub_optab, DImode, CODE_FOR_atomic_subdi);
  set_direct_optab_handler (atomic_and_optab, QImode, CODE_FOR_atomic_andqi);
  set_direct_optab_handler (atomic_or_optab, QImode, CODE_FOR_atomic_orqi);
  set_direct_optab_handler (atomic_xor_optab, QImode, CODE_FOR_atomic_xorqi);
  set_direct_optab_handler (atomic_and_optab, HImode, CODE_FOR_atomic_andhi);
  set_direct_optab_handler (atomic_or_optab, HImode, CODE_FOR_atomic_orhi);
  set_direct_optab_handler (atomic_xor_optab, HImode, CODE_FOR_atomic_xorhi);
  set_direct_optab_handler (atomic_and_optab, SImode, CODE_FOR_atomic_andsi);
  set_direct_optab_handler (atomic_or_optab, SImode, CODE_FOR_atomic_orsi);
  set_direct_optab_handler (atomic_xor_optab, SImode, CODE_FOR_atomic_xorsi);
  if (HAVE_atomic_anddi)
    set_direct_optab_handler (atomic_and_optab, DImode, CODE_FOR_atomic_anddi);
  if (HAVE_atomic_ordi)
    set_direct_optab_handler (atomic_or_optab, DImode, CODE_FOR_atomic_ordi);
  if (HAVE_atomic_xordi)
    set_direct_optab_handler (atomic_xor_optab, DImode, CODE_FOR_atomic_xordi);
  if (HAVE_cbranchqi4)
    set_optab_handler (cbranch_optab, QImode, CODE_FOR_cbranchqi4);
  if (HAVE_cbranchhi4)
    set_optab_handler (cbranch_optab, HImode, CODE_FOR_cbranchhi4);
  set_optab_handler (cbranch_optab, SImode, CODE_FOR_cbranchsi4);
  set_optab_handler (cbranch_optab, DImode, CODE_FOR_cbranchdi4);
  if (HAVE_cbranchti4)
    set_optab_handler (cbranch_optab, TImode, CODE_FOR_cbranchti4);
  if (HAVE_cstoreqi4)
    set_optab_handler (cstore_optab, QImode, CODE_FOR_cstoreqi4);
  if (HAVE_cstorehi4)
    set_optab_handler (cstore_optab, HImode, CODE_FOR_cstorehi4);
  set_optab_handler (cstore_optab, SImode, CODE_FOR_cstoresi4);
  if (HAVE_cstoredi4)
    set_optab_handler (cstore_optab, DImode, CODE_FOR_cstoredi4);
  if (HAVE_cbranchxf4)
    set_optab_handler (cbranch_optab, XFmode, CODE_FOR_cbranchxf4);
  if (HAVE_cstorexf4)
    set_optab_handler (cstore_optab, XFmode, CODE_FOR_cstorexf4);
  if (HAVE_cbranchsf4)
    set_optab_handler (cbranch_optab, SFmode, CODE_FOR_cbranchsf4);
  if (HAVE_cbranchdf4)
    set_optab_handler (cbranch_optab, DFmode, CODE_FOR_cbranchdf4);
  if (HAVE_cstoresf4)
    set_optab_handler (cstore_optab, SFmode, CODE_FOR_cstoresf4);
  if (HAVE_cstoredf4)
    set_optab_handler (cstore_optab, DFmode, CODE_FOR_cstoredf4);
  set_optab_handler (cbranch_optab, CCmode, CODE_FOR_cbranchcc4);
  set_optab_handler (cstore_optab, CCmode, CODE_FOR_cstorecc4);
  if (HAVE_movoi)
    set_optab_handler (mov_optab, OImode, CODE_FOR_movoi);
  if (HAVE_movti)
    set_optab_handler (mov_optab, TImode, CODE_FOR_movti);
  set_optab_handler (mov_optab, CDImode, CODE_FOR_movcdi);
  set_optab_handler (mov_optab, QImode, CODE_FOR_movqi);
  set_optab_handler (mov_optab, HImode, CODE_FOR_movhi);
  set_optab_handler (mov_optab, SImode, CODE_FOR_movsi);
  set_optab_handler (mov_optab, DImode, CODE_FOR_movdi);
  set_optab_handler (movstrict_optab, QImode, CODE_FOR_movstrictqi);
  set_optab_handler (movstrict_optab, HImode, CODE_FOR_movstricthi);
  if (HAVE_movtf)
    set_optab_handler (mov_optab, TFmode, CODE_FOR_movtf);
  set_optab_handler (mov_optab, SFmode, CODE_FOR_movsf);
  set_optab_handler (mov_optab, DFmode, CODE_FOR_movdf);
  set_optab_handler (mov_optab, XFmode, CODE_FOR_movxf);
  set_convert_optab_handler (zext_optab, DImode, SImode, CODE_FOR_zero_extendsidi2);
  set_convert_optab_handler (zext_optab, SImode, HImode, CODE_FOR_zero_extendhisi2);
  set_convert_optab_handler (zext_optab, HImode, QImode, CODE_FOR_zero_extendqihi2);
  set_convert_optab_handler (zext_optab, SImode, QImode, CODE_FOR_zero_extendqisi2);
  set_convert_optab_handler (sext_optab, DImode, SImode, CODE_FOR_extendsidi2);
  if (HAVE_extendsfdf2)
    set_convert_optab_handler (sext_optab, DFmode, SFmode, CODE_FOR_extendsfdf2);
  if (HAVE_extendsfxf2)
    set_convert_optab_handler (sext_optab, XFmode, SFmode, CODE_FOR_extendsfxf2);
  if (HAVE_extenddfxf2)
    set_convert_optab_handler (sext_optab, XFmode, DFmode, CODE_FOR_extenddfxf2);
  if (HAVE_truncdfsf2)
    set_convert_optab_handler (trunc_optab, SFmode, DFmode, CODE_FOR_truncdfsf2);
  if (HAVE_truncxfsf2)
    set_convert_optab_handler (trunc_optab, SFmode, XFmode, CODE_FOR_truncxfsf2);
  if (HAVE_truncxfdf2)
    set_convert_optab_handler (trunc_optab, DFmode, XFmode, CODE_FOR_truncxfdf2);
  if (HAVE_fix_truncxfdi2)
    set_convert_optab_handler (sfixtrunc_optab, DImode, XFmode, CODE_FOR_fix_truncxfdi2);
  if (HAVE_fix_truncsfdi2)
    set_convert_optab_handler (sfixtrunc_optab, DImode, SFmode, CODE_FOR_fix_truncsfdi2);
  if (HAVE_fix_truncdfdi2)
    set_convert_optab_handler (sfixtrunc_optab, DImode, DFmode, CODE_FOR_fix_truncdfdi2);
  if (HAVE_fix_truncxfsi2)
    set_convert_optab_handler (sfixtrunc_optab, SImode, XFmode, CODE_FOR_fix_truncxfsi2);
  if (HAVE_fix_truncsfsi2)
    set_convert_optab_handler (sfixtrunc_optab, SImode, SFmode, CODE_FOR_fix_truncsfsi2);
  if (HAVE_fix_truncdfsi2)
    set_convert_optab_handler (sfixtrunc_optab, SImode, DFmode, CODE_FOR_fix_truncdfsi2);
  if (HAVE_fix_truncsfhi2)
    set_convert_optab_handler (sfixtrunc_optab, HImode, SFmode, CODE_FOR_fix_truncsfhi2);
  if (HAVE_fix_truncdfhi2)
    set_convert_optab_handler (sfixtrunc_optab, HImode, DFmode, CODE_FOR_fix_truncdfhi2);
  if (HAVE_fix_truncxfhi2)
    set_convert_optab_handler (sfixtrunc_optab, HImode, XFmode, CODE_FOR_fix_truncxfhi2);
  if (HAVE_fixuns_truncsfsi2)
    set_convert_optab_handler (ufixtrunc_optab, SImode, SFmode, CODE_FOR_fixuns_truncsfsi2);
  if (HAVE_fixuns_truncdfsi2)
    set_convert_optab_handler (ufixtrunc_optab, SImode, DFmode, CODE_FOR_fixuns_truncdfsi2);
  if (HAVE_fixuns_truncsfhi2)
    set_convert_optab_handler (ufixtrunc_optab, HImode, SFmode, CODE_FOR_fixuns_truncsfhi2);
  if (HAVE_fixuns_truncdfhi2)
    set_convert_optab_handler (ufixtrunc_optab, HImode, DFmode, CODE_FOR_fixuns_truncdfhi2);
  if (HAVE_floathisf2)
    set_convert_optab_handler (sfloat_optab, SFmode, HImode, CODE_FOR_floathisf2);
  if (HAVE_floathidf2)
    set_convert_optab_handler (sfloat_optab, DFmode, HImode, CODE_FOR_floathidf2);
  if (HAVE_floathixf2)
    set_convert_optab_handler (sfloat_optab, XFmode, HImode, CODE_FOR_floathixf2);
  if (HAVE_floatsisf2)
    set_convert_optab_handler (sfloat_optab, SFmode, SImode, CODE_FOR_floatsisf2);
  if (HAVE_floatsidf2)
    set_convert_optab_handler (sfloat_optab, DFmode, SImode, CODE_FOR_floatsidf2);
  if (HAVE_floatsixf2)
    set_convert_optab_handler (sfloat_optab, XFmode, SImode, CODE_FOR_floatsixf2);
  if (HAVE_floatdisf2)
    set_convert_optab_handler (sfloat_optab, SFmode, DImode, CODE_FOR_floatdisf2);
  if (HAVE_floatdidf2)
    set_convert_optab_handler (sfloat_optab, DFmode, DImode, CODE_FOR_floatdidf2);
  if (HAVE_floatdixf2)
    set_convert_optab_handler (sfloat_optab, XFmode, DImode, CODE_FOR_floatdixf2);
  if (HAVE_floatunssisf2)
    set_convert_optab_handler (ufloat_optab, SFmode, SImode, CODE_FOR_floatunssisf2);
  if (HAVE_floatunssidf2)
    set_convert_optab_handler (ufloat_optab, DFmode, SImode, CODE_FOR_floatunssidf2);
  if (HAVE_floatunssixf2)
    set_convert_optab_handler (ufloat_optab, XFmode, SImode, CODE_FOR_floatunssixf2);
  if (HAVE_floatunsdisf2)
    set_convert_optab_handler (ufloat_optab, SFmode, DImode, CODE_FOR_floatunsdisf2);
  if (HAVE_floatunsdidf2)
    set_convert_optab_handler (ufloat_optab, DFmode, DImode, CODE_FOR_floatunsdidf2);
  if (HAVE_addqi3)
    set_optab_handler (add_optab, QImode, CODE_FOR_addqi3);
  if (HAVE_addhi3)
    set_optab_handler (add_optab, HImode, CODE_FOR_addhi3);
  set_optab_handler (add_optab, SImode, CODE_FOR_addsi3);
  set_optab_handler (add_optab, DImode, CODE_FOR_adddi3);
  if (HAVE_addti3)
    set_optab_handler (add_optab, TImode, CODE_FOR_addti3);
  if (HAVE_subqi3)
    set_optab_handler (sub_optab, QImode, CODE_FOR_subqi3);
  if (HAVE_subhi3)
    set_optab_handler (sub_optab, HImode, CODE_FOR_subhi3);
  set_optab_handler (sub_optab, SImode, CODE_FOR_subsi3);
  set_optab_handler (sub_optab, DImode, CODE_FOR_subdi3);
  if (HAVE_subti3)
    set_optab_handler (sub_optab, TImode, CODE_FOR_subti3);
  if (HAVE_addxf3)
    set_optab_handler (addv_optab, XFmode, CODE_FOR_addxf3),
    set_optab_handler (add_optab, XFmode, CODE_FOR_addxf3);
  if (HAVE_subxf3)
    set_optab_handler (subv_optab, XFmode, CODE_FOR_subxf3),
    set_optab_handler (sub_optab, XFmode, CODE_FOR_subxf3);
  if (HAVE_addsf3)
    set_optab_handler (addv_optab, SFmode, CODE_FOR_addsf3),
    set_optab_handler (add_optab, SFmode, CODE_FOR_addsf3);
  if (HAVE_subsf3)
    set_optab_handler (subv_optab, SFmode, CODE_FOR_subsf3),
    set_optab_handler (sub_optab, SFmode, CODE_FOR_subsf3);
  if (HAVE_adddf3)
    set_optab_handler (addv_optab, DFmode, CODE_FOR_adddf3),
    set_optab_handler (add_optab, DFmode, CODE_FOR_adddf3);
  if (HAVE_subdf3)
    set_optab_handler (subv_optab, DFmode, CODE_FOR_subdf3),
    set_optab_handler (sub_optab, DFmode, CODE_FOR_subdf3);
  if (HAVE_mulhi3)
    set_optab_handler (smul_optab, HImode, CODE_FOR_mulhi3);
  set_optab_handler (smul_optab, SImode, CODE_FOR_mulsi3);
  if (HAVE_muldi3)
    set_optab_handler (smul_optab, DImode, CODE_FOR_muldi3);
  if (HAVE_mulqi3)
    set_optab_handler (smul_optab, QImode, CODE_FOR_mulqi3);
  if (HAVE_mulsidi3)
    set_widening_optab_handler (smul_widen_optab, DImode, SImode, CODE_FOR_mulsidi3);
  if (HAVE_umulsidi3)
    set_widening_optab_handler (umul_widen_optab, DImode, SImode, CODE_FOR_umulsidi3);
  if (HAVE_mulditi3)
    set_widening_optab_handler (smul_widen_optab, TImode, DImode, CODE_FOR_mulditi3);
  if (HAVE_umulditi3)
    set_widening_optab_handler (umul_widen_optab, TImode, DImode, CODE_FOR_umulditi3);
  if (HAVE_mulqihi3)
    set_widening_optab_handler (smul_widen_optab, HImode, QImode, CODE_FOR_mulqihi3);
  if (HAVE_umulqihi3)
    set_widening_optab_handler (umul_widen_optab, HImode, QImode, CODE_FOR_umulqihi3);
  set_optab_handler (smul_highpart_optab, SImode, CODE_FOR_smulsi3_highpart);
  set_optab_handler (umul_highpart_optab, SImode, CODE_FOR_umulsi3_highpart);
  if (HAVE_smuldi3_highpart)
    set_optab_handler (smul_highpart_optab, DImode, CODE_FOR_smuldi3_highpart);
  if (HAVE_umuldi3_highpart)
    set_optab_handler (umul_highpart_optab, DImode, CODE_FOR_umuldi3_highpart);
  if (HAVE_mulxf3)
    set_optab_handler (smulv_optab, XFmode, CODE_FOR_mulxf3),
    set_optab_handler (smul_optab, XFmode, CODE_FOR_mulxf3);
  if (HAVE_mulsf3)
    set_optab_handler (smulv_optab, SFmode, CODE_FOR_mulsf3),
    set_optab_handler (smul_optab, SFmode, CODE_FOR_mulsf3);
  if (HAVE_muldf3)
    set_optab_handler (smulv_optab, DFmode, CODE_FOR_muldf3),
    set_optab_handler (smul_optab, DFmode, CODE_FOR_muldf3);
  if (HAVE_divxf3)
    set_optab_handler (sdiv_optab, XFmode, CODE_FOR_divxf3);
  if (HAVE_divdf3)
    set_optab_handler (sdiv_optab, DFmode, CODE_FOR_divdf3);
  if (HAVE_divsf3)
    set_optab_handler (sdiv_optab, SFmode, CODE_FOR_divsf3);
  if (HAVE_divmodhi4)
    set_optab_handler (sdivmod_optab, HImode, CODE_FOR_divmodhi4);
  set_optab_handler (sdivmod_optab, SImode, CODE_FOR_divmodsi4);
  if (HAVE_divmoddi4)
    set_optab_handler (sdivmod_optab, DImode, CODE_FOR_divmoddi4);
  if (HAVE_divmodqi4)
    set_optab_handler (sdivmod_optab, QImode, CODE_FOR_divmodqi4);
  if (HAVE_udivmodhi4)
    set_optab_handler (udivmod_optab, HImode, CODE_FOR_udivmodhi4);
  set_optab_handler (udivmod_optab, SImode, CODE_FOR_udivmodsi4);
  if (HAVE_udivmoddi4)
    set_optab_handler (udivmod_optab, DImode, CODE_FOR_udivmoddi4);
  if (HAVE_udivmodqi4)
    set_optab_handler (udivmod_optab, QImode, CODE_FOR_udivmodqi4);
  if (HAVE_andqi3)
    set_optab_handler (and_optab, QImode, CODE_FOR_andqi3);
  if (HAVE_andhi3)
    set_optab_handler (and_optab, HImode, CODE_FOR_andhi3);
  set_optab_handler (and_optab, SImode, CODE_FOR_andsi3);
  if (HAVE_anddi3)
    set_optab_handler (and_optab, DImode, CODE_FOR_anddi3);
  if (HAVE_iorqi3)
    set_optab_handler (ior_optab, QImode, CODE_FOR_iorqi3);
  if (HAVE_xorqi3)
    set_optab_handler (xor_optab, QImode, CODE_FOR_xorqi3);
  if (HAVE_iorhi3)
    set_optab_handler (ior_optab, HImode, CODE_FOR_iorhi3);
  if (HAVE_xorhi3)
    set_optab_handler (xor_optab, HImode, CODE_FOR_xorhi3);
  set_optab_handler (ior_optab, SImode, CODE_FOR_iorsi3);
  set_optab_handler (xor_optab, SImode, CODE_FOR_xorsi3);
  if (HAVE_iordi3)
    set_optab_handler (ior_optab, DImode, CODE_FOR_iordi3);
  if (HAVE_xordi3)
    set_optab_handler (xor_optab, DImode, CODE_FOR_xordi3);
  if (HAVE_negqi2)
    set_optab_handler (neg_optab, QImode, CODE_FOR_negqi2);
  if (HAVE_neghi2)
    set_optab_handler (neg_optab, HImode, CODE_FOR_neghi2);
  set_optab_handler (neg_optab, SImode, CODE_FOR_negsi2);
  set_optab_handler (neg_optab, DImode, CODE_FOR_negdi2);
  if (HAVE_negti2)
    set_optab_handler (neg_optab, TImode, CODE_FOR_negti2);
  if (HAVE_abssf2)
    set_optab_handler (absv_optab, SFmode, CODE_FOR_abssf2),
    set_optab_handler (abs_optab, SFmode, CODE_FOR_abssf2);
  if (HAVE_negsf2)
    set_optab_handler (negv_optab, SFmode, CODE_FOR_negsf2),
    set_optab_handler (neg_optab, SFmode, CODE_FOR_negsf2);
  if (HAVE_absdf2)
    set_optab_handler (absv_optab, DFmode, CODE_FOR_absdf2),
    set_optab_handler (abs_optab, DFmode, CODE_FOR_absdf2);
  if (HAVE_negdf2)
    set_optab_handler (negv_optab, DFmode, CODE_FOR_negdf2),
    set_optab_handler (neg_optab, DFmode, CODE_FOR_negdf2);
  if (HAVE_absxf2)
    set_optab_handler (absv_optab, XFmode, CODE_FOR_absxf2),
    set_optab_handler (abs_optab, XFmode, CODE_FOR_absxf2);
  if (HAVE_negxf2)
    set_optab_handler (negv_optab, XFmode, CODE_FOR_negxf2),
    set_optab_handler (neg_optab, XFmode, CODE_FOR_negxf2);
  if (HAVE_abstf2)
    set_optab_handler (absv_optab, TFmode, CODE_FOR_abstf2),
    set_optab_handler (abs_optab, TFmode, CODE_FOR_abstf2);
  if (HAVE_negtf2)
    set_optab_handler (negv_optab, TFmode, CODE_FOR_negtf2),
    set_optab_handler (neg_optab, TFmode, CODE_FOR_negtf2);
  if (HAVE_copysignsf3)
    set_optab_handler (copysign_optab, SFmode, CODE_FOR_copysignsf3);
  if (HAVE_copysigndf3)
    set_optab_handler (copysign_optab, DFmode, CODE_FOR_copysigndf3);
  if (HAVE_copysigntf3)
    set_optab_handler (copysign_optab, TFmode, CODE_FOR_copysigntf3);
  if (HAVE_one_cmplqi2)
    set_optab_handler (one_cmpl_optab, QImode, CODE_FOR_one_cmplqi2);
  if (HAVE_one_cmplhi2)
    set_optab_handler (one_cmpl_optab, HImode, CODE_FOR_one_cmplhi2);
  set_optab_handler (one_cmpl_optab, SImode, CODE_FOR_one_cmplsi2);
  if (HAVE_one_cmpldi2)
    set_optab_handler (one_cmpl_optab, DImode, CODE_FOR_one_cmpldi2);
  if (HAVE_ashlqi3)
    set_optab_handler (ashl_optab, QImode, CODE_FOR_ashlqi3);
  if (HAVE_ashlhi3)
    set_optab_handler (ashl_optab, HImode, CODE_FOR_ashlhi3);
  set_optab_handler (ashl_optab, SImode, CODE_FOR_ashlsi3);
  set_optab_handler (ashl_optab, DImode, CODE_FOR_ashldi3);
  if (HAVE_ashlti3)
    set_optab_handler (ashl_optab, TImode, CODE_FOR_ashlti3);
  if (HAVE_lshrqi3)
    set_optab_handler (lshr_optab, QImode, CODE_FOR_lshrqi3);
  if (HAVE_ashrqi3)
    set_optab_handler (ashr_optab, QImode, CODE_FOR_ashrqi3);
  if (HAVE_lshrhi3)
    set_optab_handler (lshr_optab, HImode, CODE_FOR_lshrhi3);
  if (HAVE_ashrhi3)
    set_optab_handler (ashr_optab, HImode, CODE_FOR_ashrhi3);
  set_optab_handler (lshr_optab, SImode, CODE_FOR_lshrsi3);
  set_optab_handler (ashr_optab, SImode, CODE_FOR_ashrsi3);
  set_optab_handler (lshr_optab, DImode, CODE_FOR_lshrdi3);
  set_optab_handler (ashr_optab, DImode, CODE_FOR_ashrdi3);
  if (HAVE_lshrti3)
    set_optab_handler (lshr_optab, TImode, CODE_FOR_lshrti3);
  if (HAVE_ashrti3)
    set_optab_handler (ashr_optab, TImode, CODE_FOR_ashrti3);
  if (HAVE_rotlti3)
    set_optab_handler (rotl_optab, TImode, CODE_FOR_rotlti3);
  if (HAVE_rotrti3)
    set_optab_handler (rotr_optab, TImode, CODE_FOR_rotrti3);
  set_optab_handler (rotl_optab, DImode, CODE_FOR_rotldi3);
  set_optab_handler (rotr_optab, DImode, CODE_FOR_rotrdi3);
  if (HAVE_rotlqi3)
    set_optab_handler (rotl_optab, QImode, CODE_FOR_rotlqi3);
  if (HAVE_rotrqi3)
    set_optab_handler (rotr_optab, QImode, CODE_FOR_rotrqi3);
  if (HAVE_rotlhi3)
    set_optab_handler (rotl_optab, HImode, CODE_FOR_rotlhi3);
  if (HAVE_rotrhi3)
    set_optab_handler (rotr_optab, HImode, CODE_FOR_rotrhi3);
  set_optab_handler (rotl_optab, SImode, CODE_FOR_rotlsi3);
  set_optab_handler (rotr_optab, SImode, CODE_FOR_rotrsi3);
  set_optab_handler (ffs_optab, SImode, CODE_FOR_ffssi2);
  if (HAVE_ffsdi2)
    set_optab_handler (ffs_optab, DImode, CODE_FOR_ffsdi2);
  set_optab_handler (clz_optab, HImode, CODE_FOR_clzhi2);
  set_optab_handler (clz_optab, SImode, CODE_FOR_clzsi2);
  if (HAVE_clzdi2)
    set_optab_handler (clz_optab, DImode, CODE_FOR_clzdi2);
  set_optab_handler (bswap_optab, SImode, CODE_FOR_bswapsi2);
  if (HAVE_bswapdi2)
    set_optab_handler (bswap_optab, DImode, CODE_FOR_bswapdi2);
  if (HAVE_paritydi2)
    set_optab_handler (parity_optab, DImode, CODE_FOR_paritydi2);
  if (HAVE_paritysi2)
    set_optab_handler (parity_optab, SImode, CODE_FOR_paritysi2);
  if (HAVE_sqrtsf2)
    set_optab_handler (sqrt_optab, SFmode, CODE_FOR_sqrtsf2);
  if (HAVE_sqrtdf2)
    set_optab_handler (sqrt_optab, DFmode, CODE_FOR_sqrtdf2);
  if (HAVE_fmodxf3)
    set_optab_handler (fmod_optab, XFmode, CODE_FOR_fmodxf3);
  if (HAVE_fmodsf3)
    set_optab_handler (fmod_optab, SFmode, CODE_FOR_fmodsf3);
  if (HAVE_fmoddf3)
    set_optab_handler (fmod_optab, DFmode, CODE_FOR_fmoddf3);
  if (HAVE_remainderxf3)
    set_optab_handler (remainder_optab, XFmode, CODE_FOR_remainderxf3);
  if (HAVE_remaindersf3)
    set_optab_handler (remainder_optab, SFmode, CODE_FOR_remaindersf3);
  if (HAVE_remainderdf3)
    set_optab_handler (remainder_optab, DFmode, CODE_FOR_remainderdf3);
  if (HAVE_sincossf3)
    set_optab_handler (sincos_optab, SFmode, CODE_FOR_sincossf3);
  if (HAVE_sincosdf3)
    set_optab_handler (sincos_optab, DFmode, CODE_FOR_sincosdf3);
  if (HAVE_tanxf2)
    set_optab_handler (tan_optab, XFmode, CODE_FOR_tanxf2);
  if (HAVE_tansf2)
    set_optab_handler (tan_optab, SFmode, CODE_FOR_tansf2);
  if (HAVE_tandf2)
    set_optab_handler (tan_optab, DFmode, CODE_FOR_tandf2);
  if (HAVE_atan2xf3)
    set_optab_handler (atan2_optab, XFmode, CODE_FOR_atan2xf3);
  if (HAVE_atan2sf3)
    set_optab_handler (atan2_optab, SFmode, CODE_FOR_atan2sf3);
  if (HAVE_atan2df3)
    set_optab_handler (atan2_optab, DFmode, CODE_FOR_atan2df3);
  if (HAVE_atanxf2)
    set_optab_handler (atan_optab, XFmode, CODE_FOR_atanxf2);
  if (HAVE_atansf2)
    set_optab_handler (atan_optab, SFmode, CODE_FOR_atansf2);
  if (HAVE_atandf2)
    set_optab_handler (atan_optab, DFmode, CODE_FOR_atandf2);
  if (HAVE_asinxf2)
    set_optab_handler (asin_optab, XFmode, CODE_FOR_asinxf2);
  if (HAVE_asinsf2)
    set_optab_handler (asin_optab, SFmode, CODE_FOR_asinsf2);
  if (HAVE_asindf2)
    set_optab_handler (asin_optab, DFmode, CODE_FOR_asindf2);
  if (HAVE_acosxf2)
    set_optab_handler (acos_optab, XFmode, CODE_FOR_acosxf2);
  if (HAVE_acossf2)
    set_optab_handler (acos_optab, SFmode, CODE_FOR_acossf2);
  if (HAVE_acosdf2)
    set_optab_handler (acos_optab, DFmode, CODE_FOR_acosdf2);
  if (HAVE_logxf2)
    set_optab_handler (log_optab, XFmode, CODE_FOR_logxf2);
  if (HAVE_logsf2)
    set_optab_handler (log_optab, SFmode, CODE_FOR_logsf2);
  if (HAVE_logdf2)
    set_optab_handler (log_optab, DFmode, CODE_FOR_logdf2);
  if (HAVE_log10xf2)
    set_optab_handler (log10_optab, XFmode, CODE_FOR_log10xf2);
  if (HAVE_log10sf2)
    set_optab_handler (log10_optab, SFmode, CODE_FOR_log10sf2);
  if (HAVE_log10df2)
    set_optab_handler (log10_optab, DFmode, CODE_FOR_log10df2);
  if (HAVE_log2xf2)
    set_optab_handler (log2_optab, XFmode, CODE_FOR_log2xf2);
  if (HAVE_log2sf2)
    set_optab_handler (log2_optab, SFmode, CODE_FOR_log2sf2);
  if (HAVE_log2df2)
    set_optab_handler (log2_optab, DFmode, CODE_FOR_log2df2);
  if (HAVE_log1pxf2)
    set_optab_handler (log1p_optab, XFmode, CODE_FOR_log1pxf2);
  if (HAVE_log1psf2)
    set_optab_handler (log1p_optab, SFmode, CODE_FOR_log1psf2);
  if (HAVE_log1pdf2)
    set_optab_handler (log1p_optab, DFmode, CODE_FOR_log1pdf2);
  if (HAVE_logbxf2)
    set_optab_handler (logb_optab, XFmode, CODE_FOR_logbxf2);
  if (HAVE_logbsf2)
    set_optab_handler (logb_optab, SFmode, CODE_FOR_logbsf2);
  if (HAVE_logbdf2)
    set_optab_handler (logb_optab, DFmode, CODE_FOR_logbdf2);
  if (HAVE_ilogbxf2)
    set_optab_handler (ilogb_optab, XFmode, CODE_FOR_ilogbxf2);
  if (HAVE_ilogbsf2)
    set_optab_handler (ilogb_optab, SFmode, CODE_FOR_ilogbsf2);
  if (HAVE_ilogbdf2)
    set_optab_handler (ilogb_optab, DFmode, CODE_FOR_ilogbdf2);
  if (HAVE_expxf2)
    set_optab_handler (exp_optab, XFmode, CODE_FOR_expxf2);
  if (HAVE_expsf2)
    set_optab_handler (exp_optab, SFmode, CODE_FOR_expsf2);
  if (HAVE_expdf2)
    set_optab_handler (exp_optab, DFmode, CODE_FOR_expdf2);
  if (HAVE_exp10xf2)
    set_optab_handler (exp10_optab, XFmode, CODE_FOR_exp10xf2);
  if (HAVE_exp10sf2)
    set_optab_handler (exp10_optab, SFmode, CODE_FOR_exp10sf2);
  if (HAVE_exp10df2)
    set_optab_handler (exp10_optab, DFmode, CODE_FOR_exp10df2);
  if (HAVE_exp2xf2)
    set_optab_handler (exp2_optab, XFmode, CODE_FOR_exp2xf2);
  if (HAVE_exp2sf2)
    set_optab_handler (exp2_optab, SFmode, CODE_FOR_exp2sf2);
  if (HAVE_exp2df2)
    set_optab_handler (exp2_optab, DFmode, CODE_FOR_exp2df2);
  if (HAVE_expm1xf2)
    set_optab_handler (expm1_optab, XFmode, CODE_FOR_expm1xf2);
  if (HAVE_expm1sf2)
    set_optab_handler (expm1_optab, SFmode, CODE_FOR_expm1sf2);
  if (HAVE_expm1df2)
    set_optab_handler (expm1_optab, DFmode, CODE_FOR_expm1df2);
  if (HAVE_ldexpxf3)
    set_optab_handler (ldexp_optab, XFmode, CODE_FOR_ldexpxf3);
  if (HAVE_ldexpsf3)
    set_optab_handler (ldexp_optab, SFmode, CODE_FOR_ldexpsf3);
  if (HAVE_ldexpdf3)
    set_optab_handler (ldexp_optab, DFmode, CODE_FOR_ldexpdf3);
  if (HAVE_scalbxf3)
    set_optab_handler (scalb_optab, XFmode, CODE_FOR_scalbxf3);
  if (HAVE_scalbsf3)
    set_optab_handler (scalb_optab, SFmode, CODE_FOR_scalbsf3);
  if (HAVE_scalbdf3)
    set_optab_handler (scalb_optab, DFmode, CODE_FOR_scalbdf3);
  if (HAVE_significandxf2)
    set_optab_handler (significand_optab, XFmode, CODE_FOR_significandxf2);
  if (HAVE_significandsf2)
    set_optab_handler (significand_optab, SFmode, CODE_FOR_significandsf2);
  if (HAVE_significanddf2)
    set_optab_handler (significand_optab, DFmode, CODE_FOR_significanddf2);
  if (HAVE_rintsf2)
    set_optab_handler (rint_optab, SFmode, CODE_FOR_rintsf2);
  if (HAVE_rintdf2)
    set_optab_handler (rint_optab, DFmode, CODE_FOR_rintdf2);
  if (HAVE_roundsf2)
    set_optab_handler (round_optab, SFmode, CODE_FOR_roundsf2);
  if (HAVE_rounddf2)
    set_optab_handler (round_optab, DFmode, CODE_FOR_rounddf2);
  if (HAVE_roundxf2)
    set_optab_handler (round_optab, XFmode, CODE_FOR_roundxf2);
  if (HAVE_lrintxfhi2)
    set_convert_optab_handler (lrint_optab, HImode, XFmode, CODE_FOR_lrintxfhi2);
  if (HAVE_lrintxfsi2)
    set_convert_optab_handler (lrint_optab, SImode, XFmode, CODE_FOR_lrintxfsi2);
  if (HAVE_lrintxfdi2)
    set_convert_optab_handler (lrint_optab, DImode, XFmode, CODE_FOR_lrintxfdi2);
  if (HAVE_lrintsfsi2)
    set_convert_optab_handler (lrint_optab, SImode, SFmode, CODE_FOR_lrintsfsi2);
  if (HAVE_lrintdfsi2)
    set_convert_optab_handler (lrint_optab, SImode, DFmode, CODE_FOR_lrintdfsi2);
  if (HAVE_lrintsfdi2)
    set_convert_optab_handler (lrint_optab, DImode, SFmode, CODE_FOR_lrintsfdi2);
  if (HAVE_lrintdfdi2)
    set_convert_optab_handler (lrint_optab, DImode, DFmode, CODE_FOR_lrintdfdi2);
  if (HAVE_lroundsfhi2)
    set_convert_optab_handler (lround_optab, HImode, SFmode, CODE_FOR_lroundsfhi2);
  if (HAVE_lrounddfhi2)
    set_convert_optab_handler (lround_optab, HImode, DFmode, CODE_FOR_lrounddfhi2);
  if (HAVE_lroundxfhi2)
    set_convert_optab_handler (lround_optab, HImode, XFmode, CODE_FOR_lroundxfhi2);
  if (HAVE_lroundsfsi2)
    set_convert_optab_handler (lround_optab, SImode, SFmode, CODE_FOR_lroundsfsi2);
  if (HAVE_lrounddfsi2)
    set_convert_optab_handler (lround_optab, SImode, DFmode, CODE_FOR_lrounddfsi2);
  if (HAVE_lroundxfsi2)
    set_convert_optab_handler (lround_optab, SImode, XFmode, CODE_FOR_lroundxfsi2);
  if (HAVE_lroundsfdi2)
    set_convert_optab_handler (lround_optab, DImode, SFmode, CODE_FOR_lroundsfdi2);
  if (HAVE_lrounddfdi2)
    set_convert_optab_handler (lround_optab, DImode, DFmode, CODE_FOR_lrounddfdi2);
  if (HAVE_lroundxfdi2)
    set_convert_optab_handler (lround_optab, DImode, XFmode, CODE_FOR_lroundxfdi2);
  if (HAVE_floorxf2)
    set_optab_handler (floor_optab, XFmode, CODE_FOR_floorxf2);
  if (HAVE_floorsf2)
    set_optab_handler (floor_optab, SFmode, CODE_FOR_floorsf2);
  if (HAVE_floordf2)
    set_optab_handler (floor_optab, DFmode, CODE_FOR_floordf2);
  if (HAVE_lfloorxfhi2)
    set_convert_optab_handler (lfloor_optab, HImode, XFmode, CODE_FOR_lfloorxfhi2);
  if (HAVE_lfloorxfsi2)
    set_convert_optab_handler (lfloor_optab, SImode, XFmode, CODE_FOR_lfloorxfsi2);
  if (HAVE_lfloorxfdi2)
    set_convert_optab_handler (lfloor_optab, DImode, XFmode, CODE_FOR_lfloorxfdi2);
  if (HAVE_lfloorsfsi2)
    set_convert_optab_handler (lfloor_optab, SImode, SFmode, CODE_FOR_lfloorsfsi2);
  if (HAVE_lfloorsfdi2)
    set_convert_optab_handler (lfloor_optab, DImode, SFmode, CODE_FOR_lfloorsfdi2);
  if (HAVE_lfloordfsi2)
    set_convert_optab_handler (lfloor_optab, SImode, DFmode, CODE_FOR_lfloordfsi2);
  if (HAVE_lfloordfdi2)
    set_convert_optab_handler (lfloor_optab, DImode, DFmode, CODE_FOR_lfloordfdi2);
  if (HAVE_ceilxf2)
    set_optab_handler (ceil_optab, XFmode, CODE_FOR_ceilxf2);
  if (HAVE_ceilsf2)
    set_optab_handler (ceil_optab, SFmode, CODE_FOR_ceilsf2);
  if (HAVE_ceildf2)
    set_optab_handler (ceil_optab, DFmode, CODE_FOR_ceildf2);
  if (HAVE_lceilxfhi2)
    set_convert_optab_handler (lceil_optab, HImode, XFmode, CODE_FOR_lceilxfhi2);
  if (HAVE_lceilxfsi2)
    set_convert_optab_handler (lceil_optab, SImode, XFmode, CODE_FOR_lceilxfsi2);
  if (HAVE_lceilxfdi2)
    set_convert_optab_handler (lceil_optab, DImode, XFmode, CODE_FOR_lceilxfdi2);
  if (HAVE_lceilsfsi2)
    set_convert_optab_handler (lceil_optab, SImode, SFmode, CODE_FOR_lceilsfsi2);
  if (HAVE_lceilsfdi2)
    set_convert_optab_handler (lceil_optab, DImode, SFmode, CODE_FOR_lceilsfdi2);
  if (HAVE_lceildfsi2)
    set_convert_optab_handler (lceil_optab, SImode, DFmode, CODE_FOR_lceildfsi2);
  if (HAVE_lceildfdi2)
    set_convert_optab_handler (lceil_optab, DImode, DFmode, CODE_FOR_lceildfdi2);
  if (HAVE_btruncxf2)
    set_optab_handler (btrunc_optab, XFmode, CODE_FOR_btruncxf2);
  if (HAVE_btruncsf2)
    set_optab_handler (btrunc_optab, SFmode, CODE_FOR_btruncsf2);
  if (HAVE_btruncdf2)
    set_optab_handler (btrunc_optab, DFmode, CODE_FOR_btruncdf2);
  if (HAVE_nearbyintxf2)
    set_optab_handler (nearbyint_optab, XFmode, CODE_FOR_nearbyintxf2);
  if (HAVE_nearbyintsf2)
    set_optab_handler (nearbyint_optab, SFmode, CODE_FOR_nearbyintsf2);
  if (HAVE_nearbyintdf2)
    set_optab_handler (nearbyint_optab, DFmode, CODE_FOR_nearbyintdf2);
  if (HAVE_isinfxf2)
    set_optab_handler (isinf_optab, XFmode, CODE_FOR_isinfxf2);
  if (HAVE_isinfsf2)
    set_optab_handler (isinf_optab, SFmode, CODE_FOR_isinfsf2);
  if (HAVE_isinfdf2)
    set_optab_handler (isinf_optab, DFmode, CODE_FOR_isinfdf2);
  if (HAVE_signbitxf2)
    set_optab_handler (signbit_optab, XFmode, CODE_FOR_signbitxf2);
  if (HAVE_signbitdf2)
    set_optab_handler (signbit_optab, DFmode, CODE_FOR_signbitdf2);
  if (HAVE_signbitsf2)
    set_optab_handler (signbit_optab, SFmode, CODE_FOR_signbitsf2);
  set_direct_optab_handler (movmem_optab, SImode, CODE_FOR_movmemsi);
  if (HAVE_movmemdi)
    set_direct_optab_handler (movmem_optab, DImode, CODE_FOR_movmemdi);
  set_direct_optab_handler (setmem_optab, SImode, CODE_FOR_setmemsi);
  if (HAVE_setmemdi)
    set_direct_optab_handler (setmem_optab, DImode, CODE_FOR_setmemdi);
  set_direct_optab_handler (cmpstrn_optab, SImode, CODE_FOR_cmpstrnsi);
  if (HAVE_strlensi)
    set_optab_handler (strlen_optab, SImode, CODE_FOR_strlensi);
  if (HAVE_strlendi)
    set_optab_handler (strlen_optab, DImode, CODE_FOR_strlendi);
  if (HAVE_movqicc)
    set_direct_optab_handler (movcc_optab, QImode, CODE_FOR_movqicc);
  if (HAVE_movhicc)
    set_direct_optab_handler (movcc_optab, HImode, CODE_FOR_movhicc);
  set_direct_optab_handler (movcc_optab, SImode, CODE_FOR_movsicc);
  if (HAVE_movdicc)
    set_direct_optab_handler (movcc_optab, DImode, CODE_FOR_movdicc);
  if (HAVE_movsfcc)
    set_direct_optab_handler (movcc_optab, SFmode, CODE_FOR_movsfcc);
  if (HAVE_movdfcc)
    set_direct_optab_handler (movcc_optab, DFmode, CODE_FOR_movdfcc);
  if (HAVE_movxfcc)
    set_direct_optab_handler (movcc_optab, XFmode, CODE_FOR_movxfcc);
  set_optab_handler (addcc_optab, QImode, CODE_FOR_addqicc);
  set_optab_handler (addcc_optab, HImode, CODE_FOR_addhicc);
  set_optab_handler (addcc_optab, SImode, CODE_FOR_addsicc);
  if (HAVE_adddicc)
    set_optab_handler (addcc_optab, DImode, CODE_FOR_adddicc);
  if (HAVE_movv8qi)
    set_optab_handler (mov_optab, V8QImode, CODE_FOR_movv8qi);
  if (HAVE_movv4hi)
    set_optab_handler (mov_optab, V4HImode, CODE_FOR_movv4hi);
  if (HAVE_movv2si)
    set_optab_handler (mov_optab, V2SImode, CODE_FOR_movv2si);
  if (HAVE_movv1di)
    set_optab_handler (mov_optab, V1DImode, CODE_FOR_movv1di);
  if (HAVE_movv2sf)
    set_optab_handler (mov_optab, V2SFmode, CODE_FOR_movv2sf);
  if (HAVE_pushv8qi1)
    set_optab_handler (push_optab, V8QImode, CODE_FOR_pushv8qi1);
  if (HAVE_pushv4hi1)
    set_optab_handler (push_optab, V4HImode, CODE_FOR_pushv4hi1);
  if (HAVE_pushv2si1)
    set_optab_handler (push_optab, V2SImode, CODE_FOR_pushv2si1);
  if (HAVE_pushv1di1)
    set_optab_handler (push_optab, V1DImode, CODE_FOR_pushv1di1);
  if (HAVE_pushv2sf1)
    set_optab_handler (push_optab, V2SFmode, CODE_FOR_pushv2sf1);
  if (HAVE_movmisalignv8qi)
    set_optab_handler (movmisalign_optab, V8QImode, CODE_FOR_movmisalignv8qi);
  if (HAVE_movmisalignv4hi)
    set_optab_handler (movmisalign_optab, V4HImode, CODE_FOR_movmisalignv4hi);
  if (HAVE_movmisalignv2si)
    set_optab_handler (movmisalign_optab, V2SImode, CODE_FOR_movmisalignv2si);
  if (HAVE_movmisalignv1di)
    set_optab_handler (movmisalign_optab, V1DImode, CODE_FOR_movmisalignv1di);
  if (HAVE_movmisalignv2sf)
    set_optab_handler (movmisalign_optab, V2SFmode, CODE_FOR_movmisalignv2sf);
  if (HAVE_vec_setv2sf)
    set_optab_handler (vec_set_optab, V2SFmode, CODE_FOR_vec_setv2sf);
  if (HAVE_vec_extractv2sf)
    set_optab_handler (vec_extract_optab, V2SFmode, CODE_FOR_vec_extractv2sf);
  if (HAVE_vec_initv2sf)
    set_optab_handler (vec_init_optab, V2SFmode, CODE_FOR_vec_initv2sf);
  if (HAVE_vec_setv2si)
    set_optab_handler (vec_set_optab, V2SImode, CODE_FOR_vec_setv2si);
  if (HAVE_vec_extractv2si)
    set_optab_handler (vec_extract_optab, V2SImode, CODE_FOR_vec_extractv2si);
  if (HAVE_vec_initv2si)
    set_optab_handler (vec_init_optab, V2SImode, CODE_FOR_vec_initv2si);
  if (HAVE_vec_setv4hi)
    set_optab_handler (vec_set_optab, V4HImode, CODE_FOR_vec_setv4hi);
  if (HAVE_vec_extractv4hi)
    set_optab_handler (vec_extract_optab, V4HImode, CODE_FOR_vec_extractv4hi);
  if (HAVE_vec_initv4hi)
    set_optab_handler (vec_init_optab, V4HImode, CODE_FOR_vec_initv4hi);
  if (HAVE_vec_setv8qi)
    set_optab_handler (vec_set_optab, V8QImode, CODE_FOR_vec_setv8qi);
  if (HAVE_vec_extractv8qi)
    set_optab_handler (vec_extract_optab, V8QImode, CODE_FOR_vec_extractv8qi);
  if (HAVE_vec_initv8qi)
    set_optab_handler (vec_init_optab, V8QImode, CODE_FOR_vec_initv8qi);
  if (HAVE_movv32qi)
    set_optab_handler (mov_optab, V32QImode, CODE_FOR_movv32qi);
  if (HAVE_movv16qi)
    set_optab_handler (mov_optab, V16QImode, CODE_FOR_movv16qi);
  if (HAVE_movv16hi)
    set_optab_handler (mov_optab, V16HImode, CODE_FOR_movv16hi);
  if (HAVE_movv8hi)
    set_optab_handler (mov_optab, V8HImode, CODE_FOR_movv8hi);
  if (HAVE_movv8si)
    set_optab_handler (mov_optab, V8SImode, CODE_FOR_movv8si);
  if (HAVE_movv4si)
    set_optab_handler (mov_optab, V4SImode, CODE_FOR_movv4si);
  if (HAVE_movv4di)
    set_optab_handler (mov_optab, V4DImode, CODE_FOR_movv4di);
  if (HAVE_movv2di)
    set_optab_handler (mov_optab, V2DImode, CODE_FOR_movv2di);
  if (HAVE_movv2ti)
    set_optab_handler (mov_optab, V2TImode, CODE_FOR_movv2ti);
  if (HAVE_movv1ti)
    set_optab_handler (mov_optab, V1TImode, CODE_FOR_movv1ti);
  if (HAVE_movv8sf)
    set_optab_handler (mov_optab, V8SFmode, CODE_FOR_movv8sf);
  if (HAVE_movv4sf)
    set_optab_handler (mov_optab, V4SFmode, CODE_FOR_movv4sf);
  if (HAVE_movv4df)
    set_optab_handler (mov_optab, V4DFmode, CODE_FOR_movv4df);
  if (HAVE_movv2df)
    set_optab_handler (mov_optab, V2DFmode, CODE_FOR_movv2df);
  if (HAVE_pushv32qi1)
    set_optab_handler (push_optab, V32QImode, CODE_FOR_pushv32qi1);
  if (HAVE_pushv16qi1)
    set_optab_handler (push_optab, V16QImode, CODE_FOR_pushv16qi1);
  if (HAVE_pushv16hi1)
    set_optab_handler (push_optab, V16HImode, CODE_FOR_pushv16hi1);
  if (HAVE_pushv8hi1)
    set_optab_handler (push_optab, V8HImode, CODE_FOR_pushv8hi1);
  if (HAVE_pushv8si1)
    set_optab_handler (push_optab, V8SImode, CODE_FOR_pushv8si1);
  if (HAVE_pushv4si1)
    set_optab_handler (push_optab, V4SImode, CODE_FOR_pushv4si1);
  if (HAVE_pushv4di1)
    set_optab_handler (push_optab, V4DImode, CODE_FOR_pushv4di1);
  if (HAVE_pushv2di1)
    set_optab_handler (push_optab, V2DImode, CODE_FOR_pushv2di1);
  if (HAVE_pushv2ti1)
    set_optab_handler (push_optab, V2TImode, CODE_FOR_pushv2ti1);
  if (HAVE_pushv1ti1)
    set_optab_handler (push_optab, V1TImode, CODE_FOR_pushv1ti1);
  if (HAVE_pushv8sf1)
    set_optab_handler (push_optab, V8SFmode, CODE_FOR_pushv8sf1);
  if (HAVE_pushv4sf1)
    set_optab_handler (push_optab, V4SFmode, CODE_FOR_pushv4sf1);
  if (HAVE_pushv4df1)
    set_optab_handler (push_optab, V4DFmode, CODE_FOR_pushv4df1);
  if (HAVE_pushv2df1)
    set_optab_handler (push_optab, V2DFmode, CODE_FOR_pushv2df1);
  if (HAVE_movmisalignv32qi)
    set_optab_handler (movmisalign_optab, V32QImode, CODE_FOR_movmisalignv32qi);
  if (HAVE_movmisalignv16qi)
    set_optab_handler (movmisalign_optab, V16QImode, CODE_FOR_movmisalignv16qi);
  if (HAVE_movmisalignv16hi)
    set_optab_handler (movmisalign_optab, V16HImode, CODE_FOR_movmisalignv16hi);
  if (HAVE_movmisalignv8hi)
    set_optab_handler (movmisalign_optab, V8HImode, CODE_FOR_movmisalignv8hi);
  if (HAVE_movmisalignv8si)
    set_optab_handler (movmisalign_optab, V8SImode, CODE_FOR_movmisalignv8si);
  if (HAVE_movmisalignv4si)
    set_optab_handler (movmisalign_optab, V4SImode, CODE_FOR_movmisalignv4si);
  if (HAVE_movmisalignv4di)
    set_optab_handler (movmisalign_optab, V4DImode, CODE_FOR_movmisalignv4di);
  if (HAVE_movmisalignv2di)
    set_optab_handler (movmisalign_optab, V2DImode, CODE_FOR_movmisalignv2di);
  if (HAVE_movmisalignv2ti)
    set_optab_handler (movmisalign_optab, V2TImode, CODE_FOR_movmisalignv2ti);
  if (HAVE_movmisalignv1ti)
    set_optab_handler (movmisalign_optab, V1TImode, CODE_FOR_movmisalignv1ti);
  if (HAVE_movmisalignv8sf)
    set_optab_handler (movmisalign_optab, V8SFmode, CODE_FOR_movmisalignv8sf);
  if (HAVE_movmisalignv4sf)
    set_optab_handler (movmisalign_optab, V4SFmode, CODE_FOR_movmisalignv4sf);
  if (HAVE_movmisalignv4df)
    set_optab_handler (movmisalign_optab, V4DFmode, CODE_FOR_movmisalignv4df);
  if (HAVE_movmisalignv2df)
    set_optab_handler (movmisalign_optab, V2DFmode, CODE_FOR_movmisalignv2df);
  if (HAVE_storentdi)
    set_optab_handler (storent_optab, DImode, CODE_FOR_storentdi);
  if (HAVE_storentsi)
    set_optab_handler (storent_optab, SImode, CODE_FOR_storentsi);
  if (HAVE_storentsf)
    set_optab_handler (storent_optab, SFmode, CODE_FOR_storentsf);
  if (HAVE_storentdf)
    set_optab_handler (storent_optab, DFmode, CODE_FOR_storentdf);
  if (HAVE_storentv4di)
    set_optab_handler (storent_optab, V4DImode, CODE_FOR_storentv4di);
  if (HAVE_storentv2di)
    set_optab_handler (storent_optab, V2DImode, CODE_FOR_storentv2di);
  if (HAVE_storentv8sf)
    set_optab_handler (storent_optab, V8SFmode, CODE_FOR_storentv8sf);
  if (HAVE_storentv4sf)
    set_optab_handler (storent_optab, V4SFmode, CODE_FOR_storentv4sf);
  if (HAVE_storentv4df)
    set_optab_handler (storent_optab, V4DFmode, CODE_FOR_storentv4df);
  if (HAVE_storentv2df)
    set_optab_handler (storent_optab, V2DFmode, CODE_FOR_storentv2df);
  if (HAVE_absv8sf2)
    set_optab_handler (absv_optab, V8SFmode, CODE_FOR_absv8sf2),
    set_optab_handler (abs_optab, V8SFmode, CODE_FOR_absv8sf2);
  if (HAVE_negv8sf2)
    set_optab_handler (negv_optab, V8SFmode, CODE_FOR_negv8sf2),
    set_optab_handler (neg_optab, V8SFmode, CODE_FOR_negv8sf2);
  if (HAVE_absv4sf2)
    set_optab_handler (absv_optab, V4SFmode, CODE_FOR_absv4sf2),
    set_optab_handler (abs_optab, V4SFmode, CODE_FOR_absv4sf2);
  if (HAVE_negv4sf2)
    set_optab_handler (negv_optab, V4SFmode, CODE_FOR_negv4sf2),
    set_optab_handler (neg_optab, V4SFmode, CODE_FOR_negv4sf2);
  if (HAVE_absv4df2)
    set_optab_handler (absv_optab, V4DFmode, CODE_FOR_absv4df2),
    set_optab_handler (abs_optab, V4DFmode, CODE_FOR_absv4df2);
  if (HAVE_negv4df2)
    set_optab_handler (negv_optab, V4DFmode, CODE_FOR_negv4df2),
    set_optab_handler (neg_optab, V4DFmode, CODE_FOR_negv4df2);
  if (HAVE_absv2df2)
    set_optab_handler (absv_optab, V2DFmode, CODE_FOR_absv2df2),
    set_optab_handler (abs_optab, V2DFmode, CODE_FOR_absv2df2);
  if (HAVE_negv2df2)
    set_optab_handler (negv_optab, V2DFmode, CODE_FOR_negv2df2),
    set_optab_handler (neg_optab, V2DFmode, CODE_FOR_negv2df2);
  if (HAVE_addv8sf3)
    set_optab_handler (addv_optab, V8SFmode, CODE_FOR_addv8sf3),
    set_optab_handler (add_optab, V8SFmode, CODE_FOR_addv8sf3);
  if (HAVE_subv8sf3)
    set_optab_handler (subv_optab, V8SFmode, CODE_FOR_subv8sf3),
    set_optab_handler (sub_optab, V8SFmode, CODE_FOR_subv8sf3);
  if (HAVE_addv4sf3)
    set_optab_handler (addv_optab, V4SFmode, CODE_FOR_addv4sf3),
    set_optab_handler (add_optab, V4SFmode, CODE_FOR_addv4sf3);
  if (HAVE_subv4sf3)
    set_optab_handler (subv_optab, V4SFmode, CODE_FOR_subv4sf3),
    set_optab_handler (sub_optab, V4SFmode, CODE_FOR_subv4sf3);
  if (HAVE_addv4df3)
    set_optab_handler (addv_optab, V4DFmode, CODE_FOR_addv4df3),
    set_optab_handler (add_optab, V4DFmode, CODE_FOR_addv4df3);
  if (HAVE_subv4df3)
    set_optab_handler (subv_optab, V4DFmode, CODE_FOR_subv4df3),
    set_optab_handler (sub_optab, V4DFmode, CODE_FOR_subv4df3);
  if (HAVE_addv2df3)
    set_optab_handler (addv_optab, V2DFmode, CODE_FOR_addv2df3),
    set_optab_handler (add_optab, V2DFmode, CODE_FOR_addv2df3);
  if (HAVE_subv2df3)
    set_optab_handler (subv_optab, V2DFmode, CODE_FOR_subv2df3),
    set_optab_handler (sub_optab, V2DFmode, CODE_FOR_subv2df3);
  if (HAVE_mulv8sf3)
    set_optab_handler (smulv_optab, V8SFmode, CODE_FOR_mulv8sf3),
    set_optab_handler (smul_optab, V8SFmode, CODE_FOR_mulv8sf3);
  if (HAVE_mulv4sf3)
    set_optab_handler (smulv_optab, V4SFmode, CODE_FOR_mulv4sf3),
    set_optab_handler (smul_optab, V4SFmode, CODE_FOR_mulv4sf3);
  if (HAVE_mulv4df3)
    set_optab_handler (smulv_optab, V4DFmode, CODE_FOR_mulv4df3),
    set_optab_handler (smul_optab, V4DFmode, CODE_FOR_mulv4df3);
  if (HAVE_mulv2df3)
    set_optab_handler (smulv_optab, V2DFmode, CODE_FOR_mulv2df3),
    set_optab_handler (smul_optab, V2DFmode, CODE_FOR_mulv2df3);
  if (HAVE_divv4df3)
    set_optab_handler (sdiv_optab, V4DFmode, CODE_FOR_divv4df3);
  if (HAVE_divv2df3)
    set_optab_handler (sdiv_optab, V2DFmode, CODE_FOR_divv2df3);
  if (HAVE_divv8sf3)
    set_optab_handler (sdiv_optab, V8SFmode, CODE_FOR_divv8sf3);
  if (HAVE_divv4sf3)
    set_optab_handler (sdiv_optab, V4SFmode, CODE_FOR_divv4sf3);
  if (HAVE_sqrtv4df2)
    set_optab_handler (sqrt_optab, V4DFmode, CODE_FOR_sqrtv4df2);
  if (HAVE_sqrtv2df2)
    set_optab_handler (sqrt_optab, V2DFmode, CODE_FOR_sqrtv2df2);
  if (HAVE_sqrtv8sf2)
    set_optab_handler (sqrt_optab, V8SFmode, CODE_FOR_sqrtv8sf2);
  if (HAVE_sqrtv4sf2)
    set_optab_handler (sqrt_optab, V4SFmode, CODE_FOR_sqrtv4sf2);
  if (HAVE_smaxv8sf3)
    set_optab_handler (smax_optab, V8SFmode, CODE_FOR_smaxv8sf3);
  if (HAVE_sminv8sf3)
    set_optab_handler (smin_optab, V8SFmode, CODE_FOR_sminv8sf3);
  if (HAVE_smaxv4sf3)
    set_optab_handler (smax_optab, V4SFmode, CODE_FOR_smaxv4sf3);
  if (HAVE_sminv4sf3)
    set_optab_handler (smin_optab, V4SFmode, CODE_FOR_sminv4sf3);
  if (HAVE_smaxv4df3)
    set_optab_handler (smax_optab, V4DFmode, CODE_FOR_smaxv4df3);
  if (HAVE_sminv4df3)
    set_optab_handler (smin_optab, V4DFmode, CODE_FOR_sminv4df3);
  if (HAVE_smaxv2df3)
    set_optab_handler (smax_optab, V2DFmode, CODE_FOR_smaxv2df3);
  if (HAVE_sminv2df3)
    set_optab_handler (smin_optab, V2DFmode, CODE_FOR_sminv2df3);
  if (HAVE_reduc_splus_v4df)
    set_optab_handler (reduc_splus_optab, V4DFmode, CODE_FOR_reduc_splus_v4df);
  if (HAVE_reduc_splus_v2df)
    set_optab_handler (reduc_splus_optab, V2DFmode, CODE_FOR_reduc_splus_v2df);
  if (HAVE_reduc_splus_v8sf)
    set_optab_handler (reduc_splus_optab, V8SFmode, CODE_FOR_reduc_splus_v8sf);
  if (HAVE_reduc_splus_v4sf)
    set_optab_handler (reduc_splus_optab, V4SFmode, CODE_FOR_reduc_splus_v4sf);
  if (HAVE_reduc_smax_v32qi)
    set_optab_handler (reduc_smax_optab, V32QImode, CODE_FOR_reduc_smax_v32qi);
  if (HAVE_reduc_smin_v32qi)
    set_optab_handler (reduc_smin_optab, V32QImode, CODE_FOR_reduc_smin_v32qi);
  if (HAVE_reduc_smax_v16hi)
    set_optab_handler (reduc_smax_optab, V16HImode, CODE_FOR_reduc_smax_v16hi);
  if (HAVE_reduc_smin_v16hi)
    set_optab_handler (reduc_smin_optab, V16HImode, CODE_FOR_reduc_smin_v16hi);
  if (HAVE_reduc_smax_v8si)
    set_optab_handler (reduc_smax_optab, V8SImode, CODE_FOR_reduc_smax_v8si);
  if (HAVE_reduc_smin_v8si)
    set_optab_handler (reduc_smin_optab, V8SImode, CODE_FOR_reduc_smin_v8si);
  if (HAVE_reduc_smax_v4di)
    set_optab_handler (reduc_smax_optab, V4DImode, CODE_FOR_reduc_smax_v4di);
  if (HAVE_reduc_smin_v4di)
    set_optab_handler (reduc_smin_optab, V4DImode, CODE_FOR_reduc_smin_v4di);
  if (HAVE_reduc_smax_v8sf)
    set_optab_handler (reduc_smax_optab, V8SFmode, CODE_FOR_reduc_smax_v8sf);
  if (HAVE_reduc_smin_v8sf)
    set_optab_handler (reduc_smin_optab, V8SFmode, CODE_FOR_reduc_smin_v8sf);
  if (HAVE_reduc_smax_v4df)
    set_optab_handler (reduc_smax_optab, V4DFmode, CODE_FOR_reduc_smax_v4df);
  if (HAVE_reduc_smin_v4df)
    set_optab_handler (reduc_smin_optab, V4DFmode, CODE_FOR_reduc_smin_v4df);
  if (HAVE_reduc_smax_v4sf)
    set_optab_handler (reduc_smax_optab, V4SFmode, CODE_FOR_reduc_smax_v4sf);
  if (HAVE_reduc_smin_v4sf)
    set_optab_handler (reduc_smin_optab, V4SFmode, CODE_FOR_reduc_smin_v4sf);
  if (HAVE_reduc_umax_v32qi)
    set_optab_handler (reduc_umax_optab, V32QImode, CODE_FOR_reduc_umax_v32qi);
  if (HAVE_reduc_umin_v32qi)
    set_optab_handler (reduc_umin_optab, V32QImode, CODE_FOR_reduc_umin_v32qi);
  if (HAVE_reduc_umax_v16hi)
    set_optab_handler (reduc_umax_optab, V16HImode, CODE_FOR_reduc_umax_v16hi);
  if (HAVE_reduc_umin_v16hi)
    set_optab_handler (reduc_umin_optab, V16HImode, CODE_FOR_reduc_umin_v16hi);
  if (HAVE_reduc_umax_v8si)
    set_optab_handler (reduc_umax_optab, V8SImode, CODE_FOR_reduc_umax_v8si);
  if (HAVE_reduc_umin_v8si)
    set_optab_handler (reduc_umin_optab, V8SImode, CODE_FOR_reduc_umin_v8si);
  if (HAVE_reduc_umax_v4di)
    set_optab_handler (reduc_umax_optab, V4DImode, CODE_FOR_reduc_umax_v4di);
  if (HAVE_reduc_umin_v4di)
    set_optab_handler (reduc_umin_optab, V4DImode, CODE_FOR_reduc_umin_v4di);
  if (HAVE_reduc_umin_v8hi)
    set_optab_handler (reduc_umin_optab, V8HImode, CODE_FOR_reduc_umin_v8hi);
  if (HAVE_vcondv32qiv8sf)
    set_convert_optab_handler (vcond_optab, V32QImode, V8SFmode, CODE_FOR_vcondv32qiv8sf);
  if (HAVE_vcondv16hiv8sf)
    set_convert_optab_handler (vcond_optab, V16HImode, V8SFmode, CODE_FOR_vcondv16hiv8sf);
  if (HAVE_vcondv8siv8sf)
    set_convert_optab_handler (vcond_optab, V8SImode, V8SFmode, CODE_FOR_vcondv8siv8sf);
  if (HAVE_vcondv4div8sf)
    set_convert_optab_handler (vcond_optab, V4DImode, V8SFmode, CODE_FOR_vcondv4div8sf);
  if (HAVE_vcondv8sfv8sf)
    set_convert_optab_handler (vcond_optab, V8SFmode, V8SFmode, CODE_FOR_vcondv8sfv8sf);
  if (HAVE_vcondv4dfv8sf)
    set_convert_optab_handler (vcond_optab, V4DFmode, V8SFmode, CODE_FOR_vcondv4dfv8sf);
  if (HAVE_vcondv32qiv4df)
    set_convert_optab_handler (vcond_optab, V32QImode, V4DFmode, CODE_FOR_vcondv32qiv4df);
  if (HAVE_vcondv16hiv4df)
    set_convert_optab_handler (vcond_optab, V16HImode, V4DFmode, CODE_FOR_vcondv16hiv4df);
  if (HAVE_vcondv8siv4df)
    set_convert_optab_handler (vcond_optab, V8SImode, V4DFmode, CODE_FOR_vcondv8siv4df);
  if (HAVE_vcondv4div4df)
    set_convert_optab_handler (vcond_optab, V4DImode, V4DFmode, CODE_FOR_vcondv4div4df);
  if (HAVE_vcondv8sfv4df)
    set_convert_optab_handler (vcond_optab, V8SFmode, V4DFmode, CODE_FOR_vcondv8sfv4df);
  if (HAVE_vcondv4dfv4df)
    set_convert_optab_handler (vcond_optab, V4DFmode, V4DFmode, CODE_FOR_vcondv4dfv4df);
  if (HAVE_vcondv16qiv4sf)
    set_convert_optab_handler (vcond_optab, V16QImode, V4SFmode, CODE_FOR_vcondv16qiv4sf);
  if (HAVE_vcondv8hiv4sf)
    set_convert_optab_handler (vcond_optab, V8HImode, V4SFmode, CODE_FOR_vcondv8hiv4sf);
  if (HAVE_vcondv4siv4sf)
    set_convert_optab_handler (vcond_optab, V4SImode, V4SFmode, CODE_FOR_vcondv4siv4sf);
  if (HAVE_vcondv2div4sf)
    set_convert_optab_handler (vcond_optab, V2DImode, V4SFmode, CODE_FOR_vcondv2div4sf);
  if (HAVE_vcondv4sfv4sf)
    set_convert_optab_handler (vcond_optab, V4SFmode, V4SFmode, CODE_FOR_vcondv4sfv4sf);
  if (HAVE_vcondv2dfv4sf)
    set_convert_optab_handler (vcond_optab, V2DFmode, V4SFmode, CODE_FOR_vcondv2dfv4sf);
  if (HAVE_vcondv16qiv2df)
    set_convert_optab_handler (vcond_optab, V16QImode, V2DFmode, CODE_FOR_vcondv16qiv2df);
  if (HAVE_vcondv8hiv2df)
    set_convert_optab_handler (vcond_optab, V8HImode, V2DFmode, CODE_FOR_vcondv8hiv2df);
  if (HAVE_vcondv4siv2df)
    set_convert_optab_handler (vcond_optab, V4SImode, V2DFmode, CODE_FOR_vcondv4siv2df);
  if (HAVE_vcondv2div2df)
    set_convert_optab_handler (vcond_optab, V2DImode, V2DFmode, CODE_FOR_vcondv2div2df);
  if (HAVE_vcondv4sfv2df)
    set_convert_optab_handler (vcond_optab, V4SFmode, V2DFmode, CODE_FOR_vcondv4sfv2df);
  if (HAVE_vcondv2dfv2df)
    set_convert_optab_handler (vcond_optab, V2DFmode, V2DFmode, CODE_FOR_vcondv2dfv2df);
  if (HAVE_andv8sf3)
    set_optab_handler (and_optab, V8SFmode, CODE_FOR_andv8sf3);
  if (HAVE_iorv8sf3)
    set_optab_handler (ior_optab, V8SFmode, CODE_FOR_iorv8sf3);
  if (HAVE_xorv8sf3)
    set_optab_handler (xor_optab, V8SFmode, CODE_FOR_xorv8sf3);
  if (HAVE_andv4sf3)
    set_optab_handler (and_optab, V4SFmode, CODE_FOR_andv4sf3);
  if (HAVE_iorv4sf3)
    set_optab_handler (ior_optab, V4SFmode, CODE_FOR_iorv4sf3);
  if (HAVE_xorv4sf3)
    set_optab_handler (xor_optab, V4SFmode, CODE_FOR_xorv4sf3);
  if (HAVE_andv4df3)
    set_optab_handler (and_optab, V4DFmode, CODE_FOR_andv4df3);
  if (HAVE_iorv4df3)
    set_optab_handler (ior_optab, V4DFmode, CODE_FOR_iorv4df3);
  if (HAVE_xorv4df3)
    set_optab_handler (xor_optab, V4DFmode, CODE_FOR_xorv4df3);
  if (HAVE_andv2df3)
    set_optab_handler (and_optab, V2DFmode, CODE_FOR_andv2df3);
  if (HAVE_iorv2df3)
    set_optab_handler (ior_optab, V2DFmode, CODE_FOR_iorv2df3);
  if (HAVE_xorv2df3)
    set_optab_handler (xor_optab, V2DFmode, CODE_FOR_xorv2df3);
  if (HAVE_copysignv8sf3)
    set_optab_handler (copysign_optab, V8SFmode, CODE_FOR_copysignv8sf3);
  if (HAVE_copysignv4sf3)
    set_optab_handler (copysign_optab, V4SFmode, CODE_FOR_copysignv4sf3);
  if (HAVE_copysignv4df3)
    set_optab_handler (copysign_optab, V4DFmode, CODE_FOR_copysignv4df3);
  if (HAVE_copysignv2df3)
    set_optab_handler (copysign_optab, V2DFmode, CODE_FOR_copysignv2df3);
  if (HAVE_fmasf4)
    set_optab_handler (fma_optab, SFmode, CODE_FOR_fmasf4);
  if (HAVE_fmadf4)
    set_optab_handler (fma_optab, DFmode, CODE_FOR_fmadf4);
  if (HAVE_fmav4sf4)
    set_optab_handler (fma_optab, V4SFmode, CODE_FOR_fmav4sf4);
  if (HAVE_fmav2df4)
    set_optab_handler (fma_optab, V2DFmode, CODE_FOR_fmav2df4);
  if (HAVE_fmav8sf4)
    set_optab_handler (fma_optab, V8SFmode, CODE_FOR_fmav8sf4);
  if (HAVE_fmav4df4)
    set_optab_handler (fma_optab, V4DFmode, CODE_FOR_fmav4df4);
  if (HAVE_fmssf4)
    set_optab_handler (fms_optab, SFmode, CODE_FOR_fmssf4);
  if (HAVE_fmsdf4)
    set_optab_handler (fms_optab, DFmode, CODE_FOR_fmsdf4);
  if (HAVE_fmsv4sf4)
    set_optab_handler (fms_optab, V4SFmode, CODE_FOR_fmsv4sf4);
  if (HAVE_fmsv2df4)
    set_optab_handler (fms_optab, V2DFmode, CODE_FOR_fmsv2df4);
  if (HAVE_fmsv8sf4)
    set_optab_handler (fms_optab, V8SFmode, CODE_FOR_fmsv8sf4);
  if (HAVE_fmsv4df4)
    set_optab_handler (fms_optab, V4DFmode, CODE_FOR_fmsv4df4);
  if (HAVE_fnmasf4)
    set_optab_handler (fnma_optab, SFmode, CODE_FOR_fnmasf4);
  if (HAVE_fnmadf4)
    set_optab_handler (fnma_optab, DFmode, CODE_FOR_fnmadf4);
  if (HAVE_fnmav4sf4)
    set_optab_handler (fnma_optab, V4SFmode, CODE_FOR_fnmav4sf4);
  if (HAVE_fnmav2df4)
    set_optab_handler (fnma_optab, V2DFmode, CODE_FOR_fnmav2df4);
  if (HAVE_fnmav8sf4)
    set_optab_handler (fnma_optab, V8SFmode, CODE_FOR_fnmav8sf4);
  if (HAVE_fnmav4df4)
    set_optab_handler (fnma_optab, V4DFmode, CODE_FOR_fnmav4df4);
  if (HAVE_fnmssf4)
    set_optab_handler (fnms_optab, SFmode, CODE_FOR_fnmssf4);
  if (HAVE_fnmsdf4)
    set_optab_handler (fnms_optab, DFmode, CODE_FOR_fnmsdf4);
  if (HAVE_fnmsv4sf4)
    set_optab_handler (fnms_optab, V4SFmode, CODE_FOR_fnmsv4sf4);
  if (HAVE_fnmsv2df4)
    set_optab_handler (fnms_optab, V2DFmode, CODE_FOR_fnmsv2df4);
  if (HAVE_fnmsv8sf4)
    set_optab_handler (fnms_optab, V8SFmode, CODE_FOR_fnmsv8sf4);
  if (HAVE_fnmsv4df4)
    set_optab_handler (fnms_optab, V4DFmode, CODE_FOR_fnmsv4df4);
  if (HAVE_floatunsv8siv8sf2)
    set_convert_optab_handler (ufloat_optab, V8SFmode, V8SImode, CODE_FOR_floatunsv8siv8sf2);
  if (HAVE_floatunsv4siv4sf2)
    set_convert_optab_handler (ufloat_optab, V4SFmode, V4SImode, CODE_FOR_floatunsv4siv4sf2);
  if (HAVE_fixuns_truncv8sfv8si2)
    set_convert_optab_handler (ufixtrunc_optab, V8SImode, V8SFmode, CODE_FOR_fixuns_truncv8sfv8si2);
  if (HAVE_fixuns_truncv4sfv4si2)
    set_convert_optab_handler (ufixtrunc_optab, V4SImode, V4SFmode, CODE_FOR_fixuns_truncv4sfv4si2);
  if (HAVE_vec_unpacks_hi_v4sf)
    set_optab_handler (vec_unpacks_hi_optab, V4SFmode, CODE_FOR_vec_unpacks_hi_v4sf);
  if (HAVE_vec_unpacks_hi_v8sf)
    set_optab_handler (vec_unpacks_hi_optab, V8SFmode, CODE_FOR_vec_unpacks_hi_v8sf);
  if (HAVE_vec_unpacks_lo_v4sf)
    set_optab_handler (vec_unpacks_lo_optab, V4SFmode, CODE_FOR_vec_unpacks_lo_v4sf);
  if (HAVE_vec_unpacks_lo_v8sf)
    set_optab_handler (vec_unpacks_lo_optab, V8SFmode, CODE_FOR_vec_unpacks_lo_v8sf);
  if (HAVE_vec_unpacks_float_hi_v16hi)
    set_optab_handler (vec_unpacks_float_hi_optab, V16HImode, CODE_FOR_vec_unpacks_float_hi_v16hi);
  if (HAVE_vec_unpacks_float_hi_v8hi)
    set_optab_handler (vec_unpacks_float_hi_optab, V8HImode, CODE_FOR_vec_unpacks_float_hi_v8hi);
  if (HAVE_vec_unpacks_float_lo_v16hi)
    set_optab_handler (vec_unpacks_float_lo_optab, V16HImode, CODE_FOR_vec_unpacks_float_lo_v16hi);
  if (HAVE_vec_unpacks_float_lo_v8hi)
    set_optab_handler (vec_unpacks_float_lo_optab, V8HImode, CODE_FOR_vec_unpacks_float_lo_v8hi);
  if (HAVE_vec_unpacku_float_hi_v16hi)
    set_optab_handler (vec_unpacku_float_hi_optab, V16HImode, CODE_FOR_vec_unpacku_float_hi_v16hi);
  if (HAVE_vec_unpacku_float_hi_v8hi)
    set_optab_handler (vec_unpacku_float_hi_optab, V8HImode, CODE_FOR_vec_unpacku_float_hi_v8hi);
  if (HAVE_vec_unpacku_float_lo_v16hi)
    set_optab_handler (vec_unpacku_float_lo_optab, V16HImode, CODE_FOR_vec_unpacku_float_lo_v16hi);
  if (HAVE_vec_unpacku_float_lo_v8hi)
    set_optab_handler (vec_unpacku_float_lo_optab, V8HImode, CODE_FOR_vec_unpacku_float_lo_v8hi);
  if (HAVE_vec_unpacks_float_hi_v4si)
    set_optab_handler (vec_unpacks_float_hi_optab, V4SImode, CODE_FOR_vec_unpacks_float_hi_v4si);
  if (HAVE_vec_unpacks_float_lo_v4si)
    set_optab_handler (vec_unpacks_float_lo_optab, V4SImode, CODE_FOR_vec_unpacks_float_lo_v4si);
  if (HAVE_vec_unpacks_float_hi_v8si)
    set_optab_handler (vec_unpacks_float_hi_optab, V8SImode, CODE_FOR_vec_unpacks_float_hi_v8si);
  if (HAVE_vec_unpacks_float_lo_v8si)
    set_optab_handler (vec_unpacks_float_lo_optab, V8SImode, CODE_FOR_vec_unpacks_float_lo_v8si);
  if (HAVE_vec_unpacku_float_hi_v4si)
    set_optab_handler (vec_unpacku_float_hi_optab, V4SImode, CODE_FOR_vec_unpacku_float_hi_v4si);
  if (HAVE_vec_unpacku_float_lo_v4si)
    set_optab_handler (vec_unpacku_float_lo_optab, V4SImode, CODE_FOR_vec_unpacku_float_lo_v4si);
  if (HAVE_vec_unpacku_float_hi_v8si)
    set_optab_handler (vec_unpacku_float_hi_optab, V8SImode, CODE_FOR_vec_unpacku_float_hi_v8si);
  if (HAVE_vec_unpacku_float_lo_v8si)
    set_optab_handler (vec_unpacku_float_lo_optab, V8SImode, CODE_FOR_vec_unpacku_float_lo_v8si);
  if (HAVE_vec_pack_trunc_v4df)
    set_optab_handler (vec_pack_trunc_optab, V4DFmode, CODE_FOR_vec_pack_trunc_v4df);
  if (HAVE_vec_pack_trunc_v2df)
    set_optab_handler (vec_pack_trunc_optab, V2DFmode, CODE_FOR_vec_pack_trunc_v2df);
  if (HAVE_vec_pack_sfix_trunc_v4df)
    set_optab_handler (vec_pack_sfix_trunc_optab, V4DFmode, CODE_FOR_vec_pack_sfix_trunc_v4df);
  if (HAVE_vec_pack_sfix_trunc_v2df)
    set_optab_handler (vec_pack_sfix_trunc_optab, V2DFmode, CODE_FOR_vec_pack_sfix_trunc_v2df);
  if (HAVE_vec_pack_ufix_trunc_v4df)
    set_optab_handler (vec_pack_ufix_trunc_optab, V4DFmode, CODE_FOR_vec_pack_ufix_trunc_v4df);
  if (HAVE_vec_pack_ufix_trunc_v2df)
    set_optab_handler (vec_pack_ufix_trunc_optab, V2DFmode, CODE_FOR_vec_pack_ufix_trunc_v2df);
  if (HAVE_vec_initv16qi)
    set_optab_handler (vec_init_optab, V16QImode, CODE_FOR_vec_initv16qi);
  if (HAVE_vec_initv8hi)
    set_optab_handler (vec_init_optab, V8HImode, CODE_FOR_vec_initv8hi);
  if (HAVE_vec_initv4si)
    set_optab_handler (vec_init_optab, V4SImode, CODE_FOR_vec_initv4si);
  if (HAVE_vec_initv2di)
    set_optab_handler (vec_init_optab, V2DImode, CODE_FOR_vec_initv2di);
  if (HAVE_vec_initv4sf)
    set_optab_handler (vec_init_optab, V4SFmode, CODE_FOR_vec_initv4sf);
  if (HAVE_vec_initv2df)
    set_optab_handler (vec_init_optab, V2DFmode, CODE_FOR_vec_initv2df);
  if (HAVE_vec_setv32qi)
    set_optab_handler (vec_set_optab, V32QImode, CODE_FOR_vec_setv32qi);
  if (HAVE_vec_setv16qi)
    set_optab_handler (vec_set_optab, V16QImode, CODE_FOR_vec_setv16qi);
  if (HAVE_vec_setv16hi)
    set_optab_handler (vec_set_optab, V16HImode, CODE_FOR_vec_setv16hi);
  if (HAVE_vec_setv8hi)
    set_optab_handler (vec_set_optab, V8HImode, CODE_FOR_vec_setv8hi);
  if (HAVE_vec_setv8si)
    set_optab_handler (vec_set_optab, V8SImode, CODE_FOR_vec_setv8si);
  if (HAVE_vec_setv4si)
    set_optab_handler (vec_set_optab, V4SImode, CODE_FOR_vec_setv4si);
  if (HAVE_vec_setv4di)
    set_optab_handler (vec_set_optab, V4DImode, CODE_FOR_vec_setv4di);
  if (HAVE_vec_setv2di)
    set_optab_handler (vec_set_optab, V2DImode, CODE_FOR_vec_setv2di);
  if (HAVE_vec_setv8sf)
    set_optab_handler (vec_set_optab, V8SFmode, CODE_FOR_vec_setv8sf);
  if (HAVE_vec_setv4sf)
    set_optab_handler (vec_set_optab, V4SFmode, CODE_FOR_vec_setv4sf);
  if (HAVE_vec_setv4df)
    set_optab_handler (vec_set_optab, V4DFmode, CODE_FOR_vec_setv4df);
  if (HAVE_vec_setv2df)
    set_optab_handler (vec_set_optab, V2DFmode, CODE_FOR_vec_setv2df);
  if (HAVE_vec_extractv32qi)
    set_optab_handler (vec_extract_optab, V32QImode, CODE_FOR_vec_extractv32qi);
  if (HAVE_vec_extractv16qi)
    set_optab_handler (vec_extract_optab, V16QImode, CODE_FOR_vec_extractv16qi);
  if (HAVE_vec_extractv16hi)
    set_optab_handler (vec_extract_optab, V16HImode, CODE_FOR_vec_extractv16hi);
  if (HAVE_vec_extractv8hi)
    set_optab_handler (vec_extract_optab, V8HImode, CODE_FOR_vec_extractv8hi);
  if (HAVE_vec_extractv8si)
    set_optab_handler (vec_extract_optab, V8SImode, CODE_FOR_vec_extractv8si);
  if (HAVE_vec_extractv4si)
    set_optab_handler (vec_extract_optab, V4SImode, CODE_FOR_vec_extractv4si);
  if (HAVE_vec_extractv4di)
    set_optab_handler (vec_extract_optab, V4DImode, CODE_FOR_vec_extractv4di);
  if (HAVE_vec_extractv2di)
    set_optab_handler (vec_extract_optab, V2DImode, CODE_FOR_vec_extractv2di);
  if (HAVE_vec_extractv8sf)
    set_optab_handler (vec_extract_optab, V8SFmode, CODE_FOR_vec_extractv8sf);
  if (HAVE_vec_extractv4sf)
    set_optab_handler (vec_extract_optab, V4SFmode, CODE_FOR_vec_extractv4sf);
  if (HAVE_vec_extractv4df)
    set_optab_handler (vec_extract_optab, V4DFmode, CODE_FOR_vec_extractv4df);
  if (HAVE_vec_extractv2df)
    set_optab_handler (vec_extract_optab, V2DFmode, CODE_FOR_vec_extractv2df);
  if (HAVE_negv32qi2)
    set_optab_handler (neg_optab, V32QImode, CODE_FOR_negv32qi2);
  if (HAVE_negv16qi2)
    set_optab_handler (neg_optab, V16QImode, CODE_FOR_negv16qi2);
  if (HAVE_negv16hi2)
    set_optab_handler (neg_optab, V16HImode, CODE_FOR_negv16hi2);
  if (HAVE_negv8hi2)
    set_optab_handler (neg_optab, V8HImode, CODE_FOR_negv8hi2);
  if (HAVE_negv8si2)
    set_optab_handler (neg_optab, V8SImode, CODE_FOR_negv8si2);
  if (HAVE_negv4si2)
    set_optab_handler (neg_optab, V4SImode, CODE_FOR_negv4si2);
  if (HAVE_negv4di2)
    set_optab_handler (neg_optab, V4DImode, CODE_FOR_negv4di2);
  if (HAVE_negv2di2)
    set_optab_handler (neg_optab, V2DImode, CODE_FOR_negv2di2);
  if (HAVE_addv32qi3)
    set_optab_handler (add_optab, V32QImode, CODE_FOR_addv32qi3);
  if (HAVE_subv32qi3)
    set_optab_handler (sub_optab, V32QImode, CODE_FOR_subv32qi3);
  if (HAVE_addv16qi3)
    set_optab_handler (add_optab, V16QImode, CODE_FOR_addv16qi3);
  if (HAVE_subv16qi3)
    set_optab_handler (sub_optab, V16QImode, CODE_FOR_subv16qi3);
  if (HAVE_addv16hi3)
    set_optab_handler (add_optab, V16HImode, CODE_FOR_addv16hi3);
  if (HAVE_subv16hi3)
    set_optab_handler (sub_optab, V16HImode, CODE_FOR_subv16hi3);
  if (HAVE_addv8hi3)
    set_optab_handler (add_optab, V8HImode, CODE_FOR_addv8hi3);
  if (HAVE_subv8hi3)
    set_optab_handler (sub_optab, V8HImode, CODE_FOR_subv8hi3);
  if (HAVE_addv8si3)
    set_optab_handler (add_optab, V8SImode, CODE_FOR_addv8si3);
  if (HAVE_subv8si3)
    set_optab_handler (sub_optab, V8SImode, CODE_FOR_subv8si3);
  if (HAVE_addv4si3)
    set_optab_handler (add_optab, V4SImode, CODE_FOR_addv4si3);
  if (HAVE_subv4si3)
    set_optab_handler (sub_optab, V4SImode, CODE_FOR_subv4si3);
  if (HAVE_addv4di3)
    set_optab_handler (add_optab, V4DImode, CODE_FOR_addv4di3);
  if (HAVE_subv4di3)
    set_optab_handler (sub_optab, V4DImode, CODE_FOR_subv4di3);
  if (HAVE_addv2di3)
    set_optab_handler (add_optab, V2DImode, CODE_FOR_addv2di3);
  if (HAVE_subv2di3)
    set_optab_handler (sub_optab, V2DImode, CODE_FOR_subv2di3);
  if (HAVE_mulv16hi3)
    set_optab_handler (smul_optab, V16HImode, CODE_FOR_mulv16hi3);
  if (HAVE_mulv8hi3)
    set_optab_handler (smul_optab, V8HImode, CODE_FOR_mulv8hi3);
  if (HAVE_smulv16hi3_highpart)
    set_optab_handler (smul_highpart_optab, V16HImode, CODE_FOR_smulv16hi3_highpart);
  if (HAVE_umulv16hi3_highpart)
    set_optab_handler (umul_highpart_optab, V16HImode, CODE_FOR_umulv16hi3_highpart);
  if (HAVE_smulv8hi3_highpart)
    set_optab_handler (smul_highpart_optab, V8HImode, CODE_FOR_smulv8hi3_highpart);
  if (HAVE_umulv8hi3_highpart)
    set_optab_handler (umul_highpart_optab, V8HImode, CODE_FOR_umulv8hi3_highpart);
  if (HAVE_mulv8si3)
    set_optab_handler (smul_optab, V8SImode, CODE_FOR_mulv8si3);
  if (HAVE_mulv4si3)
    set_optab_handler (smul_optab, V4SImode, CODE_FOR_mulv4si3);
  if (HAVE_vec_widen_smult_hi_v16hi)
    set_optab_handler (vec_widen_smult_hi_optab, V16HImode, CODE_FOR_vec_widen_smult_hi_v16hi);
  if (HAVE_vec_widen_umult_hi_v16hi)
    set_optab_handler (vec_widen_umult_hi_optab, V16HImode, CODE_FOR_vec_widen_umult_hi_v16hi);
  if (HAVE_vec_widen_smult_hi_v8hi)
    set_optab_handler (vec_widen_smult_hi_optab, V8HImode, CODE_FOR_vec_widen_smult_hi_v8hi);
  if (HAVE_vec_widen_umult_hi_v8hi)
    set_optab_handler (vec_widen_umult_hi_optab, V8HImode, CODE_FOR_vec_widen_umult_hi_v8hi);
  if (HAVE_vec_widen_smult_lo_v16hi)
    set_optab_handler (vec_widen_smult_lo_optab, V16HImode, CODE_FOR_vec_widen_smult_lo_v16hi);
  if (HAVE_vec_widen_umult_lo_v16hi)
    set_optab_handler (vec_widen_umult_lo_optab, V16HImode, CODE_FOR_vec_widen_umult_lo_v16hi);
  if (HAVE_vec_widen_smult_lo_v8hi)
    set_optab_handler (vec_widen_smult_lo_optab, V8HImode, CODE_FOR_vec_widen_smult_lo_v8hi);
  if (HAVE_vec_widen_umult_lo_v8hi)
    set_optab_handler (vec_widen_umult_lo_optab, V8HImode, CODE_FOR_vec_widen_umult_lo_v8hi);
  if (HAVE_vec_widen_smult_hi_v8si)
    set_optab_handler (vec_widen_smult_hi_optab, V8SImode, CODE_FOR_vec_widen_smult_hi_v8si);
  if (HAVE_vec_widen_umult_hi_v8si)
    set_optab_handler (vec_widen_umult_hi_optab, V8SImode, CODE_FOR_vec_widen_umult_hi_v8si);
  if (HAVE_vec_widen_smult_lo_v8si)
    set_optab_handler (vec_widen_smult_lo_optab, V8SImode, CODE_FOR_vec_widen_smult_lo_v8si);
  if (HAVE_vec_widen_umult_lo_v8si)
    set_optab_handler (vec_widen_umult_lo_optab, V8SImode, CODE_FOR_vec_widen_umult_lo_v8si);
  if (HAVE_vec_widen_smult_hi_v4si)
    set_optab_handler (vec_widen_smult_hi_optab, V4SImode, CODE_FOR_vec_widen_smult_hi_v4si);
  if (HAVE_vec_widen_smult_lo_v4si)
    set_optab_handler (vec_widen_smult_lo_optab, V4SImode, CODE_FOR_vec_widen_smult_lo_v4si);
  if (HAVE_vec_widen_umult_hi_v4si)
    set_optab_handler (vec_widen_umult_hi_optab, V4SImode, CODE_FOR_vec_widen_umult_hi_v4si);
  if (HAVE_vec_widen_umult_lo_v4si)
    set_optab_handler (vec_widen_umult_lo_optab, V4SImode, CODE_FOR_vec_widen_umult_lo_v4si);
  if (HAVE_sdot_prodv16hi)
    set_optab_handler (sdot_prod_optab, V16HImode, CODE_FOR_sdot_prodv16hi);
  if (HAVE_sdot_prodv8hi)
    set_optab_handler (sdot_prod_optab, V8HImode, CODE_FOR_sdot_prodv8hi);
  if (HAVE_sdot_prodv4si)
    set_optab_handler (sdot_prod_optab, V4SImode, CODE_FOR_sdot_prodv4si);
  if (HAVE_udot_prodv4si)
    set_optab_handler (udot_prod_optab, V4SImode, CODE_FOR_udot_prodv4si);
  if (HAVE_sdot_prodv8si)
    set_optab_handler (sdot_prod_optab, V8SImode, CODE_FOR_sdot_prodv8si);
  if (HAVE_udot_prodv8si)
    set_optab_handler (udot_prod_optab, V8SImode, CODE_FOR_udot_prodv8si);
  if (HAVE_vec_shl_v16qi)
    set_optab_handler (vec_shl_optab, V16QImode, CODE_FOR_vec_shl_v16qi);
  if (HAVE_vec_shl_v8hi)
    set_optab_handler (vec_shl_optab, V8HImode, CODE_FOR_vec_shl_v8hi);
  if (HAVE_vec_shl_v4si)
    set_optab_handler (vec_shl_optab, V4SImode, CODE_FOR_vec_shl_v4si);
  if (HAVE_vec_shl_v2di)
    set_optab_handler (vec_shl_optab, V2DImode, CODE_FOR_vec_shl_v2di);
  if (HAVE_vec_shr_v16qi)
    set_optab_handler (vec_shr_optab, V16QImode, CODE_FOR_vec_shr_v16qi);
  if (HAVE_vec_shr_v8hi)
    set_optab_handler (vec_shr_optab, V8HImode, CODE_FOR_vec_shr_v8hi);
  if (HAVE_vec_shr_v4si)
    set_optab_handler (vec_shr_optab, V4SImode, CODE_FOR_vec_shr_v4si);
  if (HAVE_vec_shr_v2di)
    set_optab_handler (vec_shr_optab, V2DImode, CODE_FOR_vec_shr_v2di);
  if (HAVE_smaxv32qi3)
    set_optab_handler (smax_optab, V32QImode, CODE_FOR_smaxv32qi3);
  if (HAVE_sminv32qi3)
    set_optab_handler (smin_optab, V32QImode, CODE_FOR_sminv32qi3);
  if (HAVE_umaxv32qi3)
    set_optab_handler (umax_optab, V32QImode, CODE_FOR_umaxv32qi3);
  if (HAVE_uminv32qi3)
    set_optab_handler (umin_optab, V32QImode, CODE_FOR_uminv32qi3);
  if (HAVE_smaxv16hi3)
    set_optab_handler (smax_optab, V16HImode, CODE_FOR_smaxv16hi3);
  if (HAVE_sminv16hi3)
    set_optab_handler (smin_optab, V16HImode, CODE_FOR_sminv16hi3);
  if (HAVE_umaxv16hi3)
    set_optab_handler (umax_optab, V16HImode, CODE_FOR_umaxv16hi3);
  if (HAVE_uminv16hi3)
    set_optab_handler (umin_optab, V16HImode, CODE_FOR_uminv16hi3);
  if (HAVE_smaxv8si3)
    set_optab_handler (smax_optab, V8SImode, CODE_FOR_smaxv8si3);
  if (HAVE_sminv8si3)
    set_optab_handler (smin_optab, V8SImode, CODE_FOR_sminv8si3);
  if (HAVE_umaxv8si3)
    set_optab_handler (umax_optab, V8SImode, CODE_FOR_umaxv8si3);
  if (HAVE_uminv8si3)
    set_optab_handler (umin_optab, V8SImode, CODE_FOR_uminv8si3);
  if (HAVE_smaxv4di3)
    set_optab_handler (smax_optab, V4DImode, CODE_FOR_smaxv4di3);
  if (HAVE_sminv4di3)
    set_optab_handler (smin_optab, V4DImode, CODE_FOR_sminv4di3);
  if (HAVE_umaxv4di3)
    set_optab_handler (umax_optab, V4DImode, CODE_FOR_umaxv4di3);
  if (HAVE_uminv4di3)
    set_optab_handler (umin_optab, V4DImode, CODE_FOR_uminv4di3);
  if (HAVE_smaxv2di3)
    set_optab_handler (smax_optab, V2DImode, CODE_FOR_smaxv2di3);
  if (HAVE_sminv2di3)
    set_optab_handler (smin_optab, V2DImode, CODE_FOR_sminv2di3);
  if (HAVE_umaxv2di3)
    set_optab_handler (umax_optab, V2DImode, CODE_FOR_umaxv2di3);
  if (HAVE_uminv2di3)
    set_optab_handler (umin_optab, V2DImode, CODE_FOR_uminv2di3);
  if (HAVE_smaxv16qi3)
    set_optab_handler (smax_optab, V16QImode, CODE_FOR_smaxv16qi3);
  if (HAVE_sminv16qi3)
    set_optab_handler (smin_optab, V16QImode, CODE_FOR_sminv16qi3);
  if (HAVE_smaxv8hi3)
    set_optab_handler (smax_optab, V8HImode, CODE_FOR_smaxv8hi3);
  if (HAVE_sminv8hi3)
    set_optab_handler (smin_optab, V8HImode, CODE_FOR_sminv8hi3);
  if (HAVE_smaxv4si3)
    set_optab_handler (smax_optab, V4SImode, CODE_FOR_smaxv4si3);
  if (HAVE_sminv4si3)
    set_optab_handler (smin_optab, V4SImode, CODE_FOR_sminv4si3);
  if (HAVE_umaxv16qi3)
    set_optab_handler (umax_optab, V16QImode, CODE_FOR_umaxv16qi3);
  if (HAVE_uminv16qi3)
    set_optab_handler (umin_optab, V16QImode, CODE_FOR_uminv16qi3);
  if (HAVE_umaxv8hi3)
    set_optab_handler (umax_optab, V8HImode, CODE_FOR_umaxv8hi3);
  if (HAVE_uminv8hi3)
    set_optab_handler (umin_optab, V8HImode, CODE_FOR_uminv8hi3);
  if (HAVE_umaxv4si3)
    set_optab_handler (umax_optab, V4SImode, CODE_FOR_umaxv4si3);
  if (HAVE_uminv4si3)
    set_optab_handler (umin_optab, V4SImode, CODE_FOR_uminv4si3);
  if (HAVE_vcondv32qiv32qi)
    set_convert_optab_handler (vcond_optab, V32QImode, V32QImode, CODE_FOR_vcondv32qiv32qi);
  if (HAVE_vcondv16hiv32qi)
    set_convert_optab_handler (vcond_optab, V16HImode, V32QImode, CODE_FOR_vcondv16hiv32qi);
  if (HAVE_vcondv8siv32qi)
    set_convert_optab_handler (vcond_optab, V8SImode, V32QImode, CODE_FOR_vcondv8siv32qi);
  if (HAVE_vcondv4div32qi)
    set_convert_optab_handler (vcond_optab, V4DImode, V32QImode, CODE_FOR_vcondv4div32qi);
  if (HAVE_vcondv8sfv32qi)
    set_convert_optab_handler (vcond_optab, V8SFmode, V32QImode, CODE_FOR_vcondv8sfv32qi);
  if (HAVE_vcondv4dfv32qi)
    set_convert_optab_handler (vcond_optab, V4DFmode, V32QImode, CODE_FOR_vcondv4dfv32qi);
  if (HAVE_vcondv32qiv16hi)
    set_convert_optab_handler (vcond_optab, V32QImode, V16HImode, CODE_FOR_vcondv32qiv16hi);
  if (HAVE_vcondv16hiv16hi)
    set_convert_optab_handler (vcond_optab, V16HImode, V16HImode, CODE_FOR_vcondv16hiv16hi);
  if (HAVE_vcondv8siv16hi)
    set_convert_optab_handler (vcond_optab, V8SImode, V16HImode, CODE_FOR_vcondv8siv16hi);
  if (HAVE_vcondv4div16hi)
    set_convert_optab_handler (vcond_optab, V4DImode, V16HImode, CODE_FOR_vcondv4div16hi);
  if (HAVE_vcondv8sfv16hi)
    set_convert_optab_handler (vcond_optab, V8SFmode, V16HImode, CODE_FOR_vcondv8sfv16hi);
  if (HAVE_vcondv4dfv16hi)
    set_convert_optab_handler (vcond_optab, V4DFmode, V16HImode, CODE_FOR_vcondv4dfv16hi);
  if (HAVE_vcondv32qiv8si)
    set_convert_optab_handler (vcond_optab, V32QImode, V8SImode, CODE_FOR_vcondv32qiv8si);
  if (HAVE_vcondv16hiv8si)
    set_convert_optab_handler (vcond_optab, V16HImode, V8SImode, CODE_FOR_vcondv16hiv8si);
  if (HAVE_vcondv8siv8si)
    set_convert_optab_handler (vcond_optab, V8SImode, V8SImode, CODE_FOR_vcondv8siv8si);
  if (HAVE_vcondv4div8si)
    set_convert_optab_handler (vcond_optab, V4DImode, V8SImode, CODE_FOR_vcondv4div8si);
  if (HAVE_vcondv8sfv8si)
    set_convert_optab_handler (vcond_optab, V8SFmode, V8SImode, CODE_FOR_vcondv8sfv8si);
  if (HAVE_vcondv4dfv8si)
    set_convert_optab_handler (vcond_optab, V4DFmode, V8SImode, CODE_FOR_vcondv4dfv8si);
  if (HAVE_vcondv32qiv4di)
    set_convert_optab_handler (vcond_optab, V32QImode, V4DImode, CODE_FOR_vcondv32qiv4di);
  if (HAVE_vcondv16hiv4di)
    set_convert_optab_handler (vcond_optab, V16HImode, V4DImode, CODE_FOR_vcondv16hiv4di);
  if (HAVE_vcondv8siv4di)
    set_convert_optab_handler (vcond_optab, V8SImode, V4DImode, CODE_FOR_vcondv8siv4di);
  if (HAVE_vcondv4div4di)
    set_convert_optab_handler (vcond_optab, V4DImode, V4DImode, CODE_FOR_vcondv4div4di);
  if (HAVE_vcondv8sfv4di)
    set_convert_optab_handler (vcond_optab, V8SFmode, V4DImode, CODE_FOR_vcondv8sfv4di);
  if (HAVE_vcondv4dfv4di)
    set_convert_optab_handler (vcond_optab, V4DFmode, V4DImode, CODE_FOR_vcondv4dfv4di);
  if (HAVE_vcondv16qiv16qi)
    set_convert_optab_handler (vcond_optab, V16QImode, V16QImode, CODE_FOR_vcondv16qiv16qi);
  if (HAVE_vcondv8hiv16qi)
    set_convert_optab_handler (vcond_optab, V8HImode, V16QImode, CODE_FOR_vcondv8hiv16qi);
  if (HAVE_vcondv4siv16qi)
    set_convert_optab_handler (vcond_optab, V4SImode, V16QImode, CODE_FOR_vcondv4siv16qi);
  if (HAVE_vcondv2div16qi)
    set_convert_optab_handler (vcond_optab, V2DImode, V16QImode, CODE_FOR_vcondv2div16qi);
  if (HAVE_vcondv4sfv16qi)
    set_convert_optab_handler (vcond_optab, V4SFmode, V16QImode, CODE_FOR_vcondv4sfv16qi);
  if (HAVE_vcondv2dfv16qi)
    set_convert_optab_handler (vcond_optab, V2DFmode, V16QImode, CODE_FOR_vcondv2dfv16qi);
  if (HAVE_vcondv16qiv8hi)
    set_convert_optab_handler (vcond_optab, V16QImode, V8HImode, CODE_FOR_vcondv16qiv8hi);
  if (HAVE_vcondv8hiv8hi)
    set_convert_optab_handler (vcond_optab, V8HImode, V8HImode, CODE_FOR_vcondv8hiv8hi);
  if (HAVE_vcondv4siv8hi)
    set_convert_optab_handler (vcond_optab, V4SImode, V8HImode, CODE_FOR_vcondv4siv8hi);
  if (HAVE_vcondv2div8hi)
    set_convert_optab_handler (vcond_optab, V2DImode, V8HImode, CODE_FOR_vcondv2div8hi);
  if (HAVE_vcondv4sfv8hi)
    set_convert_optab_handler (vcond_optab, V4SFmode, V8HImode, CODE_FOR_vcondv4sfv8hi);
  if (HAVE_vcondv2dfv8hi)
    set_convert_optab_handler (vcond_optab, V2DFmode, V8HImode, CODE_FOR_vcondv2dfv8hi);
  if (HAVE_vcondv16qiv4si)
    set_convert_optab_handler (vcond_optab, V16QImode, V4SImode, CODE_FOR_vcondv16qiv4si);
  if (HAVE_vcondv8hiv4si)
    set_convert_optab_handler (vcond_optab, V8HImode, V4SImode, CODE_FOR_vcondv8hiv4si);
  if (HAVE_vcondv4siv4si)
    set_convert_optab_handler (vcond_optab, V4SImode, V4SImode, CODE_FOR_vcondv4siv4si);
  if (HAVE_vcondv2div4si)
    set_convert_optab_handler (vcond_optab, V2DImode, V4SImode, CODE_FOR_vcondv2div4si);
  if (HAVE_vcondv4sfv4si)
    set_convert_optab_handler (vcond_optab, V4SFmode, V4SImode, CODE_FOR_vcondv4sfv4si);
  if (HAVE_vcondv2dfv4si)
    set_convert_optab_handler (vcond_optab, V2DFmode, V4SImode, CODE_FOR_vcondv2dfv4si);
  if (HAVE_vcondv2div2di)
    set_convert_optab_handler (vcond_optab, V2DImode, V2DImode, CODE_FOR_vcondv2div2di);
  if (HAVE_vcondv2dfv2di)
    set_convert_optab_handler (vcond_optab, V2DFmode, V2DImode, CODE_FOR_vcondv2dfv2di);
  if (HAVE_vconduv32qiv32qi)
    set_convert_optab_handler (vcondu_optab, V32QImode, V32QImode, CODE_FOR_vconduv32qiv32qi);
  if (HAVE_vconduv16hiv32qi)
    set_convert_optab_handler (vcondu_optab, V16HImode, V32QImode, CODE_FOR_vconduv16hiv32qi);
  if (HAVE_vconduv8siv32qi)
    set_convert_optab_handler (vcondu_optab, V8SImode, V32QImode, CODE_FOR_vconduv8siv32qi);
  if (HAVE_vconduv4div32qi)
    set_convert_optab_handler (vcondu_optab, V4DImode, V32QImode, CODE_FOR_vconduv4div32qi);
  if (HAVE_vconduv8sfv32qi)
    set_convert_optab_handler (vcondu_optab, V8SFmode, V32QImode, CODE_FOR_vconduv8sfv32qi);
  if (HAVE_vconduv4dfv32qi)
    set_convert_optab_handler (vcondu_optab, V4DFmode, V32QImode, CODE_FOR_vconduv4dfv32qi);
  if (HAVE_vconduv32qiv16hi)
    set_convert_optab_handler (vcondu_optab, V32QImode, V16HImode, CODE_FOR_vconduv32qiv16hi);
  if (HAVE_vconduv16hiv16hi)
    set_convert_optab_handler (vcondu_optab, V16HImode, V16HImode, CODE_FOR_vconduv16hiv16hi);
  if (HAVE_vconduv8siv16hi)
    set_convert_optab_handler (vcondu_optab, V8SImode, V16HImode, CODE_FOR_vconduv8siv16hi);
  if (HAVE_vconduv4div16hi)
    set_convert_optab_handler (vcondu_optab, V4DImode, V16HImode, CODE_FOR_vconduv4div16hi);
  if (HAVE_vconduv8sfv16hi)
    set_convert_optab_handler (vcondu_optab, V8SFmode, V16HImode, CODE_FOR_vconduv8sfv16hi);
  if (HAVE_vconduv4dfv16hi)
    set_convert_optab_handler (vcondu_optab, V4DFmode, V16HImode, CODE_FOR_vconduv4dfv16hi);
  if (HAVE_vconduv32qiv8si)
    set_convert_optab_handler (vcondu_optab, V32QImode, V8SImode, CODE_FOR_vconduv32qiv8si);
  if (HAVE_vconduv16hiv8si)
    set_convert_optab_handler (vcondu_optab, V16HImode, V8SImode, CODE_FOR_vconduv16hiv8si);
  if (HAVE_vconduv8siv8si)
    set_convert_optab_handler (vcondu_optab, V8SImode, V8SImode, CODE_FOR_vconduv8siv8si);
  if (HAVE_vconduv4div8si)
    set_convert_optab_handler (vcondu_optab, V4DImode, V8SImode, CODE_FOR_vconduv4div8si);
  if (HAVE_vconduv8sfv8si)
    set_convert_optab_handler (vcondu_optab, V8SFmode, V8SImode, CODE_FOR_vconduv8sfv8si);
  if (HAVE_vconduv4dfv8si)
    set_convert_optab_handler (vcondu_optab, V4DFmode, V8SImode, CODE_FOR_vconduv4dfv8si);
  if (HAVE_vconduv32qiv4di)
    set_convert_optab_handler (vcondu_optab, V32QImode, V4DImode, CODE_FOR_vconduv32qiv4di);
  if (HAVE_vconduv16hiv4di)
    set_convert_optab_handler (vcondu_optab, V16HImode, V4DImode, CODE_FOR_vconduv16hiv4di);
  if (HAVE_vconduv8siv4di)
    set_convert_optab_handler (vcondu_optab, V8SImode, V4DImode, CODE_FOR_vconduv8siv4di);
  if (HAVE_vconduv4div4di)
    set_convert_optab_handler (vcondu_optab, V4DImode, V4DImode, CODE_FOR_vconduv4div4di);
  if (HAVE_vconduv8sfv4di)
    set_convert_optab_handler (vcondu_optab, V8SFmode, V4DImode, CODE_FOR_vconduv8sfv4di);
  if (HAVE_vconduv4dfv4di)
    set_convert_optab_handler (vcondu_optab, V4DFmode, V4DImode, CODE_FOR_vconduv4dfv4di);
  if (HAVE_vconduv16qiv16qi)
    set_convert_optab_handler (vcondu_optab, V16QImode, V16QImode, CODE_FOR_vconduv16qiv16qi);
  if (HAVE_vconduv8hiv16qi)
    set_convert_optab_handler (vcondu_optab, V8HImode, V16QImode, CODE_FOR_vconduv8hiv16qi);
  if (HAVE_vconduv4siv16qi)
    set_convert_optab_handler (vcondu_optab, V4SImode, V16QImode, CODE_FOR_vconduv4siv16qi);
  if (HAVE_vconduv2div16qi)
    set_convert_optab_handler (vcondu_optab, V2DImode, V16QImode, CODE_FOR_vconduv2div16qi);
  if (HAVE_vconduv4sfv16qi)
    set_convert_optab_handler (vcondu_optab, V4SFmode, V16QImode, CODE_FOR_vconduv4sfv16qi);
  if (HAVE_vconduv2dfv16qi)
    set_convert_optab_handler (vcondu_optab, V2DFmode, V16QImode, CODE_FOR_vconduv2dfv16qi);
  if (HAVE_vconduv16qiv8hi)
    set_convert_optab_handler (vcondu_optab, V16QImode, V8HImode, CODE_FOR_vconduv16qiv8hi);
  if (HAVE_vconduv8hiv8hi)
    set_convert_optab_handler (vcondu_optab, V8HImode, V8HImode, CODE_FOR_vconduv8hiv8hi);
  if (HAVE_vconduv4siv8hi)
    set_convert_optab_handler (vcondu_optab, V4SImode, V8HImode, CODE_FOR_vconduv4siv8hi);
  if (HAVE_vconduv2div8hi)
    set_convert_optab_handler (vcondu_optab, V2DImode, V8HImode, CODE_FOR_vconduv2div8hi);
  if (HAVE_vconduv4sfv8hi)
    set_convert_optab_handler (vcondu_optab, V4SFmode, V8HImode, CODE_FOR_vconduv4sfv8hi);
  if (HAVE_vconduv2dfv8hi)
    set_convert_optab_handler (vcondu_optab, V2DFmode, V8HImode, CODE_FOR_vconduv2dfv8hi);
  if (HAVE_vconduv16qiv4si)
    set_convert_optab_handler (vcondu_optab, V16QImode, V4SImode, CODE_FOR_vconduv16qiv4si);
  if (HAVE_vconduv8hiv4si)
    set_convert_optab_handler (vcondu_optab, V8HImode, V4SImode, CODE_FOR_vconduv8hiv4si);
  if (HAVE_vconduv4siv4si)
    set_convert_optab_handler (vcondu_optab, V4SImode, V4SImode, CODE_FOR_vconduv4siv4si);
  if (HAVE_vconduv2div4si)
    set_convert_optab_handler (vcondu_optab, V2DImode, V4SImode, CODE_FOR_vconduv2div4si);
  if (HAVE_vconduv4sfv4si)
    set_convert_optab_handler (vcondu_optab, V4SFmode, V4SImode, CODE_FOR_vconduv4sfv4si);
  if (HAVE_vconduv2dfv4si)
    set_convert_optab_handler (vcondu_optab, V2DFmode, V4SImode, CODE_FOR_vconduv2dfv4si);
  if (HAVE_vconduv2div2di)
    set_convert_optab_handler (vcondu_optab, V2DImode, V2DImode, CODE_FOR_vconduv2div2di);
  if (HAVE_vconduv2dfv2di)
    set_convert_optab_handler (vcondu_optab, V2DFmode, V2DImode, CODE_FOR_vconduv2dfv2di);
  if (HAVE_vec_permv16qi)
    set_direct_optab_handler (vec_perm_optab, V16QImode, CODE_FOR_vec_permv16qi);
  if (HAVE_vec_permv8hi)
    set_direct_optab_handler (vec_perm_optab, V8HImode, CODE_FOR_vec_permv8hi);
  if (HAVE_vec_permv4si)
    set_direct_optab_handler (vec_perm_optab, V4SImode, CODE_FOR_vec_permv4si);
  if (HAVE_vec_permv2di)
    set_direct_optab_handler (vec_perm_optab, V2DImode, CODE_FOR_vec_permv2di);
  if (HAVE_vec_permv4sf)
    set_direct_optab_handler (vec_perm_optab, V4SFmode, CODE_FOR_vec_permv4sf);
  if (HAVE_vec_permv2df)
    set_direct_optab_handler (vec_perm_optab, V2DFmode, CODE_FOR_vec_permv2df);
  if (HAVE_vec_permv32qi)
    set_direct_optab_handler (vec_perm_optab, V32QImode, CODE_FOR_vec_permv32qi);
  if (HAVE_vec_permv16hi)
    set_direct_optab_handler (vec_perm_optab, V16HImode, CODE_FOR_vec_permv16hi);
  if (HAVE_vec_permv8si)
    set_direct_optab_handler (vec_perm_optab, V8SImode, CODE_FOR_vec_permv8si);
  if (HAVE_vec_permv4di)
    set_direct_optab_handler (vec_perm_optab, V4DImode, CODE_FOR_vec_permv4di);
  if (HAVE_vec_permv8sf)
    set_direct_optab_handler (vec_perm_optab, V8SFmode, CODE_FOR_vec_permv8sf);
  if (HAVE_vec_permv4df)
    set_direct_optab_handler (vec_perm_optab, V4DFmode, CODE_FOR_vec_permv4df);
  if (HAVE_vec_perm_constv4sf)
    set_direct_optab_handler (vec_perm_const_optab, V4SFmode, CODE_FOR_vec_perm_constv4sf);
  if (HAVE_vec_perm_constv4si)
    set_direct_optab_handler (vec_perm_const_optab, V4SImode, CODE_FOR_vec_perm_constv4si);
  if (HAVE_vec_perm_constv2df)
    set_direct_optab_handler (vec_perm_const_optab, V2DFmode, CODE_FOR_vec_perm_constv2df);
  if (HAVE_vec_perm_constv2di)
    set_direct_optab_handler (vec_perm_const_optab, V2DImode, CODE_FOR_vec_perm_constv2di);
  if (HAVE_vec_perm_constv16qi)
    set_direct_optab_handler (vec_perm_const_optab, V16QImode, CODE_FOR_vec_perm_constv16qi);
  if (HAVE_vec_perm_constv8hi)
    set_direct_optab_handler (vec_perm_const_optab, V8HImode, CODE_FOR_vec_perm_constv8hi);
  if (HAVE_vec_perm_constv8sf)
    set_direct_optab_handler (vec_perm_const_optab, V8SFmode, CODE_FOR_vec_perm_constv8sf);
  if (HAVE_vec_perm_constv4df)
    set_direct_optab_handler (vec_perm_const_optab, V4DFmode, CODE_FOR_vec_perm_constv4df);
  if (HAVE_vec_perm_constv8si)
    set_direct_optab_handler (vec_perm_const_optab, V8SImode, CODE_FOR_vec_perm_constv8si);
  if (HAVE_vec_perm_constv4di)
    set_direct_optab_handler (vec_perm_const_optab, V4DImode, CODE_FOR_vec_perm_constv4di);
  if (HAVE_vec_perm_constv32qi)
    set_direct_optab_handler (vec_perm_const_optab, V32QImode, CODE_FOR_vec_perm_constv32qi);
  if (HAVE_vec_perm_constv16hi)
    set_direct_optab_handler (vec_perm_const_optab, V16HImode, CODE_FOR_vec_perm_constv16hi);
  if (HAVE_one_cmplv32qi2)
    set_optab_handler (one_cmpl_optab, V32QImode, CODE_FOR_one_cmplv32qi2);
  if (HAVE_one_cmplv16qi2)
    set_optab_handler (one_cmpl_optab, V16QImode, CODE_FOR_one_cmplv16qi2);
  if (HAVE_one_cmplv16hi2)
    set_optab_handler (one_cmpl_optab, V16HImode, CODE_FOR_one_cmplv16hi2);
  if (HAVE_one_cmplv8hi2)
    set_optab_handler (one_cmpl_optab, V8HImode, CODE_FOR_one_cmplv8hi2);
  if (HAVE_one_cmplv8si2)
    set_optab_handler (one_cmpl_optab, V8SImode, CODE_FOR_one_cmplv8si2);
  if (HAVE_one_cmplv4si2)
    set_optab_handler (one_cmpl_optab, V4SImode, CODE_FOR_one_cmplv4si2);
  if (HAVE_one_cmplv4di2)
    set_optab_handler (one_cmpl_optab, V4DImode, CODE_FOR_one_cmplv4di2);
  if (HAVE_one_cmplv2di2)
    set_optab_handler (one_cmpl_optab, V2DImode, CODE_FOR_one_cmplv2di2);
  if (HAVE_andv32qi3)
    set_optab_handler (and_optab, V32QImode, CODE_FOR_andv32qi3);
  if (HAVE_iorv32qi3)
    set_optab_handler (ior_optab, V32QImode, CODE_FOR_iorv32qi3);
  if (HAVE_xorv32qi3)
    set_optab_handler (xor_optab, V32QImode, CODE_FOR_xorv32qi3);
  if (HAVE_andv16qi3)
    set_optab_handler (and_optab, V16QImode, CODE_FOR_andv16qi3);
  if (HAVE_iorv16qi3)
    set_optab_handler (ior_optab, V16QImode, CODE_FOR_iorv16qi3);
  if (HAVE_xorv16qi3)
    set_optab_handler (xor_optab, V16QImode, CODE_FOR_xorv16qi3);
  if (HAVE_andv16hi3)
    set_optab_handler (and_optab, V16HImode, CODE_FOR_andv16hi3);
  if (HAVE_iorv16hi3)
    set_optab_handler (ior_optab, V16HImode, CODE_FOR_iorv16hi3);
  if (HAVE_xorv16hi3)
    set_optab_handler (xor_optab, V16HImode, CODE_FOR_xorv16hi3);
  if (HAVE_andv8hi3)
    set_optab_handler (and_optab, V8HImode, CODE_FOR_andv8hi3);
  if (HAVE_iorv8hi3)
    set_optab_handler (ior_optab, V8HImode, CODE_FOR_iorv8hi3);
  if (HAVE_xorv8hi3)
    set_optab_handler (xor_optab, V8HImode, CODE_FOR_xorv8hi3);
  if (HAVE_andv8si3)
    set_optab_handler (and_optab, V8SImode, CODE_FOR_andv8si3);
  if (HAVE_iorv8si3)
    set_optab_handler (ior_optab, V8SImode, CODE_FOR_iorv8si3);
  if (HAVE_xorv8si3)
    set_optab_handler (xor_optab, V8SImode, CODE_FOR_xorv8si3);
  if (HAVE_andv4si3)
    set_optab_handler (and_optab, V4SImode, CODE_FOR_andv4si3);
  if (HAVE_iorv4si3)
    set_optab_handler (ior_optab, V4SImode, CODE_FOR_iorv4si3);
  if (HAVE_xorv4si3)
    set_optab_handler (xor_optab, V4SImode, CODE_FOR_xorv4si3);
  if (HAVE_andv4di3)
    set_optab_handler (and_optab, V4DImode, CODE_FOR_andv4di3);
  if (HAVE_iorv4di3)
    set_optab_handler (ior_optab, V4DImode, CODE_FOR_iorv4di3);
  if (HAVE_xorv4di3)
    set_optab_handler (xor_optab, V4DImode, CODE_FOR_xorv4di3);
  if (HAVE_andv2di3)
    set_optab_handler (and_optab, V2DImode, CODE_FOR_andv2di3);
  if (HAVE_iorv2di3)
    set_optab_handler (ior_optab, V2DImode, CODE_FOR_iorv2di3);
  if (HAVE_xorv2di3)
    set_optab_handler (xor_optab, V2DImode, CODE_FOR_xorv2di3);
  if (HAVE_andtf3)
    set_optab_handler (and_optab, TFmode, CODE_FOR_andtf3);
  if (HAVE_iortf3)
    set_optab_handler (ior_optab, TFmode, CODE_FOR_iortf3);
  if (HAVE_xortf3)
    set_optab_handler (xor_optab, TFmode, CODE_FOR_xortf3);
  if (HAVE_vec_pack_trunc_v16hi)
    set_optab_handler (vec_pack_trunc_optab, V16HImode, CODE_FOR_vec_pack_trunc_v16hi);
  if (HAVE_vec_pack_trunc_v8hi)
    set_optab_handler (vec_pack_trunc_optab, V8HImode, CODE_FOR_vec_pack_trunc_v8hi);
  if (HAVE_vec_pack_trunc_v8si)
    set_optab_handler (vec_pack_trunc_optab, V8SImode, CODE_FOR_vec_pack_trunc_v8si);
  if (HAVE_vec_pack_trunc_v4si)
    set_optab_handler (vec_pack_trunc_optab, V4SImode, CODE_FOR_vec_pack_trunc_v4si);
  if (HAVE_vec_pack_trunc_v4di)
    set_optab_handler (vec_pack_trunc_optab, V4DImode, CODE_FOR_vec_pack_trunc_v4di);
  if (HAVE_vec_pack_trunc_v2di)
    set_optab_handler (vec_pack_trunc_optab, V2DImode, CODE_FOR_vec_pack_trunc_v2di);
  if (HAVE_vec_unpacks_lo_v32qi)
    set_optab_handler (vec_unpacks_lo_optab, V32QImode, CODE_FOR_vec_unpacks_lo_v32qi);
  if (HAVE_vec_unpacks_lo_v16qi)
    set_optab_handler (vec_unpacks_lo_optab, V16QImode, CODE_FOR_vec_unpacks_lo_v16qi);
  if (HAVE_vec_unpacks_lo_v16hi)
    set_optab_handler (vec_unpacks_lo_optab, V16HImode, CODE_FOR_vec_unpacks_lo_v16hi);
  if (HAVE_vec_unpacks_lo_v8hi)
    set_optab_handler (vec_unpacks_lo_optab, V8HImode, CODE_FOR_vec_unpacks_lo_v8hi);
  if (HAVE_vec_unpacks_lo_v8si)
    set_optab_handler (vec_unpacks_lo_optab, V8SImode, CODE_FOR_vec_unpacks_lo_v8si);
  if (HAVE_vec_unpacks_lo_v4si)
    set_optab_handler (vec_unpacks_lo_optab, V4SImode, CODE_FOR_vec_unpacks_lo_v4si);
  if (HAVE_vec_unpacks_hi_v32qi)
    set_optab_handler (vec_unpacks_hi_optab, V32QImode, CODE_FOR_vec_unpacks_hi_v32qi);
  if (HAVE_vec_unpacks_hi_v16qi)
    set_optab_handler (vec_unpacks_hi_optab, V16QImode, CODE_FOR_vec_unpacks_hi_v16qi);
  if (HAVE_vec_unpacks_hi_v16hi)
    set_optab_handler (vec_unpacks_hi_optab, V16HImode, CODE_FOR_vec_unpacks_hi_v16hi);
  if (HAVE_vec_unpacks_hi_v8hi)
    set_optab_handler (vec_unpacks_hi_optab, V8HImode, CODE_FOR_vec_unpacks_hi_v8hi);
  if (HAVE_vec_unpacks_hi_v8si)
    set_optab_handler (vec_unpacks_hi_optab, V8SImode, CODE_FOR_vec_unpacks_hi_v8si);
  if (HAVE_vec_unpacks_hi_v4si)
    set_optab_handler (vec_unpacks_hi_optab, V4SImode, CODE_FOR_vec_unpacks_hi_v4si);
  if (HAVE_vec_unpacku_lo_v32qi)
    set_optab_handler (vec_unpacku_lo_optab, V32QImode, CODE_FOR_vec_unpacku_lo_v32qi);
  if (HAVE_vec_unpacku_lo_v16qi)
    set_optab_handler (vec_unpacku_lo_optab, V16QImode, CODE_FOR_vec_unpacku_lo_v16qi);
  if (HAVE_vec_unpacku_lo_v16hi)
    set_optab_handler (vec_unpacku_lo_optab, V16HImode, CODE_FOR_vec_unpacku_lo_v16hi);
  if (HAVE_vec_unpacku_lo_v8hi)
    set_optab_handler (vec_unpacku_lo_optab, V8HImode, CODE_FOR_vec_unpacku_lo_v8hi);
  if (HAVE_vec_unpacku_lo_v8si)
    set_optab_handler (vec_unpacku_lo_optab, V8SImode, CODE_FOR_vec_unpacku_lo_v8si);
  if (HAVE_vec_unpacku_lo_v4si)
    set_optab_handler (vec_unpacku_lo_optab, V4SImode, CODE_FOR_vec_unpacku_lo_v4si);
  if (HAVE_vec_unpacku_hi_v32qi)
    set_optab_handler (vec_unpacku_hi_optab, V32QImode, CODE_FOR_vec_unpacku_hi_v32qi);
  if (HAVE_vec_unpacku_hi_v16qi)
    set_optab_handler (vec_unpacku_hi_optab, V16QImode, CODE_FOR_vec_unpacku_hi_v16qi);
  if (HAVE_vec_unpacku_hi_v16hi)
    set_optab_handler (vec_unpacku_hi_optab, V16HImode, CODE_FOR_vec_unpacku_hi_v16hi);
  if (HAVE_vec_unpacku_hi_v8hi)
    set_optab_handler (vec_unpacku_hi_optab, V8HImode, CODE_FOR_vec_unpacku_hi_v8hi);
  if (HAVE_vec_unpacku_hi_v8si)
    set_optab_handler (vec_unpacku_hi_optab, V8SImode, CODE_FOR_vec_unpacku_hi_v8si);
  if (HAVE_vec_unpacku_hi_v4si)
    set_optab_handler (vec_unpacku_hi_optab, V4SImode, CODE_FOR_vec_unpacku_hi_v4si);
  if (HAVE_roundv8sf2)
    set_optab_handler (round_optab, V8SFmode, CODE_FOR_roundv8sf2);
  if (HAVE_roundv4sf2)
    set_optab_handler (round_optab, V4SFmode, CODE_FOR_roundv4sf2);
  if (HAVE_roundv4df2)
    set_optab_handler (round_optab, V4DFmode, CODE_FOR_roundv4df2);
  if (HAVE_roundv2df2)
    set_optab_handler (round_optab, V2DFmode, CODE_FOR_roundv2df2);
  if (HAVE_rotlv16qi3)
    set_optab_handler (rotl_optab, V16QImode, CODE_FOR_rotlv16qi3);
  if (HAVE_rotlv8hi3)
    set_optab_handler (rotl_optab, V8HImode, CODE_FOR_rotlv8hi3);
  if (HAVE_rotlv4si3)
    set_optab_handler (rotl_optab, V4SImode, CODE_FOR_rotlv4si3);
  if (HAVE_rotlv2di3)
    set_optab_handler (rotl_optab, V2DImode, CODE_FOR_rotlv2di3);
  if (HAVE_rotrv16qi3)
    set_optab_handler (rotr_optab, V16QImode, CODE_FOR_rotrv16qi3);
  if (HAVE_rotrv8hi3)
    set_optab_handler (rotr_optab, V8HImode, CODE_FOR_rotrv8hi3);
  if (HAVE_rotrv4si3)
    set_optab_handler (rotr_optab, V4SImode, CODE_FOR_rotrv4si3);
  if (HAVE_rotrv2di3)
    set_optab_handler (rotr_optab, V2DImode, CODE_FOR_rotrv2di3);
  if (HAVE_vrotrv16qi3)
    set_optab_handler (vrotr_optab, V16QImode, CODE_FOR_vrotrv16qi3);
  if (HAVE_vrotrv8hi3)
    set_optab_handler (vrotr_optab, V8HImode, CODE_FOR_vrotrv8hi3);
  if (HAVE_vrotrv4si3)
    set_optab_handler (vrotr_optab, V4SImode, CODE_FOR_vrotrv4si3);
  if (HAVE_vrotrv2di3)
    set_optab_handler (vrotr_optab, V2DImode, CODE_FOR_vrotrv2di3);
  if (HAVE_vrotlv16qi3)
    set_optab_handler (vrotl_optab, V16QImode, CODE_FOR_vrotlv16qi3);
  if (HAVE_vrotlv8hi3)
    set_optab_handler (vrotl_optab, V8HImode, CODE_FOR_vrotlv8hi3);
  if (HAVE_vrotlv4si3)
    set_optab_handler (vrotl_optab, V4SImode, CODE_FOR_vrotlv4si3);
  if (HAVE_vrotlv2di3)
    set_optab_handler (vrotl_optab, V2DImode, CODE_FOR_vrotlv2di3);
  if (HAVE_vlshrv16qi3)
    set_optab_handler (vlshr_optab, V16QImode, CODE_FOR_vlshrv16qi3);
  if (HAVE_vlshrv8hi3)
    set_optab_handler (vlshr_optab, V8HImode, CODE_FOR_vlshrv8hi3);
  if (HAVE_vlshrv4si3)
    set_optab_handler (vlshr_optab, V4SImode, CODE_FOR_vlshrv4si3);
  if (HAVE_vlshrv2di3)
    set_optab_handler (vlshr_optab, V2DImode, CODE_FOR_vlshrv2di3);
  if (HAVE_vlshrv8si3)
    set_optab_handler (vlshr_optab, V8SImode, CODE_FOR_vlshrv8si3);
  if (HAVE_vlshrv4di3)
    set_optab_handler (vlshr_optab, V4DImode, CODE_FOR_vlshrv4di3);
  if (HAVE_vashrv16qi3)
    set_optab_handler (vashr_optab, V16QImode, CODE_FOR_vashrv16qi3);
  if (HAVE_vashrv8hi3)
    set_optab_handler (vashr_optab, V8HImode, CODE_FOR_vashrv8hi3);
  if (HAVE_vashrv2di3)
    set_optab_handler (vashr_optab, V2DImode, CODE_FOR_vashrv2di3);
  if (HAVE_vashrv4si3)
    set_optab_handler (vashr_optab, V4SImode, CODE_FOR_vashrv4si3);
  if (HAVE_vashrv8si3)
    set_optab_handler (vashr_optab, V8SImode, CODE_FOR_vashrv8si3);
  if (HAVE_vashlv16qi3)
    set_optab_handler (vashl_optab, V16QImode, CODE_FOR_vashlv16qi3);
  if (HAVE_vashlv8hi3)
    set_optab_handler (vashl_optab, V8HImode, CODE_FOR_vashlv8hi3);
  if (HAVE_vashlv4si3)
    set_optab_handler (vashl_optab, V4SImode, CODE_FOR_vashlv4si3);
  if (HAVE_vashlv2di3)
    set_optab_handler (vashl_optab, V2DImode, CODE_FOR_vashlv2di3);
  if (HAVE_vashlv8si3)
    set_optab_handler (vashl_optab, V8SImode, CODE_FOR_vashlv8si3);
  if (HAVE_vashlv4di3)
    set_optab_handler (vashl_optab, V4DImode, CODE_FOR_vashlv4di3);
  if (HAVE_ashlv16qi3)
    set_optab_handler (ashl_optab, V16QImode, CODE_FOR_ashlv16qi3);
  if (HAVE_lshrv16qi3)
    set_optab_handler (lshr_optab, V16QImode, CODE_FOR_lshrv16qi3);
  if (HAVE_ashrv16qi3)
    set_optab_handler (ashr_optab, V16QImode, CODE_FOR_ashrv16qi3);
  if (HAVE_ashrv2di3)
    set_optab_handler (ashr_optab, V2DImode, CODE_FOR_ashrv2di3);
  if (HAVE_vec_initv32qi)
    set_optab_handler (vec_init_optab, V32QImode, CODE_FOR_vec_initv32qi);
  if (HAVE_vec_initv16hi)
    set_optab_handler (vec_init_optab, V16HImode, CODE_FOR_vec_initv16hi);
  if (HAVE_vec_initv8si)
    set_optab_handler (vec_init_optab, V8SImode, CODE_FOR_vec_initv8si);
  if (HAVE_vec_initv4di)
    set_optab_handler (vec_init_optab, V4DImode, CODE_FOR_vec_initv4di);
  if (HAVE_vec_initv8sf)
    set_optab_handler (vec_init_optab, V8SFmode, CODE_FOR_vec_initv8sf);
  if (HAVE_vec_initv4df)
    set_optab_handler (vec_init_optab, V4DFmode, CODE_FOR_vec_initv4df);
  set_direct_optab_handler (atomic_load_optab, QImode, CODE_FOR_atomic_loadqi);
  set_direct_optab_handler (atomic_load_optab, HImode, CODE_FOR_atomic_loadhi);
  set_direct_optab_handler (atomic_load_optab, SImode, CODE_FOR_atomic_loadsi);
  if (HAVE_atomic_loaddi)
    set_direct_optab_handler (atomic_load_optab, DImode, CODE_FOR_atomic_loaddi);
  set_direct_optab_handler (atomic_store_optab, QImode, CODE_FOR_atomic_storeqi);
  set_direct_optab_handler (atomic_store_optab, HImode, CODE_FOR_atomic_storehi);
  set_direct_optab_handler (atomic_store_optab, SImode, CODE_FOR_atomic_storesi);
  if (HAVE_atomic_storedi)
    set_direct_optab_handler (atomic_store_optab, DImode, CODE_FOR_atomic_storedi);
  if (HAVE_atomic_compare_and_swapqi)
    set_direct_optab_handler (atomic_compare_and_swap_optab, QImode, CODE_FOR_atomic_compare_and_swapqi);
  if (HAVE_atomic_compare_and_swaphi)
    set_direct_optab_handler (atomic_compare_and_swap_optab, HImode, CODE_FOR_atomic_compare_and_swaphi);
  if (HAVE_atomic_compare_and_swapsi)
    set_direct_optab_handler (atomic_compare_and_swap_optab, SImode, CODE_FOR_atomic_compare_and_swapsi);
  if (HAVE_atomic_compare_and_swapdi)
    set_direct_optab_handler (atomic_compare_and_swap_optab, DImode, CODE_FOR_atomic_compare_and_swapdi);
  if (HAVE_atomic_compare_and_swapti)
    set_direct_optab_handler (atomic_compare_and_swap_optab, TImode, CODE_FOR_atomic_compare_and_swapti);

#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  /* This flag says the same insns that convert to a signed fixnum
     also convert validly to an unsigned one.  */
  for (i = 0; i < NUM_MACHINE_MODES; i++)
    for (j = 0; j < NUM_MACHINE_MODES; j++)
      set_convert_optab_handler
 	(ufixtrunc_optab, (enum machine_mode) i, (enum machine_mode) j,
	 convert_optab_handler (sfixtrunc_optab, (enum machine_mode) i,
						 (enum machine_mode) j));
#endif
}
