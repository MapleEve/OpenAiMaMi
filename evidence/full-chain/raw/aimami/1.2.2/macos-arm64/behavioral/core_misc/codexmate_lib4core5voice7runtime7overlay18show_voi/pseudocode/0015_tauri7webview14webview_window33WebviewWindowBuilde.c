// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18show_voi 0x100625940 d=1
__int64 *__fastcall tauri::webview::webview_window::WebviewWindowBuilder$LT$R$C$M$GT$::build::hc39030aceba83fed(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // r15
  __int64 v7; // r15
  __int64 v8; // r15
  __int64 v9; // r15
  __int128 v10; // kr00_16
  __int64 v11; // r12
  __int128 v12; // kr10_16
  _OWORD *v13; // rax
  _OWORD *v14; // r13
  __int64 v15; // r14
  __int64 v16; // r15
  __m128i v17; // xmm0
  __int64 v18; // r14
  volatile signed __int64 *v19; // rax
  __int64 v20; // rt0
  char v21; // of
  _OWORD *v22; // rax
  __int64 v23; // r13
  __int64 v24; // r15
  __int128 v25; // kr20_16
  __int64 v26; // r12
  __int128 v27; // kr30_16
  __int64 v28; // r12
  volatile signed __int64 *v29; // rax
  __int64 v30; // rt0
  __int64 v31; // rax
  volatile signed __int64 *v32; // rcx
  volatile signed __int64 *v33; // r13
  __int64 v34; // rt0
  _OWORD *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r15
  __int64 v38; // r12
  __int64 v39; // r12
  __int64 v40; // r12
  __int64 v41; // r12
  __int64 v42; // r13
  __int64 v43; // r15
  __int64 v44; // rsi
  __int64 v45; // r13
  __int64 v46; // rdi
  __int64 v47; // r15
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rsi
  unsigned __int64 v51; // rdi
  __int64 v52; // r8
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rsi
  unsigned __int64 v57; // rdi
  __int64 v58; // r8
  _BYTE v59[480]; // [rsp+0h] [rbp-1270h] BYREF
  _QWORD v60[45]; // [rsp+1E0h] [rbp-1090h] BYREF
  _QWORD __dst[61]; // [rsp+348h] [rbp-F28h] BYREF
  _BYTE v62[488]; // [rsp+530h] [rbp-D40h] BYREF
  __int64 v63; // [rsp+718h] [rbp-B58h] BYREF
  unsigned __int64 v64; // [rsp+720h] [rbp-B50h]
  __int128 v65; // [rsp+728h] [rbp-B48h]
  __int128 v66; // [rsp+738h] [rbp-B38h]
  __int64 v67; // [rsp+748h] [rbp-B28h]
  _BYTE v68[624]; // [rsp+750h] [rbp-B20h] BYREF
  _BYTE v69[680]; // [rsp+9C0h] [rbp-8B0h] BYREF
  _BYTE v70[680]; // [rsp+C68h] [rbp-608h] BYREF
  __m128i v71; // [rsp+F10h] [rbp-360h] BYREF
  _OWORD v72[37]; // [rsp+F20h] [rbp-350h] BYREF
  size_t v73[3]; // [rsp+1170h] [rbp-100h] BYREF
  unsigned __int64 v74; // [rsp+1188h] [rbp-E8h]
  __int128 v75; // [rsp+1190h] [rbp-E0h]
  __int128 v76; // [rsp+11A0h] [rbp-D0h]
  __int64 v77; // [rsp+11B0h] [rbp-C0h]
  __int64 v78; // [rsp+11B8h] [rbp-B8h]
  __int64 v79; // [rsp+11C0h] [rbp-B0h]
  _BYTE v80[24]; // [rsp+11C8h] [rbp-A8h]
  unsigned __int64 v81; // [rsp+11E0h] [rbp-90h]
  __int128 v82; // [rsp+11E8h] [rbp-88h]
  __int128 v83; // [rsp+11F8h] [rbp-78h]
  __int64 v84; // [rsp+1208h] [rbp-68h]
  __int64 v85; // [rsp+1210h] [rbp-60h]
  unsigned __int64 v86; // [rsp+1218h] [rbp-58h]
  __int128 v87; // [rsp+1220h] [rbp-50h]
  __int128 v88; // [rsp+1230h] [rbp-40h]
  __int64 v89; // [rsp+1240h] [rbp-30h]

  v60[13] = 0; /*0x100625954*/
  memcpy(__dst, (const void *)a2, sizeof(__dst)); /*0x100625975*/
  memcpy(v72, (const void *)(a2 + 488), sizeof(v72)); /*0x100625990*/
  v85 = __dst[57]; /*0x10062599c*/
  v3 = __dst[55]; /*0x1006259a0*/
  v4 = __dst[56]; /*0x1006259a7*/
  memcpy(v62, (const void *)(a2 + 488), 0x1D8u); /*0x1006259bd*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v73, (__int64)&v72[29] + 8); /*0x1006259d0*/
  tauri_runtime::webview::PendingWebview$LT$T$C$R$GT$::new::h8041751aee1f884a(v69); /*0x1006259ea*/
  *(_QWORD *)v80 = *(_QWORD *)&v69[8]; /*0x1006259fd*/
  *(_OWORD *)&v80[8] = *(_OWORD *)&v69[16]; /*0x100625a0b*/
  if ( *(_QWORD *)v69 != 3 ) /*0x100625a24*/
  {
    v78 = v4; /*0x100625bbc*/
    v79 = v3; /*0x100625bc3*/
    memcpy(&v70[32], &v69[32], 0x288u); /*0x100625bdd*/
    *(_OWORD *)&v70[16] = *(_OWORD *)&v80[8]; /*0x100625bf7*/
    *(_OWORD *)v70 = __PAIR128__(*(unsigned __int64 *)v80, *(unsigned __int64 *)v69); /*0x100625c0c*/
    v10 = v72[32]; /*0x100625c1a*/
    *(_QWORD *)&v72[32] = 0; /*0x100625c21*/
    if ( *(_QWORD *)&v70[584] ) /*0x100625c36*/
    {
      v11 = *(_QWORD *)&v70[592]; /*0x100625c38*/
      if ( **(_QWORD **)&v70[592] ) /*0x100625c3f*/
        (**(void (__fastcall ***)(_QWORD))&v70[592])(*(_QWORD *)&v70[584]); /*0x100625c4b*/
      if ( *(_QWORD *)(v11 + 8) ) /*0x100625c4d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100625c5f*/
    }
    *(_OWORD *)&v70[584] = v10; /*0x100625c64*/
    v12 = v72[33]; /*0x100625c79*/
    *(_QWORD *)&v72[33] = 0; /*0x100625c80*/
    if ( (_QWORD)v12 ) /*0x100625c8e*/
    {
      *(_QWORD *)v69 = v12; /*0x100625c90*/
      *(_QWORD *)&v69[8] = *((_QWORD *)&v72[33] + 1); /*0x100625c97*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100625c9e*/
      v13 = (_OWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x10u, 8u); /*0x100625cad*/
      if ( !v13 ) /*0x100625cb5*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16); /*0x1006266d8*/
      v14 = v13; /*0x100625cbb*/
      *v13 = v12; /*0x100625cbe*/
      v15 = *(_QWORD *)&v70[600]; /*0x100625cc5*/
      if ( !*(_QWORD *)&v70[600] ) /*0x100625ccf*/
      {
LABEL_46:
        *(_QWORD *)&v70[600] = v14; /*0x100625d0b*/
        *(_QWORD *)&v70[608] = &off_101894240; /*0x100625d19*/
        v17 = _mm_loadu_si128((const __m128i *)&v72[35]); /*0x100625d20*/
        v18 = *(_QWORD *)&v72[35]; /*0x100625d28*/
        *(_QWORD *)&v72[35] = 0; /*0x100625d2f*/
        if ( v18 ) /*0x100625d3d*/
        {
          v71 = v17; /*0x100625d43*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100625d60*/
            (size_t *)v62,
            (__int64)&v70[472]);
          v19 = *(volatile signed __int64 **)(v85 + 136); /*0x100625d69*/
          v20 = _InterlockedIncrement64(v19); /*0x100625d70*/
          if ( (v20 < 0) ^ v21 | (v20 == 0) ) /*0x100625d74*/
            goto LABEL_116; /*0x100625d74*/
          *(_QWORD *)&v69[24] = v19; /*0x100625d7a*/
          *(_OWORD *)v69 = *(_OWORD *)v62; /*0x100625d8f*/
          *(_QWORD *)&v69[16] = *(_QWORD *)&v62[16]; /*0x100625da4*/
          v17 = _mm_load_si128(&v71); /*0x100625dab*/
          *(__m128i *)&v69[32] = v17; /*0x100625db3*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100625dbb*/
          v22 = (_OWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x30u, 8u); /*0x100625dca*/
          if ( !v22 ) /*0x100625dd2*/
            alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48); /*0x1006266e9*/
          v22[2] = *(_OWORD *)&v69[32]; /*0x100625dea*/
          v22[1] = *(_OWORD *)&v69[16]; /*0x100625e00*/
          *v22 = *(_OWORD *)v69; /*0x100625e16*/
          v23 = *(_QWORD *)&v70[616]; /*0x100625e19*/
          v24 = *(_QWORD *)&v70[624]; /*0x100625e20*/
          *(_QWORD *)&v70[616] = v22; /*0x100625e27*/
          *(_QWORD *)&v70[624] = &off_101894270; /*0x100625e35*/
          if ( v23 ) /*0x100625e3f*/
          {
            if ( *(_QWORD *)v24 ) /*0x100625e41*/
              (*(void (__fastcall **)(__int64))v24)(v23); /*0x100625e4c*/
            if ( *(_QWORD *)(v24 + 8) ) /*0x100625e4e*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100625e5e*/
          }
        }
        v25 = v72[31]; /*0x100625e6a*/
        *(_QWORD *)&v72[31] = 0; /*0x100625e71*/
        if ( *(_QWORD *)&v70[632] ) /*0x100625e86*/
        {
          v26 = *(_QWORD *)&v70[640]; /*0x100625e88*/
          if ( **(_QWORD **)&v70[640] ) /*0x100625e8f*/
            (**(void (__fastcall ***)(_QWORD, double))&v70[640])(*(_QWORD *)&v70[632], *(double *)v17.i64); /*0x100625e9b*/
          if ( *(_QWORD *)(v26 + 8) ) /*0x100625e9d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100625eaf*/
        }
        *(_OWORD *)&v70[632] = v25; /*0x100625eb4*/
        v27 = v72[36]; /*0x100625ec9*/
        *(_QWORD *)&v72[36] = 0; /*0x100625ed0*/
        v28 = v78; /*0x100625ede*/
        if ( (_QWORD)v27 ) /*0x100625ee5*/
        {
          v73[0] = v27; /*0x100625eeb*/
          v73[1] = *((_QWORD *)&v72[36] + 1); /*0x100625ef2*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100625f07*/
            (size_t *)v62,
            (__int64)&v70[472]);
          v29 = *(volatile signed __int64 **)(v85 + 136); /*0x100625f10*/
          v30 = _InterlockedIncrement64(v29); /*0x100625f17*/
          if ( (v30 < 0) ^ v21 | (v30 == 0) ) /*0x100625f1b*/
            goto LABEL_116; /*0x100625f1b*/
          *(_QWORD *)&v69[32] = *(_QWORD *)&v62[16]; /*0x100625f28*/
          *(_OWORD *)&v69[16] = *(_OWORD *)v62; /*0x100625f44*/
          *(_QWORD *)v69 = 1; /*0x100625f4b*/
          *(_QWORD *)&v69[8] = 1; /*0x100625f56*/
          *(_QWORD *)&v69[40] = v29; /*0x100625f61*/
          *(_OWORD *)&v69[48] = v27; /*0x100625f68*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100625f76*/
          v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x40u, 8u); /*0x100625f85*/
          if ( !v31 ) /*0x100625f8d*/
            alloc::alloc::handle_alloc_error::h450e44845847d219(8, 64); /*0x100626701*/
          *(_QWORD *)(v31 + 56) = *(_QWORD *)&v69[56]; /*0x100625f9a*/
          *(_QWORD *)(v31 + 48) = *(_QWORD *)&v69[48]; /*0x100625fa5*/
          *(_OWORD *)(v31 + 32) = *(_OWORD *)&v69[32]; /*0x100625fbb*/
          *(_OWORD *)(v31 + 16) = *(_OWORD *)&v69[16]; /*0x100625fd1*/
          *(_OWORD *)v31 = *(_OWORD *)v69; /*0x100625fe7*/
          v32 = *(volatile signed __int64 **)&v70[664]; /*0x100625ff2*/
          *(__m128i *)v69 = _mm_loadu_si128((const __m128i *)&v70[664]); /*0x100625ff9*/
          *(_QWORD *)&v70[664] = v31; /*0x100626001*/
          *(_QWORD *)&v70[672] = &off_1018942A0; /*0x10062600f*/
          if ( v32 && !_InterlockedDecrement64(v32) ) /*0x10062601b*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hcaa0ed357369e055(v69); /*0x100626028*/
        }
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x10062603b*/
          (size_t *)v62,
          (__int64)&v70[472]);
        v33 = *(volatile signed __int64 **)(v85 + 136); /*0x100626044*/
        v34 = _InterlockedIncrement64(v33); /*0x10062604b*/
        if ( !((v34 < 0) ^ v21 | (v34 == 0)) ) /*0x100626050*/
        {
          *(_QWORD *)&v69[24] = v33; /*0x100626056*/
          *(_OWORD *)v69 = *(_OWORD *)v62; /*0x10062606b*/
          *(_QWORD *)&v69[16] = *(_QWORD *)&v62[16]; /*0x100626080*/
          *(__m128i *)&v69[32] = _mm_loadu_si128((const __m128i *)&v72[34]); /*0x10062608f*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100626097*/
          v35 = (_OWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x30u, 8u); /*0x1006260a6*/
          if ( !v35 ) /*0x1006260ae*/
            alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48); /*0x1006266c7*/
          v35[2] = *(_OWORD *)&v69[32]; /*0x1006260c6*/
          v35[1] = *(_OWORD *)&v69[16]; /*0x1006260dc*/
          *v35 = *(_OWORD *)v69; /*0x1006260f2*/
          v36 = *(_QWORD *)&v70[648]; /*0x1006260f5*/
          v37 = *(_QWORD *)&v70[656]; /*0x1006260fc*/
          *(_QWORD *)&v70[648] = v35; /*0x100626103*/
          *(_QWORD *)&v70[656] = &off_1018942D0; /*0x100626111*/
          if ( v36 ) /*0x10062611b*/
          {
            if ( *(_QWORD *)v37 ) /*0x10062611d*/
              (*(void (__fastcall **)(__int64))v37)(v36); /*0x100626128*/
            if ( *(_QWORD *)(v37 + 8) ) /*0x10062612a*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10062613a*/
          }
          memcpy(v69, v70, sizeof(v69)); /*0x10062615c*/
          tauri::manager::webview::WebviewManager$LT$R$GT$::prepare_webview::h778d08cca6fe8c60( /*0x10062617c*/
            &v63,
            v33 + 509,
            v85,
            v69,
            v79,
            v28);
          if ( *((_QWORD *)&v72[29] + 1) ) /*0x10062618b*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100626199*/
          if ( *(_QWORD *)&v72[31] ) /*0x1006261af*/
          {
            v38 = *((_QWORD *)&v72[31] + 1); /*0x1006261b1*/
            if ( **((_QWORD **)&v72[31] + 1) ) /*0x1006261b8*/
              (**((void (__fastcall ***)(_QWORD))&v72[31] + 1))(*(_QWORD *)&v72[31]); /*0x1006261c4*/
            if ( *(_QWORD *)(v38 + 8) ) /*0x1006261c6*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006261d8*/
          }
          if ( *(_QWORD *)&v72[32] ) /*0x1006261e7*/
          {
            v39 = *((_QWORD *)&v72[32] + 1); /*0x1006261e9*/
            if ( **((_QWORD **)&v72[32] + 1) ) /*0x1006261f0*/
              (**((void (__fastcall ***)(_QWORD))&v72[32] + 1))(*(_QWORD *)&v72[32]); /*0x1006261fc*/
            if ( *(_QWORD *)(v39 + 8) ) /*0x1006261fe*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100626210*/
          }
          if ( *(_QWORD *)&v72[33] ) /*0x10062621f*/
          {
            v40 = *((_QWORD *)&v72[33] + 1); /*0x100626221*/
            if ( **((_QWORD **)&v72[33] + 1) ) /*0x100626228*/
              (**((void (__fastcall ***)(_QWORD))&v72[33] + 1))(*(_QWORD *)&v72[33]); /*0x100626234*/
            if ( *(_QWORD *)(v40 + 8) ) /*0x100626236*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100626248*/
          }
          if ( *(_QWORD *)&v72[35] ) /*0x100626257*/
          {
            v41 = *((_QWORD *)&v72[35] + 1); /*0x100626259*/
            if ( **((_QWORD **)&v72[35] + 1) ) /*0x100626260*/
              (**((void (__fastcall ***)(_QWORD))&v72[35] + 1))(*(_QWORD *)&v72[35]); /*0x10062626c*/
            if ( *(_QWORD *)(v41 + 8) ) /*0x10062626e*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100626280*/
          }
          if ( *(_QWORD *)&v72[36] && !_InterlockedDecrement64(*(volatile signed __int64 **)&v72[36]) ) /*0x100626291*/
            goto LABEL_96; /*0x100626295*/
          goto LABEL_97; /*0x100626295*/
        }
