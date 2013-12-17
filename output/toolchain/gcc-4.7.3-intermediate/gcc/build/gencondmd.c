/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

  { "(ix86_target_stack_probe ()) && (Pmode == DImode)",
    __builtin_constant_p (
#line 16703 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 16703 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 11644 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AES",
    __builtin_constant_p 
#line 11644 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AES)
    ? (int) 
#line 11644 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AES)
    : -1 },
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))\n\
   && ix86_binary_operator_ok (PLUS, V1DImode, operands)",
    __builtin_constant_p 
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V1DImode, operands))
    ? (int) 
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V1DImode, operands))
    : -1 },
  { "(TARGET_SSSE3) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 9350 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 201 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 9350 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 201 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
  { "(TARGET_VZEROUPPER && !TARGET_64BIT && SIBLING_CALL_P (insn)) && ( reload_completed)",
    __builtin_constant_p (
#line 11580 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT && SIBLING_CALL_P (insn)) && 
#line 11582 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 11580 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT && SIBLING_CALL_P (insn)) && 
#line 11582 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, V16QImode, operands)",
    __builtin_constant_p 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V16QImode, operands))
    ? (int) 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V16QImode, operands))
    : -1 },
#line 5832 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 5832 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 5832 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 4924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 4924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 4924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 4420 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && reload_completed",
    __builtin_constant_p 
#line 4420 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE3 && reload_completed)
    ? (int) 
#line 4420 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE3 && reload_completed)
    : -1 },
  { "(ix86_match_ccmode (insn, CCNOmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8911 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8911 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1742 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT || TARGET_SSE",
    __builtin_constant_p 
#line 1742 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_SSE)
    ? (int) 
#line 1742 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_SSE)
    : -1 },
#line 5177 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5177 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5177 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 10550 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 10550 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 10550 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_PARTIAL_REG_STALL)
    : -1 },
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V8HImode)\n\
       || register_operand (operands[1], V8HImode))",
    __builtin_constant_p 
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    ? (int) 
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    : -1 },
  { "(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 15962 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 15962 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V16QImode)\n\
       == GET_MODE_NUNITS (V16QImode))",
    __builtin_constant_p 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V16QImode)))
    ? (int) 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V16QImode)))
    : -1 },
#line 4406 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4406 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 4406 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    : -1 },
  { "(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 15962 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 15962 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
  { "(optimize_insn_for_size_p ()\n\
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 15491 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 15491 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 15491 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
#line 1671 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 1671 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1])))
    ? (int) 
#line 1671 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1])))
    : -1 },
#line 17768 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_HAS_BIONIC",
    __builtin_constant_p 
#line 17768 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_HAS_BIONIC)
    ? (int) 
#line 17768 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_HAS_BIONIC)
    : -1 },
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (SFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V4SFmode)\n\
       == GET_MODE_NUNITS (V16QImode))",
    __builtin_constant_p 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V16QImode)))
    ? (int) 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V16QImode)))
    : -1 },
#line 9353 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[1] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))",
    __builtin_constant_p 
#line 9353 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[1] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    ? (int) 
#line 9353 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[1] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    : -1 },
#line 3337 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_MODE (operands[0]) == TFmode\n\
       || GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == DFmode\n\
       || GET_MODE (operands[0]) == SFmode)\n\
   && (operands[2] = find_constant_src (insn))",
    __builtin_constant_p 
#line 3337 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode
       || GET_MODE (operands[0]) == SFmode)
   && (operands[2] = find_constant_src (insn)))
    ? (int) 
#line 3337 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode
       || GET_MODE (operands[0]) == SFmode)
   && (operands[2] = find_constant_src (insn)))
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (SFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4826 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4826 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 5289 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 5289 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 5289 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    : -1 },
#line 1552 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1552 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1552 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V8SFmode)\n\
       == GET_MODE_NUNITS (V8SFmode))",
    __builtin_constant_p 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V8SFmode)))
    ? (int) 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V8SFmode)))
    : -1 },
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (GET_MODE_NUNITS (V16QImode)\n\
       == GET_MODE_NUNITS (V4SFmode))",
    __builtin_constant_p 
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V4SFmode)))
    ? (int) 
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V4SFmode)))
    : -1 },
#line 17665 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE || TARGET_3DNOW",
    __builtin_constant_p 
#line 17665 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE || TARGET_3DNOW)
    ? (int) 
#line 17665 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE || TARGET_3DNOW)
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V8SImode)\n\
       == GET_MODE_NUNITS (V32QImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V32QImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V32QImode)))
    : -1 },
#line 5375 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)\n\
   && TARGET_SSE\n\
   && reload_completed",
    __builtin_constant_p 
#line 5375 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    ? (int) 
#line 5375 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    : -1 },
#line 2832 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && !TARGET_64BIT\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (!can_create_pseudo_p ()\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || (optimize_function_for_size_p (cfun)\n\
	   && standard_sse_constant_p (operands[1])\n\
	   && !memory_operand (operands[0], TFmode))\n\
       || (!TARGET_MEMORY_MISMATCH_STALL\n\
	   && memory_operand (operands[0], TFmode)))",
    __builtin_constant_p 
#line 2832 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && !TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && standard_sse_constant_p (operands[1])
	   && !memory_operand (operands[0], TFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], TFmode))))
    ? (int) 
#line 2832 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && !TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && standard_sse_constant_p (operands[1])
	   && !memory_operand (operands[0], TFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], TFmode))))
    : -1 },
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT",
    __builtin_constant_p 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT)
    ? (int) 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT)
    : -1 },
#line 5226 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5226 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5226 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
  { "(TARGET_FMA4) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1993 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_FMA4) && 
#line 143 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1993 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_FMA4) && 
#line 143 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((DImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(TARGET_AVX) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 12328 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 216 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 12328 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 216 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 1388 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 1388 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 1388 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
  { "(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 16229 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 16229 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, V8HImode, operands)",
    __builtin_constant_p 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V8HImode, operands))
    ? (int) 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V8HImode, operands))
    : -1 },
#line 9542 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || TARGET_DOUBLE_WITH_ADD)))\n\
   && ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 9542 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 9542 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
#line 4170 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 4170 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 4170 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V8SFmode)\n\
       == GET_MODE_NUNITS (V4DImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V4DImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V4DImode)))
    : -1 },
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (DFmode, DImode)",
    __builtin_constant_p 
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, DImode))
    ? (int) 
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, DImode))
    : -1 },
#line 4119 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4119 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387)
    ? (int) 
#line 4119 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387)
    : -1 },
#line 3235 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (!can_create_pseudo_p ()\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || (optimize_function_for_size_p (cfun)\n\
	   && ((!TARGET_SSE_MATH\n\
		&& standard_80387_constant_p (operands[1]) > 0)\n\
	       || (TARGET_SSE_MATH\n\
		   && standard_sse_constant_p (operands[1]))))\n\
       || memory_operand (operands[0], SFmode))",
    __builtin_constant_p 
#line 3235 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && ((!TARGET_SSE_MATH
		&& standard_80387_constant_p (operands[1]) > 0)
	       || (TARGET_SSE_MATH
		   && standard_sse_constant_p (operands[1]))))
       || memory_operand (operands[0], SFmode)))
    ? (int) 
#line 3235 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && ((!TARGET_SSE_MATH
		&& standard_80387_constant_p (operands[1]) > 0)
	       || (TARGET_SSE_MATH
		   && standard_sse_constant_p (operands[1]))))
       || memory_operand (operands[0], SFmode)))
    : -1 },
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V32QImode, operands)",
    __builtin_constant_p 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V32QImode, operands))
    ? (int) 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V32QImode, operands))
    : -1 },
  { "(TARGET_VZEROUPPER && !TARGET_64BIT && !SIBLING_CALL_P (insn)) && ( reload_completed)",
    __builtin_constant_p (
#line 11553 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT && !SIBLING_CALL_P (insn)) && 
#line 11555 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 11553 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT && !SIBLING_CALL_P (insn)) && 
#line 11555 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 12788 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_X32",
    __builtin_constant_p 
#line 12788 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_X32)
    ? (int) 
#line 12788 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_X32)
    : -1 },
#line 4950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 4950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 4950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p 
((TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && (TARGET_AVX2))
    ? (int) 
((TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && (TARGET_AVX2))
    : -1 },
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 8866 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, HImode, operands)",
    __builtin_constant_p 
#line 8866 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands))
    ? (int) 
#line 8866 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands))
    : -1 },
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    ? (int) 
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    : -1 },
  { "(TARGET_SSE\n\
   && (register_operand (operands[0], V8SImode)\n\
       || register_operand (operands[1], V8SImode))) && (TARGET_AVX)",
    __builtin_constant_p (
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8SImode)
       || register_operand (operands[1], V8SImode))) && 
#line 105 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8SImode)
       || register_operand (operands[1], V8SImode))) && 
#line 105 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V16HImode)\n\
       == GET_MODE_NUNITS (V4DImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V4DImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V4DImode)))
    : -1 },
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    ? (int) 
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    : -1 },
#line 5832 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 5832 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 5832 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 15630 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15630 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 15630 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 5329 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5329 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed)
    ? (int) 
#line 5329 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed)
    : -1 },
#line 13081 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (DFmode)\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13081 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13081 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, V32QImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE
   && ix86_binary_operator_ok (IOR, V32QImode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE
   && ix86_binary_operator_ok (IOR, V32QImode, operands)) && (TARGET_AVX))
    : -1 },
#line 6465 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6465 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6465 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V32QImode)\n\
       == GET_MODE_NUNITS (V8SFmode))",
    __builtin_constant_p 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V8SFmode)))
    ? (int) 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V8SFmode)))
    : -1 },
#line 4910 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 4910 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 4910 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
  { "((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (Pmode)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17419 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17419 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
  { "(TARGET_LWP) && (Pmode == SImode)",
    __builtin_constant_p (
#line 18047 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 18047 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 3547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_ZERO_EXTEND_WITH_AND\n\
   || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 3547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND
   || optimize_function_for_size_p (cfun))
    ? (int) 
#line 3547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND
   || optimize_function_for_size_p (cfun))
    : -1 },
  { "(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10799 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10799 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17486 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17486 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
  { "(ix86_match_ccmode (insn, CCZmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_AVX\n\
   && avx_vpermilp_parallel (operands[2], V8SFmode)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 12008 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vpermilp_parallel (operands[2], V8SFmode)) && 
#line 130 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 12008 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vpermilp_parallel (operands[2], V8SFmode)) && 
#line 130 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 15341 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 15341 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 17190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   && peep2_reg_dead_p (4, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && (QImode != QImode\n\
       || immediate_operand (operands[2], QImode)\n\
       || q_regs_operand (operands[2], QImode))\n\
   && ix86_match_ccmode (peep2_next_insn (3),\n\
			 (GET_CODE (operands[3]) == PLUS\n\
			  || GET_CODE (operands[3]) == MINUS)\n\
			 ? CCGOCmode : CCNOmode)",
    __builtin_constant_p 
#line 17190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || q_regs_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    ? (int) 
#line 17190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || q_regs_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    : -1 },
  { "((TARGET_VZEROUPPER && !SIBLING_CALL_P (insn)) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 11447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 11449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) ((
#line 11447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 11449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, V2DImode, operands)",
    __builtin_constant_p 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V2DImode, operands))
    ? (int) 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V2DImode, operands))
    : -1 },
#line 5425 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_AVX\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5425 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_AVX
   && can_create_pseudo_p ())
    ? (int) 
#line 5425 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_AVX
   && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_SSE) && ( reload_completed)",
    __builtin_constant_p (
#line 4016 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 4018 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 4016 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 4018 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 901 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ptr_mode == DImode",
    __builtin_constant_p 
#line 901 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ptr_mode == DImode)
    ? (int) 
#line 901 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ptr_mode == DImode)
    : -1 },
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, V8HImode, operands)",
    __builtin_constant_p 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V8HImode, operands))
    ? (int) 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V8HImode, operands))
    : -1 },
  { "(TARGET_SSE) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 3945 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 118 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 3945 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 118 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 318 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
  { "TARGET_CMPXCHG",
    __builtin_constant_p 
#line 318 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
    ? (int) 
#line 318 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
    : -1 },
#line 9863 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 9863 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 9863 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, V8SImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE
   && ix86_binary_operator_ok (XOR, V8SImode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE
   && ix86_binary_operator_ok (XOR, V8SImode, operands)) && (TARGET_AVX))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 818 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 818 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V4DFmode)\n\
       == GET_MODE_NUNITS (V16HImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V16HImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V16HImode)))
    : -1 },
#line 17056 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && true_regnum (operands[2]) != AX_REG\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 17056 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && true_regnum (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 17056 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && true_regnum (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 6996 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 6996 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 6996 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 7714 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "!TARGET_64BIT && TARGET_SSE",
    __builtin_constant_p 
#line 7714 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE)
    ? (int) 
#line 7714 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE)
    : -1 },
  { "((optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
(((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
(((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)) && (TARGET_SSE2)",
    __builtin_constant_p 
((TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)) && (TARGET_SSE2))
    ? (int) 
((TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)) && (TARGET_SSE2))
    : -1 },
#line 901 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ptr_mode == SImode",
    __builtin_constant_p 
#line 901 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ptr_mode == SImode)
    ? (int) 
#line 901 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ptr_mode == SImode)
    : -1 },
  { "(TARGET_SSE\n\
   && (GET_MODE_NUNITS (V2DFmode)\n\
       == GET_MODE_NUNITS (V4SFmode))) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V4SFmode))) && 
#line 122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V4SFmode))) && 
#line 122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 16423 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL\n\
   && (GET_MODE (operands[0]) == QImode\n\
       || GET_MODE (operands[0]) == HImode)\n\
   && reload_completed",
    __builtin_constant_p 
#line 16423 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL
   && (GET_MODE (operands[0]) == QImode
       || GET_MODE (operands[0]) == HImode)
   && reload_completed)
    ? (int) 
#line 16423 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL
   && (GET_MODE (operands[0]) == QImode
       || GET_MODE (operands[0]) == HImode)
   && reload_completed)
    : -1 },
  { "(ix86_binary_operator_ok (XOR, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (XOR, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (XOR, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V4SImode)\n\
       == GET_MODE_NUNITS (V8HImode))",
    __builtin_constant_p 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V8HImode)))
    ? (int) 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V8HImode)))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V4DFmode)\n\
       == GET_MODE_NUNITS (V8SImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V8SImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V8SImode)))
    : -1 },
#line 1071 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 1071 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 1071 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 7931 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (PLUS, V16HImode, operands)",
    __builtin_constant_p 
#line 7931 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (PLUS, V16HImode, operands))
    ? (int) 
#line 7931 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (PLUS, V16HImode, operands))
    : -1 },
#line 1600 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 1600 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    ? (int) 
#line 1600 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    : -1 },
#line 16782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && flag_pic",
    __builtin_constant_p 
#line 16782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && flag_pic)
    ? (int) 
#line 16782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && flag_pic)
    : -1 },
#line 5347 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)\n\
   && TARGET_SSE",
    __builtin_constant_p 
#line 5347 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE)
    ? (int) 
#line 5347 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE)
    : -1 },
  { "(TARGET_SSE\n\
   && (register_operand (operands[0], V4DFmode)\n\
       || register_operand (operands[1], V4DFmode))) && (TARGET_AVX)",
    __builtin_constant_p (
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4DFmode)
       || register_operand (operands[1], V4DFmode))) && 
#line 109 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4DFmode)
       || register_operand (operands[1], V4DFmode))) && 
#line 109 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 13702 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 13702 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))
   && can_create_pseudo_p ())
    ? (int) 
#line 13702 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))
   && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_VZEROUPPER && SIBLING_CALL_P (insn)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 11468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 11468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode)",
    __builtin_constant_p 
#line 786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
    ? (int) 
#line 786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
    : -1 },
#line 8185 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, HImode, operands)",
    __builtin_constant_p 
#line 8185 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands))
    ? (int) 
#line 8185 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands))
    : -1 },
#line 5190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 3503 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0]))",
    __builtin_constant_p 
#line 3503 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0])))
    ? (int) 
#line 3503 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0])))
    : -1 },
#line 6434 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 6434 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 6434 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 1430 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE",
    __builtin_constant_p 
#line 1430 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE)
    ? (int) 
#line 1430 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE)
    : -1 },
#line 1388 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 1388 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 1388 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V8SImode)\n\
       == GET_MODE_NUNITS (V8SFmode))",
    __builtin_constant_p 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V8SFmode)))
    ? (int) 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V8SFmode)))
    : -1 },
#line 17336 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "exact_log2 (INTVAL (operands[1])) >= 0\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17336 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17336 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
  { "(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && ( reload_completed)",
    __builtin_constant_p (
#line 3535 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 3537 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 3535 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 3537 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
  { "(SIBLING_CALL_P (insn)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 11479 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 11479 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 8082 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && !TARGET_64BIT",
    __builtin_constant_p 
#line 8082 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE3 && !TARGET_64BIT)
    ? (int) 
#line 8082 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE3 && !TARGET_64BIT)
    : -1 },
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (XFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 8232 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 8232 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 8232 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V8HImode)\n\
       == GET_MODE_NUNITS (V4SImode))",
    __builtin_constant_p 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V4SImode)))
    ? (int) 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V4SImode)))
    : -1 },
#line 7912 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && reload_completed",
    __builtin_constant_p 
#line 7912 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed)
    ? (int) 
#line 7912 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed)
    : -1 },
  { "(ix86_binary_operator_ok (ASHIFT, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9098 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9098 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V4SImode)\n\
       || register_operand (operands[1], V4SImode))",
    __builtin_constant_p 
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    ? (int) 
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    : -1 },
#line 1911 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_FMA",
    __builtin_constant_p 
#line 1911 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_FMA)
    ? (int) 
#line 1911 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_FMA)
    : -1 },
#line 17169 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   /* Do not split stack checking probes.  */\n\
   && GET_CODE (operands[3]) != IOR && operands[1] != const0_rtx",
    __builtin_constant_p 
#line 17169 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   /* Do not split stack checking probes.  */
   && GET_CODE (operands[3]) != IOR && operands[1] != const0_rtx)
    ? (int) 
#line 17169 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   /* Do not split stack checking probes.  */
   && GET_CODE (operands[3]) != IOR && operands[1] != const0_rtx)
    : -1 },
  { "(IN_RANGE (INTVAL (operands[2]), 1, 3)\n\
   /* Validate MODE for lea.  */\n\
   && ((!TARGET_PARTIAL_REG_STALL\n\
	&& (GET_MODE (operands[0]) == QImode\n\
	    || GET_MODE (operands[0]) == HImode))\n\
       || GET_MODE (operands[0]) == SImode\n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))\n\
   && (rtx_equal_p (operands[0], operands[3])\n\
       || peep2_reg_dead_p (2, operands[0]))\n\
   /* We reorder load and the shift.  */\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17619 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17619 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((DImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 9950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (optimize_function_for_size_p (cfun)\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 9950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 11580 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_VZEROUPPER && !TARGET_64BIT && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 11580 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT && SIBLING_CALL_P (insn))
    ? (int) 
#line 11580 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT && SIBLING_CALL_P (insn))
    : -1 },
#line 8898 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, QImode, operands)",
    __builtin_constant_p 
#line 8898 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands))
    ? (int) 
#line 8898 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands))
    : -1 },
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (SFmode, SImode)",
    __builtin_constant_p 
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, SImode))
    ? (int) 
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, SImode))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4475 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4475 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V2DFmode)\n\
       || register_operand (operands[1], V2DFmode))",
    __builtin_constant_p 
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode)))
    ? (int) 
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode)))
    : -1 },
#line 13007 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (SFmode)\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13007 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (SFmode)
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13007 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (SFmode)
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 779 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 779 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    ? (int) 
#line 779 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    : -1 },
#line 6264 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_XOP",
    __builtin_constant_p 
#line 6264 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP)
    ? (int) 
#line 6264 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP)
    : -1 },
#line 5141 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5141 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 5141 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    : -1 },
  { "(TARGET_CMOVE) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 9633 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 791 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 9633 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 791 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 8589 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8589 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8589 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 6229 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1",
    __builtin_constant_p 
#line 6229 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1)
    ? (int) 
#line 6229 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1)
    : -1 },
  { "(TARGET_VZEROUPPER && !SIBLING_CALL_P (insn)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 11447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 11447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V4HImode, operands))
    ? (int) 
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V4HImode, operands))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V32QImode)\n\
       == GET_MODE_NUNITS (V4DImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V4DImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V4DImode)))
    : -1 },
#line 16399 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 16399 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 16399 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V32QImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p 
((TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V32QImode, operands)) && (TARGET_AVX2))
    ? (int) 
((TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V32QImode, operands)) && (TARGET_AVX2))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, V4DImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE
   && ix86_binary_operator_ok (IOR, V4DImode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE
   && ix86_binary_operator_ok (IOR, V4DImode, operands)) && (TARGET_AVX))
    : -1 },
#line 5386 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands)",
    __builtin_constant_p 
