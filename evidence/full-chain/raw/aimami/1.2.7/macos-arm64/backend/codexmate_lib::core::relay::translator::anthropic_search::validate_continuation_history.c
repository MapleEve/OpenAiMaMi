// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_search::validate_continuation_history::hdcc9eb228a8967b0; addr: 0x100ac93e0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:20Z
char *__fastcall codexmate_lib::core::relay::translator::anthropic_search::validate_continuation_history::hdcc9eb228a8967b0(
        __int64 a1,
        unsigned __int64 a2,
        char a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  _BYTE *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE *v15; // rdx
  _BYTE *v16; // rbx
  _BYTE *v17; // r12
  _BYTE *v18; // rax
  _BYTE *v19; // rdx
  unsigned __int64 v20; // rbx
  __int64 v21; // r13
  char *v22; // rbx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  __int64 v26; // r13
  void *v27; // rax
  void *v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // r13
  __int64 v32; // r9
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // r8
  unsigned __int64 v39; // rdi
  __int64 i; // rcx
  __int64 v41; // r14
  __int64 v42; // rbx
  __int64 v43; // r15
  size_t v44; // rdx
  __int64 v45; // r12
  int v46; // eax
  char v47; // al
  __int64 v48; // r15
  __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned __int16 v52; // dx
  _QWORD v54[6]; // [rsp+0h] [rbp-180h] BYREF
  size_t __n; // [rsp+30h] [rbp-150h]
  __int64 v56; // [rsp+38h] [rbp-148h]
  __int64 v57; // [rsp+40h] [rbp-140h]
  _BYTE *v58; // [rsp+48h] [rbp-138h]
  __int64 v59; // [rsp+50h] [rbp-130h]
  __int64 v60; // [rsp+58h] [rbp-128h]
  __int64 v61; // [rsp+60h] [rbp-120h]
  _QWORD v62[2]; // [rsp+68h] [rbp-118h] BYREF
  __int64 v63; // [rsp+78h] [rbp-108h]
  unsigned __int64 v64; // [rsp+80h] [rbp-100h] BYREF
  unsigned __int64 v65; // [rsp+88h] [rbp-F8h]
  __int64 v66; // [rsp+90h] [rbp-F0h]
  _QWORD v67[3]; // [rsp+98h] [rbp-E8h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-D0h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-C8h]
  __int64 v70; // [rsp+C0h] [rbp-C0h]
  __int64 v71; // [rsp+C8h] [rbp-B8h]
  __int64 v72; // [rsp+D0h] [rbp-B0h]
  __int64 v73; // [rsp+D8h] [rbp-A8h] BYREF
  _BYTE *v74; // [rsp+E0h] [rbp-A0h]
  unsigned __int64 v75; // [rsp+E8h] [rbp-98h]
  unsigned __int64 v76; // [rsp+F0h] [rbp-90h]
  __int64 v77; // [rsp+F8h] [rbp-88h]
  __int64 v78; // [rsp+100h] [rbp-80h]
  unsigned __int64 v79; // [rsp+108h] [rbp-78h]
  unsigned __int64 v80; // [rsp+110h] [rbp-70h]
  __int64 v81; // [rsp+118h] [rbp-68h]
  void *__s1; // [rsp+120h] [rbp-60h]
  __int64 v83; // [rsp+128h] [rbp-58h]
  unsigned __int64 v84; // [rsp+130h] [rbp-50h]
  unsigned __int64 v85; // [rsp+138h] [rbp-48h] BYREF
  __int64 v86; // [rsp+140h] [rbp-40h]
  unsigned __int64 v87; // [rsp+148h] [rbp-38h]
  char v88; // [rsp+157h] [rbp-29h]

  v5 = a1; /*0x100ac9404*/
  codexmate_lib::core::relay::translator::anthropic_search::pending_in_messages::h730577d6f44d3d9d(&v64, a1, a2); /*0x100ac940a*/
  v9 = v66; /*0x100ac940f*/
  if ( !v66 ) /*0x100ac9419*/
  {
    v22 = nullptr; /*0x100ac95ae*/
    v23 = v64; /*0x100ac95b0*/
    if ( !v64 ) /*0x100ac95ba*/
      goto LABEL_101; /*0x100ac95ba*/
    goto LABEL_23; /*0x100ac95ba*/
  }
  v10 = 0; /*0x100ac941f*/
  v7 = a2 - 2; /*0x100ac9424*/
  if ( a2 >= 2 ) /*0x100ac9428*/
    v10 = a2 - 2; /*0x100ac9428*/
  if ( a2 - v10 == 2 ) /*0x100ac9433*/
  {
    v11 = 32 * v10 + a1; /*0x100ac943d*/
    v12 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac944f*/
                     "content",
                     7,
                     v11);
    if ( !v12 ) /*0x100ac9457*/
      v12 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac9459*/
    v15 = nullptr; /*0x100ac9464*/
    if ( *v12 == 4 ) /*0x100ac9469*/
      v15 = v12 + 8; /*0x100ac9469*/
    v54[0] = 1; /*0x100ac946d*/
    v54[1] = v15; /*0x100ac9478*/
    v54[2] = 0; /*0x100ac947f*/
    v54[4] = 0; /*0x100ac948a*/
    ((void (__fastcall *)(__int64 *, _QWORD *, _BYTE *, _BYTE *, __int64, __int64))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h07ac72bd176d1310)( /*0x100ac94a3*/
      &v68,
      v54,
      v15,
      v12 + 8,
      v13,
      v14);
    __s1 = (void *)(v11 + 32); /*0x100ac94b8*/
    v16 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac94c1*/
                     "content",
                     7,
                     v11 + 32);
    if ( !v16 ) /*0x100ac94c7*/
      v16 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac94c9*/
    v17 = nullptr; /*0x100ac94d7*/
    v88 = *v16; /*0x100ac94da*/
    if ( v88 == 4 ) /*0x100ac94e0*/
      v17 = v16 + 8; /*0x100ac94e0*/
    v18 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac94f3*/
                     "content",
                     7,
                     v11);
    if ( !v18 ) /*0x100ac94fb*/
      v18 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac94fd*/
    v19 = nullptr; /*0x100ac9508*/
    if ( *v18 == 4 ) /*0x100ac950d*/
      v19 = v18 + 8; /*0x100ac950d*/
    v73 = 1; /*0x100ac9511*/
    v74 = v19; /*0x100ac951c*/
    v75 = 0; /*0x100ac9523*/
    v77 = 0; /*0x100ac952e*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha0761e997951385e( /*0x100ac9544*/
      &v85,
      &v73);
    v58 = v16; /*0x100ac9549*/
    v20 = v87; /*0x100ac9550*/
    v83 = v9; /*0x100ac9557*/
    if ( v87 ) /*0x100ac955b*/
    {
      v21 = v86; /*0x100ac9561*/
      if ( v87 != 1 ) /*0x100ac9569*/
      {
        if ( v87 >= 0x15 ) /*0x100ac9c42*/
          core::slice::sort::stable::driftsort_main::h9bdb7789a4e67dba(v86, v87, &v73); /*0x100ac9c9d*/
        else
          core::slice::sort::shared::smallsort::insertion_sort_shift_left::h657c1b0ecfb22d49(v86, v87, 1, &v73); /*0x100ac9c56*/
      }
      v73 = v21; /*0x100ac957a*/
      v74 = (_BYTE *)v21; /*0x100ac9581*/
      v75 = v85; /*0x100ac9588*/
      v76 = v21 + 16 * v20; /*0x100ac958f*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::bulk_build_from_sorted_iter::h552f86f40eb6dcdf( /*0x100ac95a4*/
        v67,
        &v73);
    }
    else
    {
      v67[0] = 0; /*0x100ac9618*/
      v67[2] = 0; /*0x100ac9623*/
      if ( v85 ) /*0x100ac9635*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, 16 * v85, 8); /*0x100ac9644*/
    }
    v73 = 1; /*0x100ac9649*/
    v74 = v17; /*0x100ac9654*/
    v75 = 0; /*0x100ac965b*/
    v77 = 0; /*0x100ac9666*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd6f5476fa5b45e4c( /*0x100ac967c*/
      &v85,
      &v73);
    v25 = v87; /*0x100ac9681*/
    if ( v87 ) /*0x100ac9688*/
    {
      v26 = v86; /*0x100ac968a*/
      if ( v87 != 1 ) /*0x100ac9692*/
      {
        if ( v87 >= 0x15 ) /*0x100ac9c64*/
          core::slice::sort::stable::driftsort_main::h9bdb7789a4e67dba(v86, v87, &v73); /*0x100ac9cb4*/
        else
          core::slice::sort::shared::smallsort::insertion_sort_shift_left::h657c1b0ecfb22d49(v86, v87, 1, &v73); /*0x100ac9c78*/
      }
      v73 = v26; /*0x100ac96a3*/
      v74 = (_BYTE *)v26; /*0x100ac96aa*/
      v75 = v85; /*0x100ac96b1*/
      v76 = v26 + 16 * v25; /*0x100ac96b8*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::bulk_build_from_sorted_iter::h552f86f40eb6dcdf( /*0x100ac96cd*/
        v62,
        &v73);
    }
    else
    {
      v62[0] = 0; /*0x100ac96d4*/
      v63 = 0; /*0x100ac96df*/
      if ( v85 ) /*0x100ac96f1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, 16 * v85, 8); /*0x100ac9700*/
    }
    if ( a3 ) /*0x100ac9708*/
    {
      v27 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac971d*/
                      "roleassistantAnthropic server history does not match its visible messagePending Anthropic search r"
                      "equires matching client tool results only and unchanged search toolsIncomplete Anthropic server to"
                      "ol historytool_result",
                      4,
                      v11);
      if ( !v27 ) /*0x100ac9725*/
        v27 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac9727*/
      if ( (unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x100ac9738*/
                              v27,
                              &off_101C08B50) )
      {
        v28 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac9755*/
                        "roleassistantAnthropic server history does not match its visible messagePending Anthropic search"
                        " requires matching client tool results only and unchanged search toolsIncomplete Anthropic serve"
                        "r tool historytool_result",
                        4,
                        __s1);
        if ( !v28 ) /*0x100ac975d*/
          v28 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac975f*/
        if ( (unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x100ac9770*/
                                v28,
                                &off_101C08B90) )
        {
          v72 = v70; /*0x100ac9784*/
          if ( v70 ) /*0x100ac978e*/
          {
            v29 = v64; /*0x100ac9794*/
            if ( v64 ) /*0x100ac979e*/
            {
              v30 = v65; /*0x100ac97a4*/
              v60 = v67[0]; /*0x100ac97b2*/
              if ( v67[0] ) /*0x100ac97bc*/
              {
                v61 = v67[1]; /*0x100ac97c9*/
                v31 = 0; /*0x100ac97d0*/
                v32 = v83; /*0x100ac97d3*/
                while ( 1 ) /*0x100ac97f5*/
                {
                  if ( v31 ) /*0x100ac97f5*/
                  {
                    if ( v30 >= *(unsigned __int16 *)(v31 + 626) ) /*0x100ac9802*/
                      goto LABEL_56; /*0x100ac9802*/
                  }
                  else
                  {
                    if ( v30 ) /*0x100ac9816*/
                    {
                      v31 = v29; /*0x100ac981b*/
                      if ( (v30 & 7) != 0 ) /*0x100ac9822*/
                      {
                        v35 = 0; /*0x100ac9824*/
                        do /*0x100ac983d*/
                        {
                          v31 = *(_QWORD *)(v31 + 632); /*0x100ac9830*/
                          ++v35; /*0x100ac9837*/
                        }
                        while ( (v30 & 7) != v35 ); /*0x100ac983d*/
                        v36 = v30 - v35; /*0x100ac9842*/
                      }
                      else
                      {
                        v36 = v30; /*0x100ac984c*/
                      }
                      if ( v30 >= 8 ) /*0x100ac9853*/
                      {
                        do /*0x100ac989c*/
                        {
                          v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 632) + 632LL) + 632LL) /*0x100ac9891*/
                                                                                          + 632LL)
                                                                              + 632LL)
                                                                  + 632LL)
                                                      + 632LL)
                                          + 632LL);
                          v36 -= 8LL; /*0x100ac9898*/
                        }
                        while ( v36 ); /*0x100ac989c*/
                      }
                    }
                    else
                    {
                      v31 = v29; /*0x100ac9847*/
                    }
                    v29 = 0; /*0x100ac989e*/
                    v30 = 0; /*0x100ac98a0*/
                    if ( !*(_WORD *)(v31 + 626) ) /*0x100ac98a2*/
                    {
LABEL_56:
                      while ( 1 ) /*0x100ac98c0*/
                      {
                        v33 = *(_QWORD *)(v31 + 352); /*0x100ac98c0*/
                        if ( !v33 ) /*0x100ac98ca*/
                          break; /*0x100ac98ca*/
                        ++v29; /*0x100ac98d0*/
                        v34 = *(unsigned __int16 *)(v31 + 624); /*0x100ac98d3*/
                        v31 = *(_QWORD *)(v31 + 352); /*0x100ac98db*/
                        if ( (unsigned __int16)v34 < *(_WORD *)(v33 + 626) ) /*0x100ac98e5*/
                          goto LABEL_58; /*0x100ac98e5*/
                      }
LABEL_107:
                      core::option::unwrap_failed::h44626cade04bbf1e(&anon_202735cc4238ea6ae2931afe37a1ff22_745); /*0x100ac9c82*/
                    }
                  }
                  v33 = v31; /*0x100ac9808*/
                  v34 = v30; /*0x100ac980b*/
