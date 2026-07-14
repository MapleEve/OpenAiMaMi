// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND RelayManager_bootstrap node 0x10068fab0 depth=1
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::cleanup::h242b88d72bef9392(
        __int64 a1,
        _QWORD *a2,
        double a3)
{
  __int64 v4; // r15
  __int64 v5; // r12
  void *v6; // r13
  size_t v7; // r12
  __int64 v8; // r15
  void *v9; // r15
  size_t v10; // r14
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rsi
  void *v17; // r15
  size_t v18; // r12
  __int64 v19; // r13
  char v20; // r13
  void *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // r12
  void (__fastcall *v27)(__int64); // rax
  __int64 v28; // rsi
  void *v29; // r15
  size_t v30; // r12
  __int64 v31; // r13
  void *v32; // r15
  size_t v33; // r14
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // r15
  __int128 v39; // kr00_16
  __int64 v40; // r14
  __int64 v41; // r15
  __int64 v42; // rsi
  __int64 v43; // rsi
  void *v44; // rdi
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // r13
  __int64 v49; // rsi
  __int64 v50; // r15
  __int64 v51; // r12
  __int64 v52; // rsi
  __int128 v53; // kr10_16
  __int128 v54; // kr30_16
  __int128 v55; // xmm0
  __int64 v56; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // [rsp+0h] [rbp-160h] BYREF
  void *v61; // [rsp+8h] [rbp-158h]
  size_t v62; // [rsp+10h] [rbp-150h]
  __int64 v63; // [rsp+18h] [rbp-148h]
  _OWORD v64[9]; // [rsp+20h] [rbp-140h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-A8h] BYREF
  void *__src; // [rsp+C0h] [rbp-A0h]
  size_t __n; // [rsp+C8h] [rbp-98h]
  __int128 v68; // [rsp+D0h] [rbp-90h] BYREF
  __int128 v69; // [rsp+E0h] [rbp-80h]
  __int128 v70; // [rsp+F0h] [rbp-70h]
  __int128 v71; // [rsp+100h] [rbp-60h]
  __int64 v72; // [rsp+110h] [rbp-50h]
  __int64 v73; // [rsp+118h] [rbp-48h] BYREF
  __int128 v74; // [rsp+120h] [rbp-40h] BYREF
  __int64 v75; // [rsp+130h] [rbp-30h]

  v4 = a2[73]; /*0x10068faca*/
  v5 = a2[74]; /*0x10068fad1*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v60, v4, v5, "router-unlock-auth-marker.jsonaimami_router_unlock_auth", 30); /*0x10068faf2*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v65, v4, v5, &anon_5d4536734f60d7d1ae09e451c2f7649c_827, 30); /*0x10068fb11*/
  codexmate_lib::core::relay::router_unlock_auth::read_marker::h1f857b739e1ec08a(v64, v4, v5); /*0x10068fb23*/
  if ( __OFSUB__(0, *(_QWORD *)&v64[0]) ) /*0x10068fb2a*/
  {
    if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h2cf0fc5daf7e3c4d((__int64)a2) != 1 ) /*0x10068fb41*/
    {
      *(_BYTE *)(a1 + 8) = 0; /*0x10068fe56*/
LABEL_75:
      *(_QWORD *)a1 = 10; /*0x100690436*/
      goto LABEL_76; /*0x100690436*/
    }
    v6 = __src; /*0x10068fb47*/
    v7 = __n; /*0x10068fb4e*/
    std::sys::fs::metadata::h32fa16d3052ea535(v64, __src, __n); /*0x10068fb62*/
    v8 = *(_QWORD *)&v64[0]; /*0x10068fb67*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x10068fb78*/
      *(_QWORD *)&v64[0],
      *((_QWORD *)&v64[0] + 1));
    if ( v8 ) /*0x10068fb80*/
    {
      v9 = (void *)a2[4]; /*0x10068fb86*/
      v10 = a2[5]; /*0x10068fb8a*/
      std::sys::fs::metadata::h32fa16d3052ea535(v64, v9, v10); /*0x10068fb9b*/
      v11 = *(_QWORD *)&v64[0]; /*0x10068fba0*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x10068fbb1*/
        *(_QWORD *)&v64[0],
        *((_QWORD *)&v64[0] + 1));
      if ( !v11 ) /*0x10068fbb9*/
      {
        v12 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v9, v10); /*0x10068fbc5*/
        if ( v12 ) /*0x10068fbcd*/
        {
          *(_QWORD *)&v74 = v12; /*0x10068fbd3*/
          *(_QWORD *)&v68 = &v74; /*0x10068fbdb*/
          *((_QWORD *)&v68 + 1) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10068fbe9*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v64, &unk_10122DB41, &v68); /*0x10068fc05*/
          v68 = v64[0]; /*0x10068fc18*/
          *(_QWORD *)&v69 = *(_QWORD *)&v64[1]; /*0x10068fc2d*/
          if ( (v74 & 3) == 1 ) /*0x10068fc3d*/
          {
            v13 = v74 - 1; /*0x10068fc3f*/
            v14 = *(_QWORD *)(v74 - 1); /*0x10068fc43*/
            v15 = *(_QWORD *)(v74 + 7); /*0x10068fc47*/
            if ( *(_QWORD *)v15 ) /*0x10068fc4b*/
              (*(void (__fastcall **)(__int64))v15)(v14); /*0x10068fc57*/
            v16 = *(_QWORD *)(v15 + 8); /*0x10068fc59*/
            if ( v16 ) /*0x10068fc61*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16)); /*0x10068fc6b*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 24, 8); /*0x10068fc7d*/
          }
          *(_QWORD *)(a1 + 24) = v69; /*0x10068fc86*/
          *(_OWORD *)(a1 + 8) = v68; /*0x10068fc9c*/
          *(_QWORD *)a1 = 9; /*0x10068fca0*/
          goto LABEL_76; /*0x10068fca7*/
        }
      }
      goto LABEL_74; /*0x10068fbcd*/
    }
    std::fs::read::inner::h6a30c15c40add28b(&v68, v6, v7); /*0x100690081*/
    v38 = v68; /*0x10069008d*/
    if ( (_QWORD)v68 == 0x8000000000000000LL ) /*0x1006900a1*/
    {
      v73 = *((_QWORD *)&v68 + 1); /*0x1006900a7*/
      *(_QWORD *)&v74 = &v73; /*0x1006900af*/
      *((_QWORD *)&v74 + 1) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1006900ba*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v64, &unk_10122DA4D, &v74); /*0x1006900d0*/
      v39 = v64[0]; /*0x1006900dc*/
      v40 = *(_QWORD *)&v64[1]; /*0x1006900e3*/
      if ( (v73 & 3) == 1 ) /*0x1006900f6*/
      {
        v63 = v73 - 1; /*0x1006900fc*/
        v72 = *(_QWORD *)(v73 - 1); /*0x100690107*/
        v41 = *(_QWORD *)(v73 + 7); /*0x10069010b*/
        if ( *(_QWORD *)v41 ) /*0x10069010f*/
          (*(void (__fastcall **)(__int64))v41)(v72); /*0x10069011b*/
        v42 = *(_QWORD *)(v41 + 8); /*0x100690121*/
        if ( v42 ) /*0x100690128*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v42, *(_QWORD *)(v41 + 16)); /*0x10069012e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, 24, 8); /*0x100690144*/
      }
      *(_OWORD *)(a1 + 8) = v39; /*0x100690149*/
      *(_QWORD *)(a1 + 24) = v40; /*0x100690151*/
      *(_QWORD *)a1 = 9; /*0x100690155*/
    }
    else
    {
      v45 = *((_QWORD *)&v68 + 1); /*0x1006901c9*/
      v46 = codexmate_lib::core::relay::atomic_write::write_atomic::h7c1a4e98b44038af( /*0x1006901cc*/
              (_QWORD **)a2[4],
              a2[5],
              *((__int64 *)&v68 + 1),
              v69,
              a3);
      if ( !v46 ) /*0x1006901d4*/
      {
        v56 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v6, v7); /*0x100690410*/
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h15981c1e92d1400e(v56); /*0x100690418*/
        if ( v38 ) /*0x100690420*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v38, 1); /*0x10069042d*/
LABEL_74:
        *(_BYTE *)(a1 + 8) = 1; /*0x100690432*/
        goto LABEL_75; /*0x100690432*/
      }
      *(_QWORD *)&v74 = v46; /*0x1006901da*/
      *(_QWORD *)&v68 = &v74; /*0x1006901e2*/
      *((_QWORD *)&v68 + 1) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1006901f0*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v64, &unk_10122DAAA, &v68); /*0x10069020c*/
      v68 = v64[0]; /*0x10069021f*/
      *(_QWORD *)&v69 = *(_QWORD *)&v64[1]; /*0x100690234*/
      if ( (v74 & 3) == 1 ) /*0x100690244*/
      {
        v72 = v74 - 1; /*0x10069024a*/
        v47 = *(_QWORD *)(v74 - 1); /*0x10069024e*/
        v48 = *(_QWORD *)(v74 + 7); /*0x100690252*/
        if ( *(_QWORD *)v48 ) /*0x100690256*/
          (*(void (__fastcall **)(__int64))v48)(v47); /*0x100690262*/
        v49 = *(_QWORD *)(v48 + 8); /*0x100690264*/
        if ( v49 ) /*0x10069026b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v49, *(_QWORD *)(v48 + 16)); /*0x100690274*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, 24, 8); /*0x100690287*/
      }
      *(_QWORD *)(a1 + 24) = v69; /*0x100690290*/
      *(_OWORD *)(a1 + 8) = v68; /*0x1006902a6*/
      *(_QWORD *)a1 = 9; /*0x1006902aa*/
      if ( v38 ) /*0x1006902b4*/
      {
        v37 = v45; /*0x1006902bf*/
        v36 = v38; /*0x1006902c2*/
LABEL_39:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v36, 1); /*0x10069006a*/
      }
    }
