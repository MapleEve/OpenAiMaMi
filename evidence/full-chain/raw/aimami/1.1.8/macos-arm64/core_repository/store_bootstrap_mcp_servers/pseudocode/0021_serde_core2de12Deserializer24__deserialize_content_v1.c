// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_mcp_servers node 0x10050ccd0 depth=2
__int64 __fastcall serde_core::de::Deserializer::__deserialize_content_v1::ha85b1cd4f395f5a2(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        double a4,
        double a5)
{
  void *v5; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  void *v11; // r10
  unsigned __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r9
  bool v16; // zf
  unsigned __int64 v17; // rcx
  __int64 v18; // r13
  _QWORD *v19; // r15
  __int64 v20; // r12
  unsigned __int8 v21; // al
  __int64 v22; // rax
  char v23; // cl
  char v24; // r8
  char v25; // r8
  char v26; // r8
  char v27; // al
  char v28; // r8
  char v29; // r8
  char v30; // r8
  char v31; // r8
  char v32; // al
  unsigned __int64 v33; // rcx
  void *v34; // r15
  __int64 v35; // r13
  __int64 v37; // rax
  __int64 v38; // [rsp+8h] [rbp-78h] BYREF
  void *v39; // [rsp+10h] [rbp-70h]
  size_t v40; // [rsp+18h] [rbp-68h]
  size_t v41; // [rsp+20h] [rbp-60h]
  int v42; // [rsp+28h] [rbp-58h]
  __int16 v43; // [rsp+2Ch] [rbp-54h]
  __int64 v44; // [rsp+30h] [rbp-50h] BYREF
  void *__src; // [rsp+38h] [rbp-48h]
  size_t __n[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v47; // [rsp+50h] [rbp-30h]

  v7 = *(_QWORD *)(a2 + 32); /*0x10050cce4*/
  v8 = *(_QWORD *)(a2 + 40); /*0x10050cce8*/
  if ( v8 >= v7 ) /*0x10050ccef*/
  {
LABEL_6:
    v44 = 5; /*0x10050cd38*/
LABEL_7:
    v14 = (__int64)serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(a2, &v44); /*0x10050cd40*/
    goto LABEL_57; /*0x10050cd4f*/
  }
  v9 = *(_QWORD *)(a2 + 24); /*0x10050ccf5*/
  v10 = v8 + 5; /*0x10050ccf9*/
  v11 = &loc_100002600; /*0x10050cd03*/
  while ( 1 ) /*0x10050cd10*/
  {
    v12 = *(unsigned __int8 *)(v9 + v10 - 5); /*0x10050cd10*/
    if ( v12 > 0x20 || !_bittest64((const __int64 *)&v11, v12) ) /*0x10050cd1c*/
      break; /*0x10050cd1c*/
    *(_QWORD *)(a2 + 40) = v10 - 4; /*0x10050cd26*/
    v13 = v10 - v7 + 1; /*0x10050cd2a*/
    ++v10; /*0x10050cd2f*/
    if ( v13 == 5 ) /*0x10050cd36*/
      goto LABEL_6; /*0x10050cd36*/
  }
  v15 = (unsigned int)(v12 - 91); /*0x10050cd54*/
  switch ( *(_BYTE *)(v9 + v10 - 5) ) /*0x10050cd70*/
  {
    case '[': /*0x10050cd70*/
      v16 = (*(_BYTE *)(a2 + 72))-- == 1; /*0x10050cd73*/
      if ( v16 ) /*0x10050cd76*/
        goto LABEL_77; /*0x10050cd76*/
      v17 = v10 - 4; /*0x10050cd7c*/
      *(_QWORD *)(a2 + 40) = v17; /*0x10050cd80*/
      _$LT$serde..private..de..content..ContentVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_seq::h3790b3c16a893ad4( /*0x10050cd90*/
        &v38,
        a2,
        1,
        v17,
        v12,
        v15);
      ++*(_BYTE *)(a2 + 72); /*0x10050cd95*/
      v18 = a2; /*0x10050cd99*/
      v19 = serde_json::de::Deserializer$LT$R$GT$::end_seq::h8a430273f2e00f21((_QWORD *)a2); /*0x10050cda4*/
      __n[1] = v41; /*0x10050cdab*/
      __n[0] = v40; /*0x10050cdb3*/
      LOBYTE(v20) = v38; /*0x10050cdb7*/
      v21 = (unsigned __int8)v39; /*0x10050cdbb*/
      __src = v39; /*0x10050cdbf*/
      v44 = v38; /*0x10050cdc3*/
      v47 = v19; /*0x10050cdc7*/
      if ( (_BYTE)v38 != 22 ) /*0x10050cdcf*/
        goto LABEL_51; /*0x10050cdcf*/
      v5 = __src; /*0x10050cdd5*/
      LOBYTE(v20) = 22; /*0x10050cdd9*/
      if ( !v19 ) /*0x10050cddf*/
        goto LABEL_66; /*0x10050cddf*/
      v22 = *v19; /*0x10050cde5*/
      if ( *v19 == 1 ) /*0x10050cdec*/
        goto LABEL_64; /*0x10050cdec*/
      goto LABEL_48; /*0x10050cdec*/
    case '\\': /*0x10050cd70*/
    case ']': /*0x10050cd70*/
    case '^': /*0x10050cd70*/
    case '_': /*0x10050cd70*/
    case '`': /*0x10050cd70*/
    case 'a': /*0x10050cd70*/
    case 'b': /*0x10050cd70*/
    case 'c': /*0x10050cd70*/
    case 'd': /*0x10050cd70*/
    case 'e': /*0x10050cd70*/
    case 'g': /*0x10050cd70*/
    case 'h': /*0x10050cd70*/
    case 'i': /*0x10050cd70*/
    case 'j': /*0x10050cd70*/
    case 'k': /*0x10050cd70*/
    case 'l': /*0x10050cd70*/
    case 'm': /*0x10050cd70*/
    case 'o': /*0x10050cd70*/
    case 'p': /*0x10050cd70*/
    case 'q': /*0x10050cd70*/
    case 'r': /*0x10050cd70*/
    case 's': /*0x10050cd70*/
    case 'u': /*0x10050cd70*/
    case 'v': /*0x10050cd70*/
    case 'w': /*0x10050cd70*/
    case 'x': /*0x10050cd70*/
    case 'y': /*0x10050cd70*/
    case 'z': /*0x10050cd70*/
      goto LABEL_18;
    case 'f': /*0x10050cd70*/
      *(_QWORD *)(a2 + 40) = v10 - 4; /*0x10050ce78*/
      if ( v10 - 4 >= v7 ) /*0x10050ce7f*/
        goto LABEL_55; /*0x10050ce7f*/
      v24 = *(_BYTE *)(v9 + v10 - 4); /*0x10050ce85*/
      *(_QWORD *)(a2 + 40) = v10 - 3; /*0x10050ce8f*/
      if ( v24 != 97 ) /*0x10050ce97*/
        goto LABEL_74; /*0x10050ce97*/
      if ( v10 - 3 >= v7 ) /*0x10050cea0*/
        goto LABEL_55; /*0x10050cea0*/
      v25 = *(_BYTE *)(v9 + v10 - 3); /*0x10050cea6*/
      *(_QWORD *)(a2 + 40) = v10 - 2; /*0x10050ceb0*/
      if ( v25 != 108 ) /*0x10050ceb8*/
        goto LABEL_74; /*0x10050ceb8*/
      if ( v10 - 2 >= v7 ) /*0x10050cec1*/
        goto LABEL_55; /*0x10050cec1*/
      v26 = *(_BYTE *)(v9 + v10 - 2); /*0x10050cec7*/
      *(_QWORD *)(a2 + 40) = v10 - 1; /*0x10050ced1*/
      if ( v26 != 115 ) /*0x10050ced9*/
        goto LABEL_74; /*0x10050ced9*/
      if ( v10 - 1 >= v7 ) /*0x10050cee2*/
      {
LABEL_55:
        v44 = 5; /*0x10050d0da*/
      }
      else
      {
        v27 = *(_BYTE *)(v9 + v10 - 1); /*0x10050cee8*/
        *(_QWORD *)(a2 + 40) = v10; /*0x10050ceed*/
        if ( v27 == 101 ) /*0x10050cef3*/
        {
          v21 = 0; /*0x10050cef9*/
          LOBYTE(v20) = 0; /*0x10050cefb*/
          goto LABEL_67; /*0x10050cefe*/
        }
LABEL_74:
        v44 = 9; /*0x10050d1ef*/
      }
      v14 = serde_json::de::Deserializer$LT$R$GT$::error::h85175ebc8366b145(a2, &v44); /*0x10050d0ec*/
      goto LABEL_57; /*0x10050d0ec*/
    case 'n': /*0x10050cd70*/
      *(_QWORD *)(a2 + 40) = v10 - 4; /*0x10050cf07*/
      if ( v10 - 4 >= v7 ) /*0x10050cf0e*/
        goto LABEL_55; /*0x10050cf0e*/
      v28 = *(_BYTE *)(v9 + v10 - 4); /*0x10050cf14*/
      *(_QWORD *)(a2 + 40) = v10 - 3; /*0x10050cf1e*/
      if ( v28 != 117 ) /*0x10050cf26*/
        goto LABEL_74; /*0x10050cf26*/
      if ( v10 - 3 >= v7 ) /*0x10050cf2f*/
        goto LABEL_55; /*0x10050cf2f*/
      v29 = *(_BYTE *)(v9 + v10 - 3); /*0x10050cf35*/
      *(_QWORD *)(a2 + 40) = v10 - 2; /*0x10050cf3f*/
      if ( v29 != 108 ) /*0x10050cf47*/
        goto LABEL_74; /*0x10050cf47*/
      if ( v10 - 2 >= v7 ) /*0x10050cf50*/
        goto LABEL_55; /*0x10050cf50*/
      v21 = *(_BYTE *)(v9 + v10 - 2); /*0x10050cf56*/
      *(_QWORD *)(a2 + 40) = v10 - 1; /*0x10050cf5e*/
      if ( v21 != 108 ) /*0x10050cf64*/
        goto LABEL_74; /*0x10050cf64*/
      LOBYTE(v20) = 18; /*0x10050cf6a*/
      goto LABEL_67; /*0x10050cf6d*/
    case 't': /*0x10050cd70*/
      *(_QWORD *)(a2 + 40) = v10 - 4; /*0x10050cf73*/
      if ( v10 - 4 >= v7 ) /*0x10050cf7a*/
        goto LABEL_55; /*0x10050cf7a*/
      v30 = *(_BYTE *)(v9 + v10 - 4); /*0x10050cf80*/
      *(_QWORD *)(a2 + 40) = v10 - 3; /*0x10050cf8a*/
      if ( v30 != 114 ) /*0x10050cf92*/
        goto LABEL_74; /*0x10050cf92*/
      if ( v10 - 3 >= v7 ) /*0x10050cf9b*/
        goto LABEL_55; /*0x10050cf9b*/
      v31 = *(_BYTE *)(v9 + v10 - 3); /*0x10050cfa1*/
      *(_QWORD *)(a2 + 40) = v10 - 2; /*0x10050cfab*/
      if ( v31 != 117 ) /*0x10050cfb3*/
        goto LABEL_74; /*0x10050cfb3*/
      if ( v10 - 2 >= v7 ) /*0x10050cfbc*/
        goto LABEL_55; /*0x10050cfbc*/
      v32 = *(_BYTE *)(v9 + v10 - 2); /*0x10050cfc2*/
      *(_QWORD *)(a2 + 40) = v10 - 1; /*0x10050cfca*/
      if ( v32 != 101 ) /*0x10050cfd0*/
        goto LABEL_74; /*0x10050cfd0*/
      v21 = 1; /*0x10050cfd6*/
      LOBYTE(v20) = 0; /*0x10050cfd8*/
      goto LABEL_67; /*0x10050cfdb*/
    case '{': /*0x10050cd70*/
      v16 = (*(_BYTE *)(a2 + 72))-- == 1; /*0x10050cfe0*/
      if ( v16 ) /*0x10050cfe3*/
      {
LABEL_77:
        v44 = 24; /*0x10050d229*/
        goto LABEL_7; /*0x10050d231*/
      }
      v33 = v10 - 4; /*0x10050cfe9*/
      *(_QWORD *)(a2 + 40) = v33; /*0x10050cfed*/
      _$LT$serde..private..de..content..ContentVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_map::h30bfe9cad604c04d( /*0x10050cffd*/
        &v38,
        a2,
        1,
        v33,
        v12,
        v15);
      ++*(_BYTE *)(a2 + 72); /*0x10050d002*/
      v18 = a2; /*0x10050d006*/
      v19 = serde_json::de::Deserializer$LT$R$GT$::end_map::hbe0dd76bfbe93b26((_QWORD *)a2); /*0x10050d011*/
      __n[1] = v41; /*0x10050d018*/
      __n[0] = v40; /*0x10050d020*/
      LOBYTE(v20) = v38; /*0x10050d024*/
      v21 = (unsigned __int8)v39; /*0x10050d028*/
      __src = v39; /*0x10050d02c*/
      v44 = v38; /*0x10050d030*/
      v47 = v19; /*0x10050d034*/
      if ( (_BYTE)v38 == 22 ) /*0x10050d03c*/
      {
        v5 = __src; /*0x10050d03e*/
        LOBYTE(v20) = 22; /*0x10050d042*/
        if ( v19 ) /*0x10050d048*/
        {
          v22 = *v19; /*0x10050d04e*/
          if ( *v19 == 1 ) /*0x10050d055*/
          {
LABEL_64:
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v19 + 1); /*0x10050d146*/
          }
          else
          {
LABEL_48:
            if ( !v22 && v19[2] ) /*0x10050d064*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10050d07a*/
          }
          v21 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10050d15f*/
        }
      }
      else
      {
LABEL_51:
        if ( v19 ) /*0x10050d087*/
        {
          v21 = core::ptr::drop_in_place$LT$serde_core..private..content..Content$GT$::h72bab24ea874f13d(&v44); /*0x10050d091*/
          LOBYTE(v20) = 22; /*0x10050d096*/
          v5 = v19; /*0x10050d099*/
        }
        else
        {
          v21 = BYTE1(v44); /*0x10050d11c*/
          v42 = *(_DWORD *)((char *)&v44 + 2); /*0x10050d123*/
          v43 = HIWORD(v44); /*0x10050d12a*/
          v5 = __src; /*0x10050d12e*/
          a3 = (__m128)_mm_loadu_si128((const __m128i *)__n); /*0x10050d132*/
        }
      }
LABEL_66:
      a2 = v18; /*0x10050d164*/
      if ( (_BYTE)v20 != 22 ) /*0x10050d16b*/
        goto LABEL_67; /*0x10050d16b*/
      goto LABEL_76; /*0x10050d16b*/
    default:
      if ( (_DWORD)v12 != 34 ) /*0x10050ce07*/
      {
        if ( (_DWORD)v12 == 45 ) /*0x10050ce11*/
        {
          *(_QWORD *)(a2 + 40) = v10 - 4; /*0x10050ce17*/
          v21 = serde_json::de::Deserializer$LT$R$GT$::parse_integer::h1ef8129122f17302(&v44, a2, 0); /*0x10050ce21*/
          v23 = v44; /*0x10050ce26*/
          if ( v44 != 3 ) /*0x10050ce2e*/
          {
LABEL_17:
            v5 = __src; /*0x10050ce30*/
            LODWORD(v20) = 0x8040Au >> (8 * v23); /*0x10050ce3d*/
LABEL_67:
            *(_BYTE *)a1 = v20; /*0x10050d171*/
            *(_BYTE *)(a1 + 1) = v21; /*0x10050d174*/
            *(_DWORD *)(a1 + 2) = v42; /*0x10050d17a*/
            *(_WORD *)(a1 + 6) = v43; /*0x10050d181*/
            *(_QWORD *)(a1 + 8) = v5; /*0x10050d185*/
            *(__m128 *)(a1 + 16) = a3; /*0x10050d189*/
            return a1; /*0x10050d189*/
          }
        }
        else
        {
LABEL_18:
          if ( (unsigned __int8)(v12 - 48) >= 0xAu ) /*0x10050ce4d*/
          {
            v44 = 10; /*0x10050d1fc*/
            v5 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(a2, &v44); /*0x10050d219*/
LABEL_76:
            v14 = serde_json::error::Error::fix_position::hcddea6c8e528a7ec((__int64)v5, a2); /*0x10050d21c*/
            goto LABEL_57; /*0x10050d224*/
          }
          v21 = serde_json::de::Deserializer$LT$R$GT$::parse_integer::h1ef8129122f17302(&v44, a2, 1); /*0x10050ce5c*/
          v23 = v44; /*0x10050ce61*/
          if ( v44 != 3 ) /*0x10050ce69*/
            goto LABEL_17; /*0x10050ce69*/
        }
        v14 = (__int64)__src; /*0x10050ce6b*/
LABEL_57:
        *(_QWORD *)(a1 + 8) = v14; /*0x10050d0f1*/
        *(_BYTE *)a1 = 22; /*0x10050d0f5*/
        return a1; /*0x10050d0f8*/
      }
      *(_QWORD *)(a2 + 40) = v10 - 4; /*0x10050d0a5*/
      *(_QWORD *)(a2 + 16) = 0; /*0x10050d0a9*/
      _$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::parse_str::hc59e2fa0c0b56d18( /*0x10050d0bb*/
        &v44,
        (__int64 *)(a2 + 24),
        (_QWORD *)a2,
        *(double *)a3.i64,
        a4,
        a5);
      v21 = v44; /*0x10050d0c0*/
      v34 = __src; /*0x10050d0c4*/
      if ( v44 != 2 ) /*0x10050d0cc*/
      {
        v5 = (void *)__n[0]; /*0x10050d0fd*/
        if ( (v44 & 1) == 0 ) /*0x10050d103*/
        {
          a3 = (__m128)__n[0]; /*0x10050d139*/
          LOBYTE(v20) = 13; /*0x10050d13e*/
          v5 = __src; /*0x10050d141*/
          goto LABEL_67; /*0x10050d144*/
        }
        if ( (__n[0] & 0x8000000000000000LL) != 0LL ) /*0x10050d108*/
        {
          v35 = 0; /*0x10050d10e*/
          goto LABEL_61; /*0x10050d10e*/
        }
        if ( __n[0] ) /*0x10050d1a0*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10050d1a2*/
          v35 = 1; /*0x10050d1a7*/
          v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc((size_t)v5, 1u); /*0x10050d1b5*/
          if ( !v37 ) /*0x10050d1bd*/
LABEL_61:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v35, (__int64)v5); /*0x10050d111*/
          v20 = v37; /*0x10050d1c3*/
        }
        else
        {
          v20 = 1; /*0x10050d1c8*/
        }
        v21 = (unsigned __int8)memcpy((void *)v20, v34, (size_t)v5); /*0x10050d1d7*/
        a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, (__m128i)(unsigned __int64)v5); /*0x10050d1e6*/
        LOBYTE(v20) = 12; /*0x10050d1ea*/
        goto LABEL_67; /*0x10050d1ed*/
      }
      *(_QWORD *)(a1 + 8) = __src; /*0x10050d0ce*/
      *(_BYTE *)a1 = 22; /*0x10050d0d2*/
      return a1;
  }
}