#line 5386 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    ? (int) 
#line 5386 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    : -1 },
#line 4427 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode)\n\
   && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4427 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4427 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 10503 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !TARGET_USE_BT",
    __builtin_constant_p 
#line 10503 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT)
    ? (int) 
#line 10503 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT)
    : -1 },
#line 8357 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 8357 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 8357 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    : -1 },
#line 7977 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 7977 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 7977 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 4077 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 4077 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations)
    ? (int) 
#line 4077 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations)
    : -1 },
#line 4655 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 4655 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 4655 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 14806 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && ((SImode != DImode) || TARGET_64BIT)",
    __builtin_constant_p 
#line 14806 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT))
    ? (int) 
#line 14806 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT))
    : -1 },
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V8SFmode)\n\
       == GET_MODE_NUNITS (V4DFmode))",
    __builtin_constant_p 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V4DFmode)))
    ? (int) 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V4DFmode)))
    : -1 },
#line 6491 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6491 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6491 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 5135 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V4SImode, operands)",
    __builtin_constant_p 
#line 5135 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    ? (int) 
#line 5135 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    : -1 },
#line 5394 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && ((TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)\n\
	&& TARGET_SSE)\n\
       || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 5394 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 5394 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (SFmode, DImode)",
    __builtin_constant_p 
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, DImode))
    ? (int) 
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, DImode))
    : -1 },
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (DFmode, SImode)",
    __builtin_constant_p 
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, SImode))
    ? (int) 
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, SImode))
    : -1 },
#line 5924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCZmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 5924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 5924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode)",
    __builtin_constant_p 
#line 786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
    ? (int) 
#line 786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
    : -1 },
  { "(TARGET_ROUND && !flag_trapping_math) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 9981 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_ROUND && !flag_trapping_math) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 9981 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_ROUND && !flag_trapping_math) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V8HImode)\n\
       == GET_MODE_NUNITS (V16QImode))",
    __builtin_constant_p 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V16QImode)))
    ? (int) 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V16QImode)))
    : -1 },
#line 373 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands)",
    __builtin_constant_p 
#line 373 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands))
    ? (int) 
#line 373 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands))
    : -1 },
#line 12368 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)",
    __builtin_constant_p 
#line 12368 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode))
    ? (int) 
#line 12368 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode))
    : -1 },
#line 4761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && reload_completed",
    __builtin_constant_p 
#line 4761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    ? (int) 
#line 4761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    : -1 },
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands)",
    __builtin_constant_p 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands))
    ? (int) 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands))
    : -1 },
#line 17220 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   && GET_CODE (operands[2]) != MINUS\n\
   && peep2_reg_dead_p (3, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && ix86_match_ccmode (peep2_next_insn (2),\n\
			 GET_CODE (operands[2]) == PLUS\n\
			 ? CCGOCmode : CCNOmode)",
    __builtin_constant_p 
#line 17220 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && GET_CODE (operands[2]) != MINUS
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode))
    ? (int) 
#line 17220 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && GET_CODE (operands[2]) != MINUS
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode))
    : -1 },
  { "((TARGET_SSE) && (TARGET_AVX)) && ( reload_completed)",
    __builtin_constant_p ((
#line 733 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 735 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) ((
#line 733 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 735 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V16HImode, operands)",
    __builtin_constant_p 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V16HImode, operands))
    ? (int) 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V16HImode, operands))
    : -1 },
#line 6221 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_XOP ",
    __builtin_constant_p 
#line 6221 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP )
    ? (int) 
#line 6221 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP )
    : -1 },
#line 4510 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4510 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4510 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (XFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 395 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 395 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 395 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 10565 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 10565 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 10565 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
    : -1 },
#line 7556 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "!TARGET_64BIT && TARGET_SSE\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7556 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7556 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 6449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 6477 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6477 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6477 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 17818 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_SSE4_2 || TARGET_CRC32",
    __builtin_constant_p 
#line 17818 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE4_2 || TARGET_CRC32)
    ? (int) 
#line 17818 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE4_2 || TARGET_CRC32)
    : -1 },
#line 4443 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_SHORTEN_X87_SSE\n\
   && !(TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ())\n\
   && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 4443 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SHORTEN_X87_SSE
   && !(TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ())
   && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 4443 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SHORTEN_X87_SSE
   && !(TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ())
   && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 12069 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_LZCNT",
    __builtin_constant_p 
#line 12069 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LZCNT)
    ? (int) 
#line 12069 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LZCNT)
    : -1 },
#line 6242 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[2])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)",
    __builtin_constant_p 
#line 6242 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    ? (int) 
#line 6242 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    : -1 },
#line 8766 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (reload_completed\n\
       || !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 8766 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 8766 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (SFmode, DImode)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, DImode)
   && reload_completed)
    ? (int) 
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, DImode)
   && reload_completed)
    : -1 },
#line 4772 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
        || TARGET_MIX_SSE_I387)\n\
    && reload_completed",
    __builtin_constant_p 
#line 4772 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    ? (int) 
#line 4772 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    : -1 },
  { "(TARGET_SSE2) && (Pmode == DImode)",
    __builtin_constant_p (
#line 8026 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 8026 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 4008 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4008 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 4008 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (AND, V4DFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE && ix86_binary_operator_ok (AND, V4DFmode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE && ix86_binary_operator_ok (AND, V4DFmode, operands)) && (TARGET_AVX))
    : -1 },
#line 4344 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4344 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4344 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 6133 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V4SImode, operands)",
    __builtin_constant_p 
#line 6133 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V4SImode, operands))
    ? (int) 
#line 6133 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V4SImode, operands))
    : -1 },
#line 97 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
  { "!(TARGET_64BIT || TARGET_SSE2)",
    __builtin_constant_p 
#line 97 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(!(TARGET_64BIT || TARGET_SSE2))
    ? (int) 
#line 97 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(!(TARGET_64BIT || TARGET_SSE2))
    : -1 },
  { "(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6888 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6888 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 6067 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands)",
    __builtin_constant_p 
#line 6067 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    ? (int) 
#line 6067 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    : -1 },
#line 3931 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 3931 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387)
    ? (int) 
#line 3931 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387)
    : -1 },
  { "(ix86_unary_operator_ok (NEG, DImode, operands)) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 8509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands)) && 
#line 791 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 8509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands)) && 
#line 791 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 7447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
    && ix86_match_ccmode (insn,\n\
 			 CONST_INT_P (operands[1])\n\
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 7447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
    && ix86_match_ccmode (insn,
 			 CONST_INT_P (operands[1])
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 7447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
    && ix86_match_ccmode (insn,
 			 CONST_INT_P (operands[1])
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
  { "(!TARGET_X32) && (Pmode == DImode)",
    __builtin_constant_p (
#line 12801 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_X32) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 12801 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_X32) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 8275 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8275 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8275 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 2388 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 2388 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 2388 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL)
    : -1 },
  { "(TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V8SFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V8SFmode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V8SFmode, operands)) && (TARGET_AVX))
    : -1 },
  { "((unsigned HOST_WIDE_INT) INTVAL (operands[1])\n\
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p 
((TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && (TARGET_AVX2))
    ? (int) 
((TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && (TARGET_AVX2))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)) && (TARGET_AVX))
    : -1 },
  { "(TARGET_VZEROUPPER && SIBLING_CALL_P (insn)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 11468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 11468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 5212 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5212 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5212 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V16HImode)\n\
       == GET_MODE_NUNITS (V8SImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V8SImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V8SImode)))
    : -1 },
#line 11553 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_VZEROUPPER && !TARGET_64BIT && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 11553 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT && !SIBLING_CALL_P (insn))
    ? (int) 
#line 11553 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT && !SIBLING_CALL_P (insn))
    : -1 },
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (XFmode, DImode)",
    __builtin_constant_p 
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, DImode))
    ? (int) 
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, DImode))
    : -1 },
#line 441 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V2SFmode, operands)",
    __builtin_constant_p 
#line 441 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2SFmode, operands))
    ? (int) 
#line 441 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2SFmode, operands))
    : -1 },
#line 1605 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed\n\
   && !SSE_REG_P (operands[1])",
    __builtin_constant_p 
#line 1605 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && !SSE_REG_P (operands[1]))
    ? (int) 
#line 1605 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && !SSE_REG_P (operands[1]))
    : -1 },
#line 7780 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 7780 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 7780 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 2247 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && (V4SFmode == V4SFmode || TARGET_AVX2)",
    __builtin_constant_p 
#line 2247 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && (V4SFmode == V4SFmode || TARGET_AVX2))
    ? (int) 
#line 2247 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && (V4SFmode == V4SFmode || TARGET_AVX2))
    : -1 },
  { "(!TARGET_X32) && (Pmode == SImode)",
    __builtin_constant_p (
#line 12801 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_X32) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 12801 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_X32) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
  { "(TARGET_LZCNT) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12069 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 758 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12069 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 758 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 2123 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0]))\n\
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 2123 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0]))
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1])))
    ? (int) 
#line 2123 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0]))
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1])))
    : -1 },
#line 11703 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_SEH",
    __builtin_constant_p 
#line 11703 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_SEH)
    ? (int) 
#line 11703 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_SEH)
    : -1 },
  { "((optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 9121 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 9121 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 9121 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
  { "(TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_AVX\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 5425 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_AVX
   && can_create_pseudo_p ()) && 
#line 5428 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( 1))
    ? (int) (
#line 5425 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_AVX
   && can_create_pseudo_p ()) && 
#line 5428 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( 1))
    : -1 },
#line 7566 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && INTVAL (operands[1]) > 0\n\
   && INTVAL (operands[2]) >= 0\n\
   /* Ensure that resulting mask is zero or sign extended operand.  */\n\
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32\n\
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64\n\
	   && INTVAL (operands[1]) > 32))\n\
   && (GET_MODE (operands[0]) == SImode\n\
       || GET_MODE (operands[0]) == DImode\n\
       || GET_MODE (operands[0]) == HImode\n\
       || GET_MODE (operands[0]) == QImode)",
    __builtin_constant_p 
#line 7566 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64
	   && INTVAL (operands[1]) > 32))
   && (GET_MODE (operands[0]) == SImode
       || GET_MODE (operands[0]) == DImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    ? (int) 
#line 7566 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64
	   && INTVAL (operands[1]) > 32))
   && (GET_MODE (operands[0]) == SImode
       || GET_MODE (operands[0]) == DImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V8SFmode)\n\
       == GET_MODE_NUNITS (V16HImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V16HImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V16HImode)))
    : -1 },
#line 11849 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_LP64",
    __builtin_constant_p 
#line 11849 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LP64)
    ? (int) 
#line 11849 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LP64)
    : -1 },
#line 5190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 10252 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_BMI2 && reload_completed",
    __builtin_constant_p 
#line 10252 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2 && reload_completed)
    ? (int) 
#line 10252 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2 && reload_completed)
    : -1 },
  { "(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 6383 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP) && 
#line 6376 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 6383 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP) && 
#line 6376 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 10024 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_ROUND && !flag_trapping_math",
    __builtin_constant_p 
#line 10024 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_ROUND && !flag_trapping_math)
    ? (int) 
#line 10024 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_ROUND && !flag_trapping_math)
    : -1 },
  { "(TARGET_SSE\n\
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1430 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1430 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 6178 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (EQ, V16HImode, operands)",
    __builtin_constant_p 
#line 6178 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (EQ, V16HImode, operands))
    ? (int) 
#line 6178 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (EQ, V16HImode, operands))
    : -1 },
#line 15341 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math",
    __builtin_constant_p 
#line 15341 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math)
    ? (int) 
#line 15341 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math)
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 1388 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && 
#line 1393 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 1388 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && 
#line 1393 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 13022 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13022 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13022 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode)",
    __builtin_constant_p 
#line 786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
    ? (int) 
#line 786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
    : -1 },
#line 16991 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((TARGET_NOT_UNPAIRABLE\n\
	&& (!MEM_P (operands[0])\n\
	    || !memory_displacement_operand (operands[0], HImode)))\n\
       || (TARGET_NOT_VECTORMODE\n\
	   && long_memory_operand (operands[0], HImode)))\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 16991 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], HImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 16991 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], HImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
  { "(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 4170 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 4172 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 4170 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 4172 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 1087 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands)",
    __builtin_constant_p 
#line 1087 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands))
    ? (int) 
#line 1087 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])) && ( reload_completed)",
    __builtin_constant_p (
#line 1342 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1346 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 1342 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1346 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 8151 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && ANY_QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
    && !(~INTVAL (operands[2]) & ~255)\n\
    && !(INTVAL (operands[2]) & 128)\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8151 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8151 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 1688 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 1688 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 1688 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (SFmode))
    : -1 },
  { "((TARGET_USE_BT || optimize_function_for_size_p (cfun)) && (TARGET_64BIT)) && ( 1)",
    __builtin_constant_p ((
#line 10799 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10801 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) ((
#line 10799 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10801 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 4437 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && INTVAL (operands[2]) + 2 == INTVAL (operands[3])",
    __builtin_constant_p 
#line 4437 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE3 && INTVAL (operands[2]) + 2 == INTVAL (operands[3]))
    ? (int) 
#line 4437 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE3 && INTVAL (operands[2]) + 2 == INTVAL (operands[3]))
    : -1 },
  { "((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 9616 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && 
#line 783 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 9616 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && 
#line 783 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
  { "((TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1) && ( 1)",
    __builtin_constant_p (
#line 10833 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1) && 
#line 10837 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 10833 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1) && 
#line 10837 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 17568 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()\n\
   && !satisfies_constraint_K (operands[2])",
    __builtin_constant_p 
#line 17568 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2]))
    ? (int) 
#line 17568 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2]))
    : -1 },
  { "(TARGET_BSWAP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12434 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BSWAP) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12434 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BSWAP) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17448 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17448 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 13211 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 13211 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 13211 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 6606 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6606 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6606 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((SImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8SImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p 
((TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8SImode, operands)) && (TARGET_AVX2))
    ? (int) 
((TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8SImode, operands)) && (TARGET_AVX2))
    : -1 },
  { "(ix86_binary_operator_ok (ROTATE, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT))
    : -1 },
#line 13247 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13247 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13247 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
#line 10261 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, HImode, operands)",
    __builtin_constant_p 
#line 10261 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands))
    ? (int) 
#line 10261 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands))
    : -1 },
  { "(TARGET_SSE4_2) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5978 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_2) && 
#line 180 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5978 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_2) && 
#line 180 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 10833 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 10833 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 10833 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
#line 10309 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
  && (TARGET_USE_XCHGB || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 10309 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
  && (TARGET_USE_XCHGB || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 10309 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
  && (TARGET_USE_XCHGB || optimize_function_for_size_p (cfun)))
    : -1 },
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V16QImode)\n\
       || register_operand (operands[1], V16QImode))",
    __builtin_constant_p 
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    ? (int) 
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    : -1 },
  { "((TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10833 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10833 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5289 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 5289 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 5289 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    : -1 },
#line 15523 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 15523 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && can_create_pseudo_p ())
    ? (int) 
#line 15523 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_XADD) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 452 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_XADD) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 452 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_XADD) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1087 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands)",
    __builtin_constant_p 
#line 1087 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands))
    ? (int) 
#line 1087 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands))
    : -1 },
#line 8766 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (reload_completed\n\
       || !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 8766 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 8766 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 58 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
  { "TARGET_SSE || TARGET_3DNOW_A",
    __builtin_constant_p 
#line 58 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_SSE || TARGET_3DNOW_A)
    ? (int) 
#line 58 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_SSE || TARGET_3DNOW_A)
    : -1 },
  { "(TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4722 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4727 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4722 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4727 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, V32QImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE
   && ix86_binary_operator_ok (XOR, V32QImode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE
   && ix86_binary_operator_ok (XOR, V32QImode, operands)) && (TARGET_AVX))
    : -1 },
#line 17301 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17301 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17301 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (DFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4826 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4826 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))\n\
   && ix86_binary_operator_ok (MINUS, V8QImode, operands)",
    __builtin_constant_p 
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V8QImode, operands))
    ? (int) 
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V8QImode, operands))
    : -1 },
#line 10055 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 10055 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 10055 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
#line 7992 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 7992 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 7992 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
  { "((TARGET_SINGLE_POP || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17433 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17433 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p 
((TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && (TARGET_AVX2))
    ? (int) 
((TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && (TARGET_AVX2))
    : -1 },
#line 9766 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9766 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 9766 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 6804 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_BMI2\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 6804 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 6804 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(ix86_binary_operator_ok (ROTATERT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (ROTATERT, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (ROTATERT, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 8222 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8222 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8222 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, V4SImode, operands)",
    __builtin_constant_p 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V4SImode, operands))
    ? (int) 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V4SImode, operands))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V4DImode)\n\
       == GET_MODE_NUNITS (V16HImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V16HImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V16HImode)))
    : -1 },
#line 11082 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 11082 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 11082 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
  { "(TARGET_FMA) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1911 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_FMA) && 
#line 143 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1911 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_FMA) && 
#line 143 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
  { "(ix86_unary_operator_ok (NEG, TImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, TImode, operands)) && 
#line 792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, TImode, operands)) && 
#line 792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_USE_FANCY_MATH_387\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 15523 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && can_create_pseudo_p ()) && 
#line 15526 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 15523 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && can_create_pseudo_p ()) && 
#line 15526 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "((TARGET_SINGLE_POP || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17433 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17433 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V32QImode, operands)",
    __builtin_constant_p 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V32QImode, operands))
    ? (int) 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V32QImode, operands))
    : -1 },
#line 16960 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && TARGET_SPLIT_LONG_MOVES\n\
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn",
    __builtin_constant_p 
#line 16960 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn)
    ? (int) 
#line 16960 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn)
    : -1 },
  { "(TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V8SFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V8SFmode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V8SFmode, operands)) && (TARGET_AVX))
    : -1 },
  { "(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())\n\
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 16924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 16924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V4HImode, operands))
    ? (int) 
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V4HImode, operands))
    : -1 },
#line 1301 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && TARGET_SAHF && !TARGET_CMOVE",
    __builtin_constant_p 
#line 1301 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && TARGET_SAHF && !TARGET_CMOVE)
    ? (int) 
#line 1301 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && TARGET_SAHF && !TARGET_CMOVE)
    : -1 },
#line 4252 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && reload_completed",
    __builtin_constant_p 
#line 4252 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed)
    ? (int) 
#line 4252 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed)
    : -1 },
#line 10284 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_REG_STALL\n\
    || (operands[1] == const1_rtx\n\
	&& TARGET_SHIFT1))",
    __builtin_constant_p 
#line 10284 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_REG_STALL
    || (operands[1] == const1_rtx
	&& TARGET_SHIFT1)))
    ? (int) 
#line 10284 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_REG_STALL
    || (operands[1] == const1_rtx
	&& TARGET_SHIFT1)))
    : -1 },
#line 8650 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed && SSE_REG_P (operands[0])",
    __builtin_constant_p 
#line 8650 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed && SSE_REG_P (operands[0]))
    ? (int) 
#line 8650 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed && SSE_REG_P (operands[0]))
    : -1 },
  { "(TARGET_SSE2 && (V8SFmode == V4SFmode || TARGET_AVX2)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 2247 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && (V8SFmode == V4SFmode || TARGET_AVX2)) && 
#line 135 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 2247 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && (V8SFmode == V4SFmode || TARGET_AVX2)) && 
#line 135 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 7953 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, QImode, operands)\n\
   && ix86_match_ccmode (insn,\n\
			 CONST_INT_P (operands[2])\n\
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 7953 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 CONST_INT_P (operands[2])
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 7953 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 CONST_INT_P (operands[2])
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (GET_MODE_NUNITS (V4SImode)\n\
       == GET_MODE_NUNITS (V4SFmode))",
    __builtin_constant_p 
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V4SFmode)))
    ? (int) 
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V4SFmode)))
    : -1 },
  { "(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V8SImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5411 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V8SImode, operands)) && 
#line 177 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5411 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V8SImode, operands)) && 
#line 177 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 3375 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (standard_80387_constant_p (operands[1]) == 8\n\
       || standard_80387_constant_p (operands[1]) == 9)",
    __builtin_constant_p 
#line 3375 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (standard_80387_constant_p (operands[1]) == 8
       || standard_80387_constant_p (operands[1]) == 9))
    ? (int) 
#line 3375 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (standard_80387_constant_p (operands[1]) == 8
       || standard_80387_constant_p (operands[1]) == 9))
    : -1 },
  { "(IN_RANGE (INTVAL (operands[2]), 1, 3)\n\
   /* Validate MODE for lea.  */\n\
   && ((!TARGET_PARTIAL_REG_STALL\n\
	&& (GET_MODE (operands[0]) == QImode\n\
	    || GET_MODE (operands[0]) == HImode))\n\
       || GET_MODE (operands[0]) == SImode\n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))\n\
   && (rtx_equal_p (operands[0], operands[3])\n\
       || peep2_reg_dead_p (2, operands[0]))\n\
   /* We reorder load and the shift.  */\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17619 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17619 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 9397 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])",
    __builtin_constant_p 
#line 9397 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(GET_MODE (operands[0]) == GET_MODE (operands[1])
   && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    ? (int) 
#line 9397 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(GET_MODE (operands[0]) == GET_MODE (operands[1])
   && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    : -1 },