LABEL_58:
                  if ( v29 ) /*0x100ac98ea*/
                    break; /*0x100ac98ea*/
                  v84 = v34 + 1; /*0x100ac997f*/
                  v31 = v33; /*0x100ac9983*/
LABEL_66:
                  v59 = v32 - 1; /*0x100ac9986*/
                  __s1 = *(void **)(v33 + 24 * v34 + 368); /*0x100ac999c*/
                  __n = *(_QWORD *)(v33 + 24 * v34 + 376); /*0x100ac99a8*/
                  v71 = v61; /*0x100ac99b6*/
                  for ( i = v60; ; i = *(_QWORD *)(v56 + 8 * v42 + 192) ) /*0x100ac99bd*/
                  {
                    v57 = *(unsigned __int16 *)(i + 186); /*0x100ac99cc*/
                    v41 = (unsigned int)(16 * v57); /*0x100ac99d3*/
                    v42 = -1; /*0x100ac99d7*/
                    v56 = i; /*0x100ac99de*/
                    do /*0x100ac9a39*/
                    {
                      if ( !v41 ) /*0x100ac99f3*/
                      {
                        v42 = v57; /*0x100ac9a48*/
                        goto LABEL_77; /*0x100ac9a48*/
                      }
                      v43 = i + 16; /*0x100ac99f5*/
                      v44 = *(_QWORD *)(i + 8); /*0x100ac99fc*/
                      v45 = __n - v44; /*0x100ac9a0a*/
                      if ( __n < v44 ) /*0x100ac9a0d*/
                        v44 = __n; /*0x100ac9a0d*/
                      v46 = memcmp(__s1, *(const void **)i, v44); /*0x100ac9a15*/
                      if ( v46 ) /*0x100ac9a1e*/
                        v45 = v46; /*0x100ac9a1e*/
                      v47 = (v45 > 0) - (v45 < 0); /*0x100ac9a2b*/
                      ++v42; /*0x100ac9a2d*/
                      v41 -= 16; /*0x100ac9a30*/
                      i = v43; /*0x100ac9a34*/
                    }
                    while ( v47 == 1 ); /*0x100ac9a39*/
                    if ( !v47 ) /*0x100ac9a40*/
                      break; /*0x100ac9a40*/
LABEL_77:
                    if ( !v71 ) /*0x100ac9a5a*/
                      goto LABEL_97; /*0x100ac9a5a*/
                    --v71; /*0x100ac9a60*/
                  }
                  v29 = 0; /*0x100ac97d9*/
                  v32 = v59; /*0x100ac97de*/
                  v30 = v84; /*0x100ac97e8*/
                  if ( !v59 ) /*0x100ac97ec*/
                    goto LABEL_81; /*0x100ac97ec*/
                }
                v37 = v33 + 8 * v34 + 640; /*0x100ac98f0*/
                if ( (v29 & 7) != 0 ) /*0x100ac98ff*/
                {
                  v38 = 0; /*0x100ac9905*/
                  do /*0x100ac9920*/
                  {
                    v31 = *(_QWORD *)v37; /*0x100ac9910*/
                    v37 = *(_QWORD *)v37 + 632LL; /*0x100ac9913*/
                    ++v38; /*0x100ac991a*/
                  }
                  while ( (v29 & 7) != v38 ); /*0x100ac9920*/
                  v39 = v29 - v38; /*0x100ac9925*/
                  if ( v29 < 8 ) /*0x100ac992c*/
                    goto LABEL_64; /*0x100ac992c*/
                }
                else
                {
                  v39 = v29; /*0x100ac9a7b*/
                  if ( v29 < 8 ) /*0x100ac9a82*/
                  {
LABEL_64:
                    v84 = 0; /*0x100ac9971*/
                    goto LABEL_66; /*0x100ac9979*/
                  }
                }
                do /*0x100ac996f*/
                {
                  v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v37 + 632LL) /*0x100ac995d*/
                                                                                              + 632LL)
                                                                                  + 632LL)
                                                                      + 632LL)
                                                          + 632LL)
                                              + 632LL)
                                  + 632LL);
                  v37 = v31 + 632; /*0x100ac9964*/
                  v39 -= 8LL; /*0x100ac996b*/
                }
                while ( v39 ); /*0x100ac996f*/
                goto LABEL_64; /*0x100ac996f*/
              }
              if ( v65 ) /*0x100ac9b0e*/
              {
                if ( (v65 & 7) != 0 ) /*0x100ac9b17*/
                {
                  v49 = 0; /*0x100ac9b19*/
                  do /*0x100ac9b28*/
                  {
                    v29 = *(_QWORD *)(v29 + 632); /*0x100ac9b1b*/
                    ++v49; /*0x100ac9b22*/
                  }
                  while ( (v65 & 7) != v49 ); /*0x100ac9b28*/
                  v50 = v65 - v49; /*0x100ac9b2d*/
                }
                else
                {
                  v50 = v65; /*0x100ac9b32*/
                }
                if ( v65 >= 8 ) /*0x100ac9b39*/
                {
                  do /*0x100ac9b77*/
                  {
                    v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 632) + 632LL) /*0x100ac9b6c*/
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL);
                    v50 -= 8LL; /*0x100ac9b73*/
                  }
                  while ( v50 ); /*0x100ac9b77*/
                }
              }
              if ( !*(_WORD *)(v29 + 626) ) /*0x100ac9b79*/
              {
                do /*0x100ac9ba4*/
                {
                  v51 = *(_QWORD *)(v29 + 352); /*0x100ac9b83*/
                  if ( !v51 ) /*0x100ac9b8d*/
                    goto LABEL_107; /*0x100ac9b8d*/
                  v52 = *(_WORD *)(v29 + 624); /*0x100ac9b93*/
                  v29 = *(_QWORD *)(v29 + 352); /*0x100ac9b9a*/
                }
                while ( v52 >= *(_WORD *)(v51 + 626) ); /*0x100ac9ba4*/
              }
            }
            else
            {
LABEL_81:
              if ( v88 == 4 && v63 == v72 ) /*0x100ac9aa5*/
              {
                v48 = v69; /*0x100ac9aab*/
                if ( !codexmate_lib::core::relay::translator::anthropic_search::validate_continuation_history::_$u7b$$u7b$closure$u7d$$u7d$::h28572df8cce42e91( /*0x100ac9acb*/
                        v69,
                        v72,
                        *((_QWORD *)v58 + 2),
                        *((_QWORD *)v58 + 3)) )
                {
                  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h07439c2cca503dcd(v62); /*0x100ac9adf*/
                  v9 = v83; /*0x100ac9ae4*/
                  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h07439c2cca503dcd(v67); /*0x100ac9aef*/
                  v5 = v68; /*0x100ac9af4*/
                  v22 = nullptr; /*0x100ac9afb*/
                  if ( !v68 ) /*0x100ac9b00*/
                  {
LABEL_100:
                    v23 = v64; /*0x100ac9bed*/
                    if ( !v64 ) /*0x100ac9bfd*/
                      goto LABEL_101; /*0x100ac9bfd*/
                    goto LABEL_23; /*0x100ac9bfd*/
                  }
LABEL_99:
                  v5 *= 16; /*0x100ac9bdc*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v5, 8); /*0x100ac9be8*/
                  goto LABEL_100; /*0x100ac9be8*/
                }
              }
            }
          }
        }
      }
    }