LABEL_116:
        BUG(); /*0x100626714*/
      }
    }
    else
    {
      v14 = nullptr; /*0x100625cd3*/
      v15 = *(_QWORD *)&v70[600]; /*0x100625cd6*/
      if ( !*(_QWORD *)&v70[600] ) /*0x100625ce0*/
        goto LABEL_46; /*0x100625ce0*/
    }
    v16 = *(_QWORD *)&v70[608]; /*0x100625ce2*/
    if ( **(_QWORD **)&v70[608] ) /*0x100625ce9*/
      (**(void (__fastcall ***)(__int64))&v70[608])(v15); /*0x100625cf4*/
    if ( *(_QWORD *)(v16 + 8) ) /*0x100625cf6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100625d06*/
    goto LABEL_46; /*0x100625d06*/
  }
  v65 = *(_OWORD *)v80; /*0x100625a38*/
  *(_QWORD *)&v66 = *(_QWORD *)&v80[16]; /*0x100625a4d*/
  v64 = 0x8000000000000000LL; /*0x100625a5e*/
  v63 = 3; /*0x100625a65*/
  if ( *((_QWORD *)&v72[29] + 1) ) /*0x100625a7a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100625a88*/
  if ( *(_QWORD *)&v72[31] ) /*0x100625a97*/
  {
    v5 = *((_QWORD *)&v72[31] + 1); /*0x100625a99*/
    if ( **((_QWORD **)&v72[31] + 1) ) /*0x100625aa0*/
      (**((void (__fastcall ***)(_QWORD))&v72[31] + 1))(*(_QWORD *)&v72[31]); /*0x100625aab*/
    if ( *(_QWORD *)(v5 + 8) ) /*0x100625aad*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100625abd*/
  }
  if ( *(_QWORD *)&v72[32] ) /*0x100625acc*/
  {
    v6 = *((_QWORD *)&v72[32] + 1); /*0x100625ace*/
    if ( **((_QWORD **)&v72[32] + 1) ) /*0x100625ad5*/
      (**((void (__fastcall ***)(_QWORD))&v72[32] + 1))(*(_QWORD *)&v72[32]); /*0x100625ae0*/
    if ( *(_QWORD *)(v6 + 8) ) /*0x100625ae2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100625af2*/
  }
  if ( *(_QWORD *)&v72[33] ) /*0x100625b01*/
  {
    v7 = *((_QWORD *)&v72[33] + 1); /*0x100625b03*/
    if ( **((_QWORD **)&v72[33] + 1) ) /*0x100625b0a*/
      (**((void (__fastcall ***)(_QWORD))&v72[33] + 1))(*(_QWORD *)&v72[33]); /*0x100625b15*/
    if ( *(_QWORD *)(v7 + 8) ) /*0x100625b17*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100625b27*/
  }
  if ( *(_QWORD *)&v72[34] ) /*0x100625b36*/
  {
    v8 = *((_QWORD *)&v72[34] + 1); /*0x100625b38*/
    if ( **((_QWORD **)&v72[34] + 1) ) /*0x100625b3f*/
      (**((void (__fastcall ***)(_QWORD))&v72[34] + 1))(*(_QWORD *)&v72[34]); /*0x100625b4a*/
    if ( *(_QWORD *)(v8 + 8) ) /*0x100625b4c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100625b5c*/
  }
  if ( *(_QWORD *)&v72[35] ) /*0x100625b6b*/
  {
    v9 = *((_QWORD *)&v72[35] + 1); /*0x100625b6d*/
    if ( **((_QWORD **)&v72[35] + 1) ) /*0x100625b74*/
      (**((void (__fastcall ***)(_QWORD))&v72[35] + 1))(*(_QWORD *)&v72[35]); /*0x100625b7f*/
    if ( *(_QWORD *)(v9 + 8) ) /*0x100625b81*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100625b91*/
  }
  if ( *(_QWORD *)&v72[36] && !_InterlockedDecrement64(*(volatile signed __int64 **)&v72[36]) ) /*0x100625ba6*/