#line 8616 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8616 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8616 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17317 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17317 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_AVX\n\
   && avx_vpermilp_parallel (operands[2], V2DFmode)) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 12008 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vpermilp_parallel (operands[2], V2DFmode)) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 12008 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vpermilp_parallel (operands[2], V2DFmode)) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 5212 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5212 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5212 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V4DFmode)\n\
       == GET_MODE_NUNITS (V4DFmode))",
    __builtin_constant_p 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V4DFmode)))
    ? (int) 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V4DFmode)))
    : -1 },
#line 6052 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V4SImode, operands)",
    __builtin_constant_p 
#line 6052 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V4SImode, operands))
    ? (int) 
#line 6052 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V4SImode, operands))
    : -1 },
#line 16973 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p () && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 16973 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 16973 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT && TARGET_CMPXCHG16B)",
    __builtin_constant_p (
#line 342 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 330 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B))
    ? (int) (
#line 342 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 330 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B))
    : -1 },
#line 14646 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14646 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14646 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
  { "(TARGET_BMI2 && reload_completed) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10184 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10184 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "((TARGET_SSE2\n\
   && can_create_pseudo_p ()) && (TARGET_AVX2)) && ( 1)",
    __builtin_constant_p ((
#line 5481 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && can_create_pseudo_p ()) && 
#line 180 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 5484 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( 1))
    ? (int) ((
#line 5481 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && can_create_pseudo_p ()) && 
#line 180 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 5484 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( 1))
    : -1 },
  { "(TARGET_SSE\n\
   && (GET_MODE_NUNITS (V2DImode)\n\
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)",
    __builtin_constant_p 
((TARGET_SSE
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2))
    ? (int) 
((TARGET_SSE
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2))
    : -1 },
#line 11305 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 || TARGET_XOP",
    __builtin_constant_p 
#line 11305 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 || TARGET_XOP)
    ? (int) 
#line 11305 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 || TARGET_XOP)
    : -1 },
  { "(!TARGET_HAS_BIONIC) && (ptr_mode == DImode)",
    __builtin_constant_p (
#line 17798 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_HAS_BIONIC) && 
#line 901 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ptr_mode == DImode))
    ? (int) (
#line 17798 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_HAS_BIONIC) && 
#line 901 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ptr_mode == DImode))
    : -1 },
#line 17279 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD\n\
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())\n\
   && GENERAL_REG_P (operands[0])\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17279 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && GENERAL_REG_P (operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17279 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && GENERAL_REG_P (operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V16HImode, operands)",
    __builtin_constant_p 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V16HImode, operands))
    ? (int) 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V16HImode, operands))
    : -1 },
#line 1380 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && !TARGET_SSE",
    __builtin_constant_p 
#line 1380 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE)
    ? (int) 
#line 1380 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE)
    : -1 },
#line 2269 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 2269 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 2269 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "(TARGET_LWP) && (Pmode == DImode)",
    __builtin_constant_p (
#line 18047 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 18047 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V4HImode, operands)",
    __builtin_constant_p 
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V4HImode, operands))
    ? (int) 
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V4HImode, operands))
    : -1 },
#line 8185 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, HImode, operands)",
    __builtin_constant_p 
#line 8185 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands))
    ? (int) 
#line 8185 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands))
    : -1 },
#line 4496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 4496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V8HImode)\n\
       == GET_MODE_NUNITS (V8HImode))",
    __builtin_constant_p 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V8HImode)))
    ? (int) 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V8HImode)))
    : -1 },
  { "((((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)\n\
      && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))\n\
    || GET_MODE (operands[0]) == SImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[2])) - 1 < 3\n\
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])\n\
       < ((unsigned HOST_WIDE_INT) 1 << INTVAL (operands[2])))) && ( reload_completed)",
    __builtin_constant_p (
#line 6340 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
      && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    || GET_MODE (operands[0]) == SImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[2])) - 1 < 3
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < ((unsigned HOST_WIDE_INT) 1 << INTVAL (operands[2])))) && 
#line 6349 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 6340 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
      && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    || GET_MODE (operands[0]) == SImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[2])) - 1 < 3
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < ((unsigned HOST_WIDE_INT) 1 << INTVAL (operands[2])))) && 
#line 6349 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 5394 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && ((TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)\n\
	&& TARGET_SSE)\n\
       || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 5394 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 5394 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V16QImode)\n\
       == GET_MODE_NUNITS (V8HImode))",
    __builtin_constant_p 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V8HImode)))
    ? (int) 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V8HImode)))
    : -1 },
#line 5141 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5141 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 5141 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    : -1 },
#line 9234 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 9234 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 9234 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 4819 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && reload_completed",
    __builtin_constant_p 
#line 4819 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed)
    ? (int) 
#line 4819 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed)
    : -1 },
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
       && DImode != HImode \n\
       && ((DImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 6383 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSSE3 || TARGET_AVX || TARGET_XOP",
    __builtin_constant_p 
#line 6383 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP)
    ? (int) 
#line 6383 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP)
    : -1 },
#line 1372 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 1372 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 1372 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
#line 8777 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 8777 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387))
    ? (int) 
#line 8777 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387))
    : -1 },
  { "(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT))
    : -1 },
#line 414 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands)",
    __builtin_constant_p 
#line 414 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands))
    ? (int) 
#line 414 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands))
    : -1 },
#line 4689 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "!TARGET_SSE2 && TARGET_SSE\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 4689 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 4689 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "(TARGET_MOVBE\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12419 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12419 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 7419 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7419 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7419 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 17190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   && peep2_reg_dead_p (4, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && (HImode != QImode\n\
       || immediate_operand (operands[2], QImode)\n\
       || q_regs_operand (operands[2], QImode))\n\
   && ix86_match_ccmode (peep2_next_insn (3),\n\
			 (GET_CODE (operands[3]) == PLUS\n\
			  || GET_CODE (operands[3]) == MINUS)\n\
			 ? CCGOCmode : CCNOmode)",
    __builtin_constant_p 
#line 17190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || q_regs_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    ? (int) 
#line 17190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || q_regs_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    : -1 },
#line 8809 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (DFmode == TFmode))",
    __builtin_constant_p 
#line 8809 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (DFmode == TFmode)))
    ? (int) 
#line 8809 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (DFmode == TFmode)))
    : -1 },
#line 10138 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, SImode, operands)",
    __builtin_constant_p 
#line 10138 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands))
    ? (int) 
#line 10138 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands))
    : -1 },
#line 8196 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, QImode, operands)",
    __builtin_constant_p 
#line 8196 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands))
    ? (int) 
#line 8196 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT || TARGET_CMPXCHG8B)",
    __builtin_constant_p (
#line 342 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 329 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_64BIT || TARGET_CMPXCHG8B))
    ? (int) (
#line 342 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 329 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_64BIT || TARGET_CMPXCHG8B))
    : -1 },
#line 8579 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands)",
    __builtin_constant_p 
#line 8579 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands))
    ? (int) 
#line 8579 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands))
    : -1 },
#line 9056 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_CMOVE",
    __builtin_constant_p 
#line 9056 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_CMOVE)
    ? (int) 
#line 9056 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_CMOVE)
    : -1 },
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands)",
    __builtin_constant_p 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands))
    ? (int) 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands))
    : -1 },
#line 15568 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && TARGET_C99_FUNCTIONS\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15568 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 15568 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(peep2_reg_dead_p (3, operands[0])\n\
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])\n\
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 473 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 473 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, V4DImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE
   && ix86_binary_operator_ok (AND, V4DImode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE
   && ix86_binary_operator_ok (AND, V4DImode, operands)) && (TARGET_AVX))
    : -1 },
#line 5141 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5141 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 5141 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    : -1 },
#line 769 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_QIMODE_MATH",
    __builtin_constant_p 
#line 769 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
    ? (int) 
#line 769 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
    : -1 },
#line 5786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "ZERO_EXTEND == ZERO_EXTEND ? TARGET_SSE2 : TARGET_SSE4_1",
    __builtin_constant_p 
#line 5786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(ZERO_EXTEND == ZERO_EXTEND ? TARGET_SSE2 : TARGET_SSE4_1)
    ? (int) 
#line 5786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(ZERO_EXTEND == ZERO_EXTEND ? TARGET_SSE2 : TARGET_SSE4_1)
    : -1 },
#line 9447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 9447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 9447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (AND, V8SFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE && ix86_binary_operator_ok (AND, V8SFmode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE && ix86_binary_operator_ok (AND, V8SFmode, operands)) && (TARGET_AVX))
    : -1 },
#line 2624 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 2624 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_function_for_speed_p (cfun))
    ? (int) 
#line 2624 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_function_for_speed_p (cfun))
    : -1 },
  { "(TARGET_RDRND) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 18134 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_RDRND) && 
#line 758 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 18134 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_RDRND) && 
#line 758 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, HImode, operands)",
    __builtin_constant_p 
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands))
    ? (int) 
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands))
    : -1 },
  { "(TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4722 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4727 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4722 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4727 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 5375 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)\n\
   && TARGET_SSE\n\
   && reload_completed",
    __builtin_constant_p 
#line 5375 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    ? (int) 
#line 5375 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    : -1 },
#line 10261 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, QImode, operands)",
    __builtin_constant_p 
#line 10261 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands))
    ? (int) 
#line 10261 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands))
    : -1 },
#line 3574 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))\n\
   && ANY_QI_REG_P (operands[0])\n\
   && (ANY_QI_REG_P (operands[1]) || MEM_P (operands[1]))\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 3574 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
   && ANY_QI_REG_P (operands[0])
   && (ANY_QI_REG_P (operands[1]) || MEM_P (operands[1]))
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    ? (int) 
#line 3574 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
   && ANY_QI_REG_P (operands[0])
   && (ANY_QI_REG_P (operands[1]) || MEM_P (operands[1]))
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    : -1 },
#line 5781 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed && ix86_avoid_lea_for_add (insn, operands)",
    __builtin_constant_p 
#line 5781 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_add (insn, operands))
    ? (int) 
#line 5781 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_add (insn, operands))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V4DImode)\n\
       == GET_MODE_NUNITS (V8SImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V8SImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V8SImode)))
    : -1 },
  { "(TARGET_SSE2) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 7749 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 201 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 7749 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 201 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 10193 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_BMI2",
    __builtin_constant_p 
#line 10193 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2)
    ? (int) 
#line 10193 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2)
    : -1 },
  { "(reload_completed && ix86_avoid_lea_for_add (insn, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5781 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_add (insn, operands)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5781 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_add (insn, operands)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE4_1) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 9577 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 171 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 9577 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 171 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 10261 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, QImode, operands)",
    __builtin_constant_p 
#line 10261 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands))
    ? (int) 
#line 10261 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands))
    : -1 },
#line 16412 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 16412 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 16412 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL)
    : -1 },
#line 13337 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[2]))",
    __builtin_constant_p 
#line 13337 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[2])))
    ? (int) 
#line 13337 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[2])))
    : -1 },
  { "(TARGET_SSE\n\
   && (GET_MODE_NUNITS (V4SFmode)\n\
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)",
    __builtin_constant_p 
((TARGET_SSE
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2))
    ? (int) 
((TARGET_SSE
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2))
    : -1 },
#line 9447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 9447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 9447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 17290 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode\n\
    || GET_MODE (operands[0]) == HImode)\n\
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17290 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode
    || GET_MODE (operands[0]) == HImode)
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17290 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode
    || GET_MODE (operands[0]) == HImode)
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 9918 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_ROUND",
    __builtin_constant_p 
#line 9918 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_ROUND)
    ? (int) 
#line 9918 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_ROUND)
    : -1 },
#line 1639 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode) && 1",
    __builtin_constant_p 
#line 1639 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode) && 1)
    ? (int) 
#line 1639 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode) && 1)
    : -1 },
#line 3563 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 3563 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 3563 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
    : -1 },
#line 17555 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()\n\
   && !satisfies_constraint_K (operands[2])",
    __builtin_constant_p 
#line 17555 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2]))
    ? (int) 
#line 17555 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2]))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (IOR, V2DFmode, operands)) && (TARGET_SSE2)",
    __builtin_constant_p 
((TARGET_SSE && ix86_binary_operator_ok (IOR, V2DFmode, operands)) && (TARGET_SSE2))
    ? (int) 
((TARGET_SSE && ix86_binary_operator_ok (IOR, V2DFmode, operands)) && (TARGET_SSE2))
    : -1 },
  { "(TARGET_AVX) && ( reload_completed)",
    __builtin_constant_p (
#line 12340 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 12342 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 12340 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 12342 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V8QImode, operands)",
    __builtin_constant_p 
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V8QImode, operands))
    ? (int) 
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V8QImode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (ROTATE, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (ROTATE, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (ROTATE, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 8898 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, HImode, operands)",
    __builtin_constant_p 
#line 8898 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, HImode, operands))
    ? (int) 
#line 8898 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, HImode, operands))
    : -1 },
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))\n\
   && ix86_binary_operator_ok (PLUS, V2SImode, operands)",
    __builtin_constant_p 
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V2SImode, operands))
    ? (int) 
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V2SImode, operands))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8SImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p 
((TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8SImode, operands)) && (TARGET_AVX2))
    ? (int) 
((TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8SImode, operands)) && (TARGET_AVX2))
    : -1 },
#line 8849 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
    || (TARGET_SSE2 && (SFmode == TFmode)))\n\
   && reload_completed",
    __builtin_constant_p 
#line 8849 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (SFmode == TFmode)))
   && reload_completed)
    ? (int) 
#line 8849 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (SFmode == TFmode)))
   && reload_completed)
    : -1 },
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
  { "(TARGET_SSE || TARGET_3DNOW_A) && (Pmode == DImode)",
    __builtin_constant_p (
#line 1664 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 1664 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 7428 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7428 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7428 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V8QImode, operands))
    ? (int) 
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V8QImode, operands))
    : -1 },
  { "(TARGET_SSE) && (TARGET_AVX)",
    __builtin_constant_p (
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 154 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 154 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 7892 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)\n\
    || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 7892 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)
    || optimize_function_for_size_p (cfun))
    ? (int) 
#line 7892 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)
    || optimize_function_for_size_p (cfun))
    : -1 },
#line 4988 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 4988 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 4988 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun))
    : -1 },
#line 9863 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 9863 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 9863 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 6133 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V4SImode, operands)",
    __builtin_constant_p 
#line 6133 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V4SImode, operands))
    ? (int) 
#line 6133 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V4SImode, operands))
    : -1 },
  { "(ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6477 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6477 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    ? (int) 
#line 4468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    : -1 },
#line 12506 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_F16C",
    __builtin_constant_p 
#line 12506 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_F16C)
    ? (int) 
#line 12506 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_F16C)
    : -1 },
#line 16441 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE)\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 16441 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 16441 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 8849 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
    || (TARGET_SSE2 && (DFmode == TFmode)))\n\
   && reload_completed",
    __builtin_constant_p 
#line 8849 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (DFmode == TFmode)))
   && reload_completed)
    ? (int) 
#line 8849 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (DFmode == TFmode)))
   && reload_completed)
    : -1 },
  { "((optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
(((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
(((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (DFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 4714 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 4714 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    ? (int) 
#line 4714 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    : -1 },
  { "(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)) && ( reload_completed)",
    __builtin_constant_p (
#line 250 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)) && 
#line 252 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
( reload_completed))
    ? (int) (
#line 250 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)) && 
#line 252 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
( reload_completed))
    : -1 },
  { "(TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands)) && (TARGET_SSE2)",
    __builtin_constant_p 
((TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands)) && (TARGET_SSE2))
    ? (int) 
((TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands)) && (TARGET_SSE2))
    : -1 },
#line 15402 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
       && !flag_trapping_math)",
    __builtin_constant_p 
#line 15402 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && !flag_trapping_math))
    ? (int) 
#line 15402 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && !flag_trapping_math))
    : -1 },
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))\n\
   && ix86_binary_operator_ok (MINUS, V2SImode, operands)",
    __builtin_constant_p 
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V2SImode, operands))
    ? (int) 
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V2SImode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (GET_MODE_NUNITS (V2DImode)\n\
       == GET_MODE_NUNITS (V4SFmode))",
    __builtin_constant_p 
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V4SFmode)))
    ? (int) 
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V4SFmode)))
    : -1 },
#line 4924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 4924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 4924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V4SImode)\n\
       == GET_MODE_NUNITS (V16QImode))",
    __builtin_constant_p 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V16QImode)))
    ? (int) 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V16QImode)))
    : -1 },
#line 1789 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && operands[1] == constm1_rtx",
    __builtin_constant_p 
#line 1789 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx)
    ? (int) 
#line 1789 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx)
    : -1 },
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, V4SImode, operands)",
    __builtin_constant_p 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V4SImode, operands))
    ? (int) 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V4SImode, operands))
    : -1 },
#line 5819 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed && ix86_lea_for_add_ok (insn, operands)",
    __builtin_constant_p 
#line 5819 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed && ix86_lea_for_add_ok (insn, operands))
    ? (int) 
#line 5819 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed && ix86_lea_for_add_ok (insn, operands))
    : -1 },
#line 6908 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_QIMODE_MATH\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 6908 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 6908 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 8288 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 8288 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 8288 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 7588 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && INTVAL (operands[1]) > 0\n\
   && INTVAL (operands[2]) >= 0\n\
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32\n\
   && (GET_MODE (operands[0]) == SImode\n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)\n\
       || GET_MODE (operands[0]) == HImode\n\
       || GET_MODE (operands[0]) == QImode)",
    __builtin_constant_p 
#line 7588 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    ? (int) 
#line 7588 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    : -1 },
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8HImode, operands))
    ? (int) 
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8HImode, operands))
    : -1 },
#line 8598 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 8598 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 8598 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (SFmode))
    : -1 },
#line 4924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 4924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 4924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()\n\
   && satisfies_constraint_K (operands[2])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17587 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2])) && 
#line 758 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17587 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2])) && 
#line 758 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((SImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 1559 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_SSE || TARGET_3DNOW",
    __builtin_constant_p 
#line 1559 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW)
    ? (int) 
#line 1559 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW)
    : -1 },
  { "(reload_completed) && (TARGET_HIMODE_MATH)",
    __builtin_constant_p (
#line 7294 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed) && 
#line 779 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
    ? (int) (
#line 7294 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed) && 
#line 779 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V32QImode)\n\
       == GET_MODE_NUNITS (V16HImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V16HImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V16HImode)))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4553 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4553 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "((TARGET_VZEROUPPER && SIBLING_CALL_P (insn)) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 11468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 11470 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) ((
#line 11468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 11470 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 1860 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_FMA || TARGET_FMA4",
    __builtin_constant_p 
#line 1860 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)
    ? (int) 
#line 1860 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4475 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4475 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 5155 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5155 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5155 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(ix86_binary_operator_ok (PLUS, TImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5472 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands)) && 
#line 792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5472 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands)) && 
#line 792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4398 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 0)",
    __builtin_constant_p 
#line 4398 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 0))
    ? (int) 
#line 4398 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 0))
    : -1 },
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (XFmode, SImode)",
    __builtin_constant_p 
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, SImode))
    ? (int) 
#line 5253 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, SImode))
    : -1 },
  { "(ix86_binary_operator_ok (ROTATERT, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE\n\
   && (GET_MODE_NUNITS (V4SImode)\n\
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)",
    __builtin_constant_p 
((TARGET_SSE
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2))
    ? (int) 
((TARGET_SSE
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2))
    : -1 },
  { "(TARGET_80387\n\
   && TARGET_SAHF && !TARGET_CMOVE) && ( reload_completed)",
    __builtin_constant_p (
#line 1301 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && TARGET_SAHF && !TARGET_CMOVE) && 
#line 1304 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 1301 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && TARGET_SAHF && !TARGET_CMOVE) && 
#line 1304 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(TARGET_SSE\n\
   && (GET_MODE_NUNITS (V16QImode)\n\
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)",
    __builtin_constant_p 
((TARGET_SSE
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2))
    ? (int) 
((TARGET_SSE
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2))
    : -1 },
#line 6274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)",
    __builtin_constant_p 
#line 6274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    ? (int) 
#line 6274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    : -1 },
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands)",
    __builtin_constant_p 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands))
    ? (int) 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands))
    : -1 },
#line 11059 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[3]))\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[3])\n\
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode\n\
   && !TARGET_CMOVE",
    __builtin_constant_p 
#line 11059 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[3]))
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && !TARGET_CMOVE)
    ? (int) 
#line 11059 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[3]))
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && !TARGET_CMOVE)
    : -1 },
#line 2483 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && TARGET_64BIT",
    __builtin_constant_p 
#line 2483 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT)
    ? (int) 
