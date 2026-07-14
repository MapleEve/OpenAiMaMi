// mac 1.1.8 delete_sessions node va=0x1001bbcb0 depth=1
// codexmate_lib4core8sessions19build_rollout_index
void *__fastcall codexmate_lib::core::sessions::build_rollout_index::h43b5af1068d7271f(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 i; // r13
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 *v10; // r12
  __int64 *v11; // rax
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  size_t v23; // rcx
  __int64 v24; // rdx
  __m128i si128; // xmm4
  __m128i v26; // xmm5
  __m128i v27; // xmm2
  __m128i v28; // xmm3
  size_t v29; // rdx
  __m128i v30; // xmm2
  __m128i v31; // xmm3
  __m128i v32; // xmm1
  size_t v33; // rdx
  __int64 v34; // r9
  char v35; // di
  char v36; // cl
  char v37; // cl
  char v38; // cl
  char v39; // cl
  char v40; // cl
  unsigned __int64 v41; // rbx
  _QWORD *v42; // r12
  __int64 v43; // r14
  _QWORD *v44; // rdx
  void *result; // rax
  __int64 v46; // rbx
  __int64 v47; // [rsp+0h] [rbp-230h] BYREF
  _QWORD v48[7]; // [rsp+30h] [rbp-200h] BYREF
  char v49; // [rsp+68h] [rbp-1C8h]
  __int16 v50; // [rsp+70h] [rbp-1C0h]
  __int64 v51; // [rsp+78h] [rbp-1B8h] BYREF
  __int64 v52; // [rsp+80h] [rbp-1B0h]
  unsigned __int64 v53; // [rsp+88h] [rbp-1A8h]
  __int64 v54; // [rsp+90h] [rbp-1A0h]
  __int64 v55; // [rsp+98h] [rbp-198h]
  char v56; // [rsp+A0h] [rbp-190h]
  __int64 v57; // [rsp+110h] [rbp-120h]
  _BYTE v58[8]; // [rsp+118h] [rbp-118h]
  __int64 v59; // [rsp+120h] [rbp-110h]
  char v60; // [rsp+128h] [rbp-108h]
  _QWORD v61[2]; // [rsp+130h] [rbp-100h] BYREF
  __int64 v62; // [rsp+140h] [rbp-F0h]
  __int64 v63; // [rsp+148h] [rbp-E8h]
  __int64 v64; // [rsp+150h] [rbp-E0h]
  _QWORD *v65; // [rsp+158h] [rbp-D8h]
  __int64 v66; // [rsp+160h] [rbp-D0h] BYREF
  __int64 v67; // [rsp+168h] [rbp-C8h]
  unsigned __int64 v68; // [rsp+170h] [rbp-C0h]
  _QWORD v69[3]; // [rsp+178h] [rbp-B8h] BYREF
  void *v70; // [rsp+190h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+198h] [rbp-98h]
  __int64 v72; // [rsp+1A0h] [rbp-90h]
  __int64 v73; // [rsp+1A8h] [rbp-88h]
  __int64 v74; // [rsp+1B0h] [rbp-80h]
  __int64 v75; // [rsp+1B8h] [rbp-78h]
  __int64 v76; // [rsp+1C0h] [rbp-70h]
  __int64 v77; // [rsp+1C8h] [rbp-68h]
  __int64 v78; // [rsp+1D0h] [rbp-60h]
  unsigned __int64 v79; // [rsp+1D8h] [rbp-58h]
  __int64 *v80; // [rsp+1E0h] [rbp-50h]
  __int64 v81; // [rsp+1E8h] [rbp-48h]
  size_t v82; // [rsp+1F0h] [rbp-40h]
  unsigned __int64 v83; // [rsp+1F8h] [rbp-38h]
  __int64 v84; // [rsp+200h] [rbp-30h]

  v65 = a1; /*0x1001bbcc4*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1001bbcd2*/
  v3 = (_QWORD *)v2; /*0x1001bbcd4*/
  if ( *(_BYTE *)(v2 + 16) == 1 ) /*0x1001bbcdb*/
  {
    v4 = *(_QWORD *)v2; /*0x1001bbce1*/
    v5 = v3[1]; /*0x1001bbce4*/
  }
  else
  {
    v46 = v2; /*0x1001bc41f*/
    v4 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1001bc422*/
    v3 = (_QWORD *)v46; /*0x1001bc42a*/
    *(_QWORD *)v46 = v4; /*0x1001bc42d*/
    *(_QWORD *)(v46 + 8) = v5; /*0x1001bc430*/
    *(_BYTE *)(v46 + 16) = 1; /*0x1001bc434*/
  }
  *v3 = v4 + 1; /*0x1001bbcec*/
  v73 = 0; /*0x1001bbcf6*/
  v72 = 0; /*0x1001bbd04*/
  v71 = 0; /*0x1001bbd12*/
  v70 = anon_0bcfb5f5de49270c5675714f036928d0_3; /*0x1001bbd20*/
  v74 = v4; /*0x1001bbd27*/
  v75 = v5; /*0x1001bbd2b*/
  v57 = a2 + 120; /*0x1001bbd3a*/
  v58[0] = 0; /*0x1001bbd41*/
  v59 = a2 + 144; /*0x1001bbd48*/
  v60 = 1; /*0x1001bbd4f*/
  for ( i = 0; i != 32; i += 16 ) /*0x1001bbd56*/
  {
    v7 = *(_QWORD *)&v58[i - 8]; /*0x1001bbd83*/
    std::sys::fs::metadata::h32fa16d3052ea535(&v51, *(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 16)); /*0x1001bbd9a*/
    if ( !(_BYTE)v51 ) /*0x1001bbda6*/
    {
      v8 = *(_QWORD *)(v7 + 8); /*0x1001bbda8*/
      v9 = *(_QWORD *)(v7 + 16); /*0x1001bbdac*/
      v51 = 0; /*0x1001bbdb0*/
      v52 = 8; /*0x1001bbdbb*/
      v53 = 0; /*0x1001bbdc6*/
      codexmate_lib::core::sessions::walkdir::visit::h55602ccf7b5e00ae(v8, v9, &v51); /*0x1001bbdd8*/
      v10 = (__int64 *)v52; /*0x1001bbde4*/
      v76 = v52; /*0x1001bbdfa*/
      v77 = v52; /*0x1001bbdfe*/
      v64 = v51; /*0x1001bbe02*/
      v78 = v51; /*0x1001bbe09*/
      v83 = v52 + 40 * v53; /*0x1001bbe0d*/
      v79 = v83; /*0x1001bbe11*/
      v80 = (__int64 *)v52; /*0x1001bbe15*/
      if ( !v53 ) /*0x1001bbe1c*/
        goto LABEL_63; /*0x1001bbe1c*/
      v81 = i; /*0x1001bbe22*/
      v11 = v80; /*0x1001bbe26*/
      while ( 1 ) /*0x1001bbe3d*/
      {
        v10 = v11 + 5; /*0x1001bbe3d*/
        v12 = *v11; /*0x1001bbe41*/
        if ( *v11 == 0x8000000000000000LL ) /*0x1001bbe51*/
        {
LABEL_62:
          v77 = (__int64)v10; /*0x1001bc2e1*/
          i = v81; /*0x1001bc2e5*/
LABEL_63:
          if ( (__int64 *)v83 != v10 ) /*0x1001bc303*/
          {
            v41 = (v83 - (unsigned __int64)v10) / 0x28; /*0x1001bc308*/
            v42 = v10 + 1; /*0x1001bc30c*/
            do /*0x1001bc327*/
            {
              if ( *(v42 - 1) ) /*0x1001bc329*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001bc33c*/
              v42 += 5; /*0x1001bc320*/
              --v41; /*0x1001bc324*/
            }
            while ( v41 ); /*0x1001bc327*/
          }
          if ( v64 ) /*0x1001bc35a*/
LABEL_74:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001bc3ae*/
          goto LABEL_5; /*0x1001bc3b3*/
        }
        v13 = v11[1]; /*0x1001bbe57*/
        v14 = v11[2]; /*0x1001bbe5b*/
        v15 = v11[3]; /*0x1001bbe5f*/
        v63 = v11[4]; /*0x1001bbe68*/
        v16 = std::path::Path::file_name::hf6c2daad91e50ebf(v13, v14); /*0x1001bbe76*/
        if ( !v16 ) /*0x1001bbe7e*/
          goto LABEL_57; /*0x1001bbe7e*/
        core::str::converts::from_utf8::hb32deb9559450f6e(&v51, v16, v17); /*0x1001bbe8e*/
        if ( (unsigned __int8)v51 | (v53 < 8) /*0x1001bbedd*/
          || *(_QWORD *)v52 != 0x2D74756F6C6C6F72LL
          || *(_DWORD *)(v52 + v53 - 6) ^ 0x6F736A2E | *(unsigned __int16 *)(v52 + v53 - 2) ^ 0x6C6E )
        {
          goto LABEL_57; /*0x1001bbedf*/
        }
        v18 = v53 - 6; /*0x1001bbee5*/
        if ( v53 < 0xE || *(char *)(v52 + 8) < -64 || *(char *)(v52 + v18) <= -65 ) /*0x1001bbf01*/
        {
          v77 = (__int64)v10; /*0x1001bc43d*/
          core::str::slice_error_fail::h480e51fbd8b15eba(v52, v53, 8, v18, &off_101526220); /*0x1001bc44d*/
        }
        v48[0] = 0; /*0x1001bbf0f*/
        v48[1] = v53 - 14; /*0x1001bbf1a*/
        v48[2] = v52 + 8; /*0x1001bbf21*/
        v48[3] = v53 - 14; /*0x1001bbf28*/
        v48[4] = 0; /*0x1001bbf2f*/
        v48[5] = v53 - 14; /*0x1001bbf3a*/
        v48[6] = 0x2D0000002DLL; /*0x1001bbf4b*/
        v49 = 1; /*0x1001bbf52*/
        v50 = 1; /*0x1001bbf59*/
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h42db866a9fb1b885( /*0x1001bbf70*/
          &v66,
          v48);
        if ( v68 <= 4 ) /*0x1001bbf80*/
        {
          if ( v66 ) /*0x1001bbf8c*/
            goto LABEL_56; /*0x1001bbf8c*/
          goto LABEL_57; /*0x1001bbf8c*/
        }
        v84 = v67; /*0x1001bbfa9*/
        alloc::str::join_generic_copy::hf183b70a1ae88120( /*0x1001bbfcb*/
          &v51,
          v67 + 16 * v68 - 80,
          5,
          "-/payload/cwd/payload/timestamp/payload/source/subagent/thread_spawn/parent_thread_id/payload/source/subagent/"
          "thread_spawn/depth/payload/agent_nickname/payload/agent_role/subagent/thread_spawn/parent_thread_id/subagent/t"
          "hread_spawn/depth",
          1);
        v69[2] = v53; /*0x1001bbfd7*/
        v69[1] = v52; /*0x1001bbfec*/
        v69[0] = v51; /*0x1001bbff3*/
        alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v61, v13, v14); /*0x1001bc007*/
        v19 = v61[1]; /*0x1001bc00c*/
        v20 = v62; /*0x1001bc013*/
        if ( v62 < 0 ) /*0x1001bc01d*/
        {
          v22 = 0; /*0x1001bc3b8*/
LABEL_76:
          v77 = (__int64)v10; /*0x1001bc3ba*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v22, v20); /*0x1001bc3be*/
        }
        if ( v62 ) /*0x1001bc023*/
        {
          v82 = v62; /*0x1001bc025*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001bc029*/
          v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v82, 1u); /*0x1001bc037*/
          v22 = 1; /*0x1001bc03c*/
          v20 = v82; /*0x1001bc041*/
          if ( !v21 ) /*0x1001bc048*/
            goto LABEL_76; /*0x1001bc048*/
          if ( v82 < 8 || (unsigned __int64)(v21 - v19) < 0x20 ) /*0x1001bc05f*/
          {
            v23 = 0; /*0x1001bc069*/
LABEL_36:
            v33 = v23; /*0x1001bc149*/
            v34 = v20 & 3; /*0x1001bc14f*/
            if ( (v20 & 3) != 0 ) /*0x1001bc159*/
            {
              v33 = v23; /*0x1001bc15b*/
              do /*0x1001bc176*/
              {
                v35 = *(_BYTE *)(v19 + v33); /*0x1001bc160*/
                if ( v35 == 92 ) /*0x1001bc168*/
                  v35 = 47; /*0x1001bc168*/
                *(_BYTE *)(v21 + v33++) = v35; /*0x1001bc16c*/
                --v34; /*0x1001bc173*/
              }
              while ( v34 ); /*0x1001bc176*/
            }
            if ( v23 - v20 <= 0xFFFFFFFFFFFFFFFCLL ) /*0x1001bc17f*/
            {
              do /*0x1001bc1d5*/
              {
                v36 = *(_BYTE *)(v19 + v33); /*0x1001bc190*/
                if ( v36 == 92 ) /*0x1001bc197*/
                  v36 = 47; /*0x1001bc197*/
                *(_BYTE *)(v21 + v33) = v36; /*0x1001bc19b*/
                v37 = *(_BYTE *)(v19 + v33 + 1); /*0x1001bc19e*/
                if ( v37 == 92 ) /*0x1001bc1a6*/
                  v37 = 47; /*0x1001bc1a6*/
                *(_BYTE *)(v21 + v33 + 1) = v37; /*0x1001bc1aa*/
                v38 = *(_BYTE *)(v19 + v33 + 2); /*0x1001bc1ae*/
                if ( v38 == 92 ) /*0x1001bc1b6*/
                  v38 = 47; /*0x1001bc1b6*/
                *(_BYTE *)(v21 + v33 + 2) = v38; /*0x1001bc1ba*/
                v39 = *(_BYTE *)(v19 + v33 + 3); /*0x1001bc1be*/
                if ( v39 == 92 ) /*0x1001bc1c6*/
                  v39 = 47; /*0x1001bc1c6*/
                *(_BYTE *)(v21 + v33 + 3) = v39; /*0x1001bc1ca*/
                v33 += 4LL; /*0x1001bc1ce*/
              }
              while ( v20 != v33 ); /*0x1001bc1d5*/
            }
            goto LABEL_51; /*0x1001bc1d5*/
          }
          if ( v82 >= 0x20 ) /*0x1001bc07e*/
          {
            v23 = v82 & 0x7FFFFFFFFFFFFFE0LL; /*0x1001bc092*/
            v24 = 0; /*0x1001bc095*/
            si128 = _mm_load_si128((const __m128i *)&xmmword_10125B310); /*0x1001bc097*/
            v26 = _mm_load_si128((const __m128i *)&xmmword_10125B320); /*0x1001bc09f*/
            do /*0x1001bc0eb*/
            {
              v27 = _mm_loadu_si128((const __m128i *)(v19 + v24)); /*0x1001bc0b0*/
              v28 = _mm_loadu_si128((const __m128i *)(v19 + v24 + 16)); /*0x1001bc0b5*/
              *(__m128i *)(v21 + v24) = _mm_blendv_epi8(v27, v26, _mm_cmpeq_epi8(v27, si128)); /*0x1001bc0d9*/
              *(__m128i *)(v21 + v24 + 16) = _mm_blendv_epi8(v28, v26, _mm_cmpeq_epi8(v28, si128)); /*0x1001bc0de*/
              v24 += 32; /*0x1001bc0e4*/
            }
            while ( v23 != v24 ); /*0x1001bc0eb*/
            if ( v20 == v23 ) /*0x1001bc0f0*/
              goto LABEL_51; /*0x1001bc0f0*/
            if ( (v20 & 0x18) == 0 ) /*0x1001bc0fa*/
              goto LABEL_36; /*0x1001bc0fa*/
          }
          else
          {
            v23 = 0; /*0x1001bc080*/
          }
          v29 = v23; /*0x1001bc0fc*/
          v23 = v20 & 0x7FFFFFFFFFFFFFF8LL; /*0x1001bc10d*/
          v30 = _mm_load_si128((const __m128i *)&xmmword_10125B330); /*0x1001bc110*/
          v31 = _mm_load_si128((const __m128i *)&xmmword_10125B340); /*0x1001bc118*/
          do /*0x1001bc13e*/
          {
            v32 = _mm_loadl_epi64((const __m128i *)(v19 + v29)); /*0x1001bc120*/
            *(_QWORD *)(v21 + v29) = _mm_blendv_epi8(v32, v31, _mm_cmpeq_epi8(v32, v30)).u64[0]; /*0x1001bc132*/
            v29 += 8LL; /*0x1001bc137*/
          }
          while ( v23 != v29 ); /*0x1001bc13e*/
          if ( v20 != v23 ) /*0x1001bc143*/
            goto LABEL_36; /*0x1001bc143*/
        }
        else
        {
          v21 = 1; /*0x1001bc070*/
        }
LABEL_51:
        v40 = v58[v81]; /*0x1001bc1d7*/
        v51 = v20; /*0x1001bc1e3*/
        v52 = v21; /*0x1001bc1ea*/
        v53 = v20; /*0x1001bc1f1*/
        v54 = v15; /*0x1001bc1f8*/
        v56 = v40; /*0x1001bc1ff*/
        v55 = v63; /*0x1001bc20d*/
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he4212d93d04a62e2(&v47, &v70, v69, &v51); /*0x1001bc231*/
        if ( v47 != 0x8000000000000000LL && v47 ) /*0x1001bc24f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001bc25d*/
        if ( 2LL * v61[0] ) /*0x1001bc269*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001bc2c6*/
          if ( !v66 ) /*0x1001bc2d9*/
            goto LABEL_57; /*0x1001bc2d9*/
LABEL_56:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001bc286*/
          goto LABEL_57; /*0x1001bc28f*/
        }
        if ( v66 ) /*0x1001bc284*/
          goto LABEL_56; /*0x1001bc284*/
LABEL_57:
        if ( v12 ) /*0x1001bc2a3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001bc2b4*/
        v11 = v10; /*0x1001bbe30*/
        if ( v10 == (__int64 *)v83 ) /*0x1001bbe37*/
        {
          v10 = (__int64 *)v83; /*0x1001bc2dd*/
          goto LABEL_62; /*0x1001bc2dd*/
        }
      }
    }
    if ( (v52 & 3) == 1 ) /*0x1001bbd6f*/
    {
      v43 = *(_QWORD *)(v52 + 7); /*0x1001bc37b*/
      if ( *(_QWORD *)v43 ) /*0x1001bc37f*/
        (*(void (__fastcall **)(_QWORD))v43)(*(_QWORD *)(v52 - 1)); /*0x1001bc38a*/
      if ( *(_QWORD *)(v43 + 8) ) /*0x1001bc38c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001bc39c*/
      goto LABEL_74; /*0x1001bc39c*/
    }
LABEL_5:
    ; /*0x1001bbd75*/
  }
  v44 = v65; /*0x1001bc3cc*/
  v65[5] = v75; /*0x1001bc3d3*/
  v44[4] = v74; /*0x1001bc3db*/
  v44[3] = v73; /*0x1001bc3e6*/
  v44[2] = v72; /*0x1001bc3f1*/
  result = v70; /*0x1001bc3f5*/
  v44[1] = v71; /*0x1001bc403*/
  *v44 = result; /*0x1001bc407*/
  return result; /*0x1001bc40a*/
}