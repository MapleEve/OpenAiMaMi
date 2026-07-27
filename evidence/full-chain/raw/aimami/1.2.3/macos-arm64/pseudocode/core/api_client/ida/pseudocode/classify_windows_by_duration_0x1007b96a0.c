// __ZN13codexmate_lib4core10api_client28classify_windows_by_duration @ 0x1007b96a0
void __fastcall codexmate_lib::core::api_client::classify_windows_by_duration::hf069d579d52983ee(
        __int64 *a1,
        __int64 a2)
{
  int v2; // r12d
  __int64 v3; // r15
  __int64 *v4; // r14
  int v5; // eax
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // r13
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 i; // rbx
  __int64 v15; // rax
  __int64 v16; // r9
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rsi
  _QWORD *v22; // r14
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rsi
  int v26; // r15d
  int v27; // r12d
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // r13
  __int64 v31; // rsi
  __int64 v32; // rdx
  bool v33; // zf
  __int64 v34; // rsi
  int v35; // r13d
  _QWORD *v36; // r15
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rsi
  int v43; // r8d
  __int64 v44; // r10
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r15
  __int64 v48; // rdx
  __int64 v49; // rsi
  int v50; // r12d
  int v51; // r13d
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r12
  __int64 v55; // r15
  __int64 v56; // rdx
  __m128 v57; // xmm0
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  _QWORD v61[3]; // [rsp+8h] [rbp-178h] BYREF
  _QWORD v62[5]; // [rsp+20h] [rbp-160h] BYREF
  __int64 v63; // [rsp+48h] [rbp-138h]
  __int64 v64; // [rsp+50h] [rbp-130h]
  __int64 *v65; // [rsp+58h] [rbp-128h]
  _UNKNOWN **v66; // [rsp+60h] [rbp-120h] BYREF
  char **v67; // [rsp+68h] [rbp-118h]
  __int64 v68; // [rsp+70h] [rbp-110h]
  __int64 v69; // [rsp+78h] [rbp-108h]
  __int64 v70; // [rsp+80h] [rbp-100h] BYREF
  _QWORD *v71; // [rsp+88h] [rbp-F8h]
  __int64 v72; // [rsp+90h] [rbp-F0h]
  __int64 v73; // [rsp+98h] [rbp-E8h]
  __int64 v74; // [rsp+A0h] [rbp-E0h]
  __int64 v75; // [rsp+A8h] [rbp-D8h]
  __int64 v76; // [rsp+B0h] [rbp-D0h]
  __int64 v77; // [rsp+B8h] [rbp-C8h]
  int v78; // [rsp+C4h] [rbp-BCh]
  __int64 v79; // [rsp+C8h] [rbp-B8h] BYREF
  __int64 v80; // [rsp+D0h] [rbp-B0h]
  __int64 v81; // [rsp+D8h] [rbp-A8h]
  __int64 v82; // [rsp+E0h] [rbp-A0h]
  __int64 v83; // [rsp+E8h] [rbp-98h]
  __int64 v84; // [rsp+F0h] [rbp-90h]
  __int64 v85; // [rsp+F8h] [rbp-88h]
  __int64 v86; // [rsp+100h] [rbp-80h]
  __int64 v87; // [rsp+108h] [rbp-78h]
  __int128 v88; // [rsp+110h] [rbp-70h]
  __m128 v89; // [rsp+120h] [rbp-60h]
  __int64 v90; // [rsp+138h] [rbp-48h]
  int v91; // [rsp+144h] [rbp-3Ch]
  _QWORD *v92; // [rsp+148h] [rbp-38h]
  __int64 v93; // [rsp+150h] [rbp-30h]

  v4 = a1; /*0x1007b96b4*/
  if ( a2 ) /*0x1007b96ba*/
  {
    v66 = &off_10196B260; /*0x1007b96c3*/
    v67 = &off_10196B280; /*0x1007b96d1*/
    v68 = a2; /*0x1007b96d8*/
    v5 = _$LT$core..iter..adapters..filter_map..FilterMap$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8ec0a1faef36e12f( /*0x1007b96ed*/
           (__int64)v62,
           &v66);
    if ( LODWORD(v62[0]) == 2 ) /*0x1007b96f9*/
    {
      v7 = 1; /*0x1007b96fb*/
      v8 = 2; /*0x1007b9700*/
      v9 = 2; /*0x1007b9706*/
    }
    else
    {
      v65 = a1; /*0x1007b9724*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v62, &v66); /*0x1007b972b*/
      v10 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(160, 8); /*0x1007b973a*/
      if ( !v10 ) /*0x1007b9742*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 160); /*0x1007b9f77*/
      v11 = v10; /*0x1007b9748*/
      v10[4] = v62[4]; /*0x1007b9752*/
      v10[3] = v62[3]; /*0x1007b975d*/
      v10[2] = v62[2]; /*0x1007b9768*/
      v12 = v62[0]; /*0x1007b976c*/
      v11[1] = v62[1]; /*0x1007b977a*/
      *v11 = v12; /*0x1007b977e*/
      v70 = 4; /*0x1007b9782*/
      v71 = v11; /*0x1007b978d*/
      v72 = 1; /*0x1007b9794*/
      v61[2] = v68; /*0x1007b97a6*/
      v61[1] = v67; /*0x1007b97bb*/
      v61[0] = v66; /*0x1007b97c2*/
      v13 = 1; /*0x1007b97c9*/
      for ( i = 5; ; i += 5 ) /*0x1007b97cf*/
      {
        _$LT$core..iter..adapters..filter_map..FilterMap$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8ec0a1faef36e12f( /*0x1007b9840*/
          (__int64)&v79,
          v61);
        if ( (_DWORD)v79 == 2 ) /*0x1007b984c*/
          break; /*0x1007b984c*/
        if ( v13 == v70 ) /*0x1007b9855*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007b9871*/
            &v70,
            v13,
            1,
            8,
            40,
            v16);
          v11 = v71; /*0x1007b9876*/
        }
        v11[i + 4] = v83; /*0x1007b97f7*/
        v11[i + 3] = v82; /*0x1007b9803*/
        v11[i + 2] = v81; /*0x1007b980f*/
        v15 = v79; /*0x1007b9814*/
        v11[i + 1] = v80; /*0x1007b9822*/
        v11[i] = v15; /*0x1007b9827*/
        v72 = ++v13; /*0x1007b982f*/
      }
      v75 = v70; /*0x1007b9889*/
      v79 = 0; /*0x1007b9890*/
      v80 = 8; /*0x1007b989b*/
      v81 = 0; /*0x1007b98a6*/
      v17 = &v11[i]; /*0x1007b98b1*/
      v18 = 2; /*0x1007b98b4*/
      v19 = 8; /*0x1007b98b9*/
      v20 = 0; /*0x1007b98be*/
      v21 = 2; /*0x1007b98c1*/
      v22 = v11; /*0x1007b98c6*/
      v92 = v11; /*0x1007b98c9*/
LABEL_12:
      if ( v18 == 2 ) /*0x1007b98d1*/
      {
        v93 = v21; /*0x1007b98d7*/
        while ( 2 ) /*0x1007b98e0*/
        {
          if ( v93 == 2 ) /*0x1007b98e0*/
          {
            v23 = 40 * v20; /*0x1007b98ee*/
            while ( 1 ) /*0x1007b9953*/
            {
              *(_QWORD *)&v88 = v20; /*0x1007b9953*/
              v25 = *v22; /*0x1007b9957*/
              v89.i64[0] = v22[1]; /*0x1007b995e*/
              v26 = *((_DWORD *)v22 + 4); /*0x1007b9962*/
              v27 = *((_DWORD *)v22 + 5); /*0x1007b9966*/
              v77 = v22[4]; /*0x1007b996e*/
              v76 = v22[3]; /*0x1007b9979*/
              v18 = 2; /*0x1007b9980*/
              v93 = v25; /*0x1007b9985*/
              if ( v25 == 2 ) /*0x1007b998d*/
              {
                v89.i64[0] = 2; /*0x1007b9b91*/
                goto LABEL_36; /*0x1007b9b91*/
              }
              v28 = v22[3]; /*0x1007b9997*/
              v87 = v22[4]; /*0x1007b999e*/
              v86 = v28; /*0x1007b99a2*/
              if ( (v26 & 1) != 0 ) /*0x1007b99aa*/
              {
                if ( v27 < 361 ) /*0x1007b99b3*/
                {
                  v22 += 5; /*0x1007b9a1f*/
                  v21 = 2; /*0x1007b9a23*/
                  goto LABEL_26; /*0x1007b9a23*/
                }
                if ( (unsigned int)v27 > 0x21BF ) /*0x1007b99bc*/
                  break; /*0x1007b99bc*/
              }
              if ( (_QWORD)v88 == v79 ) /*0x1007b99c9*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb1af0d312e7d08cb(&v79); /*0x1007b99d6*/
              v22 += 5; /*0x1007b9900*/
              v19 = v80; /*0x1007b9904*/
              *(_QWORD *)(v80 + v23) = v93; /*0x1007b990f*/
              *(_QWORD *)(v19 + v23 + 8) = v89.i64[0]; /*0x1007b9917*/
              *(_DWORD *)(v19 + v23 + 16) = v26; /*0x1007b991c*/
              *(_DWORD *)(v19 + v23 + 20) = v27; /*0x1007b9921*/
              v24 = v87; /*0x1007b992a*/
              *(_QWORD *)(v19 + v23 + 24) = v86; /*0x1007b992e*/
              *(_QWORD *)(v19 + v23 + 32) = v24; /*0x1007b9933*/
              v20 = v88 + 1; /*0x1007b993c*/
              v81 = v88 + 1; /*0x1007b993f*/
              v23 += 40; /*0x1007b9946*/
              if ( v17 == v22 ) /*0x1007b994d*/
              {
                v39 = 2; /*0x1007b9b9f*/
                goto LABEL_38; /*0x1007b9b9f*/
              }
            }
            v29 = v22[3]; /*0x1007b99e0*/
            v74 = v22[4]; /*0x1007b99e8*/
            v73 = v29; /*0x1007b99ef*/
            v22 += 5; /*0x1007b99f6*/
            v84 = v89.i64[0]; /*0x1007b99fe*/
            v91 = v27; /*0x1007b9a05*/
            v30 = v92; /*0x1007b9a0c*/
            v20 = v88; /*0x1007b9a10*/
            if ( v17 != v22 ) /*0x1007b9a14*/
              continue; /*0x1007b9a14*/
            v91 = v27; /*0x1007b9e80*/
            v84 = v89.i64[0]; /*0x1007b9e84*/
            v89.i64[0] = v93; /*0x1007b9e8f*/
LABEL_39:
            v18 = 2; /*0x1007b9bac*/
          }
          else
          {
            v31 = 40 * v20; /*0x1007b9a7c*/
            v22 += 5; /*0x1007b9a80*/
            while ( 1 ) /*0x1007b9ae7*/
            {
              v90 = v31; /*0x1007b9ae7*/
              v34 = *(v22 - 5); /*0x1007b9aeb*/
              v89.i64[0] = *(v22 - 4); /*0x1007b9af3*/
              v35 = *((_DWORD *)v22 - 6); /*0x1007b9af7*/
              v27 = *((_DWORD *)v22 - 5); /*0x1007b9afb*/
              v77 = *(v22 - 1); /*0x1007b9b03*/
              v76 = *(v22 - 2); /*0x1007b9b0e*/
              v18 = 2; /*0x1007b9b15*/
              if ( v34 == 2 ) /*0x1007b9b1e*/
              {
                v89.i64[0] = v93; /*0x1007b9e6a*/
                v30 = v92; /*0x1007b9e6e*/
                goto LABEL_40; /*0x1007b9e72*/
              }
              v85 = v34; /*0x1007b9b24*/
              *(_QWORD *)&v88 = v20; /*0x1007b9b2b*/
              v36 = v22 - 5; /*0x1007b9b2f*/
              v37 = *(v22 - 2); /*0x1007b9b33*/
              v87 = *(v22 - 1); /*0x1007b9b3b*/
              v86 = v37; /*0x1007b9b3f*/
              if ( ((v27 < 361) & (unsigned __int8)v35) != 0 ) /*0x1007b9b50*/
                break; /*0x1007b9b50*/
              v38 = v90; /*0x1007b9b5d*/
              if ( (_QWORD)v88 == v79 ) /*0x1007b9b61*/
              {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb1af0d312e7d08cb(&v79); /*0x1007b9b6e*/
                v19 = v80; /*0x1007b9a86*/
                v38 = v90; /*0x1007b9a8d*/
              }
              *(_QWORD *)(v19 + v38) = v85; /*0x1007b9a98*/
              *(_QWORD *)(v19 + v38 + 8) = v89.i64[0]; /*0x1007b9aa0*/
              *(_DWORD *)(v19 + v38 + 16) = v35; /*0x1007b9aa5*/
              *(_DWORD *)(v19 + v38 + 20) = v27; /*0x1007b9aaa*/
              v32 = v87; /*0x1007b9ab3*/
              *(_QWORD *)(v19 + v38 + 24) = v86; /*0x1007b9ab7*/
              *(_QWORD *)(v19 + v38 + 32) = v32; /*0x1007b9abc*/
              v81 = v88 + 1; /*0x1007b9ac8*/
              v31 = v38 + 40; /*0x1007b9acf*/
              v22 += 5; /*0x1007b9ad3*/
              v33 = v17 == v36 + 5; /*0x1007b9adb*/
              v20 = v88 + 1; /*0x1007b9ade*/
              if ( v33 ) /*0x1007b9ae1*/
              {
                v39 = v93; /*0x1007b9e77*/
LABEL_38:
                v89.i64[0] = v39; /*0x1007b9ba4*/
                v30 = v92; /*0x1007b9ba8*/
                goto LABEL_39; /*0x1007b9ba8*/
              }
            }
            v21 = v93; /*0x1007b9b78*/
            v93 = v85; /*0x1007b9b83*/
LABEL_26:
            v64 = v77; /*0x1007b9a28*/
            v63 = v76; /*0x1007b9a3d*/
            v69 = v89.i64[0]; /*0x1007b9a48*/
            v78 = v27; /*0x1007b9a4f*/
            v18 = v93; /*0x1007b9a56*/
            v89.i64[0] = v21; /*0x1007b9a5a*/
            v30 = v92; /*0x1007b9a61*/
            v20 = v88; /*0x1007b9a65*/
            if ( v17 != v22 ) /*0x1007b9a69*/
              goto LABEL_12; /*0x1007b9a69*/
          }
          break;
        }
      }
      else
      {
        v90 = v18; /*0x1007b9d08*/
        while ( v21 == 2 ) /*0x1007b9d10*/
        {
          *(_QWORD *)&v88 = v20; /*0x1007b9d16*/
          v47 = 40 * v20; /*0x1007b9d22*/
          while ( 1 ) /*0x1007b9d86*/
          {
            v49 = *v22; /*0x1007b9d86*/
            v85 = v22[1]; /*0x1007b9d8d*/
            v50 = *((_DWORD *)v22 + 4); /*0x1007b9d94*/
            v51 = *((_DWORD *)v22 + 5); /*0x1007b9d98*/
            v77 = v22[4]; /*0x1007b9da0*/
            v76 = v22[3]; /*0x1007b9dab*/
            v89.i64[0] = 2; /*0x1007b9db7*/
            v93 = v49; /*0x1007b9dbb*/
            if ( v49 == 2 ) /*0x1007b9dc3*/
            {
LABEL_36:
              v30 = v92; /*0x1007b9b95*/
              v20 = v88; /*0x1007b9b99*/
              goto LABEL_40; /*0x1007b9b9d*/
            }
            v52 = v22[3]; /*0x1007b9dcd*/
            v87 = v22[4]; /*0x1007b9dd4*/
            v86 = v52; /*0x1007b9dd8*/
            if ( ((v51 >= 8640) & (unsigned __int8)v50) != 0 ) /*0x1007b9de9*/
              break; /*0x1007b9de9*/
            if ( (_QWORD)v88 == v79 ) /*0x1007b9df6*/
            {
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb1af0d312e7d08cb(&v79); /*0x1007b9e03*/
              v19 = v80; /*0x1007b9d28*/
            }
            v22 += 5; /*0x1007b9d2f*/
            *(_QWORD *)(v19 + v47) = v93; /*0x1007b9d37*/
            *(_QWORD *)(v19 + v47 + 8) = v85; /*0x1007b9d42*/
            *(_DWORD *)(v19 + v47 + 16) = v50; /*0x1007b9d47*/
            *(_DWORD *)(v19 + v47 + 20) = v51; /*0x1007b9d4c*/
            v48 = v87; /*0x1007b9d55*/
            *(_QWORD *)(v19 + v47 + 24) = v86; /*0x1007b9d59*/
            *(_QWORD *)(v19 + v47 + 32) = v48; /*0x1007b9d5e*/
            *(_QWORD *)&v88 = v88 + 1; /*0x1007b9d6a*/
            v81 = v88; /*0x1007b9d6e*/
            v47 += 40; /*0x1007b9d75*/
            v18 = v90; /*0x1007b9d7c*/
            if ( v17 == v22 ) /*0x1007b9d80*/
              goto LABEL_36; /*0x1007b9d80*/
          }
          v53 = v22[3]; /*0x1007b9e0d*/
          v74 = v22[4]; /*0x1007b9e15*/
          v73 = v53; /*0x1007b9e1c*/
          v22 += 5; /*0x1007b9e23*/
          v84 = v85; /*0x1007b9e2e*/
          v91 = v51; /*0x1007b9e35*/
          v18 = v90; /*0x1007b9e3c*/
          v20 = v88; /*0x1007b9e40*/
          v21 = v93; /*0x1007b9e44*/
          if ( v17 == v22 ) /*0x1007b9e48*/
          {
            v91 = v51; /*0x1007b9e4e*/
            v84 = v85; /*0x1007b9e52*/
            v89.i64[0] = v93; /*0x1007b9e59*/
            v30 = v92; /*0x1007b9e5d*/
            goto LABEL_40; /*0x1007b9e61*/
          }
        }
        v93 = v21; /*0x1007b9e98*/
        v54 = v20; /*0x1007b9e9c*/
        v55 = 40 * v20; /*0x1007b9ea7*/
        v30 = v92; /*0x1007b9eab*/
        do /*0x1007b9ef8*/
        {
          v88 = *(_OWORD *)v22; /*0x1007b9efe*/
          v57 = (__m128)(unsigned __int64)v22[2]; /*0x1007b9f02*/
          v58 = *v22; /*0x1007b9f08*/
          v59 = v22[3]; /*0x1007b9f0b*/
          v77 = v22[4]; /*0x1007b9f13*/
          v76 = v59; /*0x1007b9f1a*/
          if ( v58 == 2 ) /*0x1007b9f25*/
            break; /*0x1007b9f25*/
          v89 = v57; /*0x1007b9f27*/
          v60 = v22[3]; /*0x1007b9f2b*/
          v87 = v22[4]; /*0x1007b9f33*/
          v86 = v60; /*0x1007b9f37*/
          if ( v54 == v79 ) /*0x1007b9f42*/
          {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb1af0d312e7d08cb(&v79); /*0x1007b9f4f*/
            v19 = v80; /*0x1007b9eb1*/
          }
          *(_OWORD *)(v19 + v55) = v88; /*0x1007b9ebc*/
          _mm_storel_ps((double *)(v19 + v55 + 16), v89); /*0x1007b9ec5*/
          v56 = v87; /*0x1007b9ecf*/
          *(_QWORD *)(v19 + v55 + 24) = v86; /*0x1007b9ed3*/
          *(_QWORD *)(v19 + v55 + 32) = v56; /*0x1007b9ed8*/
          v81 = ++v54; /*0x1007b9ee6*/
          v55 += 40; /*0x1007b9eed*/
          v22 += 5; /*0x1007b9ef1*/
        }
        while ( v17 != v22 ); /*0x1007b9ef8*/
        v89.i64[0] = v93; /*0x1007b9f5d*/
        v18 = v90; /*0x1007b9f61*/
        v20 = v54; /*0x1007b9f65*/
      }
LABEL_40:
      v90 = v18; /*0x1007b9bb1*/
      if ( v75 ) /*0x1007b9bbf*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 40 * v75, 8); /*0x1007b9bd1*/
      v4 = v65; /*0x1007b9be7*/
      if ( v20 ) /*0x1007b9bee*/
      {
        v40 = v80 + 40 * v20; /*0x1007b9bf4*/
        v7 = 1; /*0x1007b9bf8*/
        v41 = v80; /*0x1007b9bfd*/
        v3 = v84; /*0x1007b9c00*/
        v2 = v91; /*0x1007b9c07*/
        v8 = v89.i64[0]; /*0x1007b9c0b*/
        do /*0x1007b9c27*/
        {
          v42 = *(_QWORD *)v41; /*0x1007b9c29*/
          if ( *(_QWORD *)v41 == 2 ) /*0x1007b9c30*/
            break; /*0x1007b9c30*/
          v43 = *(_DWORD *)(v41 + 16); /*0x1007b9c32*/
          if ( v43 != 1 && v8 == 2 ) /*0x1007b9c40*/
          {
            v3 = *(_QWORD *)(v41 + 8); /*0x1007b9c42*/
            v2 = *(_DWORD *)(v41 + 20); /*0x1007b9c46*/
            v44 = *(_QWORD *)(v41 + 24); /*0x1007b9c4e*/
            v74 = *(_QWORD *)(v41 + 32); /*0x1007b9c55*/
            v73 = v44; /*0x1007b9c5c*/
            v7 = v43; /*0x1007b9c63*/
            v8 = v42; /*0x1007b9c66*/
          }
          v41 += 40; /*0x1007b9c20*/
        }
        while ( v41 != v40 ); /*0x1007b9c27*/
      }
      else
      {
        v7 = 1; /*0x1007b9c6b*/
        v3 = v84; /*0x1007b9c70*/
        v2 = v91; /*0x1007b9c77*/
        v8 = v89.i64[0]; /*0x1007b9c7b*/
      }
      if ( v79 ) /*0x1007b9c82*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, 40 * v79, 8); /*0x1007b9c91*/
      v5 = v78; /*0x1007b9c96*/
      v6 = v69; /*0x1007b9c9c*/
      v9 = v90; /*0x1007b9ca3*/
    }
    *v4 = v9; /*0x1007b9ca7*/
    v4[1] = v6; /*0x1007b9caa*/
    *((_DWORD *)v4 + 4) = 1; /*0x1007b9cae*/
    *((_DWORD *)v4 + 5) = v5; /*0x1007b9cb6*/
    v45 = v64; /*0x1007b9cc1*/
    v4[3] = v63; /*0x1007b9cc8*/
    v4[4] = v45; /*0x1007b9ccc*/
    v4[5] = v8; /*0x1007b9cd0*/
    v4[6] = v3; /*0x1007b9cd4*/
    *((_DWORD *)v4 + 14) = v7; /*0x1007b9cd8*/
    *((_DWORD *)v4 + 15) = v2; /*0x1007b9cdc*/
    v46 = v74; /*0x1007b9ce7*/
    v4[8] = v73; /*0x1007b9cee*/
    v4[9] = v46; /*0x1007b9cf2*/
  }
  else
  {
    *a1 = 2; /*0x1007b9710*/
    a1[5] = 2; /*0x1007b9717*/
  }
}