#line 2483 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT)
    : -1 },
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, V8HImode, operands)",
    __builtin_constant_p 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V8HImode, operands))
    ? (int) 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V8HImode, operands))
    : -1 },
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V4SImode)\n\
       == GET_MODE_NUNITS (V4SImode))",
    __builtin_constant_p 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V4SImode)))
    ? (int) 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V4SImode)))
    : -1 },
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V4SFmode)\n\
       == GET_MODE_NUNITS (V8HImode))",
    __builtin_constant_p 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V8HImode)))
    ? (int) 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V8HImode)))
    : -1 },
#line 3870 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1\n\
   && ((unsigned) exact_log2 (INTVAL (operands[3]))\n\
       < GET_MODE_NUNITS (V4SFmode))",
    __builtin_constant_p 
#line 3870 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4SFmode)))
    ? (int) 
#line 3870 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4SFmode)))
    : -1 },
#line 12348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_POPCNT",
    __builtin_constant_p 
#line 12348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_POPCNT)
    ? (int) 
#line 12348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_POPCNT)
    : -1 },
  { "(TARGET_SSE2) && (Pmode == SImode)",
    __builtin_constant_p (
#line 8026 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 8026 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 5481 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5481 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && can_create_pseudo_p ())
    ? (int) 
#line 5481 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && can_create_pseudo_p ())
    : -1 },
#line 7862 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 7862 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    ? (int) 
#line 7862 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    : -1 },
  { "((optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || TARGET_DOUBLE_WITH_ADD)))\n\
   && ix86_match_ccmode (insn, CCGOCmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9542 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9542 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 9600 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 9600 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 9600 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
  { "(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 16229 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 16229 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 7045 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_80387 && X87_ENABLE_ARITH (SFmode))\n\
    || TARGET_SSE_MATH",
    __builtin_constant_p 
#line 7045 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (SFmode))
    || TARGET_SSE_MATH)
    ? (int) 
#line 7045 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (SFmode))
    || TARGET_SSE_MATH)
    : -1 },
#line 496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
  { "(unsigned HOST_WIDE_INT) INTVAL (operands[1])\n\
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])",
    __builtin_constant_p 
#line 496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2]))
    ? (int) 
#line 496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2]))
    : -1 },
  { "(TARGET_SSE) && ( reload_completed\n\
   && (TARGET_INTER_UNIT_MOVES\n\
       || MEM_P (operands [0])\n\
       || !GENERAL_REGNO_P (true_regnum (operands [0]))))",
    __builtin_constant_p (
#line 7466 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 7468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_INTER_UNIT_MOVES
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0])))))
    ? (int) (
#line 7466 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 7468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_INTER_UNIT_MOVES
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0])))))
    : -1 },
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    ? (int) 
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    : -1 },
  { "(TARGET_SSE4_1) && ( reload_completed && SSE_REG_P (operands[0]))",
    __builtin_constant_p (
#line 3976 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 3981 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed && SSE_REG_P (operands[0])))
    ? (int) (
#line 3976 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 3981 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed && SSE_REG_P (operands[0])))
    : -1 },
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))\n\
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    ? (int) 
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (IOR, V8SFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE && ix86_binary_operator_ok (IOR, V8SFmode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE && ix86_binary_operator_ok (IOR, V8SFmode, operands)) && (TARGET_AVX))
    : -1 },
#line 5786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "SIGN_EXTEND == ZERO_EXTEND ? TARGET_SSE2 : TARGET_SSE4_1",
    __builtin_constant_p 
#line 5786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(SIGN_EXTEND == ZERO_EXTEND ? TARGET_SSE2 : TARGET_SSE4_1)
    ? (int) 
#line 5786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(SIGN_EXTEND == ZERO_EXTEND ? TARGET_SSE2 : TARGET_SSE4_1)
    : -1 },
#line 7837 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, HImode, operands)",
    __builtin_constant_p 
#line 7837 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands))
    ? (int) 
#line 7837 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands))
    : -1 },
#line 10867 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_BT || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 10867 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun))
    ? (int) 
#line 10867 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun))
    : -1 },
  { "(TARGET_ROUND && !flag_trapping_math) && (TARGET_AVX)",
    __builtin_constant_p (
#line 10024 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_ROUND && !flag_trapping_math) && 
#line 139 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 10024 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_ROUND && !flag_trapping_math) && 
#line 139 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V32QImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p 
((TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V32QImode, operands)) && (TARGET_AVX2))
    ? (int) 
((TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V32QImode, operands)) && (TARGET_AVX2))
    : -1 },
#line 17249 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   && REG_P (operands[0]) && REG_P (operands[4])\n\
   && REGNO (operands[0]) == REGNO (operands[4])\n\
   && peep2_reg_dead_p (4, operands[0])\n\
   && (QImode != QImode\n\
       || immediate_operand (operands[2], SImode)\n\
       || q_regs_operand (operands[2], SImode))\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && ix86_match_ccmode (peep2_next_insn (3),\n\
			 (GET_CODE (operands[3]) == PLUS\n\
			  || GET_CODE (operands[3]) == MINUS)\n\
			 ? CCGOCmode : CCNOmode)",
    __builtin_constant_p 
#line 17249 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REG_P (operands[0]) && REG_P (operands[4])
   && REGNO (operands[0]) == REGNO (operands[4])
   && peep2_reg_dead_p (4, operands[0])
   && (QImode != QImode
       || immediate_operand (operands[2], SImode)
       || q_regs_operand (operands[2], SImode))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    ? (int) 
#line 17249 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REG_P (operands[0]) && REG_P (operands[4])
   && REGNO (operands[0]) == REGNO (operands[4])
   && peep2_reg_dead_p (4, operands[0])
   && (QImode != QImode
       || immediate_operand (operands[2], SImode)
       || q_regs_operand (operands[2], SImode))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    : -1 },
#line 5289 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 5289 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 5289 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V4DImode)\n\
       == GET_MODE_NUNITS (V32QImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V32QImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V32QImode)))
    : -1 },
  { "(TARGET_SSE\n\
   && (register_operand (operands[0], V2TImode)\n\
       || register_operand (operands[1], V2TImode))) && (TARGET_AVX)",
    __builtin_constant_p (
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2TImode)
       || register_operand (operands[1], V2TImode))) && 
#line 107 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2TImode)
       || register_operand (operands[1], V2TImode))) && 
#line 107 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (XOR, V4DFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE && ix86_binary_operator_ok (XOR, V4DFmode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE && ix86_binary_operator_ok (XOR, V4DFmode, operands)) && (TARGET_AVX))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, V16HImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE
   && ix86_binary_operator_ok (XOR, V16HImode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE
   && ix86_binary_operator_ok (XOR, V16HImode, operands)) && (TARGET_AVX))
    : -1 },
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V32QImode)\n\
       == GET_MODE_NUNITS (V4DFmode))",
    __builtin_constant_p 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V4DFmode)))
    ? (int) 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V4DFmode)))
    : -1 },
#line 786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode)",
    __builtin_constant_p 
#line 786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
    ? (int) 
#line 786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
    : -1 },
#line 4950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 4950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 4950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_SSE\n\
   && (register_operand (operands[0], V8SFmode)\n\
       || register_operand (operands[1], V8SFmode))) && (TARGET_AVX)",
    __builtin_constant_p (
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8SFmode)
       || register_operand (operands[1], V8SFmode))) && 
#line 108 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8SFmode)
       || register_operand (operands[1], V8SFmode))) && 
#line 108 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(ix86_binary_operator_ok (PLUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (PLUS, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (PLUS, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
       && DImode != HImode \n\
       && ((DImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 4387 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH\n\
   && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 4387 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 4387 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun))
    : -1 },
  { "(TARGET_SSE4_1) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 9499 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 9499 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, V2DImode, operands)",
    __builtin_constant_p 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V2DImode, operands))
    ? (int) 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V2DImode, operands))
    : -1 },
#line 8561 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, QImode, operands)",
    __builtin_constant_p 
#line 8561 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands))
    ? (int) 
#line 8561 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (AND, V2DFmode, operands)) && (TARGET_SSE2)",
    __builtin_constant_p 
((TARGET_SSE && ix86_binary_operator_ok (AND, V2DFmode, operands)) && (TARGET_SSE2))
    ? (int) 
((TARGET_SSE && ix86_binary_operator_ok (AND, V2DFmode, operands)) && (TARGET_SSE2))
    : -1 },
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16QImode, operands))
    ? (int) 
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16QImode, operands))
    : -1 },
#line 6133 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V8HImode, operands)",
    __builtin_constant_p 
#line 6133 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V8HImode, operands))
    ? (int) 
#line 6133 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V8HImode, operands))
    : -1 },
#line 13757 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations\n\
   && standard_80387_constant_p (operands[3]) == 2",
    __builtin_constant_p 
#line 13757 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    ? (int) 
#line 13757 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    : -1 },
  { "(TARGET_SSE2 && reload_completed) && (Pmode == DImode)",
    __builtin_constant_p (
#line 2617 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && reload_completed) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 2617 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && reload_completed) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 15481 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 15481 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 15481 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
    : -1 },
  { "(TARGET_SSE4_1) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 7043 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 7043 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5971 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 5971 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 5971 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 5212 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5212 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5212 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 16809 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && ((GET_MODE (operands[0]) == HImode\n\
	&& ((optimize_function_for_speed_p (cfun) && !TARGET_FAST_PREFIX)\n\
            /* ??? next two lines just !satisfies_constraint_K (...) */\n\
	    || !CONST_INT_P (operands[2])\n\
	    || satisfies_constraint_K (operands[2])))\n\
       || (GET_MODE (operands[0]) == QImode\n\
	   && (TARGET_PROMOTE_QImode || optimize_function_for_size_p (cfun))))",
    __builtin_constant_p 
#line 16809 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode
	&& ((optimize_function_for_speed_p (cfun) && !TARGET_FAST_PREFIX)
            /* ??? next two lines just !satisfies_constraint_K (...) */
	    || !CONST_INT_P (operands[2])
	    || satisfies_constraint_K (operands[2])))
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode || optimize_function_for_size_p (cfun)))))
    ? (int) 
#line 16809 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode
	&& ((optimize_function_for_speed_p (cfun) && !TARGET_FAST_PREFIX)
            /* ??? next two lines just !satisfies_constraint_K (...) */
	    || !CONST_INT_P (operands[2])
	    || satisfies_constraint_K (operands[2])))
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode || optimize_function_for_size_p (cfun)))))
    : -1 },
  { "((TARGET_SSE\n\
   && (GET_MODE_NUNITS (V2DFmode)\n\
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)) && (TARGET_SSE2)",
    __builtin_constant_p (
((TARGET_SSE
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)) && 
#line 122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
((TARGET_SSE
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)) && 
#line 122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 2742 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_MODE (operands[0]) == TFmode\n\
       || GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == DFmode)\n\
   && !ANY_FP_REG_P (operands[1])",
    __builtin_constant_p 
#line 2742 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && !ANY_FP_REG_P (operands[1]))
    ? (int) 
#line 2742 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && !ANY_FP_REG_P (operands[1]))
    : -1 },
  { "((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9616 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && 
#line 784 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9616 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && 
#line 784 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 10204 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)",
    __builtin_constant_p 
#line 10204 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    ? (int) 
#line 10204 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    : -1 },
#line 8598 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 8598 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 8598 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (DFmode))
    : -1 },
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V8SImode, operands)",
    __builtin_constant_p 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V8SImode, operands))
    ? (int) 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V8SImode, operands))
    : -1 },
  { "(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && ( 1)",
    __builtin_constant_p (
#line 10867 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 10869 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 10867 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 10869 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 13430 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (DFmode))\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 13430 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (DFmode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 13430 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (DFmode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 1600 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands)",
    __builtin_constant_p 
#line 1600 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands))
    ? (int) 
#line 1600 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands))
    : -1 },
#line 15993 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])",
    __builtin_constant_p 
#line 15993 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG]))
    ? (int) 
#line 15993 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG]))
    : -1 },
#line 4950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 4950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 4950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_BMI2 && reload_completed\n\
  && true_regnum (operands[1]) == DX_REG) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6864 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed
  && true_regnum (operands[1]) == DX_REG) && 
#line 792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6864 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed
  && true_regnum (operands[1]) == DX_REG) && 
#line 792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 2328 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_LP64 && ix86_check_movabs (insn, 0)",
    __builtin_constant_p 
#line 2328 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 0))
    ? (int) 
#line 2328 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 0))
    : -1 },
#line 13007 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (DFmode)\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13007 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13007 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 12094 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && avx_vperm2f128_parallel (operands[3], V8SImode)",
    __builtin_constant_p 
#line 12094 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V8SImode))
    ? (int) 
#line 12094 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V8SImode))
    : -1 },
  { "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   && GET_CODE (operands[2]) != MINUS\n\
   && peep2_reg_dead_p (3, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && ix86_match_ccmode (peep2_next_insn (2),\n\
			 GET_CODE (operands[2]) == PLUS\n\
			 ? CCGOCmode : CCNOmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17220 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && GET_CODE (operands[2]) != MINUS
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17220 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && GET_CODE (operands[2]) != MINUS
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "Pmode == SImode",
    __builtin_constant_p 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode)
    ? (int) 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode)
    : -1 },
  { "(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH\n\
   && optimize_function_for_speed_p (cfun)) && ( reload_completed)",
    __builtin_constant_p (
#line 4387 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)) && 
#line 4390 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 4387 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)) && 
#line 4390 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 10985 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && !TARGET_CMOVE",
    __builtin_constant_p 
#line 10985 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !TARGET_CMOVE)
    ? (int) 
#line 10985 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !TARGET_CMOVE)
    : -1 },
#line 5226 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5226 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5226 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4475 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4475 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V4DImode)\n\
       == GET_MODE_NUNITS (V8SFmode))",
    __builtin_constant_p 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V8SFmode)))
    ? (int) 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V8SFmode)))
    : -1 },
#line 779 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 779 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands))
    ? (int) 
#line 779 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands))
    : -1 },
#line 6178 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (EQ, V32QImode, operands)",
    __builtin_constant_p 
#line 6178 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (EQ, V32QImode, operands))
    ? (int) 
#line 6178 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (EQ, V32QImode, operands))
    : -1 },
#line 989 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 989 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 989 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
#line 9447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 9447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 9447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
  { "(!SIBLING_CALL_P (insn)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 11458 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 11458 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 9495 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (optimize_function_for_size_p (cfun)\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || TARGET_DOUBLE_WITH_ADD)))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 9495 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 9495 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
  { "(TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V2DFmode)\n\
       == GET_MODE_NUNITS (V8HImode))) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V8HImode))) && 
#line 122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V8HImode))) && 
#line 122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, V4DImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE
   && ix86_binary_operator_ok (XOR, V4DImode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE
   && ix86_binary_operator_ok (XOR, V4DImode, operands)) && (TARGET_AVX))
    : -1 },
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (XFmode, SImode)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, SImode)
   && reload_completed)
    ? (int) 
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, SImode)
   && reload_completed)
    : -1 },
  { "(TARGET_LWP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 18082 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 18082 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 12903 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_GNU2_TLS",
    __builtin_constant_p 
#line 12903 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS)
    ? (int) 
#line 12903 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS)
    : -1 },
#line 6178 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (EQ, V8SImode, operands)",
    __builtin_constant_p 
#line 6178 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (EQ, V8SImode, operands))
    ? (int) 
#line 6178 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (EQ, V8SImode, operands))
    : -1 },
  { "(TARGET_BMI) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12132 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12132 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(reload_completed) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10103 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed) && 
#line 792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10103 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed) && 
#line 792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V16HImode, operands)",
    __builtin_constant_p 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V16HImode, operands))
    ? (int) 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V16HImode, operands))
    : -1 },
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (DFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 16711 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_target_stack_probe ()",
    __builtin_constant_p 
#line 16711 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_target_stack_probe ())
    ? (int) 
#line 16711 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_target_stack_probe ())
    : -1 },
#line 17587 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()\n\
   && satisfies_constraint_K (operands[2])",
    __builtin_constant_p 
#line 17587 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2]))
    ? (int) 
#line 17587 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2]))
    : -1 },
#line 6340 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)\n\
      && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))\n\
    || GET_MODE (operands[0]) == SImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[2])) - 1 < 3\n\
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])\n\
       < ((unsigned HOST_WIDE_INT) 1 << INTVAL (operands[2])))",
    __builtin_constant_p 
#line 6340 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
      && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    || GET_MODE (operands[0]) == SImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[2])) - 1 < 3
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < ((unsigned HOST_WIDE_INT) 1 << INTVAL (operands[2]))))
    ? (int) 
#line 6340 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
      && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    || GET_MODE (operands[0]) == SImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[2])) - 1 < 3
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < ((unsigned HOST_WIDE_INT) 1 << INTVAL (operands[2]))))
    : -1 },
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, QImode, operands)",
    __builtin_constant_p 
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands))
    ? (int) 
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands))
    : -1 },
#line 5226 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5226 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5226 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 3609 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 3609 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 3609 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun)))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V8SFmode)\n\
       == GET_MODE_NUNITS (V32QImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V32QImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V32QImode)))
    : -1 },
#line 15402 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
       && !flag_trapping_math)",
    __builtin_constant_p 
#line 15402 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && !flag_trapping_math))
    ? (int) 
#line 15402 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && !flag_trapping_math))
    : -1 },
#line 4714 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 4714 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    ? (int) 
#line 4714 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    : -1 },
#line 3620 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && true_regnum (operands[0]) == true_regnum (operands[1])",
    __builtin_constant_p 
#line 3620 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    ? (int) 
#line 3620 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    : -1 },
#line 3957 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 3957 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 3957 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 9982 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 9982 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 9982 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
#line 9675 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && INTVAL (operands[2]) == 63\n\
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 9675 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 63
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 9675 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 63
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 4099 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4099 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 4099 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
#line 4344 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4344 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4344 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V16QImode)\n\
       == GET_MODE_NUNITS (V4SImode))",
    __builtin_constant_p 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V4SImode)))
    ? (int) 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V4SImode)))
    : -1 },
#line 10138 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, SImode, operands)",
    __builtin_constant_p 
#line 10138 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands))
    ? (int) 
#line 10138 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands))
    : -1 },
#line 12839 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_GNU2_TLS",
    __builtin_constant_p 
#line 12839 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS)
    ? (int) 
#line 12839 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS)
    : -1 },
#line 4233 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 4233 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations)
    ? (int) 
#line 4233 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations)
    : -1 },
#line 3494 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && true_regnum (operands[0]) == true_regnum (operands[1])",
    __builtin_constant_p 
#line 3494 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    ? (int) 
#line 3494 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    : -1 },
  { "(ix86_match_ccmode (insn, CCmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 978 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 978 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "((TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & 0x1f) == 0x1f) && ( 1)",
    __builtin_constant_p (
#line 10904 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x1f) == 0x1f) && 
#line 10907 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 10904 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x1f) == 0x1f) && 
#line 10907 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 473 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
  { "peep2_reg_dead_p (3, operands[0])\n\
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])\n\
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 473 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    ? (int) 
#line 473 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    : -1 },
#line 14806 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && ((SImode != DImode) || TARGET_64BIT)",
    __builtin_constant_p 
#line 14806 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT))
    ? (int) 
#line 14806 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT))
    : -1 },
#line 8196 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, QImode, operands)",
    __builtin_constant_p 
#line 8196 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands))
    ? (int) 
#line 8196 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands))
    : -1 },
#line 12305 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_TBM",
    __builtin_constant_p 
#line 12305 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_TBM)
    ? (int) 
#line 12305 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_TBM)
    : -1 },
  { "(ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8302 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8302 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 17317 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17317 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17317 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 6822 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_BMI2\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 6822 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_BMI2
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 6822 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_BMI2
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 4761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && reload_completed",
    __builtin_constant_p 
#line 4761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    ? (int) 
#line 4761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    : -1 },
#line 1993 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_FMA4",
    __builtin_constant_p 
#line 1993 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_FMA4)
    ? (int) 
#line 1993 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_FMA4)
    : -1 },
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))\n\
   && ix86_binary_operator_ok (MINUS, V4HImode, operands)",
    __builtin_constant_p 
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V4HImode, operands))
    ? (int) 
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V4HImode, operands))
    : -1 },
#line 5444 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed && ix86_avoid_lea_for_addr (insn, operands)",
    __builtin_constant_p 
#line 5444 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_addr (insn, operands))
    ? (int) 
#line 5444 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_addr (insn, operands))
    : -1 },
#line 8849 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)\n\
    || (TARGET_SSE2 && (TFmode == TFmode)))\n\
   && reload_completed",
    __builtin_constant_p 
#line 8849 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (TFmode == TFmode)))
   && reload_completed)
    ? (int) 
#line 8849 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (TFmode == TFmode)))
   && reload_completed)
    : -1 },