LABEL_96:
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hcaa0ed357369e055(&v72[36]); /*0x100626297*/
LABEL_97:
  v86 = v64; /*0x10062629f*/
  v87 = v65; /*0x1006262b8*/
  v88 = v66; /*0x1006262ce*/
  v89 = v67; /*0x1006262e4*/
  if ( v63 == 3 ) /*0x1006262ec*/
  {
    v81 = v86; /*0x1006262f6*/
    v82 = v87; /*0x1006262fd*/
    v83 = v88; /*0x100626310*/
    v84 = v89; /*0x100626320*/
    core::ptr::drop_in_place$LT$tauri..window..WindowBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::haf185167370f5223(__dst); /*0x10062632b*/
  }
  else
  {
    memcpy(&v69[56], v68, 0x270u); /*0x100626348*/
    *(_QWORD *)&v69[8] = v86; /*0x100626355*/
    *(_OWORD *)&v69[16] = v87; /*0x10062635c*/
    *(_OWORD *)&v69[32] = v88; /*0x100626372*/
    *(_QWORD *)&v69[48] = v89; /*0x100626388*/
    memcpy(v62, __dst, sizeof(v62)); /*0x1006263a5*/
    *(_QWORD *)v69 = v63; /*0x1006263aa*/
    tauri::window::WindowBuilder$LT$R$C$M$GT$::build_internal::h6665e62318d6e30b(v70, v62, v69); /*0x1006263c2*/
    v86 = *(_QWORD *)&v70[8]; /*0x1006263d5*/
    v87 = *(_OWORD *)&v70[16]; /*0x1006263e0*/
    v88 = *(_OWORD *)&v70[32]; /*0x1006263f6*/
    v89 = *(_QWORD *)&v70[48]; /*0x10062640c*/
    if ( *(_QWORD *)v70 == 3 ) /*0x100626414*/
    {
      v81 = v86; /*0x10062641e*/
      v82 = v87; /*0x100626425*/
      v83 = v88; /*0x100626438*/
      v84 = v89; /*0x100626448*/
    }
    else
    {
      memcpy(v68, &v70[56], 0x1E0u); /*0x100626464*/
      v64 = v86; /*0x100626471*/
      v65 = v87; /*0x100626478*/
      v66 = v88; /*0x10062648e*/
      v67 = v89; /*0x1006264a4*/
      v63 = *(_QWORD *)v70; /*0x1006264ab*/
      tauri::window::Window$LT$R$GT$::webviews::h3d3af39015cdcad2(v70, &v63); /*0x1006264c0*/
      v42 = *(_QWORD *)&v70[16]; /*0x1006264c5*/
      if ( !*(_QWORD *)&v70[16] ) /*0x1006264cf*/
        core::option::unwrap_failed::h44626cade04bbf1e((__int64)&off_101893F88); /*0x10062670f*/
      v43 = *(_QWORD *)&v70[8]; /*0x1006264d5*/
      v44 = *(_QWORD *)&v70[8]; /*0x1006264e3*/
      _$LT$tauri..webview..Webview$LT$R$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hb2791fd6dba8272e(v69); /*0x1006264e6*/
      v45 = v42 + 1; /*0x1006264f2*/
      v46 = v43; /*0x1006264f5*/
      while ( v45 != 1 ) /*0x100626504*/
      {
        --v45; /*0x10062650d*/
        core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h5bd7b95035dcc5b0(v46, v44); /*0x100626510*/
        v46 += 360; /*0x100626515*/
      }
      if ( *(_QWORD *)v70 ) /*0x100626524*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100626535*/
      v47 = v63; /*0x10062653a*/
      v81 = v64; /*0x100626548*/
      v82 = v65; /*0x10062654f*/
      v83 = v66; /*0x100626562*/
      v84 = v67; /*0x100626572*/
      memcpy(v59, v68, sizeof(v59)); /*0x100626589*/
      memcpy(v60, v69, sizeof(v60)); /*0x1006265a1*/
      if ( v63 != 3 ) /*0x1006265aa*/
      {
        v77 = v84; /*0x10062662c*/
        v54 = *((_QWORD *)&v83 + 1); /*0x100626633*/
        v55 = v83; /*0x10062663e*/
        v76 = v83; /*0x100626642*/
        v56 = *((_QWORD *)&v82 + 1); /*0x100626649*/
        v57 = v81; /*0x100626654*/
        v58 = v82; /*0x10062665b*/
        v75 = v82; /*0x100626662*/
        v74 = v81; /*0x100626669*/
        a1[6] = v84; /*0x100626670*/
        a1[5] = v54; /*0x100626674*/
        a1[4] = v55; /*0x100626678*/
        a1[3] = v56; /*0x10062667c*/
        a1[2] = v58; /*0x100626680*/
        a1[1] = v57; /*0x100626684*/
        memcpy(a1 + 7, v59, 0x1E0u); /*0x100626698*/
        memcpy(a1 + 67, v60, 0x168u); /*0x1006266b0*/
        *a1 = v47; /*0x1006266b5*/
        return a1; /*0x1006266b8*/
      }
    }
  }
  v77 = v84; /*0x1006265b0*/
  v48 = *((_QWORD *)&v83 + 1); /*0x1006265b7*/
  v49 = v83; /*0x1006265c2*/
  v76 = v83; /*0x1006265c6*/
  v50 = *((_QWORD *)&v82 + 1); /*0x1006265cd*/
  v51 = v81; /*0x1006265d8*/
  v52 = v82; /*0x1006265df*/
  v75 = v82; /*0x1006265e6*/
  v74 = v81; /*0x1006265ed*/
  a1[6] = v84; /*0x1006265f4*/
  a1[5] = v48; /*0x1006265f8*/
  a1[4] = v49; /*0x1006265fc*/
  a1[3] = v50; /*0x100626600*/
  a1[2] = v52; /*0x100626604*/
  a1[1] = v51; /*0x100626608*/
  *a1 = 3; /*0x10062660c*/
  return a1; /*0x100626616*/
}