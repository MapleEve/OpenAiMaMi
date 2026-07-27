// __ZN13codexmate_lib4core6skills21scan_skills_recursive @ 0x1003506a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::skills::scan_skills_recursive::h6c89c36742227cdf(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        signed __int64 a4,
        _QWORD *a5)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 v20; // r13
  __int64 v21; // r13
  __int64 v22; // rsi
  _QWORD *v23; // r13
  __int64 v24; // r14
  _QWORD __src[132]; // [rsp+0h] [rbp-1270h] BYREF
  volatile signed __int64 *__dst[132]; // [rsp+420h] [rbp-E50h] BYREF
  __int64 v27; // [rsp+840h] [rbp-A30h] BYREF
  char v28; // [rsp+848h] [rbp-A28h]
  __int64 v29; // [rsp+C68h] [rbp-608h]
  __int64 v30; // [rsp+1090h] [rbp-1E0h]
  char v31; // [rsp+1098h] [rbp-1D8h]
  _QWORD v32[23]; // [rsp+10A0h] [rbp-1D0h] BYREF
  _BYTE v33[2]; // [rsp+1158h] [rbp-118h] BYREF
  __int16 v34; // [rsp+115Ah] [rbp-116h]
  __int64 v35; // [rsp+1160h] [rbp-110h]
  __int64 v36; // [rsp+1168h] [rbp-108h]
  __int64 v37; // [rsp+11F0h] [rbp-80h] BYREF
  __int64 v38; // [rsp+11F8h] [rbp-78h]
  __int64 v39; // [rsp+1200h] [rbp-70h]
  __int64 v40; // [rsp+1208h] [rbp-68h] BYREF
  __int64 v41; // [rsp+1210h] [rbp-60h]
  __int64 v42; // [rsp+1218h] [rbp-58h]
  signed __int64 v43; // [rsp+1220h] [rbp-50h]
  __int64 v44; // [rsp+1228h] [rbp-48h]
  _QWORD *v45; // [rsp+1230h] [rbp-40h]
  __int64 v46; // [rsp+1238h] [rbp-38h]
  __int64 v47; // [rsp+1240h] [rbp-30h]

  __src[73] = 0; /*0x1003506b4*/
  v43 = a4; /*0x1003506c6*/
  v44 = a3; /*0x1003506ca*/
  std::sys::fs::read_dir::h768dda1fe4336014(&v27, a1, a2); /*0x1003506db*/
  result = v27; /*0x1003506e7*/
  if ( v28 == 2 ) /*0x1003506f1*/
  {
    if ( (v27 & 3) == 1 ) /*0x1003506fb*/
    {
      v7 = v27 - 1; /*0x100350701*/
      v8 = *(_QWORD *)(v27 - 1); /*0x100350705*/
      v9 = *(_QWORD *)(v27 + 7); /*0x100350709*/
      if ( *(_QWORD *)v9 ) /*0x10035070d*/
        (*(void (__fastcall **)(__int64))v9)(v8); /*0x100350718*/
      v10 = *(_QWORD *)(v9 + 8); /*0x10035071a*/
      if ( v10 ) /*0x100350721*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16)); /*0x10035072a*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 24, 8); /*0x10035074d*/
    }
  }
  else
  {
    v45 = a5; /*0x100350752*/
    v27 = 0; /*0x100350756*/
    v29 = 0; /*0x100350761*/
    v30 = result; /*0x10035076c*/
    v31 = v28; /*0x100350773*/
    while ( 1 ) /*0x100350796*/
    {
      _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb16283f610dc29bd( /*0x100350796*/
        __src,
        &v27);
      if ( !__src[0] ) /*0x1003507a3*/
        break; /*0x1003507a3*/
      memcpy(__dst, __src, sizeof(__dst)); /*0x1003507b4*/
      std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v40, __dst); /*0x1003507c0*/
      v11 = v41; /*0x1003507c5*/
      v12 = v42; /*0x1003507c9*/
      v13 = std::path::Path::file_name::hf6c2daad91e50ebf(v41, v42); /*0x1003507d3*/
      if ( !v13 /*0x100350809*/
        || (core::str::converts::from_utf8::hb32deb9559450f6e(v33, v13, v14), v33[0])
        || !v36
        || *(_BYTE *)v35 != 46 )
      {
        std::fs::DirEntry::file_type::hdd298e01714fd423(v33, __dst); /*0x10035081a*/
        if ( v33[0] == 1 ) /*0x100350826*/
        {
          if ( (v35 & 3) == 1 ) /*0x100350837*/
          {
            v15 = v35 - 1; /*0x10035083d*/
            v16 = *(_QWORD *)(v35 - 1); /*0x100350841*/
            v17 = *(_QWORD *)(v35 + 7); /*0x100350845*/
            if ( *(_QWORD *)v17 ) /*0x100350849*/
              (*(void (__fastcall **)(__int64))v17)(v16); /*0x100350855*/
            v18 = *(_QWORD *)(v17 + 8); /*0x100350857*/
            if ( v18 ) /*0x10035085e*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v18, *(_QWORD *)(v17 + 16)); /*0x100350867*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 24, 8); /*0x100350879*/
          }
        }
        else if ( (v34 & 0xF000) == 0x4000 ) /*0x1003508b1*/
        {
          std::path::Path::_join::hb1a495d4f06b13b8(&v37, v11, v12, &unk_1015E3AD8, 8); /*0x1003508d9*/
          v19 = v38; /*0x1003508de*/
          v20 = v39; /*0x1003508e2*/
          std::sys::fs::metadata::h32fa16d3052ea535(v33, v38, v39); /*0x1003508f3*/
          if ( v33[0] ) /*0x1003508ff*/
          {
            if ( (v35 & 3) == 1 ) /*0x100350910*/
            {
              v46 = v35 - 1; /*0x100350916*/
              v47 = *(_QWORD *)(v35 - 1); /*0x10035091e*/
              v21 = *(_QWORD *)(v35 + 7); /*0x100350922*/
              if ( *(_QWORD *)v21 ) /*0x100350926*/
                (*(void (__fastcall **)(__int64))v21)(v47); /*0x100350933*/
              v22 = *(_QWORD *)(v21 + 8); /*0x100350939*/
              if ( v22 ) /*0x100350940*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v22, *(_QWORD *)(v21 + 16)); /*0x100350946*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, 24, 8); /*0x100350959*/
            }
            codexmate_lib::core::skills::scan_skills_recursive::h6c89c36742227cdf(v11, v12, v44, v43, v45); /*0x100350970*/
          }
          else
          {
            codexmate_lib::core::skills::load_skill_summary::h78677cb906cb96ee(v32, v19, v20, v44, v43); /*0x10035098c*/
            if ( LODWORD(v32[0]) != 2 ) /*0x100350998*/
            {
              v23 = v45; /*0x10035099a*/
              v24 = v45[2]; /*0x10035099e*/
              if ( v24 == *v45 ) /*0x1003509a6*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h76a7ea4dd34e84eb(v45); /*0x1003509ab*/
              memcpy((void *)(v23[1] + 184 * v24), v32, 0xB8u); /*0x1003509c7*/
              v23[2] = v24 + 1; /*0x1003509cf*/
            }
          }
          if ( v37 ) /*0x1003509e1*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v37, 1); /*0x1003509eb*/
        }
      }
      if ( v40 ) /*0x100350a07*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v40, 1); /*0x100350a11*/
      if ( !_InterlockedDecrement64(__dst[0]) ) /*0x100350a1d*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(__dst); /*0x100350a2a*/
    }
    return core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hc0ae01a13512ceae(&v27); /*0x100350a3b*/
  }
  return result; /*0x10035073c*/
}