// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND codex_local_compact_compat_response node 0x100597500 depth=1
__int64 __fastcall serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::hcd945ca40b70740b(
        __int64 a1,
        unsigned __int64 **a2)
{
  unsigned __int64 *v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r14
  unsigned __int64 *v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  char v13; // cl
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  bool v16; // si
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r8
  unsigned __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rsi
  unsigned __int64 v28; // rax
  char v29; // [rsp+0h] [rbp-30h] BYREF
  char v30; // [rsp+1h] [rbp-2Fh]
  unsigned __int64 **v31; // [rsp+8h] [rbp-28h]

  switch ( *(_BYTE *)a1 ) /*0x100597520*/
  {
    case 0: /*0x100597520*/
      v2 = *a2; /*0x100597522*/
      v3 = **a2; /*0x100597525*/
      v4 = (*a2)[2]; /*0x100597528*/
      if ( v3 - v4 <= 3 ) /*0x100597533*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v2, v4, 4, 1, 1u); /*0x1005978ca*/
        v4 = v2[2]; /*0x1005978cf*/
      }
      *(_DWORD *)(v2[1] + v4) = 1819047278; /*0x10059753d*/
      v5 = v4 + 4; /*0x100597544*/
      goto LABEL_58; /*0x100597548*/
    case 1: /*0x100597520*/
      v2 = *a2; /*0x1005975b4*/
      if ( *(_BYTE *)(a1 + 1) ) /*0x1005975b7*/
      {
        v8 = v2[2]; /*0x1005975c4*/
        if ( *v2 - v8 <= 3 ) /*0x1005975cf*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v2, v8, 4, 1, 1u); /*0x100597933*/
          v8 = v2[2]; /*0x100597938*/
        }
        *(_DWORD *)(v2[1] + v8) = 1702195828; /*0x1005975d9*/
        v5 = v8 + 4; /*0x1005975e0*/
      }
      else
      {
        v27 = v2[2]; /*0x10059787f*/
        if ( *v2 - v27 <= 4 ) /*0x10059788a*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v2, v27, 5, 1, 1u); /*0x100597954*/
          v27 = v2[2]; /*0x100597959*/
        }
        v28 = v2[1]; /*0x100597890*/
        *(_BYTE *)(v28 + v27 + 4) = 101; /*0x100597894*/
        *(_DWORD *)(v28 + v27) = 1936482662; /*0x100597899*/
        v5 = v27 + 5; /*0x1005978a0*/
      }
      goto LABEL_58; /*0x1005975e4*/
    case 2: /*0x100597520*/
      return _$LT$serde_json..number..Number$u20$as$u20$serde_core..ser..Serialize$GT$::serialize::h54619ec86c04bacd(a1 + 8); /*0x10059757b*/
    case 3: /*0x100597520*/
      v7 = serde_json::ser::format_escaped_str::h29316bfe5256814d( /*0x100597592*/
             a2,
             (__int64)(a2 + 1),
             *(unsigned __int8 **)(a1 + 16),
             *(_QWORD *)(a1 + 24));
      if ( !v7 ) /*0x10059759a*/
        return 0; /*0x10059759a*/
      return serde_json::error::Error::io::h4df820d482c0c826(v7); /*0x1005975af*/
    case 4: /*0x100597520*/
      return serde_core::ser::Serializer::collect_seq::hbc69736b8ad3a634(a2, a1 + 8); /*0x100597566*/
    case 5: /*0x100597520*/
      v9 = *(_QWORD *)(a1 + 24); /*0x1005975e9*/
      v10 = *a2; /*0x1005975ed*/
      v11 = (*a2)[2]; /*0x1005975f0*/
      if ( **a2 == v11 ) /*0x1005975f7*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*a2, (*a2)[2], 1, 1, 1u); /*0x1005978f4*/
        v11 = v10[2]; /*0x1005978ff*/
      }
      *(_BYTE *)(v10[1] + v11) = 123; /*0x100597601*/
      v12 = v11 + 1; /*0x100597605*/
      v10[2] = v12; /*0x100597608*/
      v13 = 1; /*0x10059760c*/
      if ( !v9 ) /*0x100597611*/
      {
        if ( *v10 == v12 ) /*0x100597616*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v10, v12, 1, 1, 1u); /*0x10059798c*/
          v12 = v10[2]; /*0x100597997*/
        }
        *(_BYTE *)(v10[1] + v12) = 125; /*0x100597620*/
        v10[2] = v12 + 1; /*0x100597627*/
        v13 = 0; /*0x10059762b*/
      }
      v29 = 0; /*0x10059762d*/
      v30 = v13; /*0x100597631*/
      v31 = a2; /*0x100597634*/
      v14 = *(_QWORD *)(a1 + 8); /*0x100597638*/
      v15 = *(_QWORD *)(a1 + 16); /*0x10059763c*/
      v16 = v14 != 0; /*0x100597643*/
      if ( !v14 ) /*0x100597647*/
        v9 = 0; /*0x100597647*/
      v17 = 0; /*0x10059764b*/
      break; /*0x100597652*/
    case 6: /*0x100597520*/
      JUMPOUT(0x100DD98DFLL); /*0x100dd98df*/
    case 7: /*0x100597520*/
      JUMPOUT(0x1005979D0LL); /*0x1005979d0*/
  }
  while ( v9-- != 0 ) /*0x100597696*/
  {
    if ( !v16 ) /*0x1005976a4*/
      core::option::unwrap_failed::h44626cade04bbf1e((__int64)&anon_0bcfb5f5de49270c5675714f036928d0_1); /*0x1005979c8*/
    if ( v17 ) /*0x1005976ad*/
    {
      if ( v15 < *(unsigned __int16 *)(v17 + 626) ) /*0x1005976ba*/
        goto LABEL_28; /*0x1005976ba*/
      goto LABEL_39; /*0x1005976ba*/
    }
    if ( !v15 ) /*0x1005976d3*/
    {
      v17 = v14; /*0x10059770d*/
      goto LABEL_38; /*0x100597710*/
    }
    v17 = v14; /*0x1005976d8*/
    if ( (v15 & 7) == 0 ) /*0x1005976df*/
    {
      v22 = v15; /*0x100597712*/
      if ( v15 < 8 ) /*0x100597719*/
        goto LABEL_38; /*0x100597719*/
      do /*0x10059775c*/
      {
LABEL_37:
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 632) /*0x100597720*/
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v22 -= 8LL; /*0x100597758*/
      }
      while ( v22 ); /*0x10059775c*/
      goto LABEL_38; /*0x10059775c*/
    }
    v21 = 0; /*0x1005976e1*/
    do /*0x1005976fd*/
    {
      v17 = *(_QWORD *)(v17 + 632); /*0x1005976f0*/
      ++v21; /*0x1005976f7*/
    }
    while ( (v15 & 7) != v21 ); /*0x1005976fd*/
    v22 = v15 - v21; /*0x100597702*/
    if ( v15 >= 8 ) /*0x100597709*/
      goto LABEL_37; /*0x100597709*/