LABEL_97:
    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h07439c2cca503dcd(v62); /*0x100ac9ba6*/
    v9 = v83; /*0x100ac9bb2*/
    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h07439c2cca503dcd(v67); /*0x100ac9bbd*/
    v5 = v68; /*0x100ac9bc2*/
    v22 = "Pending Anthropic search requires matching client tool results only and unchanged search toolsIncomplete Anthropic server tool historytool_result"; /*0x100ac9bc9*/
    if ( !v68 ) /*0x100ac9bd3*/
      goto LABEL_100; /*0x100ac9bd3*/
    v48 = v69; /*0x100ac9bd5*/
    goto LABEL_99; /*0x100ac9bd5*/
  }
  v22 = "Incomplete Anthropic server tool historytool_result"; /*0x100ac95c1*/
  v23 = v64; /*0x100ac95ce*/
  if ( !v64 ) /*0x100ac95d8*/
  {
LABEL_101:
    v24 = 0; /*0x100ac9c03*/
    v9 = 0; /*0x100ac9c05*/
    goto LABEL_102; /*0x100ac9c05*/
  }
LABEL_23:
  v7 = v65; /*0x100ac95de*/
  v74 = nullptr; /*0x100ac95e5*/
  v75 = v23; /*0x100ac95f0*/
  v76 = v65; /*0x100ac95f7*/
  v78 = 0; /*0x100ac95fe*/
  v79 = v23; /*0x100ac9606*/
  v80 = v65; /*0x100ac960a*/
  v24 = 1; /*0x100ac960e*/
LABEL_102:
  v73 = v24; /*0x100ac9c08*/
  v77 = v24; /*0x100ac9c0f*/
  v81 = v9; /*0x100ac9c16*/
  core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::hb9bf72a89ee0a008( /*0x100ac9c21*/
    &v73,
    v5,
    v6,
    v7,
    v8);
  return v22; /*0x100ac9c2c*/
}