#line 16441 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE)\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 16441 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 16441 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 6477 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6477 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6477 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (XOR, V8SFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE && ix86_binary_operator_ok (XOR, V8SFmode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE && ix86_binary_operator_ok (XOR, V8SFmode, operands)) && (TARGET_AVX))
    : -1 },
#line 5329 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5329 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed)
    ? (int) 
#line 5329 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed)
    : -1 },
#line 5832 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 5832 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 5832 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 15740 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG])",
    __builtin_constant_p 
#line 15740 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG]))
    ? (int) 
#line 15740 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG]))
    : -1 },
#line 5141 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5141 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 5141 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    : -1 },
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((SImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4SImode, operands)",
    __builtin_constant_p 
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4SImode, operands))
    ? (int) 
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4SImode, operands))
    : -1 },
#line 6477 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6477 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6477 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 1625 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 1625 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    ? (int) 
#line 1625 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    : -1 },
#line 441 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V2SFmode, operands)",
    __builtin_constant_p 
#line 441 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2SFmode, operands))
    ? (int) 
#line 441 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2SFmode, operands))
    : -1 },
  { "(optimize_insn_for_size_p ()\n\
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 8766 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (reload_completed\n\
       || !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 8766 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 8766 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 2891 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (!can_create_pseudo_p ()\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || (optimize_function_for_size_p (cfun)\n\
	   && standard_80387_constant_p (operands[1]) > 0\n\
	   && !memory_operand (operands[0], XFmode))\n\
       || (!TARGET_MEMORY_MISMATCH_STALL\n\
	   && memory_operand (operands[0], XFmode)))",
    __builtin_constant_p 
#line 2891 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]) > 0
	   && !memory_operand (operands[0], XFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], XFmode))))
    ? (int) 
#line 2891 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]) > 0
	   && !memory_operand (operands[0], XFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], XFmode))))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 390 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 390 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_XOP) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 11467 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_XOP) && 
#line 143 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 11467 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_XOP) && 
#line 143 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 9296 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 9296 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 9296 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
  { "(TARGET_ROUND) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 9960 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_ROUND) && 
#line 143 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 9960 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_ROUND) && 
#line 143 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 11567 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 11567 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && !SIBLING_CALL_P (insn))
    ? (int) 
#line 11567 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && !SIBLING_CALL_P (insn))
    : -1 },
  { "(TARGET_FMA || TARGET_FMA4) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1860 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1860 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 4162 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && !TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4162 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !TARGET_MIX_SSE_I387)
    ? (int) 
#line 4162 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !TARGET_MIX_SSE_I387)
    : -1 },
#line 15341 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math",
    __builtin_constant_p 
#line 15341 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math)
    ? (int) 
#line 15341 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math)
    : -1 },
  { "(TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands)) && (TARGET_SSE2)",
    __builtin_constant_p 
((TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands)) && (TARGET_SSE2))
    ? (int) 
((TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands)) && (TARGET_SSE2))
    : -1 },
#line 13122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode)\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_SSE2\n\
   && ((unsigned) exact_log2 (INTVAL (operands[3]))\n\
       < GET_MODE_NUNITS (V2DImode))) && (TARGET_SSE4_1 && TARGET_64BIT)",
    __builtin_constant_p (
#line 6989 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2DImode))) && 
#line 6975 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_64BIT))
    ? (int) (
#line 6989 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2DImode))) && 
#line 6975 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V2DFmode)\n\
       == GET_MODE_NUNITS (V4SImode))) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V4SImode))) && 
#line 122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V4SImode))) && 
#line 122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 16441 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE)\n\
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 16441 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 16441 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 3599 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))\n\
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1]))",
    __builtin_constant_p 
#line 3599 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1])))
    ? (int) 
#line 3599 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1])))
    : -1 },
#line 4651 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 4651 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
    ? (int) 
#line 4651 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
    : -1 },
#line 3356 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_MODE (operands[0]) == TFmode\n\
       || GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == DFmode)\n\
   && (operands[2] = find_constant_src (insn))",
    __builtin_constant_p 
#line 3356 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && (operands[2] = find_constant_src (insn)))
    ? (int) 
#line 3356 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && (operands[2] = find_constant_src (insn)))
    : -1 },
#line 4413 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)\n\
   && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4413 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4413 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 6607 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && ix86_binary_operator_ok (AND, TFmode, operands)",
    __builtin_constant_p 
#line 6607 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ix86_binary_operator_ok (AND, TFmode, operands))
    ? (int) 
#line 6607 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ix86_binary_operator_ok (AND, TFmode, operands))
    : -1 },
#line 1034 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (UMIN, V8QImode, operands)",
    __builtin_constant_p 
#line 1034 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands))
    ? (int) 
#line 1034 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands))
    : -1 },
#line 5347 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)\n\
   && TARGET_SSE",
    __builtin_constant_p 
#line 5347 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE)
    ? (int) 
#line 5347 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE)
    : -1 },
#line 13081 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (SFmode)\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13081 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (SFmode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13081 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (SFmode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 11889 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "epilogue_completed",
    __builtin_constant_p 
#line 11889 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(epilogue_completed)
    ? (int) 
#line 11889 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(epilogue_completed)
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, V16HImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE
   && ix86_binary_operator_ok (IOR, V16HImode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE
   && ix86_binary_operator_ok (IOR, V16HImode, operands)) && (TARGET_AVX))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V4DFmode)\n\
       == GET_MODE_NUNITS (V32QImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V32QImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V32QImode)))
    : -1 },
#line 4897 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && TARGET_INTER_UNIT_CONVERSIONS\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 4897 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 4897 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 4344 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4344 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4344 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 1448 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && reload_completed",
    __builtin_constant_p 
#line 1448 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && reload_completed)
    ? (int) 
#line 1448 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && reload_completed)
    : -1 },
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands))
    ? (int) 
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)) && (TARGET_SSE2)",
    __builtin_constant_p 
((TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)) && (TARGET_SSE2))
    ? (int) 
((TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)) && (TARGET_SSE2))
    : -1 },
#line 1874 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && !SSE_REG_P (operands[0]) && !SSE_REG_P (operands[1])",
    __builtin_constant_p 
#line 1874 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && !SSE_REG_P (operands[0]) && !SSE_REG_P (operands[1]))
    ? (int) 
#line 1874 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && !SSE_REG_P (operands[0]) && !SSE_REG_P (operands[1]))
    : -1 },
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
       && SImode != HImode \n\
       && ((SImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
  { "((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (TFmode == TFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 8820 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (TFmode == TFmode))) && 
#line 8823 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 8820 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (TFmode == TFmode))) && 
#line 8823 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 16840 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && optimize_insn_for_speed_p ()\n\
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)\n\
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))\n\
   /* Ensure that the operand will remain sign-extended immediate.  */\n\
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 16840 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && optimize_insn_for_speed_p ()
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 16840 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && optimize_insn_for_speed_p ()
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
#line 323 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "!TARGET_64BIT && reload_completed\n\
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0])\n\
	|| MMX_REG_P (operands[1]) || SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 323 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0])
	|| MMX_REG_P (operands[1]) || SSE_REG_P (operands[1])))
    ? (int) 
#line 323 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0])
	|| MMX_REG_P (operands[1]) || SSE_REG_P (operands[1])))
    : -1 },
  { "((TARGET_SSE) && (TARGET_SSE2)) && ( reload_completed)",
    __builtin_constant_p ((
#line 733 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 735 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) ((
#line 733 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 735 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 17190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   && peep2_reg_dead_p (4, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && (SImode != QImode\n\
       || immediate_operand (operands[2], QImode)\n\
       || q_regs_operand (operands[2], QImode))\n\
   && ix86_match_ccmode (peep2_next_insn (3),\n\
			 (GET_CODE (operands[3]) == PLUS\n\
			  || GET_CODE (operands[3]) == MINUS)\n\
			 ? CCGOCmode : CCNOmode)",
    __builtin_constant_p 
#line 17190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || q_regs_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    ? (int) 
#line 17190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || q_regs_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    : -1 },
#line 1523 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1523 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1523 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
  { "(TARGET_SSE2 && reload_completed) && (Pmode == SImode)",
    __builtin_constant_p (
#line 2617 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && reload_completed) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 2617 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && reload_completed) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
       && HImode != HImode \n\
       && ((HImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 6365 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE4_2",
    __builtin_constant_p 
#line 6365 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_2)
    ? (int) 
#line 6365 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_2)
    : -1 },
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, V2DImode, operands)",
    __builtin_constant_p 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V2DImode, operands))
    ? (int) 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V2DImode, operands))
    : -1 },
#line 12990 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 12990 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 12990 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "((TARGET_VZEROUPPER && SIBLING_CALL_P (insn)) && (Pmode == SImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 11468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 11470 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) ((
#line 11468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 11470 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 12434 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_BSWAP",
    __builtin_constant_p 
#line 12434 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BSWAP)
    ? (int) 
#line 12434 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BSWAP)
    : -1 },
#line 5394 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && ((TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)\n\
	&& TARGET_SSE)\n\
       || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 5394 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 5394 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 1015 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (SMAX, V4HImode, operands)",
    __builtin_constant_p 
#line 1015 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands))
    ? (int) 
#line 1015 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands))
    : -1 },
#line 4772 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
        || TARGET_MIX_SSE_I387)\n\
    && reload_completed",
    __builtin_constant_p 
#line 4772 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    ? (int) 
#line 4772 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (XFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4826 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4826 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 7663 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[2])\n\
    && GET_MODE (operands[2]) != QImode\n\
    && ((ix86_match_ccmode (insn, CCZmode)\n\
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))\n\
	|| (ix86_match_ccmode (insn, CCNOmode)\n\
	    && !(INTVAL (operands[3]) & ~(127 << 8))))",
    __builtin_constant_p 
#line 7663 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[2])
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8)))))
    ? (int) 
#line 7663 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[2])
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8)))))
    : -1 },
  { "((optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9982 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9982 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 11059 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[3]))\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[3])\n\
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode\n\
   && !TARGET_CMOVE",
    __builtin_constant_p 
#line 11059 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[3]))
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && !TARGET_CMOVE)
    ? (int) 
#line 11059 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[3]))
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && !TARGET_CMOVE)
    : -1 },
#line 5411 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands)",
    __builtin_constant_p 
#line 5411 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    ? (int) 
#line 5411 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    : -1 },
#line 16451 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE",
    __builtin_constant_p 
#line 16451 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE)
    ? (int) 
#line 16451 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE)
    : -1 },
#line 13743 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && standard_80387_constant_p (operands[3]) == 2",
    __builtin_constant_p 
#line 13743 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    ? (int) 
#line 13743 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    : -1 },
  { "(TARGET_FMA || TARGET_FMA4) && (TARGET_SSE_MATH)",
    __builtin_constant_p (
#line 1757 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 1724 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE_MATH))
    ? (int) (
#line 1757 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 1724 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE_MATH))
    : -1 },
  { "(SIBLING_CALL_P (insn)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 11479 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 11479 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 12094 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && avx_vperm2f128_parallel (operands[3], V4DFmode)",
    __builtin_constant_p 
#line 12094 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V4DFmode))
    ? (int) 
#line 12094 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V4DFmode))
    : -1 },
  { "((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (SFmode == TFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 8820 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (SFmode == TFmode))) && 
#line 8823 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 8820 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (SFmode == TFmode))) && 
#line 8823 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 5411 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5411 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE_MATH)
    ? (int) 
#line 5411 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE_MATH)
    : -1 },
#line 8561 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, HImode, operands)",
    __builtin_constant_p 
#line 8561 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands))
    ? (int) 
#line 8561 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands))
    : -1 },
#line 7728 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands)",
    __builtin_constant_p 
#line 7728 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands))
    ? (int) 
#line 7728 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands))
    : -1 },
#line 4910 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 4910 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 4910 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 2770 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (!can_create_pseudo_p ()\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || (optimize_function_for_size_p (cfun)\n\
	   && standard_sse_constant_p (operands[1])\n\
	   && !memory_operand (operands[0], TFmode))\n\
       || (!TARGET_MEMORY_MISMATCH_STALL\n\
	   && memory_operand (operands[0], TFmode)))",
    __builtin_constant_p 
#line 2770 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && standard_sse_constant_p (operands[1])
	   && !memory_operand (operands[0], TFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], TFmode))))
    ? (int) 
#line 2770 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && standard_sse_constant_p (operands[1])
	   && !memory_operand (operands[0], TFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], TFmode))))
    : -1 },
#line 1087 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands)",
    __builtin_constant_p 
#line 1087 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands))
    ? (int) 
#line 1087 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands))
    : -1 },
#line 16604 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "REGNO (operands[0]) != REGNO (operands[1])",
    __builtin_constant_p 
#line 16604 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1]))
    ? (int) 
#line 16604 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1]))
    : -1 },
#line 12655 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_GNU_TLS",
    __builtin_constant_p 
#line 12655 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
    ? (int) 
#line 12655 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
    : -1 },
#line 12419 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_MOVBE\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 12419 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 12419 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V8QImode, operands)",
    __builtin_constant_p 
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V8QImode, operands))
    ? (int) 
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V8QImode, operands))
    : -1 },
#line 7038 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_80387 && X87_ENABLE_ARITH (DFmode))\n\
    || (TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 7038 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (DFmode))
    || (TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 7038 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (DFmode))
    || (TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
  { "(((TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)) && ( 1)",
    __builtin_constant_p ((
#line 10833 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10837 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) ((
#line 10833 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10837 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 4453 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ()",
    __builtin_constant_p 
#line 4453 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ())
    ? (int) 
#line 4453 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ())
    : -1 },
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V32QImode, operands)",
    __builtin_constant_p 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V32QImode, operands))
    ? (int) 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V32QImode, operands))
    : -1 },
#line 17100 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())",
    __builtin_constant_p 
#line 17100 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ()))
    ? (int) 
#line 17100 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ()))
    : -1 },
#line 7021 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_80387 && X87_ENABLE_ARITH (DFmode))\n\
    || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 7021 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (DFmode))
    || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 7021 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (DFmode))
    || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 12166 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_BMI2",
    __builtin_constant_p 
#line 12166 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BMI2)
    ? (int) 
#line 12166 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BMI2)
    : -1 },
#line 4297 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 1)",
    __builtin_constant_p 
#line 4297 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 1))
    ? (int) 
#line 4297 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 1))
    : -1 },
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
       && HImode != HImode \n\
       && ((HImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
  { "(ix86_target_stack_probe ()) && (Pmode == SImode)",
    __builtin_constant_p (
#line 16703 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 16703 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 6205 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_XOP\n\
   && ix86_binary_operator_ok (EQ, V4SImode, operands)",
    __builtin_constant_p 
#line 6205 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V4SImode, operands))
    ? (int) 
#line 6205 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V4SImode, operands))
    : -1 },
  { "(TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4722 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4727 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4722 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4727 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands))
    ? (int) 
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands))
    : -1 },
#line 13247 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13247 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13247 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 818 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)) && 
#line 130 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 818 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)) && 
#line 130 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 9098 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFT, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 9098 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 9098 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
#line 966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 7977 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, HImode, operands)",
    __builtin_constant_p 
#line 7977 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands))
    ? (int) 
#line 7977 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands))
    : -1 },
#line 5347 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)\n\
   && TARGET_SSE",
    __builtin_constant_p 
#line 5347 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE)
    ? (int) 
#line 5347 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE)
    : -1 },
#line 1600 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 1600 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    ? (int) 
#line 1600 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V8SFmode)\n\
       == GET_MODE_NUNITS (V8SImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V8SImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V8SImode)))
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (DFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4826 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4826 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 4413 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)\n\
   && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4413 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4413 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 3394 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_MODE (operands[0]) == TFmode\n\
       || GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == DFmode)\n\
   && !(ANY_FP_REG_P (operands[0]) || ANY_FP_REG_P (operands[1]))",
    __builtin_constant_p 
#line 3394 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && !(ANY_FP_REG_P (operands[0]) || ANY_FP_REG_P (operands[1])))
    ? (int) 
#line 3394 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && !(ANY_FP_REG_P (operands[0]) || ANY_FP_REG_P (operands[1])))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16HImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p 
((TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16HImode, operands)) && (TARGET_AVX2))
    ? (int) 
((TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16HImode, operands)) && (TARGET_AVX2))
    : -1 },
#line 250 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
  { "!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)",
    __builtin_constant_p 
#line 250 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE))
    ? (int) 
#line 250 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE))
    : -1 },
  { "(TARGET_AVX) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 12027 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 12027 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 6178 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (EQ, V4DImode, operands)",
    __builtin_constant_p 
#line 6178 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (EQ, V4DImode, operands))
    ? (int) 
#line 6178 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (EQ, V4DImode, operands))
    : -1 },
  { "(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 1405 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1407 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
( reload_completed))
    ? (int) (
#line 1405 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1407 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
( reload_completed))
    : -1 },
#line 12444 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_XCHGB || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 12444 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_XCHGB || optimize_function_for_size_p (cfun))
    ? (int) 
#line 12444 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_XCHGB || optimize_function_for_size_p (cfun))
    : -1 },
#line 4547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && can_create_pseudo_p ())
    ? (int) 
#line 4547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V16HImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5065 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V16HImode, operands)) && 
#line 174 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5065 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V16HImode, operands)) && 
#line 174 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
  { "(TARGET_SSE && !flag_finite_math_only) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1049 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && !flag_finite_math_only) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1049 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && !flag_finite_math_only) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
       && SImode != HImode \n\
       && ((SImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 11000 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && SELECT_CC_MODE (GET_CODE (operands[0]),\n\
		      operands[1], operands[2]) == CCFPmode\n\
   && !TARGET_CMOVE",
    __builtin_constant_p 
#line 11000 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && !TARGET_CMOVE)
    ? (int) 
#line 11000 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && !TARGET_CMOVE)
    : -1 },
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V2DImode)\n\
       || register_operand (operands[1], V2DImode))",
    __builtin_constant_p 
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    ? (int) 
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    : -1 },
#line 18124 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_FSGSBASE",
    __builtin_constant_p 
#line 18124 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE)
    ? (int) 
#line 18124 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE)
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V32QImode)\n\
       == GET_MODE_NUNITS (V8SImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V8SImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V8SImode)))
    : -1 },
#line 4320 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 || SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 4320 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 4320 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (DFmode))
    : -1 },
#line 6973 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 6973 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 6973 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 2960 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (!can_create_pseudo_p ()\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || (optimize_function_for_size_p (cfun)\n\
	   && ((!(TARGET_SSE2 && TARGET_SSE_MATH)\n\
		&& standard_80387_constant_p (operands[1]) > 0)\n\
	       || (TARGET_SSE2 && TARGET_SSE_MATH\n\
		   && standard_sse_constant_p (operands[1]))))\n\
       || memory_operand (operands[0], DFmode))",
    __builtin_constant_p 
#line 2960 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && ((!(TARGET_SSE2 && TARGET_SSE_MATH)
		&& standard_80387_constant_p (operands[1]) > 0)
	       || (TARGET_SSE2 && TARGET_SSE_MATH
		   && standard_sse_constant_p (operands[1]))))
       || memory_operand (operands[0], DFmode)))
    ? (int) 
#line 2960 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && ((!(TARGET_SSE2 && TARGET_SSE_MATH)
		&& standard_80387_constant_p (operands[1]) > 0)
	       || (TARGET_SSE2 && TARGET_SSE_MATH
		   && standard_sse_constant_p (operands[1]))))
       || memory_operand (operands[0], DFmode)))
    : -1 },
#line 16935 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())\n\
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))",
    __builtin_constant_p 
#line 16935 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0)))
    ? (int) 
#line 16935 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0)))
    : -1 },
#line 18134 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_RDRND",
    __builtin_constant_p 
#line 18134 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_RDRND)
    ? (int) 
#line 18134 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_RDRND)
    : -1 },
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands)",
    __builtin_constant_p 
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    ? (int) 
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    : -1 },
  { "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   && peep2_reg_dead_p (4, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && (DImode != QImode\n\
       || immediate_operand (operands[2], QImode)\n\
       || q_regs_operand (operands[2], QImode))\n\
   && ix86_match_ccmode (peep2_next_insn (3),\n\
			 (GET_CODE (operands[3]) == PLUS\n\
			  || GET_CODE (operands[3]) == MINUS)\n\
			 ? CCGOCmode : CCNOmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && (DImode != QImode
       || immediate_operand (operands[2], QImode)
       || q_regs_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && (DImode != QImode
       || immediate_operand (operands[2], QImode)
       || q_regs_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 6607 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && ix86_binary_operator_ok (XOR, TFmode, operands)",
    __builtin_constant_p 
#line 6607 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ix86_binary_operator_ok (XOR, TFmode, operands))
    ? (int) 
#line 6607 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ix86_binary_operator_ok (XOR, TFmode, operands))
    : -1 },
#line 6205 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_XOP\n\
   && ix86_binary_operator_ok (EQ, V16QImode, operands)",
    __builtin_constant_p 
#line 6205 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V16QImode, operands))
    ? (int) 
#line 6205 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V16QImode, operands))
    : -1 },
