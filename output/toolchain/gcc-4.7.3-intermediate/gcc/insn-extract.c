/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 2066:  /* atomic_xordi */
    case 2065:  /* atomic_ordi */
    case 2064:  /* atomic_anddi */
    case 2063:  /* atomic_xorsi */
    case 2062:  /* atomic_orsi */
    case 2061:  /* atomic_andsi */
    case 2060:  /* atomic_xorhi */
    case 2059:  /* atomic_orhi */
    case 2058:  /* atomic_andhi */
    case 2057:  /* atomic_xorqi */
    case 2056:  /* atomic_orqi */
    case 2055:  /* atomic_andqi */
    case 2054:  /* atomic_subdi */
    case 2053:  /* atomic_subsi */
    case 2052:  /* atomic_subhi */
    case 2051:  /* atomic_subqi */
    case 2050:  /* atomic_adddi */
    case 2049:  /* atomic_addsi */
    case 2048:  /* atomic_addhi */
    case 2047:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2046:  /* atomic_exchangedi */
    case 2045:  /* atomic_exchangesi */
    case 2044:  /* atomic_exchangehi */
    case 2043:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2042:  /* *atomic_fetch_add_cmpdi */
    case 2041:  /* *atomic_fetch_add_cmpsi */
    case 2040:  /* *atomic_fetch_add_cmphi */
    case 2039:  /* *atomic_fetch_add_cmpqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 2038:  /* atomic_fetch_adddi */
    case 2037:  /* atomic_fetch_addsi */
    case 2036:  /* atomic_fetch_addhi */
    case 2035:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 2034:  /* atomic_compare_and_swapti_doubleword */
    case 2033:  /* atomic_compare_and_swapdi_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 2032:  /* atomic_compare_and_swapdi_1 */
    case 2031:  /* atomic_compare_and_swapsi_1 */
    case 2030:  /* atomic_compare_and_swaphi_1 */
    case 2029:  /* atomic_compare_and_swapqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2020:  /* mfence_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2016:  /* *avx2_gatherdiv8sf_4 */
    case 2015:  /* *avx2_gatherdiv8sf_4 */
    case 2014:  /* *avx2_gatherdiv8si_4 */
    case 2013:  /* *avx2_gatherdiv8si_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 2012:  /* *avx2_gatherdiv8sf_3 */
    case 2011:  /* *avx2_gatherdiv8sf_3 */
    case 2010:  /* *avx2_gatherdiv8si_3 */
    case 2009:  /* *avx2_gatherdiv8si_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 2008:  /* *avx2_gatherdiv8sf_2 */
    case 2007:  /* *avx2_gatherdiv8sf_2 */
    case 2006:  /* *avx2_gatherdiv8si_2 */
    case 2005:  /* *avx2_gatherdiv8si_2 */
    case 2004:  /* *avx2_gatherdiv4sf_2 */
    case 2003:  /* *avx2_gatherdiv4sf_2 */
    case 2002:  /* *avx2_gatherdiv4si_2 */
    case 2001:  /* *avx2_gatherdiv4si_2 */
    case 2000:  /* *avx2_gatherdiv4df_2 */
    case 1999:  /* *avx2_gatherdiv4df_2 */
    case 1998:  /* *avx2_gatherdiv4di_2 */
    case 1997:  /* *avx2_gatherdiv4di_2 */
    case 1996:  /* *avx2_gatherdiv2df_2 */
    case 1995:  /* *avx2_gatherdiv2df_2 */
    case 1994:  /* *avx2_gatherdiv2di_2 */
    case 1993:  /* *avx2_gatherdiv2di_2 */
    case 1976:  /* *avx2_gathersiv8sf_2 */
    case 1975:  /* *avx2_gathersiv8sf_2 */
    case 1974:  /* *avx2_gathersiv8si_2 */
    case 1973:  /* *avx2_gathersiv8si_2 */
    case 1972:  /* *avx2_gathersiv4sf_2 */
    case 1971:  /* *avx2_gathersiv4sf_2 */
    case 1970:  /* *avx2_gathersiv4si_2 */
    case 1969:  /* *avx2_gathersiv4si_2 */
    case 1968:  /* *avx2_gathersiv4df_2 */
    case 1967:  /* *avx2_gathersiv4df_2 */
    case 1966:  /* *avx2_gathersiv4di_2 */
    case 1965:  /* *avx2_gathersiv4di_2 */
    case 1964:  /* *avx2_gathersiv2df_2 */
    case 1963:  /* *avx2_gathersiv2df_2 */
    case 1962:  /* *avx2_gathersiv2di_2 */
    case 1961:  /* *avx2_gathersiv2di_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 1992:  /* *avx2_gatherdiv8sf */
    case 1991:  /* *avx2_gatherdiv8sf */
    case 1990:  /* *avx2_gatherdiv8si */
    case 1989:  /* *avx2_gatherdiv8si */
    case 1988:  /* *avx2_gatherdiv4sf */
    case 1987:  /* *avx2_gatherdiv4sf */
    case 1986:  /* *avx2_gatherdiv4si */
    case 1985:  /* *avx2_gatherdiv4si */
    case 1984:  /* *avx2_gatherdiv4df */
    case 1983:  /* *avx2_gatherdiv4df */
    case 1982:  /* *avx2_gatherdiv4di */
    case 1981:  /* *avx2_gatherdiv4di */
    case 1980:  /* *avx2_gatherdiv2df */
    case 1979:  /* *avx2_gatherdiv2df */
    case 1978:  /* *avx2_gatherdiv2di */
    case 1977:  /* *avx2_gatherdiv2di */
    case 1960:  /* *avx2_gathersiv8sf */
    case 1959:  /* *avx2_gathersiv8sf */
    case 1958:  /* *avx2_gathersiv8si */
    case 1957:  /* *avx2_gathersiv8si */
    case 1956:  /* *avx2_gathersiv4sf */
    case 1955:  /* *avx2_gathersiv4sf */
    case 1954:  /* *avx2_gathersiv4si */
    case 1953:  /* *avx2_gathersiv4si */
    case 1952:  /* *avx2_gathersiv4df */
    case 1951:  /* *avx2_gathersiv4df */
    case 1950:  /* *avx2_gathersiv4di */
    case 1949:  /* *avx2_gathersiv4di */
    case 1948:  /* *avx2_gathersiv2df */
    case 1947:  /* *avx2_gathersiv2df */
    case 1946:  /* *avx2_gathersiv2di */
    case 1945:  /* *avx2_gathersiv2di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 1942:  /* *vcvtps2ph */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1919:  /* avx2_maskstoreq256 */
    case 1918:  /* avx2_maskstored256 */
    case 1917:  /* avx2_maskstoreq */
    case 1916:  /* avx2_maskstored */
    case 1915:  /* avx_maskstorepd256 */
    case 1914:  /* avx_maskstoreps256 */
    case 1913:  /* avx_maskstorepd */
    case 1912:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 1911:  /* avx2_maskloadq256 */
    case 1910:  /* avx2_maskloadd256 */
    case 1909:  /* avx2_maskloadq */
    case 1908:  /* avx2_maskloadd */
    case 1907:  /* avx_maskloadpd256 */
    case 1906:  /* avx_maskloadps256 */
    case 1905:  /* avx_maskloadpd */
    case 1904:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1889:  /* *avx_vperm2f128v4df_nozero */
    case 1888:  /* *avx_vperm2f128v8sf_nozero */
    case 1887:  /* *avx_vperm2f128v8si_nozero */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1879:  /* *avx_vpermilpv2df */
    case 1878:  /* *avx_vpermilpv4df */
    case 1877:  /* *avx_vpermilpv4sf */
    case 1876:  /* *avx_vpermilpv8sf */
    case 1875:  /* *avx_vperm_broadcast_v4df */
    case 1874:  /* *avx_vperm_broadcast_v8sf */
    case 1873:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1872:  /* avx_vbroadcastf128_v4df */
    case 1871:  /* avx_vbroadcastf128_v8sf */
    case 1870:  /* avx_vbroadcastf128_v4di */
    case 1869:  /* avx_vbroadcastf128_v8si */
    case 1868:  /* avx_vbroadcastf128_v16hi */
    case 1867:  /* avx_vbroadcastf128_v32qi */
    case 1866:  /* avx2_vbroadcasti128_v4di */
    case 1865:  /* avx2_vbroadcasti128_v8si */
    case 1864:  /* avx2_vbroadcasti128_v16hi */
    case 1863:  /* avx2_vbroadcasti128_v32qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1827:  /* xop_maskcmp_uns2v2di3 */
    case 1826:  /* xop_maskcmp_uns2v4si3 */
    case 1825:  /* xop_maskcmp_uns2v8hi3 */
    case 1824:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 1823:  /* xop_maskcmp_unsv2di3 */
    case 1822:  /* xop_maskcmp_unsv4si3 */
    case 1821:  /* xop_maskcmp_unsv8hi3 */
    case 1820:  /* xop_maskcmp_unsv16qi3 */
    case 1819:  /* xop_maskcmpv2di3 */
    case 1818:  /* xop_maskcmpv4si3 */
    case 1817:  /* xop_maskcmpv8hi3 */
    case 1816:  /* xop_maskcmpv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1807:  /* xop_shlv2di3 */
    case 1806:  /* xop_shlv4si3 */
    case 1805:  /* xop_shlv8hi3 */
    case 1804:  /* xop_shlv16qi3 */
    case 1803:  /* xop_shav2di3 */
    case 1802:  /* xop_shav4si3 */
    case 1801:  /* xop_shav8hi3 */
    case 1800:  /* xop_shav16qi3 */
    case 1799:  /* xop_vrotlv2di3 */
    case 1798:  /* xop_vrotlv4si3 */
    case 1797:  /* xop_vrotlv8hi3 */
    case 1796:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 1787:  /* xop_pperm_pack_v8hi_v16qi */
    case 1786:  /* xop_pperm_pack_v4si_v8hi */
    case 1785:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1777:  /* xop_phaddubq */
    case 1771:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 1779:  /* xop_phadduwq */
    case 1776:  /* xop_phaddubd */
    case 1773:  /* xop_phaddwq */
    case 1770:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 1783:  /* xop_phsubdq */
    case 1782:  /* xop_phsubwd */
    case 1781:  /* xop_phsubbw */
    case 1780:  /* xop_phaddudq */
    case 1778:  /* xop_phadduwd */
    case 1775:  /* xop_phaddubw */
    case 1774:  /* xop_phadddq */
    case 1772:  /* xop_phaddwd */
    case 1769:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1768:  /* xop_pcmov_v2df */
    case 1767:  /* xop_pcmov_v4df256 */
    case 1766:  /* xop_pcmov_v4sf */
    case 1765:  /* xop_pcmov_v8sf256 */
    case 1764:  /* xop_pcmov_v2di */
    case 1763:  /* xop_pcmov_v4di256 */
    case 1762:  /* xop_pcmov_v4si */
    case 1761:  /* xop_pcmov_v8si256 */
    case 1760:  /* xop_pcmov_v8hi */
    case 1759:  /* xop_pcmov_v16hi256 */
    case 1758:  /* xop_pcmov_v16qi */
    case 1757:  /* xop_pcmov_v32qi256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1756:  /* xop_pmadcswd */
    case 1755:  /* xop_pmadcsswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1754:  /* xop_pmacswd */
    case 1753:  /* xop_pmacsswd */
    case 1752:  /* xop_pmacsdqh */
    case 1751:  /* xop_pmacsdql */
    case 1750:  /* xop_pmacssdqh */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1749:  /* xop_pmacssdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1744:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 1743:  /* sse4_2_pcmpistrm */
    case 1742:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 1741:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1740:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 1739:  /* sse4_2_pcmpestrm */
    case 1738:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 1737:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 1736:  /* sse4_1_roundsd */
    case 1735:  /* sse4_1_roundss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 1730:  /* sse4_1_ptest */
    case 1729:  /* avx_ptest256 */
    case 1728:  /* avx_vtestpd */
    case 1727:  /* avx_vtestpd256 */
    case 1726:  /* avx_vtestps */
    case 1725:  /* avx_vtestps256 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1699:  /* avx2_pblenddv4si */
    case 1698:  /* avx2_pblenddv8si */
    case 1697:  /* *avx2_pblendw */
    case 1696:  /* sse4_1_pblendw */
    case 1679:  /* sse4_1_blendpd */
    case 1678:  /* avx_blendpd256 */
    case 1677:  /* sse4_1_blendps */
    case 1676:  /* avx_blendps256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1835:  /* xop_vpermil2v2df3 */
    case 1834:  /* xop_vpermil2v4df3 */
    case 1833:  /* xop_vpermil2v4sf3 */
    case 1832:  /* xop_vpermil2v8sf3 */
    case 1674:  /* sse4a_insertqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 1643:  /* *ssse3_pmulhrswv4hi3 */
    case 1642:  /* *ssse3_pmulhrswv8hi3 */
    case 1641:  /* *avx2_umulhrswv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 1636:  /* ssse3_phsubswv8hi3 */
    case 1632:  /* avx2_phsubdv8si3 */
    case 1630:  /* ssse3_phsubwv8hi3 */
    case 1627:  /* ssse3_phaddswv8hi3 */
    case 1623:  /* avx2_phadddv8si3 */
    case 1621:  /* ssse3_phaddwv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 2;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 2;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1635:  /* avx2_phsubswv16hi3 */
    case 1629:  /* avx2_phsubwv16hi3 */
    case 1626:  /* avx2_phaddswv16hi3 */
    case 1620:  /* avx2_phaddwv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 1), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 1), 0);
      recog_data.dup_num[10] = 1;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[11] = 1;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 1), 0);
      recog_data.dup_num[12] = 1;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[13] = 1;
      recog_data.dup_loc[14] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 1), 0);
      recog_data.dup_num[14] = 1;
      recog_data.dup_loc[15] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[15] = 2;
      recog_data.dup_loc[16] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[16] = 2;
      recog_data.dup_loc[17] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[17] = 2;
      recog_data.dup_loc[18] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[18] = 2;
      recog_data.dup_loc[19] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[19] = 2;
      recog_data.dup_loc[20] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[20] = 2;
      recog_data.dup_loc[21] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[21] = 2;
      recog_data.dup_loc[22] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[22] = 2;
      recog_data.dup_loc[23] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[23] = 2;
      recog_data.dup_loc[24] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[24] = 2;
      recog_data.dup_loc[25] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[25] = 2;
      recog_data.dup_loc[26] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[26] = 2;
      recog_data.dup_loc[27] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[27] = 2;
      recog_data.dup_loc[28] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[28] = 2;
      recog_data.dup_loc[29] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[29] = 2;
      break;

    case 1617:  /* sse3_mwait */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1584:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1583:  /* avx2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 1581:  /* avx2_pshuflw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      break;

    case 1579:  /* avx2_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1391:  /* sse2_shufpd_v2df */
    case 1390:  /* sse2_shufpd_v2di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 1587:  /* *vec_ext_v4si_mem */
    case 1578:  /* *sse4_1_pextrq */
    case 1576:  /* *sse4_1_pextrd */
    case 1575:  /* *sse4_1_pextrw_memory */
    case 1572:  /* *sse4_1_pextrb_memory */
    case 1368:  /* *vec_extract_v4sf_mem */
    case 1367:  /* *sse4_1_extractps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1365:  /* sse4_1_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1585:  /* sse2_loadld */
    case 1363:  /* vec_setv4sf_0 */
    case 1362:  /* vec_setv4si_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1398:  /* sse2_movsd */
    case 1355:  /* sse_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1902:  /* vec_set_lo_v32qi */
    case 1900:  /* vec_set_lo_v16hi */
    case 1897:  /* vec_set_lo_v8sf */
    case 1896:  /* vec_set_lo_v8si */
    case 1893:  /* vec_set_lo_v4df */
    case 1892:  /* vec_set_lo_v4di */
    case 1890:  /* avx2_vec_set_lo_v4di */
    case 1397:  /* sse2_loadlpd */
    case 1354:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1385:  /* avx_shufpd256_1 */
    case 1350:  /* sse_shufps_v4sf */
    case 1349:  /* sse_shufps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 1348:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1347:  /* sse3_movsldup */
    case 1346:  /* avx_movsldup256 */
    case 1345:  /* sse3_movshdup */
    case 1344:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1939:  /* vcvtph2ps */
    case 1295:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 1332:  /* sse2_cvtss2sd */
    case 1331:  /* sse2_cvtsd2ss */
    case 1315:  /* sse2_cvtsi2sdq */
    case 1314:  /* sse2_cvtsi2sd */
    case 1298:  /* sse_cvtsi2ssq */
    case 1297:  /* sse_cvtsi2ss */
    case 1294:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1293:  /* *fma4i_vmfnmsub_v2df */
    case 1292:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1291:  /* *fma4i_vmfnmadd_v2df */
    case 1290:  /* *fma4i_vmfnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1289:  /* *fma4i_vmfmsub_v2df */
    case 1288:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1287:  /* *fma4i_vmfmadd_v2df */
    case 1286:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1285:  /* *fmai_fnmsub_v2df */
    case 1284:  /* *fmai_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1283:  /* *fmai_fnmadd_v2df */
    case 1282:  /* *fmai_fnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1281:  /* *fmai_fmsub_v2df */
    case 1280:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1279:  /* *fmai_fmadd_v2df */
    case 1278:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1277:  /* *fma_fmsubadd_v2df */
    case 1276:  /* *fma_fmsubadd_v4df */
    case 1275:  /* *fma_fmsubadd_v4sf */
    case 1274:  /* *fma_fmsubadd_v8sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 1269:  /* *fma_fnmsub_v4df */
    case 1268:  /* *fma_fnmsub_v8sf */
    case 1267:  /* *fma_fnmsub_v2df */
    case 1266:  /* *fma_fnmsub_v4sf */
    case 1265:  /* *fma_fnmsub_df */
    case 1264:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1263:  /* *fma_fnmadd_v4df */
    case 1262:  /* *fma_fnmadd_v8sf */
    case 1261:  /* *fma_fnmadd_v2df */
    case 1260:  /* *fma_fnmadd_v4sf */
    case 1259:  /* *fma_fnmadd_df */
    case 1258:  /* *fma_fnmadd_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1257:  /* *fma_fmsub_v4df */
    case 1256:  /* *fma_fmsub_v8sf */
    case 1255:  /* *fma_fmsub_v2df */
    case 1254:  /* *fma_fmsub_v4sf */
    case 1253:  /* *fma_fmsub_df */
    case 1252:  /* *fma_fmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1221:  /* sse2_ucomi */
    case 1220:  /* sse_ucomi */
    case 1219:  /* sse2_comi */
    case 1218:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1217:  /* sse2_vmmaskcmpv2df3 */
    case 1216:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1207:  /* avx_vmcmpv2df3 */
    case 1206:  /* avx_vmcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1637:  /* ssse3_phsubswv4hi3 */
    case 1633:  /* ssse3_phsubdv4si3 */
    case 1631:  /* ssse3_phsubwv4hi3 */
    case 1628:  /* ssse3_phaddswv4hi3 */
    case 1624:  /* ssse3_phadddv4si3 */
    case 1622:  /* ssse3_phaddwv4hi3 */
    case 1201:  /* sse3_hsubv4sf3 */
    case 1200:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1199:  /* avx_hsubv8sf3 */
    case 1198:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1195:  /* avx_hsubv4df3 */
    case 1194:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1815:  /* *xop_vmfrcz_v2df */
    case 1814:  /* *xop_vmfrcz_v4sf */
    case 1327:  /* *sse2_cvtpd2dq */
    case 1326:  /* *avx_cvtpd2dq256_2 */
    case 1161:  /* sse_vmrsqrtv4sf2 */
    case 1152:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1181:  /* sse2_vmsminv2df3 */
    case 1180:  /* sse2_vmsmaxv2df3 */
    case 1179:  /* sse_vmsminv4sf3 */
    case 1178:  /* sse_vmsmaxv4sf3 */
    case 1149:  /* sse2_vmdivv2df3 */
    case 1148:  /* sse_vmdivv4sf3 */
    case 1143:  /* sse2_vmmulv2df3 */
    case 1142:  /* sse_vmmulv4sf3 */
    case 1137:  /* sse2_vmsubv2df3 */
    case 1136:  /* sse2_vmaddv2df3 */
    case 1135:  /* sse_vmsubv4sf3 */
    case 1134:  /* sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1843:  /* *avx_vzeroall */
    case 1083:  /* *mmx_femms */
    case 1082:  /* *mmx_emms */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 1613:  /* *sse2_maskmovdqu */
    case 1612:  /* *sse2_maskmovdqu */
    case 1081:  /* *mmx_maskmovq */
    case 1080:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1856:  /* avx2_permv4di_1 */
    case 1582:  /* sse2_pshuflw_1 */
    case 1580:  /* sse2_pshufd_1 */
    case 1069:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 1577:  /* *sse4_1_pextrd_zext */
    case 1574:  /* *sse2_pextrw_di */
    case 1573:  /* *sse2_pextrw_si */
    case 1571:  /* *sse4_1_pextrb_di */
    case 1570:  /* *sse4_1_pextrb_si */
    case 1068:  /* mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 1569:  /* sse4_1_pinsrq */
    case 1568:  /* sse4_1_pinsrd */
    case 1567:  /* sse2_pinsrw */
    case 1566:  /* sse4_1_pinsrb */
    case 1364:  /* *vec_setv4sf_sse4_1 */
    case 1067:  /* *mmx_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1693:  /* sse4_1_packusdw */
    case 1692:  /* avx2_packusdw */
    case 1553:  /* sse2_packuswb */
    case 1552:  /* avx2_packuswb */
    case 1551:  /* sse2_packssdw */
    case 1550:  /* avx2_packssdw */
    case 1549:  /* sse2_packsswb */
    case 1548:  /* avx2_packsswb */
    case 1060:  /* mmx_packuswb */
    case 1059:  /* mmx_packssdw */
    case 1058:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1444:  /* *sse4_1_mulv2siv2di3 */
    case 1443:  /* *avx2_mulv4siv4di3 */
    case 1442:  /* *sse2_umulv2siv2di3 */
    case 1441:  /* *avx_umulv4siv4di3 */
    case 1027:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1603:  /* *sse2_uavgv8hi3 */
    case 1602:  /* *avx2_uavgv16hi3 */
    case 1601:  /* *sse2_uavgv16qi3 */
    case 1600:  /* *avx2_uavgv32qi3 */
    case 1077:  /* *mmx_uavgv4hi3 */
    case 1076:  /* *mmx_uavgv8qi3 */
    case 1026:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 1640:  /* ssse3_pmaddubsw */
    case 1639:  /* ssse3_pmaddubsw128 */
    case 1638:  /* avx2_pmaddubsw256 */
    case 1446:  /* *sse2_pmaddwd */
    case 1445:  /* *avx2_pmaddwd */
    case 1025:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1440:  /* *umulv8hi3_highpart */
    case 1439:  /* *smulv8hi3_highpart */
    case 1438:  /* *umulv16hi3_highpart */
    case 1437:  /* *smulv16hi3_highpart */
    case 1024:  /* *mmx_umulv4hi3_highpart */
    case 1023:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 999:  /* mmx_pi2fw */
    case 998:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1193:  /* sse3_addsubv4sf3 */
    case 1192:  /* avx_addsubv8sf3 */
    case 1191:  /* sse3_addsubv2df3 */
    case 1190:  /* avx_addsubv4df3 */
    case 993:  /* mmx_addsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1634:  /* ssse3_phsubdv2si3 */
    case 1625:  /* ssse3_phadddv2si3 */
    case 1197:  /* sse3_hsubv2df3 */
    case 1196:  /* sse3_haddv2df3 */
    case 992:  /* mmx_hsubv2sf3 */
    case 991:  /* mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 955:  /* *lwp_lwpinsdi3_1 */
    case 954:  /* *lwp_lwpinssi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1619:  /* sse3_monitor64 */
    case 1618:  /* sse3_monitor */
    case 953:  /* *lwp_lwpvaldi3_1 */
    case 952:  /* *lwp_lwpvalsi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 947:  /* *rdtscp_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 946:  /* *rdtscp */
    case 945:  /* *rdtsc_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 943:  /* *rdpmc_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 928:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 924:  /* adjust_stack_and_probedi */
    case 923:  /* adjust_stack_and_probesi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 1251:  /* *fma_fmadd_v4df */
    case 1250:  /* *fma_fmadd_v8sf */
    case 1249:  /* *fma_fmadd_v2df */
    case 1248:  /* *fma_fmadd_v4sf */
    case 1247:  /* *fma_fmadd_df */
    case 1246:  /* *fma_fmadd_sf */
    case 908:  /* *xop_pcmov_df */
    case 907:  /* *xop_pcmov_sf */
    case 906:  /* *movsfcc_1_387 */
    case 905:  /* *movdfcc_1 */
    case 904:  /* *movdfcc_1_rex64 */
    case 903:  /* *movxfcc_1 */
    case 902:  /* *movqicc_noc */
    case 901:  /* *movdicc_noc */
    case 900:  /* *movsicc_noc */
    case 899:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 892:  /* *strlenqi_1 */
    case 891:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 890:  /* *cmpstrnqi_1 */
    case 889:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 888:  /* *cmpstrnqi_nz_1 */
    case 887:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 886:  /* *rep_stosqi */
    case 885:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 884:  /* *rep_stossi */
    case 883:  /* *rep_stossi */
    case 882:  /* *rep_stosdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 881:  /* *strsetqi_1 */
    case 880:  /* *strsetqi_1 */
    case 879:  /* *strsethi_1 */
    case 878:  /* *strsethi_1 */
    case 877:  /* *strsetsi_1 */
    case 876:  /* *strsetsi_1 */
    case 875:  /* *strsetdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 874:  /* *rep_movqi */
    case 873:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 872:  /* *rep_movsi */
    case 871:  /* *rep_movsi */
    case 870:  /* *rep_movdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 869:  /* *strmovqi_1 */
    case 868:  /* *strmovqi_1 */
    case 867:  /* *strmovhi_1 */
    case 866:  /* *strmovhi_1 */
    case 865:  /* *strmovsi_1 */
    case 864:  /* *strmovsi_1 */
    case 863:  /* *strmovdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 847:  /* fistdi2_ceil_with_temp */
    case 836:  /* fistdi2_floor_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 851:  /* fistsi2_ceil_with_temp */
    case 850:  /* fisthi2_ceil_with_temp */
    case 846:  /* fistdi2_ceil */
    case 840:  /* fistsi2_floor_with_temp */
    case 839:  /* fisthi2_floor_with_temp */
    case 835:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 922:  /* allocate_stack_worker_probe_di */
    case 921:  /* allocate_stack_worker_probe_si */
    case 854:  /* frndintxf2_mask_pm */
    case 852:  /* frndintxf2_trunc */
    case 845:  /* *fistdi2_ceil_1 */
    case 844:  /* *fistsi2_ceil_1 */
    case 843:  /* *fisthi2_ceil_1 */
    case 841:  /* frndintxf2_ceil */
    case 834:  /* *fistdi2_floor_1 */
    case 833:  /* *fistsi2_floor_1 */
    case 832:  /* *fisthi2_floor_1 */
    case 830:  /* frndintxf2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 2026:  /* atomic_storedi_fpu */
    case 2021:  /* atomic_loaddi_fpu */
    case 855:  /* frndintxf2_mask_pm_i387 */
    case 853:  /* frndintxf2_trunc_i387 */
    case 849:  /* fistsi2_ceil */
    case 848:  /* fisthi2_ceil */
    case 842:  /* frndintxf2_ceil_i387 */
    case 838:  /* fistsi2_floor */
    case 837:  /* fisthi2_floor */
    case 831:  /* frndintxf2_floor_i387 */
    case 823:  /* fistdi2_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 933:  /* stack_tls_protect_set_di */
    case 932:  /* stack_tls_protect_set_si */
    case 931:  /* stack_protect_set_di */
    case 930:  /* stack_protect_set_si */
    case 829:  /* fistsi2_with_temp */
    case 828:  /* fisthi2_with_temp */
    case 822:  /* fistdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 817:  /* *fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 812:  /* fyl2xp1_extenddfxf3_i387 */
    case 811:  /* fyl2xp1_extendsfxf3_i387 */
    case 809:  /* fyl2x_extenddfxf3_i387 */
    case 808:  /* fyl2x_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 806:  /* fpatan_extenddfxf3_i387 */
    case 805:  /* fpatan_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 937:  /* stack_tls_protect_test_di */
    case 936:  /* stack_tls_protect_test_si */
    case 935:  /* stack_protect_test_di */
    case 934:  /* stack_protect_test_si */
    case 810:  /* fyl2xp1xf3_i387 */
    case 807:  /* fyl2xxf3_i387 */
    case 804:  /* *fpatanxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 803:  /* fptan_extenddfxf4_i387 */
    case 802:  /* fptan_extendsfxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 801:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 815:  /* fxtract_extenddfxf3_i387 */
    case 814:  /* fxtract_extendsfxf3_i387 */
    case 800:  /* sincos_extenddfxf3_i387 */
    case 799:  /* sincos_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 813:  /* fxtractxf3_i387 */
    case 798:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 791:  /* fprem1xf4_i387 */
    case 790:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 781:  /* *fop_xf_6_i387 */
    case 780:  /* *fop_xf_6_i387 */
    case 769:  /* *fop_df_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 779:  /* *fop_xf_5_i387 */
    case 778:  /* *fop_xf_5_i387 */
    case 775:  /* *fop_xf_3_i387 */
    case 774:  /* *fop_xf_3_i387 */
    case 768:  /* *fop_df_5_i387 */
    case 766:  /* *fop_df_3_i387 */
    case 765:  /* *fop_sf_3_i387 */
    case 764:  /* *fop_df_3_i387 */
    case 763:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 777:  /* *fop_xf_4_i387 */
    case 776:  /* *fop_xf_4_i387 */
    case 773:  /* *fop_xf_2_i387 */
    case 772:  /* *fop_xf_2_i387 */
    case 767:  /* *fop_df_4_i387 */
    case 762:  /* *fop_df_2_i387 */
    case 761:  /* *fop_sf_2_i387 */
    case 760:  /* *fop_df_2_i387 */
    case 759:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 745:  /* *tls_dynamic_gnu2_combine_64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 2028:  /* storedi_via_fpu */
    case 2027:  /* loaddi_via_fpu */
    case 1941:  /* vcvtph2ps256 */
    case 1940:  /* *vcvtph2ps_load */
    case 1922:  /* avx_pd256_pd */
    case 1921:  /* avx_ps256_ps */
    case 1920:  /* avx_si256_si */
    case 1840:  /* aesimc */
    case 1813:  /* xop_frczv4df2 */
    case 1812:  /* xop_frczv8sf2 */
    case 1811:  /* xop_frczv2df2 */
    case 1810:  /* xop_frczv4sf2 */
    case 1809:  /* xop_frczdf2 */
    case 1808:  /* xop_frczsf2 */
    case 1700:  /* sse4_1_phminposuw */
    case 1689:  /* sse4_1_movntdqa */
    case 1688:  /* avx2_movntdqa */
    case 1669:  /* sse4a_movntdf */
    case 1668:  /* sse4a_movntsf */
    case 1611:  /* sse2_pmovmskb */
    case 1610:  /* avx2_pmovmskb */
    case 1609:  /* sse2_movmskpd */
    case 1608:  /* avx_movmskpd256 */
    case 1607:  /* sse_movmskps */
    case 1606:  /* avx_movmskps256 */
    case 1325:  /* avx_cvtpd2dq256 */
    case 1319:  /* sse2_cvtsd2siq_2 */
    case 1317:  /* sse2_cvtsd2si_2 */
    case 1312:  /* sse2_cvtpd2pi */
    case 1308:  /* sse2_cvtps2dq */
    case 1307:  /* avx_cvtps2dq256 */
    case 1302:  /* sse_cvtss2siq_2 */
    case 1300:  /* sse_cvtss2si_2 */
    case 1160:  /* sse_rsqrtv4sf2 */
    case 1159:  /* avx_rsqrtv8sf2 */
    case 1151:  /* sse_rcpv4sf2 */
    case 1150:  /* avx_rcpv8sf2 */
    case 1121:  /* sse2_movntv2di */
    case 1120:  /* avx_movntv4di */
    case 1119:  /* sse2_movntv2df */
    case 1118:  /* avx_movntv4df */
    case 1117:  /* sse_movntv4sf */
    case 1116:  /* avx_movntv8sf */
    case 1115:  /* sse2_movntidi */
    case 1114:  /* sse2_movntisi */
    case 1113:  /* sse3_lddqu */
    case 1112:  /* avx_lddqu256 */
    case 1111:  /* sse2_storedqu */
    case 1110:  /* avx_storedqu256 */
    case 1109:  /* sse2_loaddqu */
    case 1108:  /* avx_loaddqu256 */
    case 1107:  /* sse2_storeupd */
    case 1106:  /* avx_storeupd256 */
    case 1105:  /* sse_storeups */
    case 1104:  /* avx_storeups256 */
    case 1103:  /* sse2_loadupd */
    case 1102:  /* avx_loadupd256 */
    case 1101:  /* sse_loadups */
    case 1100:  /* avx_loadups256 */
    case 1079:  /* mmx_pmovmskb */
    case 989:  /* mmx_rsqrtv2sf2 */
    case 986:  /* mmx_rcpv2sf2 */
    case 978:  /* sse_movntq */
    case 942:  /* *rdpmc */
    case 861:  /* movmsk_df */
    case 860:  /* fxamdf2_i387_with_temp */
    case 859:  /* fxamsf2_i387_with_temp */
    case 858:  /* fxamxf2_i387 */
    case 857:  /* fxamdf2_i387 */
    case 856:  /* fxamsf2_i387 */
    case 827:  /* fistsi2 */
    case 826:  /* fisthi2 */
    case 825:  /* *fistsi2_1 */
    case 824:  /* *fisthi2_1 */
    case 821:  /* *fistdi2_1 */
    case 820:  /* rintxf2 */
    case 816:  /* *f2xm1xf2_i387 */
    case 795:  /* *cosxf2_i387 */
    case 792:  /* *sinxf2_i387 */
    case 787:  /* *rsqrtsf2_sse */
    case 783:  /* truncxfdf2_i387_noop_unspec */
    case 782:  /* truncxfsf2_i387_noop_unspec */
    case 754:  /* *rcpsf2_sse */
    case 743:  /* *tls_dynamic_gnu2_lea_64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 742:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 741:  /* *tls_dynamic_gnu2_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 740:  /* *tls_dynamic_gnu2_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 737:  /* *add_tp_x32_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 739:  /* *add_tp_di */
    case 738:  /* *add_tp_si */
    case 736:  /* *add_tp_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 731:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 729:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 728:  /* *tls_global_dynamic_64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 727:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 726:  /* *parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 725:  /* paritysi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 724:  /* paritydi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 723:  /* bswaphi_lowpart */
    case 722:  /* *bswaphi_lowpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 710:  /* *bsrhi */
    case 709:  /* bsr */
    case 708:  /* bsr_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 707:  /* *tbm_tzmsk_di */
    case 706:  /* *tbm_tzmsk_si */
    case 705:  /* *tbm_t1mskc_di */
    case 704:  /* *tbm_t1mskc_si */
    case 703:  /* *tbm_blsic_di */
    case 702:  /* *tbm_blsic_si */
    case 695:  /* *tbm_blcic_di */
    case 694:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 693:  /* *tbm_blci_di */
    case 692:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 689:  /* tbm_bextri_di */
    case 688:  /* tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 2025:  /* atomic_storedi_1 */
    case 2024:  /* atomic_storesi_1 */
    case 2023:  /* atomic_storehi_1 */
    case 2022:  /* atomic_storeqi_1 */
    case 1944:  /* vcvtps2ph256 */
    case 1943:  /* *vcvtps2ph_store */
    case 1883:  /* avx_vpermilvarv2df3 */
    case 1882:  /* avx_vpermilvarv4df3 */
    case 1881:  /* avx_vpermilvarv4sf3 */
    case 1880:  /* avx_vpermilvarv8sf3 */
    case 1855:  /* avx2_permvarv8sf */
    case 1854:  /* avx2_permv4df */
    case 1853:  /* avx2_permvarv8si */
    case 1841:  /* aeskeygenassist */
    case 1839:  /* aesdeclast */
    case 1838:  /* aesdec */
    case 1837:  /* aesenclast */
    case 1836:  /* aesenc */
    case 1734:  /* sse4_1_roundpd */
    case 1733:  /* avx_roundpd256 */
    case 1732:  /* sse4_1_roundps */
    case 1731:  /* avx_roundps256 */
    case 1675:  /* sse4a_insertq */
    case 1673:  /* sse4a_extrq */
    case 1655:  /* ssse3_psignv2si3 */
    case 1654:  /* ssse3_psignv4hi3 */
    case 1653:  /* ssse3_psignv8qi3 */
    case 1652:  /* ssse3_psignv4si3 */
    case 1651:  /* avx2_psignv8si3 */
    case 1650:  /* ssse3_psignv8hi3 */
    case 1649:  /* avx2_psignv16hi3 */
    case 1648:  /* ssse3_psignv16qi3 */
    case 1647:  /* avx2_psignv32qi3 */
    case 1646:  /* ssse3_pshufbv8qi3 */
    case 1645:  /* ssse3_pshufbv16qi3 */
    case 1644:  /* avx2_pshufbv32qi3 */
    case 1605:  /* sse2_psadbw */
    case 1604:  /* avx2_psadbw */
    case 1189:  /* *ieee_smaxv2df3 */
    case 1188:  /* *ieee_smaxv4df3 */
    case 1187:  /* *ieee_smaxv4sf3 */
    case 1186:  /* *ieee_smaxv8sf3 */
    case 1185:  /* *ieee_sminv2df3 */
    case 1184:  /* *ieee_sminv4df3 */
    case 1183:  /* *ieee_sminv4sf3 */
    case 1182:  /* *ieee_sminv8sf3 */
    case 1078:  /* mmx_psadbw */
    case 990:  /* mmx_rsqit1v2sf3 */
    case 988:  /* mmx_rcpit2v2sf3 */
    case 987:  /* mmx_rcpit1v2sf3 */
    case 941:  /* sse4_2_crc32di */
    case 940:  /* sse4_2_crc32si */
    case 939:  /* sse4_2_crc32hi */
    case 938:  /* sse4_2_crc32qi */
    case 916:  /* *ieee_smaxdf3 */
    case 915:  /* *ieee_smaxsf3 */
    case 914:  /* *ieee_smindf3 */
    case 913:  /* *ieee_sminsf3 */
    case 819:  /* sse4_1_rounddf2 */
    case 818:  /* sse4_1_roundsf2 */
    case 687:  /* bmi2_pext_di3 */
    case 686:  /* bmi2_pext_si3 */
    case 685:  /* bmi2_pdep_di3 */
    case 684:  /* bmi2_pdep_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 683:  /* bmi2_bzhi_di3 */
    case 682:  /* bmi2_bzhi_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 701:  /* *tbm_blsfill_di */
    case 700:  /* *tbm_blsfill_si */
    case 699:  /* *tbm_blcs_di */
    case 698:  /* *tbm_blcs_si */
    case 697:  /* *tbm_blcmsk_di */
    case 696:  /* *tbm_blcmsk_si */
    case 691:  /* *tbm_blcfill_di */
    case 690:  /* *tbm_blcfill_si */
    case 681:  /* *bmi_blsr_di */
    case 680:  /* *bmi_blsr_si */
    case 679:  /* *bmi_blsmsk_di */
    case 678:  /* *bmi_blsmsk_si */
    case 677:  /* *bmi_blsi_di */
    case 676:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 926:  /* probe_stack_rangedi */
    case 925:  /* probe_stack_rangesi */
    case 744:  /* *tls_dynamic_gnu2_call_64 */
    case 675:  /* bmi_bextr_di */
    case 674:  /* bmi_bextr_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 665:  /* *ffsdi_1 */
    case 664:  /* *ffssi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1671:  /* sse4a_vmmovntv2df */
    case 1670:  /* sse4a_vmmovntv4sf */
    case 1318:  /* sse2_cvtsd2siq */
    case 1316:  /* sse2_cvtsd2si */
    case 1301:  /* sse_cvtss2siq */
    case 1299:  /* sse_cvtss2si */
    case 797:  /* *cos_extenddfxf2_i387 */
    case 796:  /* *cos_extendsfxf2_i387 */
    case 794:  /* *sin_extenddfxf2_i387 */
    case 793:  /* *sin_extendsfxf2_i387 */
    case 658:  /* set_got_offset_rex64 */
    case 657:  /* set_rip_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 655:  /* set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 966:  /* rdranddi_1 */
    case 965:  /* rdrandsi_1 */
    case 964:  /* rdrandhi_1 */
    case 654:  /* set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 650:  /* simple_return_indirect_internal */
    case 649:  /* simple_return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1844:  /* avx_vzeroupper */
    case 1616:  /* sse2_clflush */
    case 1614:  /* sse_ldmxcsr */
    case 963:  /* wrgsbasedi */
    case 962:  /* wrgsbasesi */
    case 961:  /* wrfsbasedi */
    case 960:  /* wrfsbasesi */
    case 949:  /* *lwp_llwpcbdi1 */
    case 948:  /* *lwp_llwpcbsi1 */
    case 662:  /* split_stack_return */
    case 653:  /* pad */
    case 652:  /* nops */
    case 646:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 2019:  /* mfence_sse2 */
    case 2018:  /* *sse_sfence */
    case 2017:  /* *sse2_lfence */
    case 967:  /* *pause */
    case 645:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 927:  /* trap */
    case 862:  /* cld */
    case 661:  /* leave_rex64 */
    case 660:  /* leave */
    case 659:  /* eh_return_internal */
    case 651:  /* nop */
    case 648:  /* simple_return_internal_long */
    case 647:  /* simple_return_internal */
    case 644:  /* blockage */
      break;

    case 643:  /* *sibcall_value_pop */
    case 641:  /* *call_value_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 642:  /* *sibcall_value_pop_vzeroupper */
    case 640:  /* *call_value_pop_vzeroupper */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      break;

    case 638:  /* *call_value_rex64_ms_sysv_vzeroupper */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 14), 0, 0));
      break;

    case 1903:  /* vec_set_hi_v32qi */
    case 1901:  /* vec_set_hi_v16hi */
    case 1899:  /* vec_set_hi_v8sf */
    case 1898:  /* vec_set_hi_v8si */
    case 1895:  /* vec_set_hi_v4df */
    case 1894:  /* vec_set_hi_v4di */
    case 1891:  /* avx2_vec_set_hi_v4di */
    case 1544:  /* *andnottf3 */
    case 1519:  /* *andnotv2di3 */
    case 1518:  /* *andnotv4di3 */
    case 1517:  /* *andnotv4si3 */
    case 1516:  /* *andnotv8si3 */
    case 1515:  /* *andnotv8hi3 */
    case 1514:  /* *andnotv16hi3 */
    case 1513:  /* *andnotv16qi3 */
    case 1512:  /* *andnotv32qi3 */
    case 1396:  /* sse2_loadhpd */
    case 1352:  /* sse_loadhps */
    case 1334:  /* *sse2_cvtpd2ps */
    case 1330:  /* *sse2_cvttpd2dq */
    case 1329:  /* *avx_cvttpd2dq256_2 */
    case 1239:  /* *andnotdf3 */
    case 1238:  /* *andnotsf3 */
    case 1225:  /* sse2_andnotv2df3 */
    case 1224:  /* avx_andnotv4df3 */
    case 1223:  /* sse_andnotv4sf3 */
    case 1222:  /* avx_andnotv8sf3 */
    case 1158:  /* sse2_vmsqrtv2df2 */
    case 1157:  /* sse_vmsqrtv4sf2 */
    case 1048:  /* mmx_andnotv2si3 */
    case 1047:  /* mmx_andnotv4hi3 */
    case 1046:  /* mmx_andnotv8qi3 */
    case 637:  /* *sibcall_value */
    case 636:  /* *sibcall_value */
    case 633:  /* *call_value */
    case 632:  /* *call_value */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 635:  /* *sibcall_value_vzeroupper */
    case 634:  /* *sibcall_value_vzeroupper */
    case 631:  /* *call_value_vzeroupper */
    case 630:  /* *call_value_vzeroupper */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 629:  /* *sibcall_pop */
    case 627:  /* *call_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 628:  /* *sibcall_pop_vzeroupper */
    case 626:  /* *call_pop_vzeroupper */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      break;

    case 620:  /* *call_rex64_ms_sysv_vzeroupper */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 14), 0, 0));
      break;

    case 623:  /* *sibcall_vzeroupper */
    case 622:  /* *sibcall_vzeroupper */
    case 617:  /* *call_vzeroupper */
    case 616:  /* *call_vzeroupper */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 615:  /* *tablejump_1 */
    case 614:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 613:  /* *indirect_jump */
    case 612:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 611:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 610:  /* *fp_jcc_4_si_387 */
    case 609:  /* *fp_jcc_4_hi_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 607:  /* *fp_jcc_2r_387 */
    case 605:  /* *fp_jcc_1r_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 608:  /* *fp_jcc_3_387 */
    case 606:  /* *fp_jcc_2_387 */
    case 604:  /* *fp_jcc_1_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 603:  /* *jcc_btsi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 602:  /* *jcc_btsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 601:  /* *jcc_btdi_mask */
    case 600:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 599:  /* *jcc_btdi */
    case 598:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 597:  /* *jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 596:  /* *jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1215:  /* sse2_maskcmpv2df3 */
    case 1214:  /* avx_maskcmpv4df3 */
    case 1213:  /* sse_maskcmpv4sf3 */
    case 1212:  /* avx_maskcmpv8sf3 */
    case 1211:  /* *sse2_maskcmpv2df3_comm */
    case 1210:  /* *avx_maskcmpv4df3_comm */
    case 1209:  /* *sse_maskcmpv4sf3_comm */
    case 1208:  /* *avx_maskcmpv8sf3_comm */
    case 771:  /* *fop_xf_1_i387 */
    case 770:  /* *fop_xf_comm_i387 */
    case 758:  /* *fop_df_1_i387 */
    case 757:  /* *fop_sf_1_i387 */
    case 756:  /* *fop_df_1_sse */
    case 755:  /* *fop_sf_1_sse */
    case 753:  /* *fop_df_1_mixed */
    case 752:  /* *fop_sf_1_mixed */
    case 751:  /* *fop_df_comm_i387 */
    case 750:  /* *fop_sf_comm_i387 */
    case 749:  /* *fop_df_comm_sse */
    case 748:  /* *fop_sf_comm_sse */
    case 747:  /* *fop_df_comm_mixed */
    case 746:  /* *fop_sf_comm_mixed */
    case 595:  /* setcc_df_sse */
    case 594:  /* setcc_sf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 588:  /* *btdi */
    case 587:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 586:  /* *btcq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2);
      recog_data.dup_num[1] = 1;
      break;

    case 585:  /* *btrq */
    case 584:  /* *btsq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      break;

    case 568:  /* ix86_rotrti3_doubleword */
    case 567:  /* ix86_rotrdi3_doubleword */
    case 566:  /* ix86_rotlti3_doubleword */
    case 565:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1565:  /* vec_interleave_lowv4si */
    case 1564:  /* avx2_interleave_lowv8si */
    case 1563:  /* vec_interleave_highv4si */
    case 1562:  /* avx2_interleave_highv8si */
    case 1561:  /* vec_interleave_lowv8hi */
    case 1560:  /* avx2_interleave_lowv16hi */
    case 1559:  /* vec_interleave_highv8hi */
    case 1558:  /* avx2_interleave_highv16hi */
    case 1557:  /* vec_interleave_lowv16qi */
    case 1556:  /* avx2_interleave_lowv32qi */
    case 1555:  /* vec_interleave_highv16qi */
    case 1554:  /* avx2_interleave_highv32qi */
    case 1389:  /* vec_interleave_lowv2di */
    case 1388:  /* avx2_interleave_lowv4di */
    case 1387:  /* vec_interleave_highv2di */
    case 1386:  /* avx2_interleave_highv4di */
    case 1384:  /* *vec_interleave_lowv2df */
    case 1383:  /* *avx_unpcklpd256 */
    case 1382:  /* *vec_interleave_highv2df */
    case 1381:  /* avx_unpckhpd256 */
    case 1343:  /* vec_interleave_lowv4sf */
    case 1342:  /* avx_unpcklps256 */
    case 1341:  /* vec_interleave_highv4sf */
    case 1340:  /* avx_unpckhps256 */
    case 1339:  /* sse_movlhps */
    case 1338:  /* sse_movhlps */
    case 1066:  /* mmx_punpckldq */
    case 1065:  /* mmx_punpckhdq */
    case 1064:  /* mmx_punpcklwd */
    case 1063:  /* mmx_punpckhwd */
    case 1062:  /* mmx_punpcklbw */
    case 1061:  /* mmx_punpckhbw */
    case 575:  /* *bmi2_rorxsi3_1_zext */
    case 534:  /* *bmi2_ashrsi3_1_zext */
    case 533:  /* *bmi2_lshrsi3_1_zext */
    case 498:  /* *bmi2_ashlsi3_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1938:  /* avx_vec_concatv4df */
    case 1937:  /* avx_vec_concatv8sf */
    case 1936:  /* avx_vec_concatv4di */
    case 1935:  /* avx_vec_concatv8si */
    case 1934:  /* avx_vec_concatv16hi */
    case 1933:  /* avx_vec_concatv32qi */
    case 1932:  /* avx2_lshrvv2di */
    case 1931:  /* avx2_ashlvv2di */
    case 1930:  /* avx2_lshrvv4di */
    case 1929:  /* avx2_ashlvv4di */
    case 1928:  /* avx2_lshrvv4si */
    case 1927:  /* avx2_ashlvv4si */
    case 1926:  /* avx2_lshrvv8si */
    case 1925:  /* avx2_ashlvv8si */
    case 1924:  /* avx2_ashrvv4si */
    case 1923:  /* avx2_ashrvv8si */
    case 1795:  /* xop_rotrv2di3 */
    case 1794:  /* xop_rotrv4si3 */
    case 1793:  /* xop_rotrv8hi3 */
    case 1792:  /* xop_rotrv16qi3 */
    case 1791:  /* xop_rotlv2di3 */
    case 1790:  /* xop_rotlv4si3 */
    case 1789:  /* xop_rotlv8hi3 */
    case 1788:  /* xop_rotlv16qi3 */
    case 1599:  /* vec_concatv2di */
    case 1598:  /* *vec_concatv2di_rex64 */
    case 1597:  /* *vec_concatv4si */
    case 1596:  /* *vec_concatv2si_sse */
    case 1595:  /* *vec_concatv2si_sse2 */
    case 1594:  /* *vec_concatv2si_sse4_1 */
    case 1547:  /* *xortf3 */
    case 1546:  /* *iortf3 */
    case 1545:  /* *andtf3 */
    case 1543:  /* *xorv2di3 */
    case 1542:  /* *iorv2di3 */
    case 1541:  /* *andv2di3 */
    case 1540:  /* *xorv4di3 */
    case 1539:  /* *iorv4di3 */
    case 1538:  /* *andv4di3 */
    case 1537:  /* *xorv4si3 */
    case 1536:  /* *iorv4si3 */
    case 1535:  /* *andv4si3 */
    case 1534:  /* *xorv8si3 */
    case 1533:  /* *iorv8si3 */
    case 1532:  /* *andv8si3 */
    case 1531:  /* *xorv8hi3 */
    case 1530:  /* *iorv8hi3 */
    case 1529:  /* *andv8hi3 */
    case 1528:  /* *xorv16hi3 */
    case 1527:  /* *iorv16hi3 */
    case 1526:  /* *andv16hi3 */
    case 1525:  /* *xorv16qi3 */
    case 1524:  /* *iorv16qi3 */
    case 1523:  /* *andv16qi3 */
    case 1522:  /* *xorv32qi3 */
    case 1521:  /* *iorv32qi3 */
    case 1520:  /* *andv32qi3 */
    case 1511:  /* sse2_gtv4si3 */
    case 1510:  /* sse2_gtv8hi3 */
    case 1509:  /* sse2_gtv16qi3 */
    case 1508:  /* avx2_gtv4di3 */
    case 1507:  /* avx2_gtv8si3 */
    case 1506:  /* avx2_gtv16hi3 */
    case 1505:  /* avx2_gtv32qi3 */
    case 1504:  /* sse4_2_gtv2di3 */
    case 1503:  /* *sse2_eqv4si3 */
    case 1502:  /* *sse2_eqv8hi3 */
    case 1501:  /* *sse2_eqv16qi3 */
    case 1500:  /* *sse4_1_eqv2di3 */
    case 1499:  /* *avx2_eqv4di3 */
    case 1498:  /* *avx2_eqv8si3 */
    case 1497:  /* *avx2_eqv16hi3 */
    case 1496:  /* *avx2_eqv32qi3 */
    case 1495:  /* *uminv16qi3 */
    case 1494:  /* *umaxv16qi3 */
    case 1493:  /* *sse4_1_uminv4si3 */
    case 1492:  /* *sse4_1_umaxv4si3 */
    case 1491:  /* *sse4_1_uminv8hi3 */
    case 1490:  /* *sse4_1_umaxv8hi3 */
    case 1489:  /* *sminv8hi3 */
    case 1488:  /* *smaxv8hi3 */
    case 1487:  /* *sse4_1_sminv4si3 */
    case 1486:  /* *sse4_1_smaxv4si3 */
    case 1485:  /* *sse4_1_sminv16qi3 */
    case 1484:  /* *sse4_1_smaxv16qi3 */
    case 1483:  /* *avx2_uminv8si3 */
    case 1482:  /* *avx2_umaxv8si3 */
    case 1481:  /* *avx2_sminv8si3 */
    case 1480:  /* *avx2_smaxv8si3 */
    case 1479:  /* *avx2_uminv16hi3 */
    case 1478:  /* *avx2_umaxv16hi3 */
    case 1477:  /* *avx2_sminv16hi3 */
    case 1476:  /* *avx2_smaxv16hi3 */
    case 1475:  /* *avx2_uminv32qi3 */
    case 1474:  /* *avx2_umaxv32qi3 */
    case 1473:  /* *avx2_sminv32qi3 */
    case 1472:  /* *avx2_smaxv32qi3 */
    case 1471:  /* sse2_lshrv1ti3 */
    case 1470:  /* avx2_lshrv2ti3 */
    case 1469:  /* sse2_ashlv1ti3 */
    case 1468:  /* avx2_ashlv2ti3 */
    case 1467:  /* lshrv2di3 */
    case 1466:  /* ashlv2di3 */
    case 1465:  /* lshrv4di3 */
    case 1464:  /* ashlv4di3 */
    case 1463:  /* lshrv4si3 */
    case 1462:  /* ashlv4si3 */
    case 1461:  /* lshrv8si3 */
    case 1460:  /* ashlv8si3 */
    case 1459:  /* lshrv8hi3 */
    case 1458:  /* ashlv8hi3 */
    case 1457:  /* lshrv16hi3 */
    case 1456:  /* ashlv16hi3 */
    case 1455:  /* ashrv4si3 */
    case 1454:  /* ashrv8si3 */
    case 1453:  /* ashrv8hi3 */
    case 1452:  /* ashrv16hi3 */
    case 1451:  /* mulv2di3 */
    case 1450:  /* mulv4di3 */
    case 1449:  /* *sse2_mulv4si3 */
    case 1448:  /* *sse4_1_mulv4si3 */
    case 1447:  /* *avx2_mulv8si3 */
    case 1436:  /* *mulv8hi3 */
    case 1435:  /* *mulv16hi3 */
    case 1434:  /* mulv16qi3 */
    case 1433:  /* mulv32qi3 */
    case 1432:  /* *sse2_ussubv8hi3 */
    case 1431:  /* *sse2_sssubv8hi3 */
    case 1430:  /* *sse2_usaddv8hi3 */
    case 1429:  /* *sse2_ssaddv8hi3 */
    case 1428:  /* *avx2_ussubv16hi3 */
    case 1427:  /* *avx2_sssubv16hi3 */
    case 1426:  /* *avx2_usaddv16hi3 */
    case 1425:  /* *avx2_ssaddv16hi3 */
    case 1424:  /* *sse2_ussubv16qi3 */
    case 1423:  /* *sse2_sssubv16qi3 */
    case 1422:  /* *sse2_usaddv16qi3 */
    case 1421:  /* *sse2_ssaddv16qi3 */
    case 1420:  /* *avx2_ussubv32qi3 */
    case 1419:  /* *avx2_sssubv32qi3 */
    case 1418:  /* *avx2_usaddv32qi3 */
    case 1417:  /* *avx2_ssaddv32qi3 */
    case 1416:  /* *subv2di3 */
    case 1415:  /* *addv2di3 */
    case 1414:  /* *subv4di3 */
    case 1413:  /* *addv4di3 */
    case 1412:  /* *subv4si3 */
    case 1411:  /* *addv4si3 */
    case 1410:  /* *subv8si3 */
    case 1409:  /* *addv8si3 */
    case 1408:  /* *subv8hi3 */
    case 1407:  /* *addv8hi3 */
    case 1406:  /* *subv16hi3 */
    case 1405:  /* *addv16hi3 */
    case 1404:  /* *subv16qi3 */
    case 1403:  /* *addv16qi3 */
    case 1402:  /* *subv32qi3 */
    case 1401:  /* *addv32qi3 */
    case 1400:  /* *vec_concatv2df */
    case 1361:  /* *vec_concatv4sf */
    case 1360:  /* *vec_concatv2sf_sse */
    case 1359:  /* *vec_concatv2sf_sse4_1 */
    case 1245:  /* *xordf3 */
    case 1244:  /* *iordf3 */
    case 1243:  /* *anddf3 */
    case 1242:  /* *xorsf3 */
    case 1241:  /* *iorsf3 */
    case 1240:  /* *andsf3 */
    case 1237:  /* *xorv2df3 */
    case 1236:  /* *iorv2df3 */
    case 1235:  /* *andv2df3 */
    case 1234:  /* *xorv4df3 */
    case 1233:  /* *iorv4df3 */
    case 1232:  /* *andv4df3 */
    case 1231:  /* *xorv4sf3 */
    case 1230:  /* *iorv4sf3 */
    case 1229:  /* *andv4sf3 */
    case 1228:  /* *xorv8sf3 */
    case 1227:  /* *iorv8sf3 */
    case 1226:  /* *andv8sf3 */
    case 1177:  /* *sminv2df3 */
    case 1176:  /* *smaxv2df3 */
    case 1175:  /* *sminv4df3 */
    case 1174:  /* *smaxv4df3 */
    case 1173:  /* *sminv4sf3 */
    case 1172:  /* *smaxv4sf3 */
    case 1171:  /* *sminv8sf3 */
    case 1170:  /* *smaxv8sf3 */
    case 1169:  /* *sminv2df3_finite */
    case 1168:  /* *smaxv2df3_finite */
    case 1167:  /* *sminv4df3_finite */
    case 1166:  /* *smaxv4df3_finite */
    case 1165:  /* *sminv4sf3_finite */
    case 1164:  /* *smaxv4sf3_finite */
    case 1163:  /* *sminv8sf3_finite */
    case 1162:  /* *smaxv8sf3_finite */
    case 1147:  /* sse2_divv2df3 */
    case 1146:  /* avx_divv4df3 */
    case 1145:  /* sse_divv4sf3 */
    case 1144:  /* avx_divv8sf3 */
    case 1141:  /* *mulv2df3 */
    case 1140:  /* *mulv4df3 */
    case 1139:  /* *mulv4sf3 */
    case 1138:  /* *mulv8sf3 */
    case 1133:  /* *subv2df3 */
    case 1132:  /* *addv2df3 */
    case 1131:  /* *subv4df3 */
    case 1130:  /* *addv4df3 */
    case 1129:  /* *subv4sf3 */
    case 1128:  /* *addv4sf3 */
    case 1127:  /* *subv8sf3 */
    case 1126:  /* *addv8sf3 */
    case 1073:  /* *mmx_concatv2si */
    case 1057:  /* *mmx_xorv2si3 */
    case 1056:  /* *mmx_iorv2si3 */
    case 1055:  /* *mmx_andv2si3 */
    case 1054:  /* *mmx_xorv4hi3 */
    case 1053:  /* *mmx_iorv4hi3 */
    case 1052:  /* *mmx_andv4hi3 */
    case 1051:  /* *mmx_xorv8qi3 */
    case 1050:  /* *mmx_iorv8qi3 */
    case 1049:  /* *mmx_andv8qi3 */
    case 1045:  /* mmx_gtv2si3 */
    case 1044:  /* mmx_gtv4hi3 */
    case 1043:  /* mmx_gtv8qi3 */
    case 1042:  /* *mmx_eqv2si3 */
    case 1041:  /* *mmx_eqv4hi3 */
    case 1040:  /* *mmx_eqv8qi3 */
    case 1039:  /* mmx_lshrv1di3 */
    case 1038:  /* mmx_ashlv1di3 */
    case 1037:  /* mmx_lshrv2si3 */
    case 1036:  /* mmx_ashlv2si3 */
    case 1035:  /* mmx_lshrv4hi3 */
    case 1034:  /* mmx_ashlv4hi3 */
    case 1033:  /* mmx_ashrv2si3 */
    case 1032:  /* mmx_ashrv4hi3 */
    case 1031:  /* *mmx_uminv8qi3 */
    case 1030:  /* *mmx_umaxv8qi3 */
    case 1029:  /* *mmx_sminv4hi3 */
    case 1028:  /* *mmx_smaxv4hi3 */
    case 1022:  /* *mmx_mulv4hi3 */
    case 1021:  /* *mmx_ussubv4hi3 */
    case 1020:  /* *mmx_sssubv4hi3 */
    case 1019:  /* *mmx_usaddv4hi3 */
    case 1018:  /* *mmx_ssaddv4hi3 */
    case 1017:  /* *mmx_ussubv8qi3 */
    case 1016:  /* *mmx_sssubv8qi3 */
    case 1015:  /* *mmx_usaddv8qi3 */
    case 1014:  /* *mmx_ssaddv8qi3 */
    case 1013:  /* *mmx_subv1di3 */
    case 1012:  /* *mmx_addv1di3 */
    case 1011:  /* *mmx_subv2si3 */
    case 1010:  /* *mmx_addv2si3 */
    case 1009:  /* *mmx_subv4hi3 */
    case 1008:  /* *mmx_addv4hi3 */
    case 1007:  /* *mmx_subv8qi3 */
    case 1006:  /* *mmx_addv8qi3 */
    case 1003:  /* *mmx_concatv2sf */
    case 996:  /* mmx_gev2sf3 */
    case 995:  /* mmx_gtv2sf3 */
    case 994:  /* *mmx_eqv2sf3 */
    case 985:  /* *mmx_sminv2sf3 */
    case 984:  /* *mmx_smaxv2sf3 */
    case 983:  /* *mmx_sminv2sf3_finite */
    case 982:  /* *mmx_smaxv2sf3_finite */
    case 981:  /* *mmx_mulv2sf3 */
    case 980:  /* *mmx_subv2sf3 */
    case 979:  /* *mmx_addv2sf3 */
    case 912:  /* smindf3 */
    case 911:  /* smaxdf3 */
    case 910:  /* sminsf3 */
    case 909:  /* smaxsf3 */
    case 570:  /* *bmi2_rorxdi3_1 */
    case 569:  /* *bmi2_rorxsi3_1 */
    case 528:  /* *bmi2_ashrdi3_1 */
    case 527:  /* *bmi2_lshrdi3_1 */
    case 526:  /* *bmi2_ashrsi3_1 */
    case 525:  /* *bmi2_lshrsi3_1 */
    case 495:  /* *bmi2_ashldi3_1 */
    case 494:  /* *bmi2_ashlsi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 564:  /* *rotrdi3_mask */
    case 563:  /* *rotldi3_mask */
    case 562:  /* *rotrsi3_mask */
    case 561:  /* *rotlsi3_mask */
    case 515:  /* *ashrdi3_mask */
    case 514:  /* *lshrdi3_mask */
    case 513:  /* *ashrsi3_mask */
    case 512:  /* *lshrsi3_mask */
    case 493:  /* *ashldi3_mask */
    case 492:  /* *ashlsi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 521:  /* x86_shrd */
    case 520:  /* x86_64_shrd */
    case 491:  /* x86_shld */
    case 490:  /* x86_64_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 717:  /* *popcountsi2_cmp_zext */
    case 487:  /* *one_cmplsi2_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 477:  /* copysigntf3_var */
    case 476:  /* copysigndf3_var */
    case 475:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 1886:  /* *avx_vperm2f128v4df_full */
    case 1885:  /* *avx_vperm2f128v8sf_full */
    case 1884:  /* *avx_vperm2f128v8si_full */
    case 1857:  /* avx2_permv2ti */
    case 1842:  /* pclmulqdq */
    case 1831:  /* xop_pcom_tfv2di3 */
    case 1830:  /* xop_pcom_tfv4si3 */
    case 1829:  /* xop_pcom_tfv8hi3 */
    case 1828:  /* xop_pcom_tfv16qi3 */
    case 1784:  /* xop_pperm */
    case 1695:  /* sse4_1_pblendvb */
    case 1694:  /* avx2_pblendvb */
    case 1691:  /* sse4_1_mpsadbw */
    case 1690:  /* avx2_mpsadbw */
    case 1687:  /* sse4_1_dppd */
    case 1686:  /* avx_dppd256 */
    case 1685:  /* sse4_1_dpps */
    case 1684:  /* avx_dpps256 */
    case 1683:  /* sse4_1_blendvpd */
    case 1682:  /* avx_blendvpd256 */
    case 1681:  /* sse4_1_blendvps */
    case 1680:  /* avx_blendvps256 */
    case 1672:  /* sse4a_extrqi */
    case 1658:  /* ssse3_palignrdi */
    case 1657:  /* ssse3_palignrti */
    case 1656:  /* avx2_palignrv2ti */
    case 1273:  /* *fma_fmaddsub_v2df */
    case 1272:  /* *fma_fmaddsub_v4df */
    case 1271:  /* *fma_fmaddsub_v4sf */
    case 1270:  /* *fma_fmaddsub_v8sf */
    case 1205:  /* avx_cmpv2df3 */
    case 1204:  /* avx_cmpv4df3 */
    case 1203:  /* avx_cmpv4sf3 */
    case 1202:  /* avx_cmpv8sf3 */
    case 474:  /* copysigntf3_const */
    case 473:  /* copysigndf3_const */
    case 472:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1125:  /* *absnegv2df2 */
    case 1124:  /* *absnegv4df2 */
    case 1123:  /* *absnegv4sf2 */
    case 1122:  /* *absnegv8sf2 */
    case 459:  /* *absnegtf2_sse */
    case 458:  /* *absnegxf2_i387 */
    case 457:  /* *absnegdf2_i387 */
    case 456:  /* *absnegsf2_i387 */
    case 455:  /* *absnegdf2_sse */
    case 454:  /* *absnegsf2_sse */
    case 453:  /* *absnegdf2_mixed */
    case 452:  /* *absnegsf2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 451:  /* *negsi2_cmpz_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 716:  /* *popcountdi2_cmp */
    case 715:  /* *popcountsi2_cmp */
    case 714:  /* *popcounthi2_cmp */
    case 486:  /* *one_cmpldi2_2 */
    case 485:  /* *one_cmplsi2_2 */
    case 484:  /* *one_cmplhi2_2 */
    case 483:  /* *one_cmplqi2_2 */
    case 450:  /* *negdi2_cmpz */
    case 449:  /* *negsi2_cmpz */
    case 448:  /* *neghi2_cmpz */
    case 447:  /* *negqi2_cmpz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 446:  /* *negsi2_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 419:  /* *xorsi_2_zext_imm */
    case 418:  /* *iorsi_2_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 730:  /* *tls_local_dynamic_base_64 */
    case 673:  /* *bmi_andn_di */
    case 672:  /* *bmi_andn_si */
    case 639:  /* *call_value_rex64_ms_sysv */
    case 405:  /* *xorsi_1_zext_imm */
    case 404:  /* *iorsi_1_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 439:  /* *xorqi_cc_ext_1 */
    case 438:  /* *xorqi_cc_ext_1_rex64 */
    case 390:  /* *andqi_ext_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 421:  /* *xorqi_2_slp */
    case 420:  /* *iorqi_2_slp */
    case 388:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 375:  /* *testqi_ext_3 */
    case 374:  /* *testqi_ext_3_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 373:  /* *testqi_ext_2 */
    case 372:  /* *testqi_ext_1 */
    case 371:  /* *testqi_ext_1_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 370:  /* *testqi_ext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 364:  /* udivmodhiqi3 */
    case 355:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 363:  /* *udivmoddi4_noext */
    case 362:  /* *udivmodsi4_noext */
    case 361:  /* *udivmodhi4_noext */
    case 354:  /* *divmoddi4_noext */
    case 353:  /* *divmodsi4_noext */
    case 352:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 360:  /* *udivmoddi4 */
    case 359:  /* *udivmodsi4 */
    case 358:  /* *udivmodhi4 */
    case 357:  /* udivmoddi4_1 */
    case 356:  /* udivmodsi4_1 */
    case 351:  /* *divmoddi4 */
    case 350:  /* *divmodsi4 */
    case 349:  /* *divmodhi4 */
    case 348:  /* divmoddi4_1 */
    case 347:  /* divmodsi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 346:  /* *umulsi3_highpart_zext */
    case 345:  /* *smulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 344:  /* *umulsi3_highpart_1 */
    case 343:  /* *smulsi3_highpart_1 */
    case 342:  /* *umuldi3_highpart_1 */
    case 341:  /* *smuldi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 340:  /* *umulqihi3_1 */
    case 339:  /* *mulqihi3_1 */
    case 338:  /* *mulditi3_1 */
    case 337:  /* *mulsidi3_1 */
    case 336:  /* *umulditi3_1 */
    case 335:  /* *umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 334:  /* *bmi2_umulsidi3_1 */
    case 333:  /* *bmi2_umulditi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 327:  /* *subsi3_zext_cc_overflow */
    case 326:  /* *addsi3_zext_cc_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 325:  /* *subdi3_cc_overflow */
    case 324:  /* *adddi3_cc_overflow */
    case 323:  /* *subsi3_cc_overflow */
    case 322:  /* *addsi3_cc_overflow */
    case 321:  /* *subhi3_cc_overflow */
    case 320:  /* *addhi3_cc_overflow */
    case 319:  /* *subqi3_cc_overflow */
    case 318:  /* *addqi3_cc_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 317:  /* *subdi3_cconly_overflow */
    case 316:  /* *subsi3_cconly_overflow */
    case 315:  /* *subhi3_cconly_overflow */
    case 314:  /* *subqi3_cconly_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 313:  /* *adddi3_cconly_overflow */
    case 312:  /* *addsi3_cconly_overflow */
    case 311:  /* *addhi3_cconly_overflow */
    case 310:  /* *addqi3_cconly_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 309:  /* *subsi3_carry_zext */
    case 308:  /* *addsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 307:  /* *subdi3_carry */
    case 306:  /* *adddi3_carry */
    case 305:  /* *subsi3_carry */
    case 304:  /* *addsi3_carry */
    case 303:  /* *subhi3_carry */
    case 302:  /* *addhi3_carry */
    case 301:  /* *subqi3_carry */
    case 300:  /* *addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 299:  /* *subsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 298:  /* *subdi_3 */
    case 297:  /* *subsi_3 */
    case 296:  /* *subhi_3 */
    case 295:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 279:  /* *lea_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1748:  /* xop_pmacssdd */
    case 1747:  /* xop_pmacsdd */
    case 1746:  /* xop_pmacssww */
    case 1745:  /* xop_pmacsww */
    case 281:  /* *lea_general_4 */
    case 280:  /* *lea_general_4 */
    case 278:  /* *lea_general_2 */
    case 277:  /* *lea_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 437:  /* *xorqi_ext_2 */
    case 436:  /* *iorqi_ext_2 */
    case 435:  /* *xorqi_ext_1 */
    case 434:  /* *iorqi_ext_1 */
    case 433:  /* *xorqi_ext_1_rex64 */
    case 432:  /* *iorqi_ext_1_rex64 */
    case 393:  /* *andqi_ext_2 */
    case 392:  /* *andqi_ext_1 */
    case 391:  /* *andqi_ext_1_rex64 */
    case 276:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 431:  /* *xorqi_ext_0 */
    case 430:  /* *iorqi_ext_0 */
    case 389:  /* andqi_ext_0 */
    case 275:  /* addqi_ext_1 */
    case 274:  /* *addqi_ext_1_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 560:  /* *ashrdi3_cconly */
    case 559:  /* *lshrdi3_cconly */
    case 558:  /* *ashrsi3_cconly */
    case 557:  /* *lshrsi3_cconly */
    case 556:  /* *ashrhi3_cconly */
    case 555:  /* *lshrhi3_cconly */
    case 554:  /* *ashrqi3_cconly */
    case 553:  /* *lshrqi3_cconly */
    case 511:  /* *ashldi3_cconly */
    case 510:  /* *ashlsi3_cconly */
    case 509:  /* *ashlhi3_cconly */
    case 508:  /* *ashlqi3_cconly */
    case 429:  /* *xordi_3 */
    case 428:  /* *iordi_3 */
    case 427:  /* *xorsi_3 */
    case 426:  /* *iorsi_3 */
    case 425:  /* *xorhi_3 */
    case 424:  /* *iorhi_3 */
    case 423:  /* *xorqi_3 */
    case 422:  /* *iorqi_3 */
    case 273:  /* *adddi_5 */
    case 272:  /* *addsi_5 */
    case 271:  /* *addhi_5 */
    case 270:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 265:  /* *addsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 264:  /* *adddi_3 */
    case 263:  /* *addsi_3 */
    case 262:  /* *addhi_3 */
    case 261:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 552:  /* *ashrsi3_cmp_zext */
    case 551:  /* *lshrsi3_cmp_zext */
    case 507:  /* *ashlsi3_cmp_zext */
    case 417:  /* *xorsi_2_zext */
    case 416:  /* *iorsi_2_zext */
    case 387:  /* *andsi_2_zext */
    case 294:  /* *subsi_2_zext */
    case 260:  /* *addsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 550:  /* *ashrdi3_cmp */
    case 549:  /* *lshrdi3_cmp */
    case 548:  /* *ashrsi3_cmp */
    case 547:  /* *lshrsi3_cmp */
    case 546:  /* *ashrhi3_cmp */
    case 545:  /* *lshrhi3_cmp */
    case 544:  /* *ashrqi3_cmp */
    case 543:  /* *lshrqi3_cmp */
    case 506:  /* *ashldi3_cmp */
    case 505:  /* *ashlsi3_cmp */
    case 504:  /* *ashlhi3_cmp */
    case 503:  /* *ashlqi3_cmp */
    case 415:  /* *xordi_2 */
    case 414:  /* *iordi_2 */
    case 413:  /* *xorsi_2 */
    case 412:  /* *iorsi_2 */
    case 411:  /* *xorhi_2 */
    case 410:  /* *iorhi_2 */
    case 409:  /* *xorqi_2 */
    case 408:  /* *iorqi_2 */
    case 386:  /* *andsi_2 */
    case 385:  /* *andhi_2 */
    case 384:  /* *andqi_2 */
    case 383:  /* *andqi_2_maybe_si */
    case 382:  /* *anddi_2 */
    case 293:  /* *subdi_2 */
    case 292:  /* *subsi_2 */
    case 291:  /* *subhi_2 */
    case 290:  /* *subqi_2 */
    case 259:  /* *adddi_2 */
    case 258:  /* *addsi_2 */
    case 257:  /* *addhi_2 */
    case 256:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 583:  /* *rotrqi3_1_slp */
    case 582:  /* *rotlqi3_1_slp */
    case 542:  /* *ashrqi3_1_slp */
    case 541:  /* *lshrqi3_1_slp */
    case 502:  /* *ashlqi3_1_slp */
    case 407:  /* *xorqi_1_slp */
    case 406:  /* *iorqi_1_slp */
    case 381:  /* *andqi_1_slp */
    case 289:  /* *subqi_1_slp */
    case 255:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 577:  /* *rotrsi3_1_zext */
    case 576:  /* *rotlsi3_1_zext */
    case 536:  /* *ashrsi3_1_zext */
    case 535:  /* *lshrsi3_1_zext */
    case 524:  /* *ashrsi3_cvt_zext */
    case 499:  /* *ashlsi3_1_zext */
    case 403:  /* *xorsi_1_zext */
    case 402:  /* *iorsi_1_zext */
    case 378:  /* *andsi_1_zext */
    case 330:  /* *mulsi3_1_zext */
    case 288:  /* *subsi_1_zext */
    case 252:  /* addsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 249:  /* addqi3_cc */
    case 248:  /* *adddi3_cc */
    case 247:  /* *addsi3_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 920:  /* pro_epilogue_adjust_stack_di_sub */
    case 919:  /* pro_epilogue_adjust_stack_si_sub */
    case 918:  /* pro_epilogue_adjust_stack_di_add */
    case 917:  /* pro_epilogue_adjust_stack_si_add */
    case 581:  /* *rotrhi3_1 */
    case 580:  /* *rotlhi3_1 */
    case 579:  /* *rotrqi3_1 */
    case 578:  /* *rotlqi3_1 */
    case 574:  /* *rotrdi3_1 */
    case 573:  /* *rotldi3_1 */
    case 572:  /* *rotrsi3_1 */
    case 571:  /* *rotlsi3_1 */
    case 540:  /* *ashrhi3_1 */
    case 539:  /* *lshrhi3_1 */
    case 538:  /* *ashrqi3_1 */
    case 537:  /* *lshrqi3_1 */
    case 532:  /* *ashrdi3_1 */
    case 531:  /* *lshrdi3_1 */
    case 530:  /* *ashrsi3_1 */
    case 529:  /* *lshrsi3_1 */
    case 523:  /* ashrsi3_cvt */
    case 522:  /* ashrdi3_cvt */
    case 519:  /* *ashrti3_doubleword */
    case 518:  /* *lshrti3_doubleword */
    case 517:  /* *ashrdi3_doubleword */
    case 516:  /* *lshrdi3_doubleword */
    case 501:  /* *ashlqi3_1 */
    case 500:  /* *ashlhi3_1 */
    case 497:  /* *ashldi3_1 */
    case 496:  /* *ashlsi3_1 */
    case 489:  /* *ashlti3_doubleword */
    case 488:  /* *ashldi3_doubleword */
    case 401:  /* *xorqi_1 */
    case 400:  /* *iorqi_1 */
    case 399:  /* *xordi_1 */
    case 398:  /* *iordi_1 */
    case 397:  /* *xorsi_1 */
    case 396:  /* *iorsi_1 */
    case 395:  /* *xorhi_1 */
    case 394:  /* *iorhi_1 */
    case 380:  /* *andqi_1 */
    case 379:  /* *andhi_1 */
    case 377:  /* *andsi_1 */
    case 376:  /* *anddi_1 */
    case 332:  /* *mulqi3_1 */
    case 331:  /* *mulhi3_1 */
    case 329:  /* *muldi3_1 */
    case 328:  /* *mulsi3_1 */
    case 287:  /* *subdi_1 */
    case 286:  /* *subsi_1 */
    case 285:  /* *subhi_1 */
    case 284:  /* *subqi_1 */
    case 283:  /* *subti3_doubleword */
    case 282:  /* *subdi3_doubleword */
    case 254:  /* *addqi_1 */
    case 253:  /* *addhi_1 */
    case 251:  /* *adddi_1 */
    case 250:  /* *addsi_1 */
    case 246:  /* *addti3_doubleword */
    case 245:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 239:  /* floatdixf2_i387_with_xmm */
    case 238:  /* floatdidf2_i387_with_xmm */
    case 237:  /* floatdisf2_i387_with_xmm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 171:  /* fix_truncdi_i387_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 175:  /* fix_truncsi_i387_with_temp */
    case 174:  /* fix_trunchi_i387_with_temp */
    case 170:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 242:  /* *floatunssixf2_1 */
    case 241:  /* *floatunssidf2_1 */
    case 240:  /* *floatunssisf2_1 */
    case 173:  /* fix_truncsi_i387 */
    case 172:  /* fix_trunchi_i387 */
    case 166:  /* fix_truncdi_i387_fisttp_with_temp */
    case 165:  /* fix_truncsi_i387_fisttp_with_temp */
    case 164:  /* fix_trunchi_i387_fisttp_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 153:  /* *fixuns_truncdf_1 */
    case 152:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1099:  /* movdi_to_sse */
    case 663:  /* ffssi2_no_cmove */
    case 230:  /* *floatdixf2_i387_with_temp */
    case 229:  /* *floatdidf2_i387_with_temp */
    case 228:  /* *floatdisf2_i387_with_temp */
    case 227:  /* *floatsixf2_i387_with_temp */
    case 226:  /* *floatsidf2_i387_with_temp */
    case 225:  /* *floatsisf2_i387_with_temp */
    case 216:  /* *floatdidf2_sse_with_temp */
    case 215:  /* *floatdisf2_sse_with_temp */
    case 214:  /* *floatsidf2_sse_with_temp */
    case 213:  /* *floatsisf2_sse_with_temp */
    case 210:  /* *floatsidf2_vector_sse_with_temp */
    case 209:  /* *floatsisf2_vector_sse_with_temp */
    case 200:  /* *floatdidf2_mixed_with_temp */
    case 199:  /* *floatdisf2_mixed_with_temp */
    case 198:  /* *floatsidf2_mixed_with_temp */
    case 197:  /* *floatsisf2_mixed_with_temp */
    case 194:  /* *floatsidf2_vector_mixed_with_temp */
    case 193:  /* *floatsisf2_vector_mixed_with_temp */
    case 183:  /* *floathixf2_i387_with_temp */
    case 182:  /* *floathidf2_i387_with_temp */
    case 181:  /* *floathisf2_i387_with_temp */
    case 163:  /* fix_truncdi_i387_fisttp */
    case 162:  /* fix_truncsi_i387_fisttp */
    case 161:  /* fix_trunchi_i387_fisttp */
    case 147:  /* *truncxfdf2_mixed */
    case 146:  /* *truncxfsf2_mixed */
    case 144:  /* *truncdfsf_i387 */
    case 143:  /* *truncdfsf_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 127:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 898:  /* *x86_movdicc_0_m1_neg */
    case 897:  /* *x86_movsicc_0_m1_neg */
    case 896:  /* *x86_movdicc_0_m1_se */
    case 895:  /* *x86_movsicc_0_m1_se */
    case 894:  /* *x86_movdicc_0_m1 */
    case 893:  /* *x86_movsicc_0_m1 */
    case 713:  /* popcountdi2 */
    case 712:  /* popcountsi2 */
    case 711:  /* popcounthi2 */
    case 671:  /* clzdi2_lzcnt */
    case 670:  /* clzsi2_lzcnt */
    case 669:  /* clzhi2_lzcnt */
    case 668:  /* ctzdi2 */
    case 667:  /* ctzsi2 */
    case 666:  /* ctzhi2 */
    case 445:  /* *negdi2_1 */
    case 444:  /* *negsi2_1 */
    case 443:  /* *neghi2_1 */
    case 442:  /* *negqi2_1 */
    case 441:  /* *negti2_doubleword */
    case 440:  /* *negdi2_doubleword */
    case 169:  /* *fix_truncdi_i387_1 */
    case 168:  /* *fix_truncsi_i387_1 */
    case 167:  /* *fix_trunchi_i387_1 */
    case 123:  /* *zero_extendqisi2_movzbl_and */
    case 122:  /* *zero_extendqihi2_movzbl_and */
    case 121:  /* *zero_extendqisi2_and */
    case 120:  /* *zero_extendqihi2_and */
    case 118:  /* zero_extendhisi2_and */
    case 115:  /* zero_extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 96:  /* *movqi_insv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1858:  /* avx2_vec_dupv4df */
    case 1852:  /* avx2_pbroadcastv2di */
    case 1851:  /* avx2_pbroadcastv4di */
    case 1850:  /* avx2_pbroadcastv4si */
    case 1849:  /* avx2_pbroadcastv8si */
    case 1848:  /* avx2_pbroadcastv8hi */
    case 1847:  /* avx2_pbroadcastv16hi */
    case 1846:  /* avx2_pbroadcastv16qi */
    case 1845:  /* avx2_pbroadcastv32qi */
    case 1724:  /* sse4_1_zero_extendv2siv2di2 */
    case 1723:  /* sse4_1_sign_extendv2siv2di2 */
    case 1720:  /* sse4_1_zero_extendv2hiv2di2 */
    case 1719:  /* sse4_1_sign_extendv2hiv2di2 */
    case 1718:  /* avx2_zero_extendv4hiv4di2 */
    case 1717:  /* avx2_sign_extendv4hiv4di2 */
    case 1716:  /* sse4_1_zero_extendv2qiv2di2 */
    case 1715:  /* sse4_1_sign_extendv2qiv2di2 */
    case 1714:  /* avx2_zero_extendv4qiv4di2 */
    case 1713:  /* avx2_sign_extendv4qiv4di2 */
    case 1712:  /* sse4_1_zero_extendv4hiv4si2 */
    case 1711:  /* sse4_1_sign_extendv4hiv4si2 */
    case 1708:  /* sse4_1_zero_extendv4qiv4si2 */
    case 1707:  /* sse4_1_sign_extendv4qiv4si2 */
    case 1706:  /* avx2_zero_extendv8qiv8si2 */
    case 1705:  /* avx2_sign_extendv8qiv8si2 */
    case 1704:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 1703:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 1357:  /* avx2_vec_dupv4sf */
    case 1356:  /* avx2_vec_dupv8sf */
    case 1337:  /* sse2_cvtps2pd */
    case 1336:  /* *avx_cvtps2pd256_2 */
    case 1324:  /* sse2_cvtdq2pd */
    case 1323:  /* avx_cvtdq2pd256_2 */
    case 1321:  /* sse2_cvttsd2siq */
    case 1320:  /* sse2_cvttsd2si */
    case 1304:  /* sse_cvttss2siq */
    case 1303:  /* sse_cvttss2si */
    case 1296:  /* sse_cvttps2pi */
    case 1098:  /* sse2_movq128 */
    case 1071:  /* *vec_dupv4hi */
    case 786:  /* sqrt_extenddfxf2_i387 */
    case 785:  /* sqrt_extendsfxf2_i387 */
    case 482:  /* *one_cmplsi2_1_zext */
    case 471:  /* *negextenddfxf2 */
    case 470:  /* *absextenddfxf2 */
    case 469:  /* *negextendsfxf2 */
    case 468:  /* *absextendsfxf2 */
    case 467:  /* *negextendsfdf2 */
    case 466:  /* *absextendsfdf2 */
    case 133:  /* *extendqisi2_zext */
    case 131:  /* *extendhisi2_zext */
    case 92:  /* *movqi_extzv_2 */
    case 91:  /* *movqi_extzv_2_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 621:  /* *call_rex64_ms_sysv */
    case 84:  /* *movstricthi_xor */
    case 83:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 113:  /* *swapdf */
    case 112:  /* *swapsf */
    case 111:  /* swapxf */
    case 80:  /* *swaphi_2 */
    case 79:  /* *swapqi_2 */
    case 78:  /* *swaphi_1 */
    case 77:  /* *swapqi_1 */
    case 76:  /* *swapdi */
    case 75:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 1862:  /* vec_dupv4df */
    case 1861:  /* vec_dupv4di */
    case 1860:  /* vec_dupv8sf */
    case 1859:  /* vec_dupv8si */
    case 1722:  /* avx2_zero_extendv4siv4di2 */
    case 1721:  /* avx2_sign_extendv4siv4di2 */
    case 1710:  /* avx2_zero_extendv8hiv8si2 */
    case 1709:  /* avx2_sign_extendv8hiv8si2 */
    case 1702:  /* avx2_zero_extendv16qiv16hi2 */
    case 1701:  /* avx2_sign_extendv16qiv16hi2 */
    case 1667:  /* absv2si2 */
    case 1666:  /* absv4hi2 */
    case 1665:  /* absv8qi2 */
    case 1664:  /* absv4si2 */
    case 1663:  /* absv8si2 */
    case 1662:  /* absv8hi2 */
    case 1661:  /* absv16hi2 */
    case 1660:  /* absv16qi2 */
    case 1659:  /* absv32qi2 */
    case 1593:  /* *vec_dupv2di */
    case 1592:  /* *vec_dupv4si */
    case 1591:  /* *vec_extractv2di_1 */
    case 1590:  /* *vec_extractv2di_1_rex64 */
    case 1589:  /* *sse2_storeq */
    case 1588:  /* *sse2_storeq_rex64 */
    case 1586:  /* sse2_stored */
    case 1399:  /* vec_dupv2df */
    case 1395:  /* *vec_extractv2df_0_sse */
    case 1394:  /* sse2_storelpd */
    case 1393:  /* *vec_extractv2df_1_sse */
    case 1392:  /* sse2_storehpd */
    case 1380:  /* vec_extract_hi_v32qi */
    case 1379:  /* vec_extract_lo_v32qi */
    case 1378:  /* vec_extract_hi_v16hi */
    case 1377:  /* vec_extract_lo_v16hi */
    case 1376:  /* vec_extract_hi_v8sf */
    case 1375:  /* vec_extract_hi_v8si */
    case 1374:  /* vec_extract_lo_v8sf */
    case 1373:  /* vec_extract_lo_v8si */
    case 1372:  /* vec_extract_hi_v4df */
    case 1371:  /* vec_extract_hi_v4di */
    case 1370:  /* vec_extract_lo_v4df */
    case 1369:  /* vec_extract_lo_v4di */
    case 1366:  /* *vec_extractv4sf_0 */
    case 1358:  /* vec_dupv4sf */
    case 1353:  /* sse_storelps */
    case 1351:  /* sse_storehps */
    case 1335:  /* avx_cvtps2pd256 */
    case 1333:  /* avx_cvtpd2ps256 */
    case 1328:  /* fix_truncv4dfv4si2 */
    case 1322:  /* floatv4siv4df2 */
    case 1313:  /* sse2_cvttpd2pi */
    case 1311:  /* sse2_cvtpi2pd */
    case 1310:  /* fix_truncv4sfv4si2 */
    case 1309:  /* fix_truncv8sfv8si2 */
    case 1306:  /* floatv4siv4sf2 */
    case 1305:  /* floatv8siv8sf2 */
    case 1156:  /* sse2_sqrtv2df2 */
    case 1155:  /* avx_sqrtv4df2 */
    case 1154:  /* sse_sqrtv4sf2 */
    case 1153:  /* avx_sqrtv8sf2 */
    case 1075:  /* *vec_extractv2si_1 */
    case 1074:  /* *vec_extractv2si_0 */
    case 1072:  /* *vec_dupv2si */
    case 1070:  /* mmx_pswapdv2si2 */
    case 1005:  /* *vec_extractv2sf_1 */
    case 1004:  /* *vec_extractv2sf_0 */
    case 1002:  /* *vec_dupv2sf */
    case 1001:  /* mmx_pswapdv2sf2 */
    case 1000:  /* mmx_floatv2si2 */
    case 997:  /* mmx_pf2id */
    case 789:  /* *sqrtdf2_sse */
    case 788:  /* *sqrtsf2_sse */
    case 784:  /* sqrtxf2 */
    case 721:  /* *bswapdi2_1 */
    case 720:  /* *bswapsi2_1 */
    case 719:  /* *bswapdi2_movbe */
    case 718:  /* *bswapsi2_movbe */
    case 481:  /* *one_cmplqi2_1 */
    case 480:  /* *one_cmpldi2_1 */
    case 479:  /* *one_cmplsi2_1 */
    case 478:  /* *one_cmplhi2_1 */
    case 465:  /* *negxf2_1 */
    case 464:  /* *absxf2_1 */
    case 463:  /* *negdf2_1 */
    case 462:  /* *absdf2_1 */
    case 461:  /* *negsf2_1 */
    case 460:  /* *abssf2_1 */
    case 236:  /* *floatdixf2_i387 */
    case 235:  /* *floatdidf2_i387 */
    case 234:  /* *floatdisf2_i387 */
    case 233:  /* *floatsixf2_i387 */
    case 232:  /* *floatsidf2_i387 */
    case 231:  /* *floatsisf2_i387 */
    case 224:  /* *floatdidf2_sse_nointerunit */
    case 223:  /* *floatdisf2_sse_nointerunit */
    case 222:  /* *floatsidf2_sse_nointerunit */
    case 221:  /* *floatsisf2_sse_nointerunit */
    case 220:  /* *floatdidf2_sse_interunit */
    case 219:  /* *floatdisf2_sse_interunit */
    case 218:  /* *floatsidf2_sse_interunit */
    case 217:  /* *floatsisf2_sse_interunit */
    case 212:  /* *floatsidf2_vector_sse */
    case 211:  /* *floatsisf2_vector_sse */
    case 208:  /* *floatdidf2_mixed_nointerunit */
    case 207:  /* *floatdisf2_mixed_nointerunit */
    case 206:  /* *floatsidf2_mixed_nointerunit */
    case 205:  /* *floatsisf2_mixed_nointerunit */
    case 204:  /* *floatdidf2_mixed_interunit */
    case 203:  /* *floatdisf2_mixed_interunit */
    case 202:  /* *floatsidf2_mixed_interunit */
    case 201:  /* *floatsisf2_mixed_interunit */
    case 196:  /* *floatsidf2_vector_mixed */
    case 195:  /* *floatsisf2_vector_mixed */
    case 192:  /* *floatdixf2_1 */
    case 191:  /* *floatdidf2_1 */
    case 190:  /* *floatdisf2_1 */
    case 189:  /* *floatsixf2_1 */
    case 188:  /* *floatsidf2_1 */
    case 187:  /* *floatsisf2_1 */
    case 186:  /* *floathixf2_i387 */
    case 185:  /* *floathidf2_i387 */
    case 184:  /* *floathisf2_i387 */
    case 180:  /* *floathixf2_1 */
    case 179:  /* *floathidf2_1 */
    case 178:  /* *floathisf2_1 */
    case 160:  /* fix_truncdi_fisttp_i387_1 */
    case 159:  /* fix_truncsi_fisttp_i387_1 */
    case 158:  /* fix_trunchi_fisttp_i387_1 */
    case 157:  /* fix_truncdfsi_sse */
    case 156:  /* fix_truncsfsi_sse */
    case 155:  /* fix_truncdfdi_sse */
    case 154:  /* fix_truncsfdi_sse */
    case 151:  /* *truncxfdf2_i387 */
    case 150:  /* *truncxfsf2_i387 */
    case 149:  /* truncxfdf2_i387_noop */
    case 148:  /* truncxfsf2_i387_noop */
    case 145:  /* *truncdfsf2_i387_1 */
    case 142:  /* *truncdfsf_fast_i387 */
    case 141:  /* *truncdfsf_fast_sse */
    case 140:  /* *truncdfsf_fast_mixed */
    case 139:  /* *extenddfxf2_i387 */
    case 138:  /* *extendsfxf2_i387 */
    case 137:  /* *extendsfdf2_i387 */
    case 136:  /* *extendsfdf2_sse */
    case 135:  /* *extendsfdf2_mixed */
    case 134:  /* extendqihi2 */
    case 132:  /* extendqisi2 */
    case 130:  /* extendhisi2 */
    case 129:  /* extendhidi2 */
    case 128:  /* extendqidi2 */
    case 126:  /* *extendsidi2_rex64 */
    case 125:  /* *zero_extendqisi2_movzbl */
    case 124:  /* *zero_extendqihi2_movzbl */
    case 119:  /* *zero_extendhisi2_movzwl */
    case 117:  /* zero_extendhidi2 */
    case 116:  /* zero_extendqidi2 */
    case 114:  /* *zero_extendsidi2_rex64 */
    case 90:  /* *movdi_extzv_1 */
    case 89:  /* *movsi_extzv_1 */
    case 88:  /* *movqi_extv_1 */
    case 87:  /* *movqi_extv_1_rex64 */
    case 86:  /* *movsi_extv_1 */
    case 85:  /* *movhi_extv_1 */
    case 74:  /* *movabsdi_2 */
    case 73:  /* *movabssi_2 */
    case 72:  /* *movabshi_2 */
    case 71:  /* *movabsqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 625:  /* *sibcall */
    case 624:  /* *sibcall */
    case 619:  /* *call */
    case 618:  /* *call */
    case 593:  /* *setcc_qi_slp */
    case 95:  /* *movsi_insv_1 */
    case 94:  /* *movdi_insv_1_rex64 */
    case 93:  /* *movsi_insv_1_rex64 */
    case 82:  /* *movstricthi_1 */
    case 81:  /* *movstrictqi_1 */
    case 70:  /* *movabsdi_1 */
    case 69:  /* *movabssi_1 */
    case 68:  /* *movabshi_1 */
    case 67:  /* *movabsqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 590:  /* *setcc_si_1_and */
    case 58:  /* *movdi_or */
    case 57:  /* *movsi_or */
    case 56:  /* *movdi_xor */
    case 55:  /* *movsi_xor */
    case 54:  /* *popdi1_epilogue */
    case 53:  /* *popsi1_epilogue */
    case 50:  /* *pushdi2_prologue */
    case 49:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1097:  /* *movv2df_internal */
    case 1096:  /* *movv4df_internal */
    case 1095:  /* *movv4sf_internal */
    case 1094:  /* *movv8sf_internal */
    case 1093:  /* *movv1ti_internal */
    case 1092:  /* *movv2ti_internal */
    case 1091:  /* *movv2di_internal */
    case 1090:  /* *movv4di_internal */
    case 1089:  /* *movv4si_internal */
    case 1088:  /* *movv8si_internal */
    case 1087:  /* *movv8hi_internal */
    case 1086:  /* *movv16hi_internal */
    case 1085:  /* *movv16qi_internal */
    case 1084:  /* *movv32qi_internal */
    case 977:  /* *movv2sf_internal */
    case 976:  /* *movv2sf_internal_rex64 */
    case 975:  /* *movv1di_internal */
    case 974:  /* *movv2si_internal */
    case 973:  /* *movv4hi_internal */
    case 972:  /* *movv8qi_internal */
    case 971:  /* *movv1di_internal_rex64 */
    case 970:  /* *movv2si_internal_rex64 */
    case 969:  /* *movv4hi_internal_rex64 */
    case 968:  /* *movv8qi_internal_rex64 */
    case 929:  /* *prefetch_3dnow */
    case 592:  /* *setcc_qi */
    case 591:  /* *setcc_si_1_movzbl */
    case 589:  /* *setcc_di_1 */
    case 244:  /* *leadi */
    case 243:  /* *leasi */
    case 110:  /* *movsf_internal */
    case 109:  /* *movdf_internal */
    case 108:  /* *movdf_internal_rex64 */
    case 107:  /* *movxf_internal */
    case 106:  /* *movxf_internal_rex64 */
    case 105:  /* *movtf_internal_sse2 */
    case 104:  /* *movtf_internal_rex64 */
    case 103:  /* *pushsf */
    case 102:  /* *pushsf_rex64 */
    case 101:  /* *pushdf */
    case 100:  /* *pushdf_rex64 */
    case 99:  /* *pushxf_nointeger */
    case 98:  /* *pushxf */
    case 97:  /* *pushtf */
    case 66:  /* *movqi_internal */
    case 65:  /* *movhi_internal */
    case 64:  /* *movsi_internal */
    case 63:  /* *movdi_internal */
    case 62:  /* *movdi_internal_rex64 */
    case 61:  /* *movti_internal_sse */
    case 60:  /* *movti_internal_rex64 */
    case 59:  /* *movoi_internal_avx */
    case 52:  /* *popdi1 */
    case 51:  /* *popsi1 */
    case 48:  /* *pushhi2 */
    case 47:  /* *pushqi2 */
    case 46:  /* *pushsi2_rex64 */
    case 45:  /* *pushhi2_rex64 */
    case 44:  /* *pushqi2_rex64 */
    case 43:  /* *pushsi2 */
    case 42:  /* *pushdi2_rex64 */
    case 41:  /* *pushti2 */
    case 40:  /* *pushdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 177:  /* x86_fldcw_1 */
    case 33:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1615:  /* sse_stmxcsr */
    case 959:  /* rdgsbasedi */
    case 958:  /* rdgsbasesi */
    case 957:  /* rdfsbasedi */
    case 956:  /* rdfsbasesi */
    case 951:  /* lwp_slwpcbdi */
    case 950:  /* lwp_slwpcbsi */
    case 944:  /* *rdtsc */
    case 735:  /* *load_tp_di */
    case 734:  /* *load_tp_si */
    case 733:  /* *load_tp_x32_zext */
    case 732:  /* *load_tp_x32 */
    case 656:  /* set_got_rex64 */
    case 176:  /* x86_fnstcw_1 */
    case 32:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 31:  /* *cmpfp_si_cc */
    case 30:  /* *cmpfp_hi_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 29:  /* *cmpfp_si */
    case 28:  /* *cmpfp_hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 269:  /* *addsi_4 */
    case 268:  /* *addhi_4 */
    case 267:  /* *addqi_4 */
    case 266:  /* *adddi_4 */
    case 27:  /* *cmpfp_u_cc */
    case 25:  /* *cmpfp_df_cc */
    case 24:  /* *cmpfp_sf_cc */
    case 21:  /* *cmpfp_xf_cc */
    case 19:  /* *cmpfp_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 26:  /* *cmpfp_u */
    case 23:  /* *cmpfp_df */
    case 22:  /* *cmpfp_sf */
    case 20:  /* *cmpfp_xf */
    case 18:  /* *cmpfp_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 17:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 16:  /* *cmpqi_ext_3_insn_rex64 */
    case 15:  /* *cmpqi_ext_3_insn */
    case 14:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 13:  /* *cmpqi_ext_1_rex64 */
    case 12:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 369:  /* *testsi_1 */
    case 368:  /* *testhi_1 */
    case 367:  /* *testqi_1 */
    case 366:  /* *testqi_1_maybe_si */
    case 365:  /* *testdi_1 */
    case 11:  /* *cmpdi_minus_1 */
    case 10:  /* *cmpsi_minus_1 */
    case 9:  /* *cmphi_minus_1 */
    case 8:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 39:  /* *cmpfp_iu_387 */
    case 38:  /* *cmpfp_iu_sse */
    case 37:  /* *cmpfp_iu_mixed */
    case 36:  /* *cmpfp_i_i387 */
    case 35:  /* *cmpfp_i_sse */
    case 34:  /* *cmpfp_i_mixed */
    case 7:  /* *cmpdi_1 */
    case 6:  /* *cmpsi_1 */
    case 5:  /* *cmphi_1 */
    case 4:  /* *cmpqi_1 */
    case 3:  /* *cmpdi_ccno_1 */
    case 2:  /* *cmpsi_ccno_1 */
    case 1:  /* *cmphi_ccno_1 */
    case 0:  /* *cmpqi_ccno_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