LABEL_76:
    v43 = v65; /*0x10069043d*/
    if ( v65 ) /*0x100690447*/
    {
      v44 = __src; /*0x100690449*/
LABEL_78:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, v43, 1); /*0x100690455*/
    }
    goto LABEL_79; /*0x100690455*/
  }
  v71 = v64[3]; /*0x10068fcbe*/
  v70 = v64[2]; /*0x10068fcd4*/
  v69 = v64[1]; /*0x10068fcea*/
  v68 = v64[0]; /*0x10068fd03*/
  switch ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h2cf0fc5daf7e3c4d((__int64)a2) ) /*0x10068fd23*/
  {
    case 0u: /*0x10068fd23*/
      if ( !BYTE8(v71) ) /*0x10068fd29*/
        goto LABEL_16; /*0x10068fd29*/
      v17 = __src; /*0x10068fd2b*/
      v18 = __n; /*0x10068fd32*/
      std::sys::fs::metadata::h32fa16d3052ea535(v64, __src, __n); /*0x10068fd46*/
      v19 = *(_QWORD *)&v64[0]; /*0x10068fd4b*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x10068fd5c*/
        *(_QWORD *)&v64[0],
        *((_QWORD *)&v64[0] + 1));
      if ( v19 ) /*0x10068fd64*/
        goto LABEL_16; /*0x10068fd64*/
      std::fs::read::inner::h6a30c15c40add28b(&v74, v17, v18); /*0x10069035e*/
      v53 = v74; /*0x100690378*/
      if ( (_QWORD)v74 == 0x8000000000000000LL ) /*0x100690378*/
        goto LABEL_71; /*0x100690378*/
      v59 = codexmate_lib::core::relay::atomic_write::write_atomic::h7c1a4e98b44038af( /*0x1006904c5*/
              (_QWORD **)a2[4],
              a2[5],
              *((__int64 *)&v74 + 1),
              v75,
              a3);
      if ( !v59 ) /*0x1006904cd*/
        goto LABEL_88; /*0x1006904cd*/
      codexmate_lib::core::relay::router_unlock_auth::cleanup::_$u7b$$u7b$closure$u7d$$u7d$::hf25b160e54244444(v64, v59); /*0x1006904d9*/
      goto LABEL_86; /*0x1006904d9*/
    case 1u: /*0x10068fd23*/
      if ( BYTE8(v71) ) /*0x10068fe63*/
      {
        v29 = __src; /*0x10068fe65*/
        v30 = __n; /*0x10068fe6c*/
        std::sys::fs::metadata::h32fa16d3052ea535(v64, __src, __n); /*0x10068fe80*/
        v31 = *(_QWORD *)&v64[0]; /*0x10068fe85*/
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x10068fe96*/
          *(_QWORD *)&v64[0],
          *((_QWORD *)&v64[0] + 1));
        if ( !v31 ) /*0x10068fe9e*/
        {
          std::fs::read::inner::h6a30c15c40add28b(&v74, v29, v30); /*0x100690323*/
          v53 = v74; /*0x10069032c*/
          if ( (_QWORD)v74 == 0x8000000000000000LL ) /*0x10069033d*/
          {
LABEL_71:
            codexmate_lib::core::relay::router_unlock_auth::cleanup::_$u7b$$u7b$closure$u7d$$u7d$::h2cf74d414d4d5dd3( /*0x10069037e*/
              v64,
              *((_QWORD *)&v53 + 1));
            v54 = v64[1]; /*0x100690394*/
            *(_OWORD *)(a1 + 80) = v64[5]; /*0x1006903ad*/
            *(_OWORD *)(a1 + 64) = v64[4]; /*0x1006903c3*/
            *(_OWORD *)(a1 + 48) = v64[3]; /*0x1006903d9*/
            *(_OWORD *)(a1 + 32) = v64[2]; /*0x1006903ef*/
            v55 = v64[0]; /*0x1006903f3*/
            *(_OWORD *)(a1 + 16) = v54; /*0x1006903fa*/
            *(_OWORD *)a1 = v55; /*0x100690402*/
          }
          else
          {
            v58 = codexmate_lib::core::relay::atomic_write::write_atomic::h7c1a4e98b44038af( /*0x10069049b*/
                    (_QWORD **)a2[4],
                    a2[5],
                    *((__int64 *)&v74 + 1),
                    v75,
                    a3);
            if ( !v58 ) /*0x1006904a3*/
            {
LABEL_88:
              v20 = 1; /*0x10069050e*/
              if ( (_QWORD)v53 ) /*0x100690514*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v53 + 1), v53, 1); /*0x100690525*/
              goto LABEL_17; /*0x10069052a*/
            }
            codexmate_lib::core::relay::router_unlock_auth::cleanup::_$u7b$$u7b$closure$u7d$$u7d$::h9b285cfcb48bb20e( /*0x1006904af*/
              v64,
              v58);
LABEL_86:
            qmemcpy((void *)a1, v64, 0x60u); /*0x1006904ed*/
            if ( (_QWORD)v53 ) /*0x1006904f3*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v53 + 1), v53, 1); /*0x100690504*/
          }
LABEL_35:
          if ( (_QWORD)v68 ) /*0x100690041*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v68 + 1), v68, 1); /*0x10069004f*/
          v36 = *((_QWORD *)&v69 + 1); /*0x100690054*/
          if ( *((_QWORD *)&v69 + 1) ) /*0x10069005b*/
          {
            v37 = v70; /*0x100690061*/
            goto LABEL_39; /*0x100690061*/
          }
          goto LABEL_76; /*0x10069005b*/
        }
      }
      v32 = (void *)a2[4]; /*0x10068fea4*/
      v33 = a2[5]; /*0x10068fea8*/
      std::sys::fs::metadata::h32fa16d3052ea535(v64, v32, v33); /*0x10068feb9*/
      v34 = *(_QWORD *)&v64[0]; /*0x10068febe*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x10068fecf*/
        *(_QWORD *)&v64[0],
        *((_QWORD *)&v64[0] + 1));
      v20 = 1; /*0x10068fed4*/
      if ( !v34 ) /*0x10068feda*/
      {
        v35 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v32, v33); /*0x10068fee6*/
        if ( v35 ) /*0x10068feee*/
        {
          v73 = v35; /*0x10068fef4*/
          *(_QWORD *)&v74 = &v73; /*0x10068fefc*/
          *((_QWORD *)&v74 + 1) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10068ff07*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v64, &unk_10122DAE0, &v74); /*0x10068ff1d*/
          v74 = v64[0]; /*0x10068ff30*/
          v75 = *(_QWORD *)&v64[1]; /*0x10068ff3f*/
          if ( (v73 & 3) != 1 ) /*0x10068ff4f*/
            goto LABEL_31; /*0x10068ff4f*/
          v24 = v73 - 1; /*0x10069052f*/
          v25 = *(_QWORD *)(v73 - 1); /*0x100690533*/
          v26 = *(_QWORD *)(v73 + 7); /*0x100690537*/
          v27 = *(void (__fastcall **)(__int64))v26; /*0x10069053b*/
          if ( *(_QWORD *)v26 ) /*0x10069053b*/