#line 8275 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8275 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8275 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 12969 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 12969 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 12969 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 3535 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)\n\
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)\n\
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)\n\
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4))",
    __builtin_constant_p 
#line 3535 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4)))
    ? (int) 
#line 3535 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4)))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V32QImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p 
((TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V32QImode, operands)) && (TARGET_AVX2))
    ? (int) 
((TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V32QImode, operands)) && (TARGET_AVX2))
    : -1 },
#line 5329 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5329 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed)
    ? (int) 
#line 5329 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed)
    : -1 },
#line 7164 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])\n\
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])\n\
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])\n\
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9])",
    __builtin_constant_p 
#line 7164 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9]))
    ? (int) 
#line 7164 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9]))
    : -1 },
  { "(TARGET_SSE\n\
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && (TARGET_AVX)",
    __builtin_constant_p (
#line 1430 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 1430 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(reload_completed && ix86_avoid_lea_for_addr (insn, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5444 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_addr (insn, operands)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5444 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_addr (insn, operands)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 7977 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, QImode, operands)",
    __builtin_constant_p 
#line 7977 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands))
    ? (int) 
#line 7977 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands))
    : -1 },
  { "(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 15786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 15786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
       && DImode != HImode \n\
       && ((DImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 1577 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW)\n\
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 1577 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    ? (int) 
#line 1577 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, V16HImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE
   && ix86_binary_operator_ok (AND, V16HImode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE
   && ix86_binary_operator_ok (AND, V16HImode, operands)) && (TARGET_AVX))
    : -1 },
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V32QImode, operands)",
    __builtin_constant_p 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V32QImode, operands))
    ? (int) 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V32QImode, operands))
    : -1 },
  { "(!TARGET_PARTIAL_REG_STALL\n\
   || DImode == SImode\n\
   || optimize_function_for_size_p (cfun)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17525 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   || DImode == SImode
   || optimize_function_for_size_p (cfun)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17525 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   || DImode == SImode
   || optimize_function_for_size_p (cfun)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 16512 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE\n\
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 16512 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 16512 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
#line 8466 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 8466 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 8466 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (XFmode, DImode)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, DImode)
   && reload_completed)
    ? (int) 
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, DImode)
   && reload_completed)
    : -1 },
#line 1056 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 1056 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 1056 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V8SImode)\n\
       == GET_MODE_NUNITS (V16HImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V16HImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V16HImode)))
    : -1 },
#line 17710 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_3DNOW || TARGET_PREFETCHW",
    __builtin_constant_p 
#line 17710 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_3DNOW || TARGET_PREFETCHW)
    ? (int) 
#line 17710 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_3DNOW || TARGET_PREFETCHW)
    : -1 },
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (SFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 17525 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   || SImode == SImode\n\
   || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 17525 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   || SImode == SImode
   || optimize_function_for_size_p (cfun))
    ? (int) 
#line 17525 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   || SImode == SImode
   || optimize_function_for_size_p (cfun))
    : -1 },
#line 9863 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 9863 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 9863 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
  { "(reload_completed) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3856 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 3856 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 7496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE",
    __builtin_constant_p 
#line 7496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE)
    ? (int) 
#line 7496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE)
    : -1 },
  { "(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()\n\
   && !satisfies_constraint_K (operands[2])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17555 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17555 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5880 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 5880 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 5880 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "Pmode == DImode",
    __builtin_constant_p 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode)
    ? (int) 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode)
    : -1 },
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
       && HImode != HImode \n\
       && ((HImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 9192 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 9192 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 9192 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands)",
    __builtin_constant_p 
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    ? (int) 
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    : -1 },
#line 17346 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && exact_log2 (INTVAL (operands[2])) >= 0\n\
   && REGNO (operands[0]) == REGNO (operands[1])\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17346 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && exact_log2 (INTVAL (operands[2])) >= 0
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17346 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && exact_log2 (INTVAL (operands[2])) >= 0
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 13714 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 13714 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))
   && can_create_pseudo_p ())
    ? (int) 
#line 13714 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))
   && can_create_pseudo_p ())
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4553 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4553 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(TARGET_64BIT && TARGET_FSGSBASE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 18124 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 18124 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 17249 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   && REG_P (operands[0]) && REG_P (operands[4])\n\
   && REGNO (operands[0]) == REGNO (operands[4])\n\
   && peep2_reg_dead_p (4, operands[0])\n\
   && (HImode != QImode\n\
       || immediate_operand (operands[2], SImode)\n\
       || q_regs_operand (operands[2], SImode))\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && ix86_match_ccmode (peep2_next_insn (3),\n\
			 (GET_CODE (operands[3]) == PLUS\n\
			  || GET_CODE (operands[3]) == MINUS)\n\
			 ? CCGOCmode : CCNOmode)",
    __builtin_constant_p 
#line 17249 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REG_P (operands[0]) && REG_P (operands[4])
   && REGNO (operands[0]) == REGNO (operands[4])
   && peep2_reg_dead_p (4, operands[0])
   && (HImode != QImode
       || immediate_operand (operands[2], SImode)
       || q_regs_operand (operands[2], SImode))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    ? (int) 
#line 17249 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REG_P (operands[0]) && REG_P (operands[4])
   && REGNO (operands[0]) == REGNO (operands[4])
   && peep2_reg_dead_p (4, operands[0])
   && (HImode != QImode
       || immediate_operand (operands[2], SImode)
       || q_regs_operand (operands[2], SImode))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    : -1 },
#line 8866 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 8866 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 8866 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))\n\
   && ix86_binary_operator_ok (MINUS, V1DImode, operands)",
    __builtin_constant_p 
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V1DImode, operands))
    ? (int) 
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V1DImode, operands))
    : -1 },
  { "(TARGET_BMI2) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12166 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12166 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V2DImode)\n\
       == GET_MODE_NUNITS (V16QImode))",
    __builtin_constant_p 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V16QImode)))
    ? (int) 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V16QImode)))
    : -1 },
#line 6731 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_HIMODE_MATH\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 6731 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 6731 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 7256 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_8BIT_IDIV\n\
   && TARGET_QIMODE_MATH\n\
   && can_create_pseudo_p ()\n\
   && !optimize_insn_for_size_p ()",
    __builtin_constant_p 
#line 7256 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ())
    ? (int) 
#line 7256 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ())
    : -1 },
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16QImode, operands))
    ? (int) 
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16QImode, operands))
    : -1 },
  { "(TARGET_SSE\n\
   && (register_operand (operands[0], V16HImode)\n\
       || register_operand (operands[1], V16HImode))) && (TARGET_AVX)",
    __builtin_constant_p (
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16HImode)
       || register_operand (operands[1], V16HImode))) && 
#line 104 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16HImode)
       || register_operand (operands[1], V16HImode))) && 
#line 104 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 5155 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5155 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5155 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_SSE2\n\
   && ((unsigned) exact_log2 (INTVAL (operands[3]))\n\
       < GET_MODE_NUNITS (V16QImode))) && (TARGET_SSE4_1)",
    __builtin_constant_p (
#line 6989 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V16QImode))) && 
#line 6973 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
    ? (int) (
#line 6989 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V16QImode))) && 
#line 6973 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
    : -1 },
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands)",
    __builtin_constant_p 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands))
    ? (int) 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands))
    : -1 },
#line 6022 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCGCmode)",
    __builtin_constant_p 
#line 6022 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGCmode))
    ? (int) 
#line 6022 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGCmode))
    : -1 },
#line 6052 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V4SImode, operands)",
    __builtin_constant_p 
#line 6052 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V4SImode, operands))
    ? (int) 
#line 6052 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V4SImode, operands))
    : -1 },
  { "(TARGET_SSE) && (TARGET_SSE2 && TARGET_64BIT)",
    __builtin_constant_p (
#line 713 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 702 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT))
    ? (int) (
#line 713 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 702 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT))
    : -1 },
#line 8809 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (SFmode == TFmode))",
    __builtin_constant_p 
#line 8809 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (SFmode == TFmode)))
    ? (int) 
#line 8809 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (SFmode == TFmode)))
    : -1 },
#line 5155 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5155 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5155 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 15445 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && can_create_pseudo_p ()) && 
#line 15449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 15445 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && can_create_pseudo_p ()) && 
#line 15449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 15652 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15652 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 15652 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    ? (int) 
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    : -1 },
#line 7524 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && reload_completed\n\
   && (TARGET_INTER_UNIT_MOVES\n\
       || MEM_P (operands [0])\n\
       || !GENERAL_REGNO_P (true_regnum (operands [0])))",
    __builtin_constant_p 
#line 7524 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && reload_completed
   && (TARGET_INTER_UNIT_MOVES
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0]))))
    ? (int) 
#line 7524 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && reload_completed
   && (TARGET_INTER_UNIT_MOVES
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0]))))
    : -1 },
#line 1323 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])",
    __builtin_constant_p 
#line 1323 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    ? (int) 
#line 1323 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    : -1 },
#line 2755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT || TARGET_SSE2",
    __builtin_constant_p 
#line 2755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_SSE2)
    ? (int) 
#line 2755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_SSE2)
    : -1 },
#line 6106 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 6106 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 6106 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V16HImode)\n\
       == GET_MODE_NUNITS (V8SFmode))",
    __builtin_constant_p 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V8SFmode)))
    ? (int) 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V8SFmode)))
    : -1 },
#line 1349 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW_A",
    __builtin_constant_p 
#line 1349 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW_A)
    ? (int) 
#line 1349 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW_A)
    : -1 },
  { "(!SIBLING_CALL_P (insn)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 11458 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 11458 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_SSE4A) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 9393 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4A) && 
#line 143 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 9393 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4A) && 
#line 143 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 5177 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5177 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5177 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V4SFmode)\n\
       == GET_MODE_NUNITS (V4SImode))",
    __builtin_constant_p 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V4SImode)))
    ? (int) 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V4SImode)))
    : -1 },
#line 11686 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_can_use_return_insn_p ()",
    __builtin_constant_p 
#line 11686 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_can_use_return_insn_p ())
    ? (int) 
#line 11686 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_can_use_return_insn_p ())
    : -1 },
  { "(! TARGET_POPCNT) && ( reload_completed)",
    __builtin_constant_p (
#line 12544 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(! TARGET_POPCNT) && 
#line 12546 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 12544 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(! TARGET_POPCNT) && 
#line 12546 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V2DImode)\n\
       == GET_MODE_NUNITS (V8HImode))",
    __builtin_constant_p 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V8HImode)))
    ? (int) 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V8HImode)))
    : -1 },
  { "(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 16399 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 758 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 16399 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 758 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 8925 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 8925 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 8925 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 9427 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])",
    __builtin_constant_p 
#line 9427 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    ? (int) 
#line 9427 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    : -1 },
#line 138 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
  { "TARGET_64BIT || (TARGET_CMPXCHG8B && (TARGET_80387 || TARGET_SSE))",
    __builtin_constant_p 
#line 138 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_64BIT || (TARGET_CMPXCHG8B && (TARGET_80387 || TARGET_SSE)))
    ? (int) 
#line 138 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_64BIT || (TARGET_CMPXCHG8B && (TARGET_80387 || TARGET_SSE)))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)) && (TARGET_AVX))
    : -1 },
#line 2925 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (!can_create_pseudo_p ()\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || (optimize_function_for_size_p (cfun)\n\
	   && standard_80387_constant_p (operands[1]) > 0\n\
	   && !memory_operand (operands[0], XFmode))\n\
       || (!TARGET_MEMORY_MISMATCH_STALL\n\
	   && memory_operand (operands[0], XFmode)))",
    __builtin_constant_p 
#line 2925 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]) > 0
	   && !memory_operand (operands[0], XFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], XFmode))))
    ? (int) 
#line 2925 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]) > 0
	   && !memory_operand (operands[0], XFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], XFmode))))
    : -1 },
  { "(TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V2DFmode)\n\
       == GET_MODE_NUNITS (V16QImode))) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V16QImode))) && 
#line 122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V16QImode))) && 
#line 122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
  { "(ix86_binary_operator_ok (PLUS, DImode, operands)) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 5472 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 791 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 5472 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 791 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 2642 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 2642 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_function_for_size_p (cfun))
    ? (int) 
#line 2642 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_function_for_size_p (cfun))
    : -1 },
#line 5115 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5115 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5115 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
  { "(optimize_insn_for_speed_p ()\n\
   && (!TARGET_PARTIAL_REG_STALL || DImode == SImode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (!TARGET_PARTIAL_REG_STALL || DImode == SImode)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (!TARGET_PARTIAL_REG_STALL || DImode == SImode)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 452 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
  { "TARGET_XADD",
    __builtin_constant_p 
#line 452 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_XADD)
    ? (int) 
#line 452 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_XADD)
    : -1 },
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V2DImode)\n\
       == GET_MODE_NUNITS (V4SImode))",
    __builtin_constant_p 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V4SImode)))
    ? (int) 
#line 6348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V4SImode)))
    : -1 },
#line 12008 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && avx_vpermilp_parallel (operands[2], V4SFmode)",
    __builtin_constant_p 
#line 12008 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vpermilp_parallel (operands[2], V4SFmode))
    ? (int) 
#line 12008 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vpermilp_parallel (operands[2], V4SFmode))
    : -1 },
#line 4910 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 4910 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 4910 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 13061 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 13061 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 13061 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 11864 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX && reload_completed",
    __builtin_constant_p 
#line 11864 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX && reload_completed)
    ? (int) 
#line 11864 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX && reload_completed)
    : -1 },
  { "((optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)\n\
   && peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17301 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 758 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17301 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 758 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1280 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ((unsigned) exact_log2 (INTVAL (operands[3]))\n\
       < GET_MODE_NUNITS (V4HImode))",
    __builtin_constant_p 
#line 1280 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HImode)))
    ? (int) 
#line 1280 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HImode)))
    : -1 },
#line 17508 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(((!TARGET_FUSE_CMP_AND_BRANCH || optimize_insn_for_size_p ())\n\
     && incdec_operand (operands[3], GET_MODE (operands[3])))\n\
    || (!TARGET_FUSE_CMP_AND_BRANCH\n\
	&& INTVAL (operands[3]) == 128))\n\
   && ix86_match_ccmode (insn, CCGCmode)\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 17508 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((((!TARGET_FUSE_CMP_AND_BRANCH || optimize_insn_for_size_p ())
     && incdec_operand (operands[3], GET_MODE (operands[3])))
    || (!TARGET_FUSE_CMP_AND_BRANCH
	&& INTVAL (operands[3]) == 128))
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 17508 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((((!TARGET_FUSE_CMP_AND_BRANCH || optimize_insn_for_size_p ())
     && incdec_operand (operands[3], GET_MODE (operands[3])))
    || (!TARGET_FUSE_CMP_AND_BRANCH
	&& INTVAL (operands[3]) == 128))
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 13122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (DFmode, HImode)\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, HImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, HImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
#line 4772 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
        || TARGET_MIX_SSE_I387)\n\
    && reload_completed",
    __builtin_constant_p 
#line 4772 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    ? (int) 
#line 4772 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    : -1 },
#line 10204 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)",
    __builtin_constant_p 
#line 10204 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands))
    ? (int) 
#line 10204 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands))
    : -1 },
#line 1628 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode)",
    __builtin_constant_p 
#line 1628 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    ? (int) 
#line 1628 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V16HImode)\n\
       == GET_MODE_NUNITS (V16HImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V16HImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V16HImode)))
    : -1 },
#line 6148 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands)",
    __builtin_constant_p 
#line 6148 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    ? (int) 
#line 6148 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    : -1 },
#line 8589 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8589 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8589 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 13122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode)\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
#line 9692 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "INTVAL (operands[2]) == 31\n\
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9692 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 9692 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
  { "(TARGET_SSE\n\
   && (GET_MODE_NUNITS (V8HImode)\n\
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)",
    __builtin_constant_p 
((TARGET_SSE
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2))
    ? (int) 
((TARGET_SSE
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2))
    : -1 },
#line 1034 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands)",
    __builtin_constant_p 
#line 1034 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    ? (int) 
#line 1034 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    : -1 },
#line 6989 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && ((unsigned) exact_log2 (INTVAL (operands[3]))\n\
       < GET_MODE_NUNITS (V8HImode))",
    __builtin_constant_p 
#line 6989 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8HImode)))
    ? (int) 
#line 6989 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8HImode)))
    : -1 },
#line 8410 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && ANY_QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
    && !(INTVAL (operands[2]) & ~255)\n\
    && (INTVAL (operands[2]) & 128)\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8410 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8410 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V4DFmode)\n\
       == GET_MODE_NUNITS (V4DImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V4DImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V4DImode)))
    : -1 },
  { "(TARGET_CMPXCHG16B) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 424 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_CMPXCHG16B) && 
#line 792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 424 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_CMPXCHG16B) && 
#line 792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, V32QImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE
   && ix86_binary_operator_ok (AND, V32QImode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE
   && ix86_binary_operator_ok (AND, V32QImode, operands)) && (TARGET_AVX))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V16HImode)\n\
       == GET_MODE_NUNITS (V32QImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V32QImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V32QImode)))
    : -1 },
  { "(TARGET_TBM) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12305 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12305 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 16991 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((TARGET_NOT_UNPAIRABLE\n\
	&& (!MEM_P (operands[0])\n\
	    || !memory_displacement_operand (operands[0], QImode)))\n\
       || (TARGET_NOT_VECTORMODE\n\
	   && long_memory_operand (operands[0], QImode)))\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 16991 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], QImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 16991 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], QImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 4510 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4510 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4510 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 13061 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 13061 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 13061 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 5792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed && ix86_lea_for_add_ok (insn, operands)",
    __builtin_constant_p 
#line 5792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands))
    ? (int) 
#line 5792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands))
    : -1 },
#line 6052 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V16QImode, operands)",
    __builtin_constant_p 
#line 6052 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V16QImode, operands))
    ? (int) 
#line 6052 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V16QImode, operands))
    : -1 },
#line 1015 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (SMIN, V4HImode, operands)",
    __builtin_constant_p 
#line 1015 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands))
    ? (int) 
#line 1015 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands))
    : -1 },
#line 4910 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 4910 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 4910 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 12094 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && avx_vperm2f128_parallel (operands[3], V8SFmode)",
    __builtin_constant_p 
#line 12094 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V8SFmode))
    ? (int) 
#line 12094 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V8SFmode))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[2])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 6242 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 6249 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 6242 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 6249 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 7936 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, DImode, operands)",
    __builtin_constant_p 
#line 7936 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands))
    ? (int) 
#line 7936 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands))
    : -1 },
#line 3589 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 3589 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))
    ? (int) 
#line 3589 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && ( reload_completed)",
    __builtin_constant_p (
#line 6305 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && 
#line 6310 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 6305 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && 
#line 6310 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 5226 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5226 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5226 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 16303 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8])",
    __builtin_constant_p 
#line 16303 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8]))
    ? (int) 
#line 16303 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8]))
    : -1 },
#line 4722 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4722 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    ? (int) 
#line 4722 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)) && (TARGET_AVX))
    : -1 },
  { "(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 15445 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 15445 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && can_create_pseudo_p ())
    ? (int) 
#line 15445 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && can_create_pseudo_p ())
    : -1 },
#line 4722 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4722 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    ? (int) 
#line 4722 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    : -1 },
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V8SImode, operands)",
    __builtin_constant_p 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V8SImode, operands))
    ? (int) 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V8SImode, operands))
    : -1 },
#line 77 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
  { "TARGET_SSE2",
    __builtin_constant_p 
#line 77 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_SSE2)
    ? (int) 
#line 77 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_SSE2)
    : -1 },
#line 9819 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9819 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 9819 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
#line 13022 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13022 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13022 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 4897 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && TARGET_INTER_UNIT_CONVERSIONS\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 4897 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 4897 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
  { "(ix86_binary_operator_ok (MINUS, SImode, operands)) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 6391 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands)) && 
#line 791 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 6391 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands)) && 
#line 791 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4DImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p 
((TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4DImode, operands)) && (TARGET_AVX2))
    ? (int) 
((TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4DImode, operands)) && (TARGET_AVX2))
    : -1 },
  { "(TARGET_64BIT && !TARGET_PARTIAL_REG_STALL) && ( reload_completed)",
    __builtin_constant_p (
#line 10550 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_PARTIAL_REG_STALL) && 
#line 10552 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 10550 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_PARTIAL_REG_STALL) && 
#line 10552 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(TARGET_AVX2) && (Pmode == SImode)",
    __builtin_constant_p (
#line 12730 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 12730 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 932 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 932 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 932 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V4DImode)\n\
       == GET_MODE_NUNITS (V4DImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V4DImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V4DImode)))
    : -1 },
#line 4761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && reload_completed",
    __builtin_constant_p 
#line 4761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    ? (int) 
#line 4761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    : -1 },
#line 8938 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 8938 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 8938 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4553 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4553 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 13197 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 13197 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 13197 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 16496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed",
    __builtin_constant_p 
#line 16496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed)
    ? (int) 