LABEL_38:
    v14 = 0; /*0x10059775e*/
    v15 = 0; /*0x100597760*/
    if ( *(_WORD *)(v17 + 626) ) /*0x100597762*/
    {
LABEL_28:
      v20 = v17; /*0x1005976c0*/
      goto LABEL_41; /*0x1005976c3*/
    }
    do /*0x1005977a5*/
    {
LABEL_39:
      v20 = *(_QWORD *)(v17 + 352); /*0x100597780*/
      if ( !v20 ) /*0x10059778a*/
        core::option::unwrap_failed::h44626cade04bbf1e((__int64)&anon_0bcfb5f5de49270c5675714f036928d0_632); /*0x100597969*/
      ++v14; /*0x100597790*/
      v15 = *(unsigned __int16 *)(v17 + 624); /*0x100597793*/
      v17 = *(_QWORD *)(v17 + 352); /*0x10059779b*/
    }
    while ( (unsigned __int16)v15 >= *(_WORD *)(v20 + 626) ); /*0x1005977a5*/
LABEL_41:
    if ( v14 ) /*0x1005977aa*/
    {
      v23 = v20 + 8 * v15 + 640; /*0x1005977b0*/
      if ( (v14 & 7) != 0 ) /*0x1005977bf*/
      {
        v24 = 0; /*0x1005977c1*/
        do /*0x1005977e0*/
        {
          v17 = *(_QWORD *)v23; /*0x1005977d0*/
          v23 = *(_QWORD *)v23 + 632LL; /*0x1005977d3*/
          ++v24; /*0x1005977da*/
        }
        while ( (v14 & 7) != v24 ); /*0x1005977e0*/
        v25 = v14 - v24; /*0x1005977e5*/
        if ( v14 >= 8 ) /*0x1005977ec*/
        {
          do /*0x10059782f*/
          {
LABEL_46:
            v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v23 + 632LL) /*0x1005977f0*/
                                                                                        + 632LL)
                                                                            + 632LL)
                                                                + 632LL)
                                                    + 632LL)
                                        + 632LL)
                            + 632LL);
            v23 = v17 + 632; /*0x100597824*/
            v25 -= 8LL; /*0x10059782b*/
          }
          while ( v25 ); /*0x10059782f*/
        }
      }
      else
      {
        v25 = v14; /*0x100597840*/
        if ( v14 >= 8 ) /*0x100597847*/
          goto LABEL_46; /*0x100597847*/
      }
      v18 = 0; /*0x100597831*/
      goto LABEL_23; /*0x100597834*/
    }
    v18 = v15 + 1; /*0x100597660*/
    v17 = v20; /*0x100597664*/
LABEL_23:
    result = serde_core::ser::SerializeMap::serialize_entry::hedd603f42495f64d( /*0x100597667*/
               &v29,
               v20 + 24 * v15 + 360,
               v20 + 32 * v15);
    v16 = 1; /*0x100597682*/
    v14 = 0; /*0x100597685*/
    v15 = v18; /*0x10059768a*/
    if ( result ) /*0x100597690*/
      return result; /*0x100597690*/
  }
  if ( (v29 & 1) != 0 )
    core::panicking::panic::h286e2dd5eab048be(
      (__int64)"internal error: entered unreachable code",
      40,
      (__int64)&off_101535710);
  if ( v30 ) /*0x100597859*/
  {
    v2 = *v31; /*0x10059785f*/
    v26 = (*v31)[2]; /*0x100597862*/
    if ( **v31 == v26 ) /*0x100597869*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*v31, v26, 1, 1, 1u); /*0x1005979b3*/
      v26 = v2[2]; /*0x1005979b8*/
    }
    *(_BYTE *)(v2[1] + v26) = 125; /*0x100597873*/
    v5 = v26 + 1; /*0x100597877*/
LABEL_58:
    v2[2] = v5; /*0x1005978a4*/
  }
  return 0; /*0x10059755a*/
}