LABEL_21:
            v27(v25); /*0x10068fe23*/
LABEL_22:
          v28 = *(_QWORD *)(v26 + 8); /*0x10068fe28*/
          if ( v28 ) /*0x10068fe30*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v28, *(_QWORD *)(v26 + 16)); /*0x10068fe3a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, 24, 8); /*0x10068fe4c*/
          goto LABEL_31; /*0x10068fe51*/
        }
      }
LABEL_17:
      v21 = __src; /*0x10068fd6d*/
      v22 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n); /*0x10068fd7e*/
      if ( (v22 & 3) == 1 ) /*0x10068fd8b*/
      {
        v72 = v22 - 1; /*0x1006902d0*/
        v50 = *(_QWORD *)(v22 - 1); /*0x1006902d4*/
        v51 = *(_QWORD *)(v22 + 7); /*0x1006902d8*/
        if ( *(_QWORD *)v51 ) /*0x1006902dc*/
          (*(void (__fastcall **)(__int64))v51)(v50); /*0x1006902e8*/
        v52 = *(_QWORD *)(v51 + 8); /*0x1006902ea*/
        if ( v52 ) /*0x1006902f2*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v52, *(_QWORD *)(v51 + 16)); /*0x1006902fc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, 24, 8); /*0x10069030f*/
      }
      v23 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v61, v62); /*0x10068fd9f*/
      if ( v23 ) /*0x10068fda7*/
      {
        v73 = v23; /*0x10068fdad*/
        *(_QWORD *)&v74 = &v73; /*0x10068fdb5*/
        *((_QWORD *)&v74 + 1) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10068fdc0*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v64, &unk_10122DB74, &v74); /*0x10068fdd6*/
        v74 = v64[0]; /*0x10068fde9*/
        v75 = *(_QWORD *)&v64[1]; /*0x10068fdf8*/
        if ( (v73 & 3) != 1 ) /*0x10068fe08*/
        {
LABEL_31:
          *(_QWORD *)(a1 + 24) = v75; /*0x10068ff55*/
          *(_OWORD *)(a1 + 8) = v74; /*0x10068ff69*/
          *(_QWORD *)a1 = 9; /*0x10068ff6d*/
          goto LABEL_35; /*0x10068ff74*/
        }
        v24 = v73 - 1; /*0x10068fe0e*/
        v25 = *(_QWORD *)(v73 - 1); /*0x10068fe12*/
        v26 = *(_QWORD *)(v73 + 7); /*0x10068fe16*/
        v27 = *(void (__fastcall **)(__int64))v26; /*0x10068fe1a*/
        if ( *(_QWORD *)v26 ) /*0x10068fe1a*/
          goto LABEL_21; /*0x10068fe21*/
        goto LABEL_22; /*0x10068fe21*/
      }
      *(_BYTE *)(a1 + 8) = v20; /*0x100690161*/
      *(_QWORD *)a1 = 10; /*0x100690165*/
      if ( (_QWORD)v68 ) /*0x100690176*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v68 + 1), v68, 1); /*0x100690184*/
      if ( *((_QWORD *)&v69 + 1) ) /*0x100690190*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, *((_QWORD *)&v69 + 1), 1); /*0x10069019b*/
      v43 = v65; /*0x1006901a0*/
      if ( v65 ) /*0x1006901aa*/
      {
        v44 = v21; /*0x1006901b5*/
        goto LABEL_78; /*0x1006901b8*/
      }