#line 16496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed)
    : -1 },
#line 4897 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && TARGET_INTER_UNIT_CONVERSIONS\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 4897 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 4897 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (GET_MODE_NUNITS (V4SFmode)\n\
       == GET_MODE_NUNITS (V4SFmode))",
    __builtin_constant_p 
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V4SFmode)))
    ? (int) 
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V4SFmode)))
    : -1 },
#line 8376 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 8376 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    ? (int) 
#line 8376 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    : -1 },
#line 9251 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 9251 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 9251 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (XFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4826 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4826 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(TARGET_SSE2) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 7070 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 7070 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V16HImode)\n\
       == GET_MODE_NUNITS (V4DFmode))",
    __builtin_constant_p 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V4DFmode)))
    ? (int) 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V4DFmode)))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)) && (TARGET_AVX))
    : -1 },
#line 12969 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 12969 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 12969 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (SFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4826 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4811 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4826 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 1654 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ((optimize > 0 && flag_peephole2)\n\
		    ? epilogue_completed : reload_completed)\n\
   && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode)",
    __builtin_constant_p 
#line 1654 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		    ? epilogue_completed : reload_completed)
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    ? (int) 
#line 1654 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		    ? epilogue_completed : reload_completed)
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    : -1 },
  { "(TARGET_AVX2) && (Pmode == DImode)",
    __builtin_constant_p (
#line 12730 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 12730 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 4510 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4510 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4510 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
  { "(reload_completed\n\
   && operands[1] == constm1_rtx) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1789 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 1789 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 8387 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
    && !(INTVAL (operands[2]) & ~(255 << 8))\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8387 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8387 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 16480 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE\n\
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 16480 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 16480 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
#line 8302 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 8302 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 8302 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 11220 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(peep2_reg_dead_p (3, operands[1])\n\
    || operands_match_p (operands[1], operands[3]))\n\
   && ! reg_overlap_mentioned_p (operands[3], operands[0])",
    __builtin_constant_p 
#line 11220 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0]))
    ? (int) 
#line 11220 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0]))
    : -1 },
#line 1428 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_SAHF",
    __builtin_constant_p 
#line 1428 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SAHF)
    ? (int) 
#line 1428 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SAHF)
    : -1 },
#line 16991 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((TARGET_NOT_UNPAIRABLE\n\
	&& (!MEM_P (operands[0])\n\
	    || !memory_displacement_operand (operands[0], SImode)))\n\
       || (TARGET_NOT_VECTORMODE\n\
	   && long_memory_operand (operands[0], SImode)))\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 16991 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], SImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 16991 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], SImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, V4SImode, operands)",
    __builtin_constant_p 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V4SImode, operands))
    ? (int) 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V4SImode, operands))
    : -1 },
#line 8887 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 8887 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 8887 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 6305 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[3])",
    __builtin_constant_p 
#line 6305 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3]))
    ? (int) 
#line 6305 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3]))
    : -1 },
  { "(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES) && ( reload_completed)",
    __builtin_constant_p (
#line 520 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES) && 
#line 522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 520 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES) && 
#line 522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 520 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES",
    __builtin_constant_p 
#line 520 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES)
    ? (int) 
#line 520 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES)
    : -1 },
#line 218 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_64BIT && TARGET_MMX\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 218 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 218 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "(exact_log2 (INTVAL (operands[1])) >= 0\n\
   && peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17336 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17336 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE\n\
   && (register_operand (operands[0], V32QImode)\n\
       || register_operand (operands[1], V32QImode))) && (TARGET_AVX)",
    __builtin_constant_p (
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V32QImode)
       || register_operand (operands[1], V32QImode))) && 
#line 103 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V32QImode)
       || register_operand (operands[1], V32QImode))) && 
#line 103 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 9190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V8HImode, operands)",
    __builtin_constant_p 
#line 9190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    ? (int) 
#line 9190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    : -1 },
#line 17539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && (!TARGET_PARTIAL_REG_STALL || SImode == SImode)",
    __builtin_constant_p 
#line 17539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (!TARGET_PARTIAL_REG_STALL || SImode == SImode))
    ? (int) 
#line 17539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (!TARGET_PARTIAL_REG_STALL || SImode == SImode))
    : -1 },
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (SFmode, SImode)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, SImode)
   && reload_completed)
    ? (int) 
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, SImode)
   && reload_completed)
    : -1 },
#line 981 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE_MATH",
    __builtin_constant_p 
#line 981 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE_MATH)
    ? (int) 
#line 981 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE_MATH)
    : -1 },
#line 4882 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4882 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4882 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387)
    : -1 },
  { "(TARGET_SSE_MATH) && (TARGET_AVX)",
    __builtin_constant_p (
#line 981 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE_MATH) && 
#line 135 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 981 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE_MATH) && 
#line 135 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 3957 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 3959 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 3957 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 3959 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
  { "(ix86_binary_operator_ok (ASHIFT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9121 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9121 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 13122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (SFmode, HImode)\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, HImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13122 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, HImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5832 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5832 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5375 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)\n\
   && TARGET_SSE\n\
   && reload_completed",
    __builtin_constant_p 
#line 5375 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    ? (int) 
#line 5375 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    : -1 },
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands)",
    __builtin_constant_p 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands))
    ? (int) 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands))
    : -1 },
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands)",
    __builtin_constant_p 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands))
    ? (int) 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands))
    : -1 },
#line 15821 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])",
    __builtin_constant_p 
#line 15821 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG]))
    ? (int) 
#line 15821 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG]))
    : -1 },
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, V16QImode, operands)",
    __builtin_constant_p 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V16QImode, operands))
    ? (int) 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V16QImode, operands))
    : -1 },
#line 7032 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387",
    __builtin_constant_p 
#line 7032 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387)
    ? (int) 
#line 7032 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387)
    : -1 },
#line 10952 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && SELECT_CC_MODE (GET_CODE (operands[0]),\n\
		      operands[1], operands[2]) == CCFPmode\n\
   && !TARGET_CMOVE",
    __builtin_constant_p 
#line 10952 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && !TARGET_CMOVE)
    ? (int) 
#line 10952 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && !TARGET_CMOVE)
    : -1 },
#line 12387 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)",
    __builtin_constant_p 
#line 12387 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode))
    ? (int) 
#line 12387 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode))
    : -1 },
#line 3101 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (!can_create_pseudo_p ()\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || (optimize_function_for_size_p (cfun)\n\
	   && ((!(TARGET_SSE2 && TARGET_SSE_MATH)\n\
		&& standard_80387_constant_p (operands[1]) > 0)\n\
	       || (TARGET_SSE2 && TARGET_SSE_MATH\n\
		   && standard_sse_constant_p (operands[1])))\n\
	   && !memory_operand (operands[0], DFmode))\n\
       || (!TARGET_MEMORY_MISMATCH_STALL\n\
	   && memory_operand (operands[0], DFmode)))",
    __builtin_constant_p 
#line 3101 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && ((!(TARGET_SSE2 && TARGET_SSE_MATH)
		&& standard_80387_constant_p (operands[1]) > 0)
	       || (TARGET_SSE2 && TARGET_SSE_MATH
		   && standard_sse_constant_p (operands[1])))
	   && !memory_operand (operands[0], DFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], DFmode))))
    ? (int) 
#line 3101 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && ((!(TARGET_SSE2 && TARGET_SSE_MATH)
		&& standard_80387_constant_p (operands[1]) > 0)
	       || (TARGET_SSE2 && TARGET_SSE_MATH
		   && standard_sse_constant_p (operands[1])))
	   && !memory_operand (operands[0], DFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], DFmode))))
    : -1 },
#line 10904 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & 0x1f) == 0x1f",
    __builtin_constant_p 
#line 10904 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x1f) == 0x1f)
    ? (int) 
#line 10904 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x1f) == 0x1f)
    : -1 },
  { "(!TARGET_PARTIAL_REG_STALL\n\
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))) && ( reload_completed)",
    __builtin_constant_p (
#line 10581 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))) && 
#line 10584 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 10581 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))) && 
#line 10584 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 13180 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (DFmode)\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 13180 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 13180 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V32QImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p 
((TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V32QImode, operands)) && (TARGET_AVX2))
    ? (int) 
((TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V32QImode, operands)) && (TARGET_AVX2))
    : -1 },
#line 6205 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_XOP\n\
   && ix86_binary_operator_ok (EQ, V8HImode, operands)",
    __builtin_constant_p 
#line 6205 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V8HImode, operands))
    ? (int) 
#line 6205 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V8HImode, operands))
    : -1 },
#line 5212 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5212 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5212 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 17839 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_SSE4_2 || TARGET_CRC32)",
    __builtin_constant_p 
#line 17839 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_SSE4_2 || TARGET_CRC32))
    ? (int) 
#line 17839 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_SSE4_2 || TARGET_CRC32))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V8SImode)\n\
       == GET_MODE_NUNITS (V4DImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V4DImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V4DImode)))
    : -1 },
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V8QImode, operands))
    ? (int) 
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V8QImode, operands))
    : -1 },
#line 1575 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && TARGET_CMOVE\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[0])) && TARGET_SSE_MATH)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1575 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && TARGET_CMOVE
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[0])) && TARGET_SSE_MATH)
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1575 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && TARGET_CMOVE
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[0])) && TARGET_SSE_MATH)
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
#line 8091 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && TARGET_64BIT",
    __builtin_constant_p 
#line 8091 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_64BIT)
    ? (int) 
#line 8091 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_64BIT)
    : -1 },
  { "(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 16188 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 16188 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V2DImode, operands)",
    __builtin_constant_p 
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V2DImode, operands))
    ? (int) 
#line 4921 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V2DImode, operands))
    : -1 },
  { "((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == -GET_MODE_SIZE (Pmode)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17408 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17408 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 15604 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387",
    __builtin_constant_p 
#line 15604 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387)
    ? (int) 
#line 15604 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387)
    : -1 },
#line 7686 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && GET_MODE (operands[2]) != QImode\n\
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))\n\
    && ((ix86_match_ccmode (insn, CCZmode)\n\
	 && !(INTVAL (operands[3]) & ~255))\n\
	|| (ix86_match_ccmode (insn, CCNOmode)\n\
	    && !(INTVAL (operands[3]) & ~127)))",
    __builtin_constant_p 
#line 7686 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127))))
    ? (int) 
#line 7686 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127))))
    : -1 },
  { "(TARGET_FMA || TARGET_FMA4) && (TARGET_AVX)",
    __builtin_constant_p (
#line 1860 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 1860 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 2224 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE && TARGET_64BIT",
    __builtin_constant_p 
#line 2224 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT)
    ? (int) 
#line 2224 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT)
    : -1 },
#line 11526 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 11526 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !SIBLING_CALL_P (insn))
    ? (int) 
#line 11526 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && !SIBLING_CALL_P (insn))
    : -1 },
#line 10055 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 10055 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 10055 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
  { "(ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 10261 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, HImode, operands)",
    __builtin_constant_p 
#line 10261 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands))
    ? (int) 
#line 10261 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands))
    : -1 },
#line 14806 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && ((DImode != DImode) || TARGET_64BIT)",
    __builtin_constant_p 
#line 14806 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT))
    ? (int) 
#line 14806 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT))
    : -1 },
#line 4924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 4924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 4924 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 15925 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG])",
    __builtin_constant_p 
#line 15925 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG]))
    ? (int) 
#line 15925 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG]))
    : -1 },
#line 4547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && can_create_pseudo_p ())
    ? (int) 
#line 4547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12368 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)) && 
#line 758 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12368 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)) && 
#line 758 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V8SImode, operands)",
    __builtin_constant_p 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V8SImode, operands))
    ? (int) 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V8SImode, operands))
    : -1 },
#line 9950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (optimize_function_for_size_p (cfun)\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    ? (int) 
#line 9950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    : -1 },
#line 3665 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(reload_completed\n\
    && dead_or_set_p (insn, operands[1])\n\
    && !reg_mentioned_p (operands[1], operands[0]))",
    __builtin_constant_p 
#line 3665 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((reload_completed
    && dead_or_set_p (insn, operands[1])
    && !reg_mentioned_p (operands[1], operands[0])))
    ? (int) 
#line 3665 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((reload_completed
    && dead_or_set_p (insn, operands[1])
    && !reg_mentioned_p (operands[1], operands[0])))
    : -1 },
#line 4597 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1])))",
    __builtin_constant_p 
#line 4597 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    ? (int) 
#line 4597 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    : -1 },
#line 4320 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 || SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 4320 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 4320 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (SFmode))
    : -1 },
  { "((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (DFmode == TFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 8820 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (DFmode == TFmode))) && 
#line 8823 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 8820 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (DFmode == TFmode))) && 
#line 8823 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (XOR, V2DFmode, operands)) && (TARGET_SSE2)",
    __builtin_constant_p 
((TARGET_SSE && ix86_binary_operator_ok (XOR, V2DFmode, operands)) && (TARGET_SSE2))
    ? (int) 
((TARGET_SSE && ix86_binary_operator_ok (XOR, V2DFmode, operands)) && (TARGET_SSE2))
    : -1 },
#line 7124 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && TARGET_64BIT",
    __builtin_constant_p 
#line 7124 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_64BIT)
    ? (int) 
#line 7124 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_64BIT)
    : -1 },
  { "(TARGET_AVX\n\
   && avx_vpermilp_parallel (operands[2], V4DFmode)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 12008 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vpermilp_parallel (operands[2], V4DFmode)) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 12008 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vpermilp_parallel (operands[2], V4DFmode)) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 8898 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 8898 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 8898 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 6067 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGCmode)",
    __builtin_constant_p 
#line 6067 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode))
    ? (int) 
#line 6067 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode))
    : -1 },
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 4786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 4786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 4786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(TARGET_SSE || TARGET_3DNOW_A) && (Pmode == SImode)",
    __builtin_constant_p (
#line 1664 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 1664 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 1034 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands)",
    __builtin_constant_p 
#line 1034 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    ? (int) 
#line 1034 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    : -1 },
#line 4427 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode)\n\
   && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4427 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4427 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 15568 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && TARGET_C99_FUNCTIONS\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15568 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 15568 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 7367 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])\n\
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])\n\
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])\n\
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9])",
    __builtin_constant_p 
#line 7367 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9]))
    ? (int) 
#line 7367 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9]))
    : -1 },
#line 17133 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "REGNO (operands[0]) != REGNO (operands[1])\n\
   && ((MMX_REG_P (operands[0]) && MMX_REG_P (operands[1])) \n\
       || (SSE_REG_P (operands[0]) && SSE_REG_P (operands[1])))",
    __builtin_constant_p 
#line 17133 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && ((MMX_REG_P (operands[0]) && MMX_REG_P (operands[1])) 
       || (SSE_REG_P (operands[0]) && SSE_REG_P (operands[1]))))
    ? (int) 
#line 17133 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && ((MMX_REG_P (operands[0]) && MMX_REG_P (operands[1])) 
       || (SSE_REG_P (operands[0]) && SSE_REG_P (operands[1]))))
    : -1 },
  { "(TARGET_CMOVE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9633 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9633 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    ? (int) 
#line 4468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    : -1 },
#line 1090 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 1090 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 1090 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 4496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4496 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V8SImode, operands)",
    __builtin_constant_p 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V8SImode, operands))
    ? (int) 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V8SImode, operands))
    : -1 },
#line 4283 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode))",
    __builtin_constant_p 
#line 4283 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)))
    ? (int) 
#line 4283 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)))
    : -1 },
  { "(INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17474 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17474 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 7472 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7472 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7472 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 4033 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_VECTOR_FP_CONVERTS\n\
   && optimize_insn_for_speed_p ()\n\
   && reload_completed && SSE_REG_P (operands[0])",
    __builtin_constant_p 
#line 4033 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_VECTOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()
   && reload_completed && SSE_REG_P (operands[0]))
    ? (int) 
#line 4033 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_VECTOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()
   && reload_completed && SSE_REG_P (operands[0]))
    : -1 },
#line 1705 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW",
    __builtin_constant_p 
#line 1705 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW)
    ? (int) 
#line 1705 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW)
    : -1 },
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))\n\
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    ? (int) 
#line 794 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    : -1 },
#line 12990 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 12990 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 12990 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V16HImode, operands)",
    __builtin_constant_p 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V16HImode, operands))
    ? (int) 
#line 5966 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V16HImode, operands))
    : -1 },
  { "(TARGET_SSE && !flag_finite_math_only) && (TARGET_AVX)",
    __builtin_constant_p (
#line 1049 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && !flag_finite_math_only) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 1049 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && !flag_finite_math_only) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 818 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)",
    __builtin_constant_p 
#line 818 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    ? (int) 
#line 818 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    : -1 },
  { "(TARGET_VZEROUPPER && !SIBLING_CALL_P (insn)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 11447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 11447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 3933 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE && reload_completed",
    __builtin_constant_p 
#line 3933 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed)
    ? (int) 
#line 3933 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed)
    : -1 },
#line 17015 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && (true_regnum (operands[2]) != AX_REG\n\
       || satisfies_constraint_K (operands[3]))\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 17015 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (true_regnum (operands[2]) != AX_REG
       || satisfies_constraint_K (operands[3]))
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 17015 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (true_regnum (operands[2]) != AX_REG
       || satisfies_constraint_K (operands[3]))
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 8491 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 8491 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 8491 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
  { "(TARGET_SSE2\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 5481 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && can_create_pseudo_p ()) && 
#line 5484 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( 1))
    ? (int) (
#line 5481 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && can_create_pseudo_p ()) && 
#line 5484 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( 1))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16HImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p 
((TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16HImode, operands)) && (TARGET_AVX2))
    ? (int) 
((TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16HImode, operands)) && (TARGET_AVX2))
    : -1 },
#line 11998 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_CMOVE",
    __builtin_constant_p 
#line 11998 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_CMOVE)
    ? (int) 
#line 11998 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_CMOVE)
    : -1 },
#line 6190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (EQ, V2DImode, operands)",
    __builtin_constant_p 
#line 6190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (EQ, V2DImode, operands))
    ? (int) 
#line 6190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (EQ, V2DImode, operands))
    : -1 },
#line 9600 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 9600 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 9600 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
  { "((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == -GET_MODE_SIZE (Pmode)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17408 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17408 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_SSE3) && (TARGET_AVX)",
    __builtin_constant_p (
#line 644 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE3) && 
#line 164 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 644 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE3) && 
#line 164 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(reload_completed) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3856 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 3856 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16HImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p 
((TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16HImode, operands)) && (TARGET_AVX2))
    ? (int) 
((TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16HImode, operands)) && (TARGET_AVX2))
    : -1 },
#line 3284 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands)",
    __builtin_constant_p 
#line 3284 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    ? (int) 
#line 3284 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    : -1 },
  { "(TARGET_SSE\n\
   && (register_operand (operands[0], V4DImode)\n\
       || register_operand (operands[1], V4DImode))) && (TARGET_AVX)",
    __builtin_constant_p (
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4DImode)
       || register_operand (operands[1], V4DImode))) && 
#line 106 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4DImode)
       || register_operand (operands[1], V4DImode))) && 
#line 106 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 8561 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, SImode, operands)",
    __builtin_constant_p 
#line 8561 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands))
    ? (int) 
#line 8561 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands))
    : -1 },
#line 4897 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && TARGET_INTER_UNIT_CONVERSIONS\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 4897 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 4897 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 7827 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 7827 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 7827 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 8616 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8616 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8616 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V32QImode)\n\
       == GET_MODE_NUNITS (V32QImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V32QImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V32QImode)))
    : -1 },
  { "((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17448 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17448 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 8338 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 8338 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 8338 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    : -1 },
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, V16QImode, operands)",
    __builtin_constant_p 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V16QImode, operands))
    ? (int) 
#line 6517 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V16QImode, operands))
    : -1 },
#line 13757 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations\n\
   && standard_80387_constant_p (operands[3]) == 2",
    __builtin_constant_p 
#line 13757 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    ? (int) 
#line 13757 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    : -1 },
#line 1688 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 1688 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 1688 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (DFmode))
    : -1 },
#line 8875 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, QImode, operands)",
    __builtin_constant_p 
#line 8875 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands))
    ? (int) 
#line 8875 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16HImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p 
((TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16HImode, operands)) && (TARGET_AVX2))
    ? (int) 
((TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16HImode, operands)) && (TARGET_AVX2))
    : -1 },
  { "(TARGET_SSE4_2\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 10218 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && can_create_pseudo_p ()) && 
#line 10221 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( 1))
    ? (int) (
#line 10218 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && can_create_pseudo_p ()) && 
#line 10221 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
( 1))
    : -1 },
#line 8185 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8185 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8185 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 5155 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5155 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5155 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 11502 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 11502 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn))
    ? (int) 
