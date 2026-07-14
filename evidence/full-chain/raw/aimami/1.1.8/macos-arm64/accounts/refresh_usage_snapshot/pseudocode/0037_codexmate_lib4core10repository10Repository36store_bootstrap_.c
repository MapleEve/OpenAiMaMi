// mac 1.1.8 refresh_usage_snapshot node va=0x100535150 depth=2
// codexmate_lib4core10repository10Repository36store_bootstrap_snapshot_progressive
_QWORD *__fastcall codexmate_lib::core::repository::Repository::store_bootstrap_snapshot_progressive::h8f3d36988857c4e9(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        double a4,
        double a5,
        double a6)
{
  _QWORD *v7; // rbx
  size_t v8; // rdx
  int v9; // r14d
  _UNKNOWN **v10; // rax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  size_t v15; // r14
  int v16; // r13d
  __int64 v17; // r15
  bool v18; // zf
  char v19; // bl
  double v20; // xmm0_8
  __int64 v21; // r13
  __int64 v22; // rdi
  __int64 v23; // r14
  char *v24; // r15
  size_t v25; // r12
  char **v26; // r12
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v30[115]; // [rsp+8h] [rbp-C78h] BYREF
  _BYTE v31[176]; // [rsp+3A0h] [rbp-8E0h] BYREF
  _QWORD __dst[42]; // [rsp+450h] [rbp-830h] BYREF
  _QWORD v33[82]; // [rsp+5A0h] [rbp-6E0h] BYREF
  size_t __src[115]; // [rsp+830h] [rbp-450h] BYREF
  int v35; // [rsp+BC8h] [rbp-B8h]
  __m128 v36; // [rsp+BD0h] [rbp-B0h]
  size_t v37; // [rsp+BE0h] [rbp-A0h]
  size_t v38; // [rsp+BE8h] [rbp-98h]
  size_t v39; // [rsp+BF0h] [rbp-90h]
  _QWORD *v40; // [rsp+BF8h] [rbp-88h]
  size_t v41; // [rsp+C00h] [rbp-80h]
  size_t v42; // [rsp+C08h] [rbp-78h]
  size_t v43; // [rsp+C10h] [rbp-70h]
  size_t v44; // [rsp+C18h] [rbp-68h]
  size_t v45; // [rsp+C20h] [rbp-60h]
  size_t v46; // [rsp+C28h] [rbp-58h]
  size_t v47; // [rsp+C30h] [rbp-50h]
  size_t v48; // [rsp+C38h] [rbp-48h]
  size_t v49; // [rsp+C40h] [rbp-40h]
  __int16 v50; // [rsp+C4Ch] [rbp-34h]
  char v51; // [rsp+C4Eh] [rbp-32h]
  char v52; // [rsp+C4Fh] [rbp-31h]
  void *v53; // [rsp+C50h] [rbp-30h]

  v7 = a1; /*0x10053516a*/
  v8 = *(_QWORD *)(a2 + 472); /*0x100535174*/
  v53 = *(void **)(a2 + 464); /*0x100535182*/
  v43 = v8; /*0x100535186*/
  codexmate_lib::core::bootstrap_cache::load::h642b53faa3521cbf((__int64 *)__src, v53, v8); /*0x10053518a*/
  v9 = __src[2]; /*0x10053518f*/
  if ( __src[2] != 3 /*0x100535341*/
    && LODWORD(__src[83]) == *((_DWORD *)a3 + 162)
    && __src[82] == a3[80]
    && LOBYTE(__src[65]) == *((_BYTE *)a3 + 504)
    && *(_WORD *)((char *)&__src[65] + 1) == *(_WORD *)((char *)a3 + 505)
    && __src[46] == a3[44]
    && !memcmp((const void *)__src[45], (const void *)a3[43], __src[46])
    && __src[49] == a3[47]
    && !memcmp((const void *)__src[48], (const void *)a3[46], __src[49])
    && __src[52] == a3[50]
    && !memcmp((const void *)__src[51], (const void *)a3[49], __src[52])
    && __src[55] == a3[53]
    && !memcmp((const void *)__src[54], (const void *)a3[52], __src[55])
    && __src[58] == a3[56]
    && !memcmp((const void *)__src[57], (const void *)a3[55], __src[58])
    && __src[61] == a3[59]
    && !memcmp((const void *)__src[60], (const void *)a3[58], __src[61])
    && __src[64] == a3[62]
    && !memcmp((const void *)__src[63], (const void *)a3[61], __src[64]) )
  {
    v27 = a3[69]; /*0x100535868*/
    if ( __OFSUB__(0, __src[71]) ) /*0x100535861*/
    {
      if ( v27 != 0x8000000000000000LL ) /*0x100535878*/
        goto LABEL_20; /*0x100535878*/
    }
    else if ( v27 == 0x8000000000000000LL /*0x1005358c6*/
           || __src[73] != a3[71]
           || memcmp((const void *)__src[72], (const void *)a3[70], __src[73]) )
    {
      goto LABEL_20; /*0x1005358cd*/
    }
    v28 = *a3; /*0x10053587e*/
    if ( v9 == 2 ) /*0x100535886*/
    {
      if ( (_DWORD)v28 != 2 ) /*0x10053588e*/
        goto LABEL_20; /*0x10053588e*/
    }
    else if ( (_DWORD)v28 == 2 /*0x1005358eb*/
           || !(unsigned __int8)_$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0a493518ead94c36(
                                  &__src[2],
                                  a3) )
    {
      goto LABEL_20; /*0x1005358f2*/
    }
    if ( BYTE4(__src[83]) == *((_BYTE *)a3 + 652) ) /*0x100535907*/
    {
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..AutoSwitchStatusPayload$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1012ab60a881a17f( /*0x10053591c*/
                              &__src[66],
                              a3 + 64) )
      {
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..ApiProxyConfigPayload$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0b677ec8cd15fcea( /*0x100535938*/
                                &__src[74],
                                a3 + 72) )
        {
          if ( (unsigned __int8)_$LT$codexmate_lib..core..models..ApiConnectivityPayload$u20$as$u20$core..cmp..PartialEq$GT$::eq::hcfc0e3a5585f0fed( /*0x100535954*/
                                  &__src[78],
                                  a3 + 76) )
          {
            v7 = a1; /*0x100535986*/
            if ( (unsigned __int8)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc1262f9a2953173e( /*0x10053597f*/
                                    __src[85],
                                    __src[86],
                                    a3[83],
                                    a3[84]) )
            {
              core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h7507b3419dbdcb88(__src); /*0x100535996*/
              goto LABEL_64; /*0x100535996*/
            }
          }
        }
      }
    }
  }