LABEL_79:
      if ( v60 ) /*0x100690464*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v60, 1); /*0x100690472*/
      return a1;
    case 2u: /*0x10068fd23*/
LABEL_16:
      v20 = 0; /*0x10068fd6a*/
      goto LABEL_17; /*0x10068fd6a*/
    case 3u: /*0x10068fd23*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10068ff87*/
      {
        *(_QWORD *)&v64[3] = 2; /*0x10068ff8d*/
        *((_QWORD *)&v64[3] + 1) = &unk_1012D132A; /*0x10068ff9f*/
        *(_QWORD *)&v64[4] = 46; /*0x10068ffa6*/
        *(_QWORD *)&v64[5] = &unk_1012D12C8; /*0x10068ffb8*/
        *((_QWORD *)&v64[5] + 1) = 197; /*0x10068ffbf*/
        *(_QWORD *)&v64[0] = 0; /*0x10068ffca*/
        *((_QWORD *)&v64[0] + 1) = &unk_1012D132A; /*0x10068ffd5*/
        v64[1] = 0x2Eu; /*0x10068ffdc*/
        *(_QWORD *)&v64[2] = "src/core/relay/router_unlock_auth.rs"; /*0x10068fff9*/
        *((_QWORD *)&v64[2] + 1) = 36; /*0x100690000*/
        *((_QWORD *)&v64[4] + 1) = 0xB400000001LL; /*0x100690015*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v74, v64); /*0x100690027*/
      }
      *(_BYTE *)(a1 + 8) = 0; /*0x10069002c*/
      *(_QWORD *)a1 = 10; /*0x100690030*/
      goto LABEL_35; /*0x100690030*/
  }
}