#line 11502 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn))
    : -1 },
  { "(TARGET_AVX2) && (TARGET_AVX)",
    __builtin_constant_p (
#line 11725 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 154 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 11725 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 154 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 13430 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (SFmode))\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 13430 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (SFmode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 13430 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (SFmode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4DImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p 
((TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4DImode, operands)) && (TARGET_AVX2))
    ? (int) 
((TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4DImode, operands)) && (TARGET_AVX2))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (IOR, V4DFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE && ix86_binary_operator_ok (IOR, V4DFmode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE && ix86_binary_operator_ok (IOR, V4DFmode, operands)) && (TARGET_AVX))
    : -1 },
#line 4714 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 4714 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    ? (int) 
#line 4714 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    : -1 },
#line 6449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 13142 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (DFmode)\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13142 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13142 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(TARGET_BMI2 && reload_completed\n\
  && true_regnum (operands[1]) == DX_REG) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 6864 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed
  && true_regnum (operands[1]) == DX_REG) && 
#line 791 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 6864 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed
  && true_regnum (operands[1]) == DX_REG) && 
#line 791 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 3422 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 || reload_completed",
    __builtin_constant_p 
#line 3422 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || reload_completed)
    ? (int) 
#line 3422 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || reload_completed)
    : -1 },
#line 8809 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (TFmode == TFmode))",
    __builtin_constant_p 
#line 8809 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (TFmode == TFmode)))
    ? (int) 
#line 8809 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (TFmode == TFmode)))
    : -1 },
  { "(ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 997 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands)",
    __builtin_constant_p 
#line 997 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands))
    ? (int) 
#line 997 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands))
    : -1 },
  { "(ix86_unary_operator_ok (NEG, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8561 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8561 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
#line 17689 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE",
    __builtin_constant_p 
#line 17689 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE)
    ? (int) 
#line 17689 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE)
    : -1 },
  { "((TARGET_VZEROUPPER && !SIBLING_CALL_P (insn)) && (Pmode == DImode)) && ( reload_completed)",
    __builtin_constant_p ((
#line 11447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 11449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) ((
#line 11447 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !SIBLING_CALL_P (insn)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 11449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 1388 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && 
#line 1393 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 1388 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && 
#line 1393 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 16464 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_80387 && TARGET_CMOVE\n\
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 16464 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 16464 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
#line 16869 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && ! TARGET_FAST_PREFIX\n\
   && optimize_insn_for_speed_p ()\n\
   /* Ensure that the operand will remain sign-extended immediate.  */\n\
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 16869 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ! TARGET_FAST_PREFIX
   && optimize_insn_for_speed_p ()
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 16869 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ! TARGET_FAST_PREFIX
   && optimize_insn_for_speed_p ()
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
  { "(ix86_match_ccmode (insn, CCGOCmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 989 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 989 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_XOP) && (TARGET_AVX)",
    __builtin_constant_p (
#line 11560 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_XOP) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 11560 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_XOP) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 4722 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4722 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    ? (int) 
#line 4722 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    : -1 },
#line 1372 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 1372 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 1372 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6509 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
  { "((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (Pmode)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17419 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17419 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 11658 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_PCLMUL",
    __builtin_constant_p 
#line 11658 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_PCLMUL)
    ? (int) 
#line 11658 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_PCLMUL)
    : -1 },
  { "(TARGET_USE_8BIT_IDIV\n\
   && TARGET_QIMODE_MATH\n\
   && can_create_pseudo_p ()\n\
   && !optimize_insn_for_size_p ()) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 7256 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 7256 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 9863 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 9863 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 9863 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
#line 4461 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ()",
    __builtin_constant_p 
#line 4461 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ())
    ? (int) 
#line 4461 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ())
    : -1 },
  { "(TARGET_POPCNT) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 758 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12348 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 758 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 7868 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, QImode, operands)",
    __builtin_constant_p 
#line 7868 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands))
    ? (int) 
#line 7868 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands))
    : -1 },
#line 8616 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8616 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8616 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V8SImode)\n\
       == GET_MODE_NUNITS (V8SImode))",
    __builtin_constant_p 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V8SImode)))
    ? (int) 
#line 6331 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V8SImode)))
    : -1 },
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V8SImode)\n\
       == GET_MODE_NUNITS (V4DFmode))",
    __builtin_constant_p 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V4DFmode)))
    ? (int) 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V4DFmode)))
    : -1 },
#line 9710 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && INTVAL (operands[2]) == 31\n\
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9710 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 9710 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 4364 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4364 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 4364 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
#line 1672 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX",
    __builtin_constant_p 
#line 1672 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX)
    ? (int) 
#line 1672 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX)
    : -1 },
#line 13316 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 13316 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[1])))
    ? (int) 
#line 13316 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[1])))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, V8SImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE
   && ix86_binary_operator_ok (AND, V8SImode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE
   && ix86_binary_operator_ok (AND, V8SImode, operands)) && (TARGET_AVX))
    : -1 },
#line 4468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    ? (int) 
#line 4468 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    : -1 },
#line 4547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && can_create_pseudo_p ())
    ? (int) 
#line 4547 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && can_create_pseudo_p ())
    : -1 },
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V4SFmode)\n\
       || register_operand (operands[1], V4SFmode))",
    __builtin_constant_p 
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    ? (int) 
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    : -1 },
  { "(TARGET_SSE2\n\
   && can_create_pseudo_p ()) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5481 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && can_create_pseudo_p ()) && 
#line 180 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5481 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && can_create_pseudo_p ()) && 
#line 180 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 5190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 12817 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SUN_TLS",
    __builtin_constant_p 
#line 12817 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SUN_TLS)
    ? (int) 
#line 12817 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SUN_TLS)
    : -1 },
  { "(reload_completed && ix86_lea_for_add_ok (insn, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5792 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 12132 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_BMI",
    __builtin_constant_p 
#line 12132 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BMI)
    ? (int) 
#line 12132 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BMI)
    : -1 },
  { "(reload_completed) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 10103 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed) && 
#line 791 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 10103 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed) && 
#line 791 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (DFmode, DImode)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, DImode)
   && reload_completed)
    ? (int) 
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, DImode)
   && reload_completed)
    : -1 },
#line 1342 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])",
    __builtin_constant_p 
#line 1342 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    ? (int) 
#line 1342 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    : -1 },
#line 10218 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE4_2\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 10218 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && can_create_pseudo_p ())
    ? (int) 
#line 10218 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && can_create_pseudo_p ())
    : -1 },
#line 7482 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "reload_completed",
    __builtin_constant_p 
#line 7482 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(reload_completed)
    ? (int) 
#line 7482 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(reload_completed)
    : -1 },
#line 17117 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "REGNO (operands[0]) != REGNO (operands[1])\n\
   && GENERAL_REGNO_P (REGNO (operands[0]))\n\
   && GENERAL_REGNO_P (REGNO (operands[1]))",
    __builtin_constant_p 
#line 17117 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && GENERAL_REGNO_P (REGNO (operands[0]))
   && GENERAL_REGNO_P (REGNO (operands[1])))
    ? (int) 
#line 17117 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && GENERAL_REGNO_P (REGNO (operands[0]))
   && GENERAL_REGNO_P (REGNO (operands[1])))
    : -1 },
#line 9766 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9766 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    ? (int) 
#line 9766 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    : -1 },
#line 16904 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && (GET_MODE (operands[0]) == HImode\n\
       || (GET_MODE (operands[0]) == QImode\n\
	   && (TARGET_PROMOTE_QImode\n\
	       || optimize_insn_for_size_p ())))",
    __builtin_constant_p 
#line 16904 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode
	       || optimize_insn_for_size_p ()))))
    ? (int) 
#line 16904 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode
	       || optimize_insn_for_size_p ()))))
    : -1 },
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (GET_MODE_NUNITS (V8HImode)\n\
       == GET_MODE_NUNITS (V4SFmode))",
    __builtin_constant_p 
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V4SFmode)))
    ? (int) 
#line 1539 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V4SFmode)))
    : -1 },
#line 11594 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 11594 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (insn))
    ? (int) 
#line 11594 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (insn))
    : -1 },
  { "(!TARGET_HAS_BIONIC) && (ptr_mode == SImode)",
    __builtin_constant_p (
#line 17798 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_HAS_BIONIC) && 
#line 901 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ptr_mode == SImode))
    ? (int) (
#line 17798 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_HAS_BIONIC) && 
#line 901 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ptr_mode == SImode))
    : -1 },
#line 6607 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && ix86_binary_operator_ok (IOR, TFmode, operands)",
    __builtin_constant_p 
#line 6607 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ix86_binary_operator_ok (IOR, TFmode, operands))
    ? (int) 
#line 6607 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ix86_binary_operator_ok (IOR, TFmode, operands))
    : -1 },
#line 7837 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (PLUS, V32QImode, operands)",
    __builtin_constant_p 
#line 7837 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (PLUS, V32QImode, operands))
    ? (int) 
#line 7837 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (PLUS, V32QImode, operands))
    : -1 },
#line 11353 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 11353 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 11353 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 1882 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_SSE && !TARGET_64BIT\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1882 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1882 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 4882 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4882 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4882 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387)
    : -1 },
#line 4882 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4882 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4882 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387)
    : -1 },
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V4HImode, operands)",
    __builtin_constant_p 
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V4HImode, operands))
    ? (int) 
#line 813 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V4HImode, operands))
    : -1 },
#line 11537 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT",
    __builtin_constant_p 
#line 11537 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT)
    ? (int) 
#line 11537 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT)
    : -1 },
#line 2053 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 2053 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 2053 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, V8SImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE
   && ix86_binary_operator_ok (IOR, V8SImode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE
   && ix86_binary_operator_ok (IOR, V8SImode, operands)) && (TARGET_AVX))
    : -1 },
#line 15491 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 15491 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 15491 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
#line 1049 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE && !flag_finite_math_only",
    __builtin_constant_p 
#line 1049 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && !flag_finite_math_only)
    ? (int) 
#line 1049 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && !flag_finite_math_only)
    : -1 },
#line 8185 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8185 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8185 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
  { "(TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V4DFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4DFmode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4DFmode, operands)) && (TARGET_AVX))
    : -1 },
#line 4283 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode))",
    __builtin_constant_p 
#line 4283 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)))
    ? (int) 
#line 4283 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)))
    : -1 },
#line 6606 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 6606 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 6606 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
  { "(TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V4DFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p 
((TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4DFmode, operands)) && (TARGET_AVX))
    ? (int) 
((TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4DFmode, operands)) && (TARGET_AVX))
    : -1 },
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 15341 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 15341 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math) && 
#line 761 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands)",
    __builtin_constant_p 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands))
    ? (int) 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands))
    : -1 },
#line 5417 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_64BIT || TARGET_KEEPS_VECTOR_ALIGNED_STACK)\n\
   && TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5417 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_64BIT || TARGET_KEEPS_VECTOR_ALIGNED_STACK)
   && TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 5417 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_64BIT || TARGET_KEEPS_VECTOR_ALIGNED_STACK)
   && TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
  { "(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 16188 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 16188 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 7952 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 7952 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    ? (int) 
#line 7952 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    : -1 },
#line 6067 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands)",
    __builtin_constant_p 
#line 6067 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    ? (int) 
#line 6067 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    : -1 },
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, HImode, operands)",
    __builtin_constant_p 
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands))
    ? (int) 
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands))
    : -1 },
  { "(TARGET_SSE4_1) && (TARGET_AVX)",
    __builtin_constant_p (
#line 9499 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 9499 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 10581 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 10581 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 10581 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun)))
    : -1 },
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    ? (int) 
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    : -1 },
#line 15542 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && TARGET_C99_FUNCTIONS",
    __builtin_constant_p 
#line 15542 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS)
    ? (int) 
#line 15542 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS)
    : -1 },
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V8HImode, operands))
    ? (int) 
#line 4944 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V8HImode, operands))
    : -1 },
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 9919 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
#line 3239 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 3239 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 3239 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 4950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 4950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 4950 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
       && SImode != HImode \n\
       && ((SImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14812 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 6449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
#line 9442 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE4A",
    __builtin_constant_p 
#line 9442 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4A)
    ? (int) 
#line 9442 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4A)
    : -1 },
#line 6052 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V16QImode, operands)",
    __builtin_constant_p 
#line 6052 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V16QImode, operands))
    ? (int) 
#line 6052 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V16QImode, operands))
    : -1 },
  { "(ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6449 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 7021 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_80387 && X87_ENABLE_ARITH (SFmode))\n\
    || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 7021 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (SFmode))
    || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 7021 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (SFmode))
    || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 9146 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (MULT, V16HImode, operands)",
    __builtin_constant_p 
#line 9146 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (MULT, V16HImode, operands))
    ? (int) 
#line 9146 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (MULT, V16HImode, operands))
    : -1 },
#line 4882 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4882 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4882 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387)
    : -1 },
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V4DFmode)\n\
       == GET_MODE_NUNITS (V8SFmode))",
    __builtin_constant_p 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V8SFmode)))
    ? (int) 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V8SFmode)))
    : -1 },
#line 1034 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (UMAX, V8QImode, operands)",
    __builtin_constant_p 
#line 1034 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands))
    ? (int) 
#line 1034 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands))
    : -1 },
#line 14806 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && ((DImode != DImode) || TARGET_64BIT)",
    __builtin_constant_p 
#line 14806 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT))
    ? (int) 
#line 14806 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT))
    : -1 },
#line 6133 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V8HImode, operands)",
    __builtin_constant_p 
#line 6133 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V8HImode, operands))
    ? (int) 
#line 6133 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V8HImode, operands))
    : -1 },
#line 4406 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4406 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 4406 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    : -1 },
#line 6148 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands)",
    __builtin_constant_p 
#line 6148 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    ? (int) 
#line 6148 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    : -1 },
#line 17325 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && peep2_regno_dead_p (0, FLAGS_REG)\n\
   && REGNO (operands[0]) == REGNO (operands[1])",
    __builtin_constant_p 
#line 17325 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && peep2_regno_dead_p (0, FLAGS_REG)
   && REGNO (operands[0]) == REGNO (operands[1]))
    ? (int) 
#line 17325 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT
   && peep2_regno_dead_p (0, FLAGS_REG)
   && REGNO (operands[0]) == REGNO (operands[1]))
    : -1 },
  { "(TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn)) && ( reload_completed)",
    __builtin_constant_p (
#line 11502 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn)) && 
#line 11504 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 11502 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn)) && 
#line 11504 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 581 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands)",
    __builtin_constant_p 
#line 581 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands))
    ? (int) 
#line 581 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands))
    : -1 },
#line 885 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 885 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 885 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 7110 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_64BIT && TARGET_SSE4_1",
    __builtin_constant_p 
#line 7110 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE4_1)
    ? (int) 
#line 7110 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE4_1)
    : -1 },
#line 1426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((DImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4782 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 1315 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE3",
    __builtin_constant_p 
#line 1315 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE3)
    ? (int) 
#line 1315 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE3)
    : -1 },
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (DFmode, SImode)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, SImode)
   && reload_completed)
    ? (int) 
#line 5274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, SImode)
   && reload_completed)
    : -1 },
  { "(TARGET_ROUND) && (TARGET_AVX)",
    __builtin_constant_p (
#line 9918 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_ROUND) && 
#line 139 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 9918 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_ROUND) && 
#line 139 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(!TARGET_PARTIAL_REG_STALL\n\
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && ( reload_completed)",
    __builtin_constant_p (
#line 10565 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 10568 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 10565 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 10568 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16HImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p 
((TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16HImode, operands)) && (TARGET_AVX2))
    ? (int) 
((TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16HImode, operands)) && (TARGET_AVX2))
    : -1 },
  { "(TARGET_SSE2) && (TARGET_AVX)",
    __builtin_constant_p (
#line 3126 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 139 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 3126 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 139 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 14646 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14646 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14646 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 2342 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_LP64 && ix86_check_movabs (insn, 1)",
    __builtin_constant_p 
#line 2342 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 1))
    ? (int) 
#line 2342 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 1))
    : -1 },
  { "(ix86_binary_operator_ok (IOR, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (IOR, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (IOR, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 10184 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_BMI2 && reload_completed",
    __builtin_constant_p 
#line 10184 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed)
    ? (int) 
#line 10184 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed)
    : -1 },
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands)",
    __builtin_constant_p 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands))
    ? (int) 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands))
    : -1 },
#line 12358 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX",
    __builtin_constant_p 
#line 12358 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX)
    ? (int) 
#line 12358 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX)
    : -1 },
#line 5177 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5177 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5177 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 8589 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_80387 || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8589 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8589 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 5177 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5177 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5177 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
  { "(TARGET_CMPXCHG8B) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 424 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_CMPXCHG8B) && 
#line 791 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 424 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sync.md"
(TARGET_CMPXCHG8B) && 
#line 791 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V1TImode)\n\
       || register_operand (operands[1], V1TImode))",
    __builtin_constant_p 
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V1TImode)
       || register_operand (operands[1], V1TImode)))
    ? (int) 
#line 426 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V1TImode)
       || register_operand (operands[1], V1TImode)))
    : -1 },
  { "(TARGET_SSE) && (TARGET_SSE4A)",
    __builtin_constant_p (
#line 713 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 703 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4A))
    ? (int) (
#line 713 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 703 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4A))
    : -1 },
#line 9216 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_SSSE3",
    __builtin_constant_p 
#line 9216 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSSE3)
    ? (int) 
#line 9216 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSSE3)
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 818 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 818 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)) && 
#line 131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT))
    : -1 },
#line 5190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5190 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 11467 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_XOP",
    __builtin_constant_p 
#line 11467 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_XOP)
    ? (int) 
#line 11467 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_XOP)
    : -1 },
#line 4864 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387\n\
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 4864 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 4864 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun))
    : -1 },
#line 2735 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (operands[2] = find_constant_src (insn))",
    __builtin_constant_p 
#line 2735 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (operands[2] = find_constant_src (insn)))
    ? (int) 
#line 2735 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
   && (operands[2] = find_constant_src (insn)))
    : -1 },
  { "(INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17486 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17486 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, QImode, operands)",
    __builtin_constant_p 
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands))
    ? (int) 
#line 8246 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 6274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 6280 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 6274 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 6280 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8898 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8898 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands)) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 16946 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && !TARGET_USE_MOV0\n\
   && TARGET_SPLIT_LONG_MOVES\n\
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 16946 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && !TARGET_USE_MOV0
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 16946 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && !TARGET_USE_MOV0
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 273 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "!TARGET_64BIT && TARGET_MMX\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 273 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(!TARGET_64BIT && TARGET_MMX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 273 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(!TARGET_64BIT && TARGET_MMX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 6888 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 791 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 6888 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 791 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 12639 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2",
    __builtin_constant_p 
#line 12639 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2)
    ? (int) 
#line 12639 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2)
    : -1 },
#line 15334 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 15334 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 15334 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
  { "(ix86_match_ccmode (insn, CCGOCmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6106 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6106 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 755 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 15786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 15786 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands)",
    __builtin_constant_p 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands))
    ? (int) 
#line 1131 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands))
    : -1 },
#line 9819 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9819 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    ? (int) 
#line 9819 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    : -1 },
#line 14646 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14646 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14646 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 770 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_HIMODE_MATH",
    __builtin_constant_p 
#line 770 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)
    ? (int) 
#line 770 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)
    : -1 },
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V4DImode)\n\
       == GET_MODE_NUNITS (V4DFmode))",
    __builtin_constant_p 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V4DFmode)))
    ? (int) 
#line 1522 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V4DFmode)))
    : -1 },
#line 10422 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_USE_BT || reload_completed)",
    __builtin_constant_p 
#line 10422 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
    ? (int) 
#line 10422 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
    : -1 },
#line 12491 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "! TARGET_POPCNT",
    __builtin_constant_p 
#line 12491 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(! TARGET_POPCNT)
    ? (int) 
#line 12491 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(! TARGET_POPCNT)
    : -1 },
#line 8128 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
    && !(~INTVAL (operands[2]) & ~(255 << 8))\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8128 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8128 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 8222 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8222 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8222 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 18082 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
  { "TARGET_LWP",
    __builtin_constant_p 
#line 18082 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LWP)
    ? (int) 
#line 18082 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_LWP)
    : -1 },
  { "(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE2\n\
   && ((unsigned) exact_log2 (INTVAL (operands[3]))\n\
       < GET_MODE_NUNITS (V4SImode))) && (TARGET_SSE4_1)",
    __builtin_constant_p (
#line 6989 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4SImode))) && 
#line 6974 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
    ? (int) (
#line 6989 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4SImode))) && 
#line 6974 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
    : -1 },
  { "(INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17474 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17474 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && 
#line 896 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 5174 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (MULT, V8SImode, operands)",
    __builtin_constant_p 
#line 5174 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (MULT, V8SImode, operands))
    ? (int) 
#line 5174 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (MULT, V8SImode, operands))
    : -1 },
  { "(!TARGET_CMOVE) && ( reload_completed)",
    __builtin_constant_p (
#line 11998 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_CMOVE) && 
#line 12000 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 11998 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(!TARGET_CMOVE) && 
#line 12000 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(ix86_unary_operator_ok (NOT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8866 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, DImode, operands)) && 
#line 758 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8866 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, DImode, operands)) && 
#line 758 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
