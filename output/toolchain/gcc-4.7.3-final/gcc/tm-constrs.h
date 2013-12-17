/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/i386.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_z (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return constant_call_address_operand (op, mode);
}
static inline bool
satisfies_constraint_w (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return (!(
#line 132 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/constraints.md"
(TARGET_X32))) && (memory_operand (op, mode));
}
static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 139 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 31)));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 144 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 63)));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 149 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/constraints.md"
(IN_RANGE (ival, -128, 127)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 155 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/constraints.md"
(ival == 0xff || ival == 0xffff
		    || ival == (HOST_WIDE_INT) 0xffffffff));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 161 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 3)));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 167 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 255)));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 172 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 127)));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 181 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/constraints.md"
(standard_80387_constant_p (op) > 0));
}
static inline bool
satisfies_constraint_C (rtx op)
{
  return 
#line 186 "/home/lsoave/Docker/TMP/buildroot-2013.05/output/toolchain/gcc-4.7.3/gcc/config/i386/constraints.md"
(standard_sse_constant_p (op));
}
static inline bool
satisfies_constraint_e (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return x86_64_immediate_operand (op, mode);
}
static inline bool
satisfies_constraint_Z (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return x86_64_zext_immediate_operand (op, mode);
}
#endif /* tm-constrs.h */
