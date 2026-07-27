// __ZN13codexmate_lib4core5relay10translator23canonicalize_json_value @ 0x10084d900 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::translator::canonicalize_json_value::h3e049d9080b6c150(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // r14
  size_t v17; // rdx
  __int64 v18; // rbx
  int v19; // eax
  char v20; // cl
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 result; // rax
  _QWORD *v27; // r15
  _BYTE v28[24]; // [rsp+0h] [rbp-1F0h] BYREF
  _QWORD v29[9]; // [rsp+18h] [rbp-1D8h] BYREF
  _QWORD v30[4]; // [rsp+60h] [rbp-190h] BYREF
  _QWORD v31[7]; // [rsp+80h] [rbp-170h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-138h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-130h]
  __int64 v34; // [rsp+C8h] [rbp-128h]
  __int64 v35; // [rsp+D0h] [rbp-120h]
  __int64 v36; // [rsp+D8h] [rbp-118h]
  __int64 v37; // [rsp+E0h] [rbp-110h]
  __int64 v38; // [rsp+E8h] [rbp-108h]
  _QWORD v39[4]; // [rsp+F0h] [rbp-100h] BYREF
  __int64 v40; // [rsp+110h] [rbp-E0h] BYREF
  _QWORD *v41; // [rsp+118h] [rbp-D8h]
  unsigned __int64 v42; // [rsp+120h] [rbp-D0h]
  void *__s1; // [rsp+128h] [rbp-C8h]
  size_t __n; // [rsp+130h] [rbp-C0h]
  __int64 v45; // [rsp+138h] [rbp-B8h]
  __int64 v46; // [rsp+140h] [rbp-B0h]
  _QWORD *v47; // [rsp+148h] [rbp-A8h]
  __int64 v48; // [rsp+150h] [rbp-A0h]
  _QWORD *v49; // [rsp+158h] [rbp-98h]
  __int64 v50; // [rsp+160h] [rbp-90h]
  __int64 v51; // [rsp+168h] [rbp-88h] BYREF
  __int64 v52; // [rsp+170h] [rbp-80h]
  __int64 v53; // [rsp+178h] [rbp-78h]
  __int64 v54; // [rsp+180h] [rbp-70h]
  _QWORD v55[2]; // [rsp+188h] [rbp-68h] BYREF
  __int64 v56; // [rsp+198h] [rbp-58h]
  __int64 v57; // [rsp+1A0h] [rbp-50h]
  __int64 v58; // [rsp+1A8h] [rbp-48h]
  _QWORD *v59; // [rsp+1B0h] [rbp-40h]
  __int64 v60; // [rsp+1B8h] [rbp-38h]
  __int64 v61; // [rsp+1C0h] [rbp-30h]

  v2 = a1; /*0x10084d914*/
  v3 = *(unsigned __int8 *)a2; /*0x10084d917*/
  if ( v3 == 4 ) /*0x10084d91d*/
  {
    result = _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h2fe7c2a7417aedfa( /*0x10084dcd2*/
               a1 + 8,
               a2[2],
               a2[2] + 32 * a2[3]);
    *(_BYTE *)a1 = 4; /*0x10084dcd7*/
    return result; /*0x10084dcda*/
  }
  if ( v3 == 5 ) /*0x10084d926*/
  {
    v4 = a2[1]; /*0x10084d92c*/
    v58 = a2[2]; /*0x10084d934*/
    v5 = v4; /*0x10084d93a*/
    v60 = v4; /*0x10084d93d*/
    if ( v4 ) /*0x10084d947*/
      v5 = a2[3]; /*0x10084d949*/
    v29[0] = v4 != 0; /*0x10084d94d*/
    v29[1] = 0; /*0x10084d954*/
    v29[2] = v60; /*0x10084d963*/
    v29[3] = v58; /*0x10084d96e*/
    v29[4] = v29[0]; /*0x10084d975*/
    v29[5] = 0; /*0x10084d97c*/
    v29[6] = v60; /*0x10084d987*/
    v29[7] = v58; /*0x10084d98e*/
    v29[8] = v5; /*0x10084d995*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h33417b81092dfe24( /*0x10084d9aa*/
      &v40,
      v29);
    v6 = v41; /*0x10084d9af*/
    v7 = v42; /*0x10084d9b6*/
    if ( v42 >= 2 ) /*0x10084d9c1*/
    {
      v27 = v41; /*0x10084dd89*/
      if ( v42 >= 0x15 ) /*0x10084dd7b*/
        core::slice::sort::stable::driftsort_main::hfe65d5b0347d955f(v41, v42, v31); /*0x10084ddcb*/
      else
        core::slice::sort::shared::smallsort::insertion_sort_shift_left::hfaeeae3887c66215(v41, v42, 1, v31); /*0x10084dd8f*/
      v55[0] = 0; /*0x10084dd94*/
      v56 = 0; /*0x10084dd9c*/
      v8 = v40; /*0x10084dda4*/
      v6 = v27; /*0x10084ddab*/
      if ( v60 ) /*0x10084ddb3*/
      {
LABEL_8:
        v61 = v8; /*0x10084d9f2*/
        v50 = v2; /*0x10084d9f6*/
        v49 = &v6[v7]; /*0x10084da01*/
        v59 = v6; /*0x10084da08*/
        do /*0x10084dad9*/
        {
          v9 = *v6; /*0x10084dadf*/
          v47 = v6 + 1; /*0x10084dae6*/
          __s1 = *(void **)(v9 + 8); /*0x10084daf1*/
          v48 = v9; /*0x10084daf8*/
          __n = *(_QWORD *)(v9 + 16); /*0x10084db03*/
          v57 = v58; /*0x10084db0e*/
          v10 = v60; /*0x10084db12*/
          while ( 2 ) /*0x10084db16*/
          {
            v11 = v10 + 360; /*0x10084db16*/
            v12 = *(unsigned __int16 *)(v10 + 626); /*0x10084db1d*/
            v45 = v10; /*0x10084db24*/
            v13 = v10 - 32; /*0x10084db2b*/
            v46 = v12; /*0x10084db2f*/
            v14 = 3LL * (unsigned int)(8 * v12); /*0x10084db3d*/
            v15 = -1; /*0x10084db41*/
            do /*0x10084dba2*/
            {
              if ( !v14 ) /*0x10084db53*/
              {
                v15 = v46; /*0x10084dbc0*/
                v21 = v57 - 1; /*0x10084dbcb*/
                if ( !v57 ) /*0x10084dbcf*/
                  goto LABEL_10; /*0x10084dbcf*/
                goto LABEL_23; /*0x10084dbcf*/
              }
              v16 = v11 + 24; /*0x10084db55*/
              v17 = *(_QWORD *)(v11 + 16); /*0x10084db5d*/
              v18 = __n - v17; /*0x10084db6b*/
              if ( __n < v17 ) /*0x10084db6e*/
                v17 = __n; /*0x10084db6e*/
              v19 = memcmp(__s1, *(const void **)(v11 + 8), v17); /*0x10084db79*/
              if ( v19 ) /*0x10084db82*/
                v18 = v19; /*0x10084db82*/
              v20 = (v18 > 0) - (v18 < 0); /*0x10084db8f*/
              v13 += 32; /*0x10084db91*/
              ++v15; /*0x10084db95*/
              v14 -= 24; /*0x10084db98*/
              v11 = v16; /*0x10084db9c*/
            }
            while ( v20 == 1 ); /*0x10084dba2*/
            if ( v20 ) /*0x10084dba9*/
            {
              v21 = v57 - 1; /*0x10084dbaf*/
              if ( !v57 ) /*0x10084dbb3*/
                goto LABEL_10; /*0x10084dbb3*/
LABEL_23:
              v57 = v21; /*0x10084dbd5*/
              v10 = *(_QWORD *)(v45 + 8 * v15 + 632); /*0x10084dbe0*/
              continue; /*0x10084dbe8*/
            }
            break;
          }
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v28, v48); /*0x10084dc01*/
          codexmate_lib::core::relay::translator::canonicalize_json_value::h3e049d9080b6c150(&v51, v13); /*0x10084dc10*/
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v32, v55, v28); /*0x10084dc23*/
          if ( __OFSUB__(0, v32) ) /*0x10084dc2a*/
          {
            v22 = v33; /*0x10084dc37*/
            v23 = 32 * v35; /*0x10084dc45*/
            v39[3] = *(_QWORD *)(v33 + 32 * v35 + 24); /*0x10084dc4e*/
            v39[2] = *(_QWORD *)(v33 + 32 * v35 + 16); /*0x10084dc5a*/
            v24 = *(_QWORD *)(v33 + 32 * v35); /*0x10084dc61*/
            v39[1] = *(_QWORD *)(v33 + 32 * v35 + 8); /*0x10084dc6a*/
            v39[0] = v24; /*0x10084dc71*/
            *(_QWORD *)(v33 + v23 + 24) = v54; /*0x10084dc7c*/
            *(_QWORD *)(v22 + v23 + 16) = v53; /*0x10084dc85*/
            v25 = v51; /*0x10084dc8a*/
            *(_QWORD *)(v22 + v23 + 8) = v52; /*0x10084dc95*/
            *(_QWORD *)(v22 + v23) = v25; /*0x10084dc9a*/
            if ( LOBYTE(v39[0]) != 6 ) /*0x10084dca5*/
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v39); /*0x10084dcb2*/
          }
          else
          {
            v31[6] = v38; /*0x10084da27*/
            v31[5] = v37; /*0x10084da35*/
            v31[4] = v36; /*0x10084da43*/
            v31[3] = v35; /*0x10084da51*/
            v31[2] = v34; /*0x10084da5f*/
            v31[1] = v33; /*0x10084da74*/
            v31[0] = v32; /*0x10084da7b*/
            v30[3] = v54; /*0x10084da86*/
            v30[2] = v53; /*0x10084da91*/
            v30[1] = v52; /*0x10084daa3*/
            v30[0] = v51; /*0x10084daaa*/
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10084dac6*/
              v39,
              v31,
              v30);
          }
