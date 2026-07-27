// __ZN13codexmate_lib4core5relay15config_takeover7restore28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100900710 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::config_takeover::restore::_$u7b$$u7b$closure$u7d$$u7d$::h4dcb7008cb6c9996(
        __int64 a1,
        __int64 a2,
        void *a3,
        size_t a4,
        _QWORD *a5,
        signed __int64 *a6)
{
  signed __int64 *v10; // rdi
  _BYTE *v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  size_t v14; // r15
  __int64 v15; // rbx
  __int64 v16; // r14
  signed __int64 *v17; // r14
  signed __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 v21; // r12
  unsigned __int64 v22; // rdx
  signed __int64 v23; // rbx
  signed __int64 *v24; // r13
  int v25; // r14d
  signed __int64 *v26; // r14
  signed __int64 v27; // rbx
  signed __int64 v28; // rax
  __int64 v29; // rcx
  size_t v30; // r15
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r14
  _QWORD *v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // [rsp+8h] [rbp-88h]
  __int64 v37; // [rsp+10h] [rbp-80h]
  void *__src; // [rsp+18h] [rbp-78h]
  signed __int64 v39; // [rsp+20h] [rbp-70h] BYREF
  void *__s1; // [rsp+28h] [rbp-68h]
  size_t __n; // [rsp+30h] [rbp-60h]
  _QWORD *v42; // [rsp+38h] [rbp-58h]
  signed __int64 *v43; // [rsp+40h] [rbp-50h]
  size_t v44; // [rsp+48h] [rbp-48h]
  __int64 v45; // [rsp+50h] [rbp-40h]
  void *__s2; // [rsp+58h] [rbp-38h]
  signed __int64 v47; // [rsp+60h] [rbp-30h]

  v43 = a6; /*0x100900721*/
  v42 = a5; /*0x100900725*/
  v10 = &v39; /*0x100900740*/
  v11 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a3, a4); /*0x100900744*/
  codexmate_lib::core::relay::config_takeover::top_level_assignment_key::h031d1c7d19bea489(&v39, v11, v12); /*0x100900747*/
  v47 = v39; /*0x100900750*/
  result = -v39; /*0x100900754*/
  if ( __OFSUB__(-v39, 1) ) /*0x100900757*/
    return result; /*0x100900757*/
  __src = a3; /*0x10090075d*/
  v44 = a4; /*0x100900761*/
  __s2 = __s1; /*0x100900769*/
  v14 = __n; /*0x10090076d*/
  if ( !a2 ) /*0x100900774*/
  {
LABEL_10:
    v20 = v42[1]; /*0x1009007f6*/
    v45 = v42[2]; /*0x100900802*/
    if ( v45 ) /*0x100900809*/
    {
      v36 = 24 * v45; /*0x100900829*/
      v21 = 0; /*0x100900830*/
      v37 = v20; /*0x100900833*/
      do /*0x100900873*/
      {
        v10 = &v39; /*0x100900873*/
        v11 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x100900877*/
                         *(_QWORD *)(v20 + v21 + 8),
                         *(_QWORD *)(v20 + v21 + 16));
        codexmate_lib::core::relay::config_takeover::top_level_assignment_key::h031d1c7d19bea489(&v39, v11, v22); /*0x10090087a*/
        v23 = v39; /*0x10090087f*/
        if ( v39 != 0x8000000000000000LL ) /*0x100900886*/
        {
          if ( __n == v14 ) /*0x10090088c*/
          {
            v24 = (signed __int64 *)__s1; /*0x10090088e*/
            v10 = (signed __int64 *)__s1; /*0x100900892*/
            v11 = __s2; /*0x100900895*/
            v25 = memcmp(__s1, __s2, v14); /*0x1009008a1*/
            if ( v23 ) /*0x1009008a7*/
            {
              v10 = v24; /*0x1009008ae*/
              v11 = (_BYTE *)v23; /*0x1009008b1*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v23, 1); /*0x1009008b4*/
            }
            v20 = v37; /*0x100900843*/
            if ( !v25 ) /*0x100900851*/
              goto LABEL_7; /*0x100900851*/
          }
          else if ( v39 ) /*0x1009008c3*/
          {
            v10 = (signed __int64 *)__s1; /*0x1009008c5*/
            v11 = (_BYTE *)v39; /*0x1009008ce*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v39, 1); /*0x1009008d1*/
          }
        }
        v21 += 24; /*0x100900857*/
      }
      while ( v36 != v21 ); /*0x100900873*/
    }
    v26 = v43; /*0x1009008db*/
    v27 = v43[2]; /*0x1009008df*/
    if ( v27 == *v43 ) /*0x1009008e6*/
    {
      v10 = v43; /*0x1009008e8*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v43); /*0x1009008eb*/
    }
    v28 = v26[1]; /*0x1009008f0*/
    v29 = 3 * v27; /*0x1009008f4*/
    *(_QWORD *)(v28 + 8 * v29) = v47; /*0x1009008fc*/
    *(_QWORD *)(v28 + 8 * v29 + 8) = __s2; /*0x100900904*/
    *(_QWORD *)(v28 + 8 * v29 + 16) = v14; /*0x100900909*/
    v26[2] = v27 + 1; /*0x100900911*/
    v30 = v44; /*0x100900915*/
    if ( (v44 & 0x8000000000000000LL) != 0LL ) /*0x10090091c*/
    {
      v31 = 0; /*0x10090091e*/
      goto LABEL_24; /*0x10090091e*/
    }
    if ( v44 ) /*0x10090092b*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v11); /*0x10090092d*/
      v31 = 1; /*0x100900932*/
      v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v30, 1); /*0x10090093f*/
      if ( !v32 ) /*0x100900947*/