LABEL_20:
  core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h7507b3419dbdcb88(__src); /*0x100535347*/
  v10 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h65b32115a90fc557((_BYTE **)a2); /*0x100535356*/
  if ( !v10 ) /*0x10053535e*/
  {
    codexmate_lib::core::bootstrap_cache::load::h642b53faa3521cbf(v30, v53, v43); /*0x10053537f*/
    v33[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x100535389*/
    LODWORD(v33[1]) = v11; /*0x100535390*/
    std::time::SystemTime::duration_since::had059553cab94f96((__int64)__src, (__int64)v33, 0, 0); /*0x1005353a8*/
    if ( LOBYTE(__src[0]) ) /*0x1005353b4*/
      v12 = 0; /*0x1005353bf*/
    else
      v12 = __src[1]; /*0x1005353b6*/
    v30[0] = 1; /*0x1005353c1*/
    v30[1] = v12; /*0x1005353cc*/
    _$LT$codexmate_lib..core..models..AppPathState$u20$as$u20$core..clone..Clone$GT$::clone::hdafaaf8402976f61( /*0x1005353e2*/
      v31,
      a3 + 42);
    v15 = 0x8000000000000000LL; /*0x1005353e7*/
    v16 = *((_DWORD *)a3 + 162); /*0x1005353f1*/
    if ( __OFSUB__(0, a3[69]) ) /*0x1005353fb*/
    {
      v48 = 0x8000000000000000LL; /*0x100535405*/
      v17 = a3[80]; /*0x100535409*/
      if ( *(_DWORD *)a3 == 2 ) /*0x100535416*/
      {
LABEL_27:
        __dst[0] = 2; /*0x100535418*/
        goto LABEL_30; /*0x100535423*/
      }
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, (__int64)(a3 + 69)); /*0x100535434*/
      v48 = __src[0]; /*0x100535440*/
      v45 = __src[1]; /*0x10053544b*/
      v41 = __src[2]; /*0x100535456*/
      v17 = a3[80]; /*0x10053545a*/
      if ( *(_DWORD *)a3 == 2 ) /*0x100535467*/
        goto LABEL_27; /*0x100535467*/
    }
    _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::hf7194f57f3e2a274( /*0x100535473*/
      __src,
      a3,
      v13,
      v14);
    memcpy(__dst, __src, sizeof(__dst)); /*0x10053548b*/
LABEL_30:
    v51 = *((_BYTE *)a3 + 652); /*0x100535490*/
    v50 = *((_WORD *)a3 + 272); /*0x1005354ad*/
    v36 = (__m128)(unsigned __int64)a3[67]; /*0x1005354c6*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, (__int64)(a3 + 64)); /*0x1005354d4*/
    v47 = __src[0]; /*0x1005354e0*/
    v44 = __src[1]; /*0x1005354eb*/
    v39 = __src[2]; /*0x1005354f6*/
    v52 = *((_BYTE *)a3 + 600); /*0x100535506*/
    v18 = a3[72] == 0x8000000000000000LL; /*0x100535509*/
    v40 = v7; /*0x100535511*/
    if ( v18 ) /*0x100535518*/
    {
      v49 = 0x8000000000000000LL; /*0x10053551a*/
      v19 = *((_BYTE *)a3 + 632); /*0x10053551e*/
      if ( a3[76] == 0x8000000000000000LL ) /*0x10053552f*/
      {
LABEL_35:
        memcpy(&v33[42], v31, 0xB0u); /*0x1005355b2*/
        LODWORD(v33[81]) = v16; /*0x1005355ca*/
        v33[69] = v48; /*0x1005355d5*/
        v33[70] = v45; /*0x1005355e0*/
        v33[71] = v41; /*0x1005355eb*/
        v33[80] = v17; /*0x1005355f2*/
        memcpy(v33, __dst, 0x150u); /*0x10053560c*/
        BYTE4(v33[81]) = v51; /*0x100535615*/
        v33[64] = v47; /*0x10053561f*/
        v33[65] = v44; /*0x10053562a*/
        v33[66] = v39; /*0x100535638*/
        v20 = *(double *)v36.i64; /*0x10053563f*/
        _mm_storel_ps((double *)&v33[67], v36); /*0x100535646*/
        LOWORD(v33[68]) = v50; /*0x100535651*/
        v33[72] = v49; /*0x100535665*/
        v33[73] = v46; /*0x100535670*/
        v33[74] = v42; /*0x10053567b*/
        LOBYTE(v33[75]) = v52; /*0x100535686*/
        v33[76] = v15; /*0x10053568c*/
        v33[77] = v37; /*0x1005356a1*/
        v33[78] = v38; /*0x1005356a8*/
        LOBYTE(v33[79]) = v19; /*0x1005356af*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7f39075c1902a483(__dst, a3 + 82); /*0x1005356c6*/
        memcpy(__src, v33, 0x290u); /*0x1005356de*/
        __src[82] = __dst[0]; /*0x1005356f1*/
        __src[83] = __dst[1]; /*0x1005356f8*/
        __src[84] = __dst[2]; /*0x100535706*/
        v7 = v40; /*0x10053571b*/
        if ( LODWORD(v30[2]) != 3 ) /*0x100535722*/
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppStatusPayload$GT$::he2402bee5fcd767e(&v30[2]); /*0x100535727*/
          v21 = v30[86] + 1; /*0x10053573a*/
          v22 = v30[85]; /*0x10053573d*/
          while ( v21 != 1 ) /*0x100535744*/
          {
            --v21; /*0x10053574d*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(v22); /*0x100535750*/
            v22 += 336; /*0x100535755*/
          }
          if ( v30[84] ) /*0x100535764*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100535775*/
        }
        memcpy(&v30[2], __src, 0x2A8u); /*0x100535789*/
        memcpy(__src, v30, sizeof(__src)); /*0x1005357a4*/
        v35 = 1; /*0x1005357a9*/
        serde_json::ser::to_vec::he041d2f67f554c3b(v33, __src); /*0x1005357bd*/
        v23 = v33[0]; /*0x1005357c2*/
        v24 = (char *)v33[1]; /*0x1005357c9*/
        if ( v33[0] == 0x8000000000000000LL ) /*0x1005357dd*/
        {
          *v7 = 3; /*0x1005357df*/
          v7[1] = v24; /*0x1005357e6*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h7507b3419dbdcb88(__src); /*0x1005357f1*/
          return v7; /*0x1005357f6*/
        }
        v25 = v33[2]; /*0x1005357fb*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h7507b3419dbdcb88(__src); /*0x100535809*/
        v26 = std::fs::write::inner::had0c1bee0a2c1e21(v53, v43, v24, v25, v20, a5, a6); /*0x100535821*/
        if ( v23 ) /*0x100535827*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100535834*/
        if ( v26 ) /*0x10053583c*/
        {
          *v7 = 2; /*0x100535842*/
          v7[1] = v26; /*0x100535849*/
          return v7; /*0x10053584d*/
        }
LABEL_64:
        *v7 = 10; /*0x10053599b*/
        return v7; /*0x10053599b*/
      }
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, (__int64)(a3 + 72)); /*0x100535542*/
      v49 = __src[0]; /*0x10053554e*/
      v46 = __src[1]; /*0x100535559*/
      v42 = __src[2]; /*0x100535564*/
      v19 = *((_BYTE *)a3 + 632); /*0x100535568*/
      if ( a3[76] == 0x8000000000000000LL ) /*0x100535579*/
        goto LABEL_35; /*0x100535579*/
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, (__int64)(a3 + 76)); /*0x10053558a*/
    v15 = __src[0]; /*0x10053558f*/
    v37 = __src[1]; /*0x10053559d*/
    v38 = __src[2]; /*0x1005355ab*/
    goto LABEL_35; /*0x1005355ab*/
  }
  *v7 = 2; /*0x100535360*/
  v7[1] = v10; /*0x100535367*/
  return v7; /*0x1005359a5*/
}