LABEL_10:
          v6 = v47; /*0x10084dacb*/
        }
        while ( v47 != v49 ); /*0x10084dad9*/
        v2 = v50; /*0x10084dd11*/
        v6 = v59; /*0x10084dd18*/
        v8 = v61; /*0x10084dd1c*/
      }
    }
    else
    {
      v55[0] = 0; /*0x10084d9c7*/
      v56 = 0; /*0x10084d9cf*/
      v8 = v40; /*0x10084d9d7*/
      if ( v42 && v60 ) /*0x10084d9ec*/
        goto LABEL_8; /*0x10084d9ec*/
    }
    if ( v8 ) /*0x10084dd23*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 8 * v8, 8); /*0x10084dd2e*/
    *(_QWORD *)(v2 + 24) = v56; /*0x10084dd37*/
    result = v55[0]; /*0x10084dd3b*/
    *(_QWORD *)(v2 + 16) = v55[1]; /*0x10084dd43*/
    *(_QWORD *)(v2 + 8) = result; /*0x10084dd47*/
    *(_BYTE *)v2 = 5; /*0x10084dd4b*/
    return result; /*0x10084dd4e*/
  }
  result = *(unsigned __int8 *)a2; /*0x10084dcdf*/
  switch ( *(_BYTE *)a2 ) /*0x10084dcef*/
  {
    case 0: /*0x10084dcef*/
      *(_BYTE *)a1 = 0; /*0x10084dd50*/
      break; /*0x10084dd53*/
    case 1: /*0x10084dcef*/
    case 2: /*0x10084dcef*/
      *(_QWORD *)(a1 + 24) = a2[3]; /*0x10084dcf5*/
      *(_QWORD *)(a1 + 16) = a2[2]; /*0x10084dcfd*/
      result = *a2; /*0x10084dd01*/
      *(_QWORD *)(a1 + 8) = a2[1]; /*0x10084dd08*/
      *(_QWORD *)a1 = result; /*0x10084dd0c*/
      break; /*0x10084dd0f*/
    case 3: /*0x10084dcef*/
      result = _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(a1 + 8, a2 + 1); /*0x10084dd5d*/
      *(_BYTE *)a1 = 3; /*0x10084dd62*/
      break; /*0x10084dd62*/
  }
  return result; /*0x10084dd65*/
}