LABEL_24:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v31, v30); /*0x100900920*/
      v33 = v32; /*0x100900949*/
    }
    else
    {
      v33 = 1; /*0x10090094e*/
    }
    memcpy((void *)v33, __src, v30); /*0x10090095e*/
    v34 = v42; /*0x100900963*/
    if ( v45 == *v42 ) /*0x10090096e*/
    {
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v42); /*0x100900973*/
      v20 = v34[1]; /*0x100900978*/
    }
    v35 = v45; /*0x10090097c*/
    result = 3 * v45; /*0x100900980*/
    *(_QWORD *)(v20 + 8 * result) = v30; /*0x100900984*/
    *(_QWORD *)(v20 + 8 * result + 8) = v33; /*0x100900989*/
    *(_QWORD *)(v20 + 8 * result + 16) = v30; /*0x10090098e*/
    v34[2] = v35 + 1; /*0x100900996*/
    return result; /*0x100900996*/
  }
  v15 = 24 * a2; /*0x10090077e*/
  v16 = 0; /*0x100900782*/
  while ( 1 ) /*0x100900799*/
  {
    if ( *(_QWORD *)(a1 + v16 + 16) == v14 ) /*0x10090079e*/
    {
      v10 = *(signed __int64 **)(a1 + v16 + 8); /*0x1009007a0*/
      v11 = __s2; /*0x1009007a5*/
      if ( !memcmp(v10, __s2, v14) ) /*0x1009007ac*/
        break; /*0x1009007ac*/
    }
    v16 += 24; /*0x100900790*/
    if ( v15 == v16 ) /*0x100900797*/
      goto LABEL_10; /*0x100900797*/
  }
LABEL_7:
  v17 = v43; /*0x1009007b5*/
  v18 = v43[8]; /*0x1009007b9*/
  if ( v18 == v43[6] ) /*0x1009007c1*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v43 + 6); /*0x1009007c7*/
  result = v17[7]; /*0x1009007cc*/
  v19 = 3 * v18; /*0x1009007d0*/
  *(_QWORD *)(result + 8 * v19) = v47; /*0x1009007d8*/
  *(_QWORD *)(result + 8 * v19 + 8) = __s2; /*0x1009007e0*/
  *(_QWORD *)(result + 8 * v19 + 16) = v14; /*0x1009007e5*/
  v17[8] = v18 + 1; /*0x1009007ed*/
  return result; /*0x10090099a*/
}