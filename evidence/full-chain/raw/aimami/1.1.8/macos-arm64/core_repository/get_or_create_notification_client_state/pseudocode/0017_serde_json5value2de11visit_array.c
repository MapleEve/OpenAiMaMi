// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND get_or_create_notification_client_state node 0x1002def60 depth=2
char *__fastcall serde_json::value::de::visit_array::h069239bf22b8c6a1(
        char *__src,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int8 *v9; // r12
  __int64 v10; // r14
  int v11; // edi
  unsigned __int8 *v12; // r14
  __int64 v13; // rdx
  unsigned __int8 v14; // cl
  _WORD *v15; // rax
  __int64 v16; // r13
  unsigned __int8 *v17; // r15
  __int8 v18; // al
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rsi
  unsigned __int8 *v23; // r14
  __int64 v24; // rax
  unsigned __int8 *v25; // r13
  __int8 v26; // al
  __int64 v27; // rdx
  __int64 v28; // r15
  unsigned __int64 v29; // r14
  __int8 v30; // cl
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r14
  __int64 v35; // rdi
  __int64 v36; // r15
  unsigned __int8 *v37; // r14
  unsigned __int64 v38; // rax
  unsigned __int8 *v39; // r14
  unsigned __int64 v40; // rcx
  bool v41; // zf
  __int64 v42; // rsi
  __int64 v43; // rcx
  unsigned __int64 v44; // rsi
  __int64 v45; // rdx
  unsigned __int64 v46; // r12
  unsigned __int64 v48; // [rsp+8h] [rbp-1A8h] BYREF
  unsigned __int8 *v49; // [rsp+10h] [rbp-1A0h]
  unsigned __int64 v50; // [rsp+18h] [rbp-198h]
  __int64 v51; // [rsp+20h] [rbp-190h]
  __int64 v52; // [rsp+28h] [rbp-188h]
  __int64 v53; // [rsp+30h] [rbp-180h]
  __int64 v54; // [rsp+38h] [rbp-178h]
  __int64 v55; // [rsp+40h] [rbp-170h]
  __int64 v56; // [rsp+48h] [rbp-168h]
  __int64 v57; // [rsp+50h] [rbp-160h]
  __int64 v58; // [rsp+58h] [rbp-158h] BYREF
  unsigned __int8 *v59; // [rsp+60h] [rbp-150h]
  __int64 v60; // [rsp+68h] [rbp-148h]
  unsigned __int8 *v61; // [rsp+70h] [rbp-140h]
  _BYTE __dst[152]; // [rsp+78h] [rbp-138h] BYREF
  int v63; // [rsp+114h] [rbp-9Ch]
  __int64 v64; // [rsp+118h] [rbp-98h]
  _DWORD v65[2]; // [rsp+120h] [rbp-90h]
  __int64 v66; // [rsp+128h] [rbp-88h]
  unsigned __int64 v67; // [rsp+130h] [rbp-80h]
  __int64 v68; // [rsp+138h] [rbp-78h]
  unsigned __int64 v69; // [rsp+140h] [rbp-70h]
  unsigned __int64 v70; // [rsp+148h] [rbp-68h]
  __int64 v71; // [rsp+150h] [rbp-60h]
  __m256i v72; // [rsp+158h] [rbp-58h] BYREF
  __int64 v73; // [rsp+178h] [rbp-38h]
  _BYTE v74[41]; // [rsp+187h] [rbp-29h] BYREF

  v6 = a2[2]; /*0x1002def77*/
  v7 = *a2; /*0x1002def7b*/
  v8 = a2[1]; /*0x1002def7e*/
  v9 = (unsigned __int8 *)(v8 + 32 * v6); /*0x1002def89*/
  v58 = v8; /*0x1002def8c*/
  v59 = (unsigned __int8 *)v8; /*0x1002def93*/
  v60 = v7; /*0x1002def9a*/
  v61 = v9; /*0x1002defa1*/
  if ( v6 ) /*0x1002defab*/
  {
    v10 = v8 + 32; /*0x1002defad*/
    v59 = (unsigned __int8 *)(v8 + 32); /*0x1002defb1*/
    if ( *(_BYTE *)v8 == 6 ) /*0x1002defbe*/
    {
      v11 = 0; /*0x1002defc0*/
    }
    else
    {
      __dst[0] = *(_BYTE *)v8; /*0x1002defd9*/
      v13 = *(_QWORD *)(v8 + 9); /*0x1002defe3*/
      *(_QWORD *)&__dst[1] = *(_QWORD *)(v8 + 1); /*0x1002defe7*/
      *(_QWORD *)&__dst[9] = v13; /*0x1002defee*/
      *(_QWORD *)&__dst[17] = *(_QWORD *)(v8 + 17); /*0x1002deff9*/
      *(_QWORD *)&__dst[24] = *(_QWORD *)(v8 + 24); /*0x1002df004*/
      codexmate_lib::core::repository::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..repository..HotspotConfig$GT$::deserialize::h775b6b903ffb7821( /*0x1002df016*/
        &v72,
        __dst);
      if ( v72.i8[0] ) /*0x1002df01f*/
      {
        *((_QWORD *)__src + 1) = v72.i64[1]; /*0x1002df025*/
        goto LABEL_21; /*0x1002df029*/
      }
      v11 = v72.u8[1]; /*0x1002df02e*/
    }
    v8 = v10; /*0x1002df032*/
    v12 = v9; /*0x1002df035*/
    v63 = v11; /*0x1002df03b*/
    if ( (unsigned __int8 *)v8 == v9 ) /*0x1002df041*/
      goto LABEL_11; /*0x1002df041*/
LABEL_10:
    v12 = (unsigned __int8 *)(v8 + 32); /*0x1002df043*/
    v59 = (unsigned __int8 *)(v8 + 32); /*0x1002df047*/
    v14 = *(_BYTE *)v8; /*0x1002df04e*/
    if ( *(_BYTE *)v8 == 6 ) /*0x1002df054*/
      goto LABEL_11; /*0x1002df054*/
    __dst[0] = *(_BYTE *)v8; /*0x1002df144*/
    v22 = *(_QWORD *)(v8 + 9); /*0x1002df14e*/
    *(_QWORD *)&__dst[1] = *(_QWORD *)(v8 + 1); /*0x1002df152*/
    *(_QWORD *)&__dst[9] = v22; /*0x1002df159*/
    *(_QWORD *)&__dst[17] = *(_QWORD *)(v8 + 17); /*0x1002df164*/
    *(_QWORD *)&__dst[24] = *(_QWORD *)(v8 + 24); /*0x1002df16f*/
    if ( v14 == 3 ) /*0x1002df179*/
    {
      v16 = *(_QWORD *)&__dst[16]; /*0x1002df186*/
      if ( *(_QWORD *)&__dst[8] != 0x8000000000000000LL ) /*0x1002df19a*/
      {
        v56 = *(_QWORD *)&__dst[24]; /*0x1002df1b3*/
        v51 = v6; /*0x1002df1ba*/
        v73 = *(_QWORD *)&__dst[8]; /*0x1002df1c1*/
        if ( v12 != v9 ) /*0x1002df1c8*/
          goto LABEL_13; /*0x1002df1c8*/
LABEL_23:
        v69 = 0x8000000000000000LL; /*0x1002df1ce*/
        goto LABEL_24; /*0x1002df1de*/
      }
    }
    else
    {
      v16 = serde_json::value::de::_$LT$impl$u20$serde_json..value..Value$GT$::invalid_type::hbfb1b717da5be4f6( /*0x1002df894*/
              __dst,
              v74,
              &anon_daf50d54a2d3ecbdf54de6a8568b21ab_29);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(__dst); /*0x1002df89e*/
    }
    *((_QWORD *)__src + 1) = v16; /*0x1002df19c*/
LABEL_21:
    *(_QWORD *)__src = 2; /*0x1002df1a0*/
    goto LABEL_74; /*0x1002df1a7*/
  }
  v12 = v9; /*0x1002defc6*/
  v63 = 0; /*0x1002defcc*/
  if ( (unsigned __int8 *)v8 != v9 ) /*0x1002defd2*/
    goto LABEL_10; /*0x1002defd2*/
LABEL_11:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1002df05a*/
  v56 = 2; /*0x1002df064*/
  v15 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2u, 1u); /*0x1002df075*/
  if ( !v15 ) /*0x1002df07d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1002df965*/
  v16 = (__int64)v15; /*0x1002df083*/
  *v15 = 27953; /*0x1002df086*/
  v51 = v6; /*0x1002df090*/
  v73 = 2; /*0x1002df097*/
  if ( v12 == v9 ) /*0x1002df09e*/
    goto LABEL_23; /*0x1002df09e*/
LABEL_13:
  v17 = v12 + 32; /*0x1002df0a4*/
  v59 = v12 + 32; /*0x1002df0a8*/
  v18 = *v12; /*0x1002df0af*/
  if ( *v12 == 6 ) /*0x1002df0b5*/
    goto LABEL_27; /*0x1002df0b5*/
  v72.i8[0] = *v12; /*0x1002df0bb*/
  v19 = *(_QWORD *)(v12 + 9); /*0x1002df0c2*/
  *(__int64 *)((char *)v72.i64 + 1) = *(_QWORD *)(v12 + 1); /*0x1002df0c6*/
  *(__int64 *)((char *)&v72.i64[1] + 1) = v19; /*0x1002df0ca*/
  *(__int64 *)((char *)&v72.i64[2] + 1) = *(_QWORD *)(v12 + 17); /*0x1002df0d2*/
  v72.i64[3] = *((_QWORD *)v12 + 3); /*0x1002df0da*/
  if ( !v18 ) /*0x1002df0e0*/
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v72); /*0x1002df20c*/
LABEL_27:
    v69 = 0x8000000000000000LL; /*0x1002df211*/
    if ( v17 != v9 ) /*0x1002df225*/
      goto LABEL_28; /*0x1002df225*/
LABEL_24:
    v70 = 0x8000000000000000LL; /*0x1002df1e7*/
    v23 = v9; /*0x1002df1eb*/
    v71 = v16; /*0x1002df1ee*/
    v24 = 2; /*0x1002df1f2*/
LABEL_25:
    v25 = v23; /*0x1002df200*/
    goto LABEL_49; /*0x1002df203*/
  }
  *(__m256i *)__dst = v72; /*0x1002df0f5*/
  if ( v72.i8[0] != 3 ) /*0x1002df114*/
  {
    v20 = serde_json::value::de::_$LT$impl$u20$serde_json..value..Value$GT$::invalid_type::hbfb1b717da5be4f6( /*0x1002df8bf*/
            __dst,
            v74,
            &anon_daf50d54a2d3ecbdf54de6a8568b21ab_29);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(__dst); /*0x1002df8c9*/
    goto LABEL_17; /*0x1002df8ce*/
  }
  v20 = *(_QWORD *)&__dst[16]; /*0x1002df121*/
  if ( *(_QWORD *)&__dst[8] == 0x8000000000000000LL ) /*0x1002df135*/
  {
LABEL_17:
    v21 = v73; /*0x1002df13b*/
    goto LABEL_46; /*0x1002df13f*/
  }
  v66 = *(_QWORD *)&__dst[16]; /*0x1002df427*/
  if ( *(_QWORD *)&__dst[8] == 0x8000000000000001LL ) /*0x1002df435*/
  {
    v21 = v73; /*0x1002df43b*/
    v20 = v66; /*0x1002df43f*/
LABEL_46:
    *((_QWORD *)__src + 1) = v20; /*0x1002df446*/
    *(_QWORD *)__src = 2; /*0x1002df44a*/
    if ( !v21 ) /*0x1002df454*/
      goto LABEL_74; /*0x1002df454*/
    goto LABEL_73; /*0x1002df454*/
  }
  v52 = *(_QWORD *)&__dst[24]; /*0x1002df83f*/
  v69 = *(_QWORD *)&__dst[8]; /*0x1002df846*/
  if ( v17 == v9 ) /*0x1002df84d*/
    goto LABEL_24; /*0x1002df84d*/
LABEL_28:
  v23 = v17 + 32; /*0x1002df227*/
  v59 = v17 + 32; /*0x1002df22b*/
  v26 = *v17; /*0x1002df232*/
  if ( *v17 == 6 ) /*0x1002df238*/
    goto LABEL_37; /*0x1002df238*/
  v72.i8[0] = *v17; /*0x1002df23e*/
  v27 = *(_QWORD *)(v17 + 9); /*0x1002df245*/
  *(__int64 *)((char *)v72.i64 + 1) = *(_QWORD *)(v17 + 1); /*0x1002df249*/
  *(__int64 *)((char *)&v72.i64[1] + 1) = v27; /*0x1002df24d*/
  *(__int64 *)((char *)&v72.i64[2] + 1) = *(_QWORD *)(v17 + 17); /*0x1002df255*/
  v72.i64[3] = *((_QWORD *)v17 + 3); /*0x1002df25d*/
  if ( !v26 ) /*0x1002df263*/
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v72); /*0x1002df31c*/
LABEL_37:
    v70 = 0x8000000000000000LL; /*0x1002df321*/
    v71 = v16; /*0x1002df32f*/
    v24 = 2; /*0x1002df333*/
    if ( v23 == v9 ) /*0x1002df33b*/
      goto LABEL_25; /*0x1002df33b*/
    goto LABEL_38; /*0x1002df33b*/
  }
  *(__m256i *)__dst = v72; /*0x1002df278*/
  v28 = v73; /*0x1002df297*/
  if ( v72.i8[0] != 3 ) /*0x1002df29b*/
  {
    v71 = v16; /*0x1002df923*/
    v68 = serde_json::value::de::_$LT$impl$u20$serde_json..value..Value$GT$::invalid_type::hbfb1b717da5be4f6( /*0x1002df93e*/
            __dst,
            v74,
            &anon_daf50d54a2d3ecbdf54de6a8568b21ab_29);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(__dst); /*0x1002df94d*/
    v28 = v73; /*0x1002df952*/
    goto LABEL_33; /*0x1002df956*/
  }
  v68 = *(_QWORD *)&__dst[16]; /*0x1002df2af*/
  if ( *(_QWORD *)&__dst[8] == 0x8000000000000000LL /*0x1002df2cc*/
    || (v70 = *(_QWORD *)&__dst[8], *(_QWORD *)&__dst[8] == 0x8000000000000001LL) )
  {
LABEL_33:
    v29 = v69; /*0x1002df2d2*/
    *((_QWORD *)__src + 1) = v68; /*0x1002df2da*/
    *(_QWORD *)__src = 2; /*0x1002df2de*/
    if ( !(2 * v29) ) /*0x1002df2f0*/
      goto LABEL_72; /*0x1002df2f0*/
    goto LABEL_34; /*0x1002df2f0*/
  }
  v53 = *(_QWORD *)&__dst[24]; /*0x1002df85f*/
  v71 = v16; /*0x1002df866*/
  v24 = 2; /*0x1002df86a*/
  if ( v23 == v9 ) /*0x1002df872*/
    goto LABEL_25; /*0x1002df872*/
LABEL_38:
  v25 = v23 + 32; /*0x1002df341*/
  v59 = v23 + 32; /*0x1002df345*/
  v30 = *v23; /*0x1002df34c*/
  if ( *v23 != 6 ) /*0x1002df353*/
  {
    v72.i8[0] = *v23; /*0x1002df359*/
    v31 = *(_QWORD *)(v23 + 9); /*0x1002df360*/
    *(__int64 *)((char *)v72.i64 + 1) = *(_QWORD *)(v23 + 1); /*0x1002df364*/
    *(__int64 *)((char *)&v72.i64[1] + 1) = v31; /*0x1002df368*/
    *(__int64 *)((char *)&v72.i64[2] + 1) = *(_QWORD *)(v23 + 17); /*0x1002df370*/
    v72.i64[3] = *((_QWORD *)v23 + 3); /*0x1002df378*/
    if ( v30 ) /*0x1002df37e*/
    {
      *(__m256i *)__dst = v72; /*0x1002df393*/
      v32 = serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..value..Value$GT$::deserialize_i64::hc851276125723572(__dst); /*0x1002df3b7*/
      v57 = v33; /*0x1002df3bc*/
      v24 = v32 + 1; /*0x1002df3c3*/
      if ( v24 == 2 ) /*0x1002df3ca*/
      {
        *((_QWORD *)__src + 1) = v57; /*0x1002df3d7*/
        *(_QWORD *)__src = 2; /*0x1002df3db*/
        v28 = v73; /*0x1002df3e6*/
        v34 = v69; /*0x1002df3ea*/
        if ( !(2 * v70) ) /*0x1002df3fd*/
          goto LABEL_71; /*0x1002df3fd*/
        goto LABEL_42; /*0x1002df3fd*/
      }
    }
    else
    {
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v72); /*0x1002df463*/
      v24 = 0; /*0x1002df468*/
    }
  }
LABEL_49:
  LOBYTE(v35) = 0; /*0x1002df46a*/
  v36 = 0; /*0x1002df470*/
  if ( v24 != 2 ) /*0x1002df476*/
    v36 = v24; /*0x1002df476*/
  if ( v25 == v9 ) /*0x1002df47d*/
  {
    v38 = 0x8000000000000000LL; /*0x1002df4b4*/
    v67 = 0x8000000000000000LL; /*0x1002df4be*/
    goto LABEL_54; /*0x1002df4c5*/
  }
  v37 = v25 + 32; /*0x1002df47f*/
  v59 = v25 + 32; /*0x1002df483*/
  if ( *v25 == 6 ) /*0x1002df491*/
  {
    v35 = 0; /*0x1002df497*/
    v25 += 32; /*0x1002df499*/
    v38 = 0x8000000000000000LL; /*0x1002df49c*/
    v67 = 0x8000000000000000LL; /*0x1002df4a6*/
    if ( v37 == v9 ) /*0x1002df4ad*/
    {
LABEL_54:
      v39 = v9; /*0x1002df4af*/
LABEL_57:
      v40 = 0x8000000000000000LL; /*0x1002df4df*/
LABEL_58:
      v41 = v40 == 0x8000000000000000LL; /*0x1002df4ec*/
      v42 = 8; /*0x1002df4f1*/
      if ( v40 == 0x8000000000000000LL ) /*0x1002df4f6*/
      {
        v40 = 0; /*0x1002df4fa*/
        if ( v41 ) /*0x1002df4fe*/
          v38 = 0; /*0x1002df4fe*/
      }
      else
      {
        v42 = (__int64)v25; /*0x1002df4f6*/
      }
      *((_QWORD *)__src + 2) = v73; /*0x1002df506*/
      *((_QWORD *)__src + 3) = v71; /*0x1002df50e*/
      *((_QWORD *)__src + 4) = v56; /*0x1002df519*/
      *((_QWORD *)__src + 8) = v69; /*0x1002df521*/
      *((_QWORD *)__src + 9) = v66; /*0x1002df52c*/
      *((_QWORD *)__src + 10) = v52; /*0x1002df537*/
      *((_QWORD *)__src + 11) = v70; /*0x1002df53f*/
      *((_QWORD *)__src + 12) = v68; /*0x1002df547*/
      *((_QWORD *)__src + 13) = v53; /*0x1002df552*/
      *((_QWORD *)__src + 14) = v67; /*0x1002df55a*/
      *((_QWORD *)__src + 15) = v64; /*0x1002df565*/
      *((_QWORD *)__src + 16) = a5; /*0x1002df569*/
      __src[136] = v35; /*0x1002df570*/
      *(_DWORD *)(__src + 137) = v65[0]; /*0x1002df57d*/
      *((_DWORD *)__src + 35) = *(_DWORD *)((char *)v65 + 3); /*0x1002df589*/
      *(_QWORD *)__src = v36; /*0x1002df58f*/
      *((_QWORD *)__src + 1) = v57; /*0x1002df599*/
      *((_QWORD *)__src + 5) = v40; /*0x1002df59d*/
      *((_QWORD *)__src + 6) = v42; /*0x1002df5a1*/
      *((_QWORD *)__src + 7) = v38; /*0x1002df5a5*/
      __src[144] = v63; /*0x1002df5af*/
      memcpy(__dst, __src, sizeof(__dst)); /*0x1002df5c4*/
      if ( v9 != v39 ) /*0x1002df5cc*/
      {
        *((_QWORD *)__src + 1) = serde_core::de::Error::invalid_length::hcacc1da483e1fd21( /*0x1002df5ec*/
                                   v51,
                                   (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_108,
                                   (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_15);
        *(_QWORD *)__src = 2; /*0x1002df5f0*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h7a65c6381a6c4fba(__dst); /*0x1002df5fe*/
      }
      goto LABEL_74; /*0x1002df603*/
    }
  }
  else
  {
    v72.i8[0] = *v25; /*0x1002df608*/
    v43 = *(_QWORD *)(v25 + 9); /*0x1002df60f*/
    *(__int64 *)((char *)v72.i64 + 1) = *(_QWORD *)(v25 + 1); /*0x1002df613*/
    *(__int64 *)((char *)&v72.i64[1] + 1) = v43; /*0x1002df617*/
    *(__int64 *)((char *)&v72.i64[2] + 1) = *(_QWORD *)(v25 + 17); /*0x1002df61f*/
    v72.i64[3] = *((_QWORD *)v25 + 3); /*0x1002df627*/
    serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..value..Value$GT$::deserialize_struct::h72c2534d8844a91e( /*0x1002df64f*/
      __dst,
      &v72,
      &anon_3e4c14ac1826b92abbb84b981a88c995_446,
      21,
      &anon_3e4c14ac1826b92abbb84b981a88c995_469,
      2);
    if ( *(_QWORD *)__dst == 0x8000000000000001LL ) /*0x1002df672*/
    {
      *((_QWORD *)__src + 1) = *(_QWORD *)&__dst[8]; /*0x1002df678*/
      *(_QWORD *)__src = 2; /*0x1002df67c*/
      v28 = v73; /*0x1002df683*/
      v34 = v69; /*0x1002df687*/
      v44 = v70; /*0x1002df68b*/
      goto LABEL_70; /*0x1002df68f*/
    }
    v67 = *(_QWORD *)__dst; /*0x1002df7da*/
    v64 = *(_QWORD *)&__dst[8]; /*0x1002df7de*/
    a5 = *(_QWORD *)&__dst[16]; /*0x1002df7e5*/
    v35 = __dst[24]; /*0x1002df7ec*/
    v65[0] = *(_DWORD *)&__dst[25]; /*0x1002df7f9*/
    v38 = *(unsigned int *)&__dst[28]; /*0x1002df7ff*/
    *(_DWORD *)((char *)v65 + 3) = *(_DWORD *)&__dst[28]; /*0x1002df805*/
    v25 += 32; /*0x1002df80b*/
    if ( v37 == v9 ) /*0x1002df811*/
      goto LABEL_54; /*0x1002df811*/
  }
  v39 = v25 + 32; /*0x1002df4c7*/
  v59 = v25 + 32; /*0x1002df4cb*/
  v38 = *v25; /*0x1002df4d2*/
  if ( (_BYTE)v38 == 6 ) /*0x1002df4d9*/
    goto LABEL_57; /*0x1002df4d9*/
  v55 = a5; /*0x1002df694*/
  v54 = v35; /*0x1002df69b*/
  __dst[0] = v38; /*0x1002df6a2*/
  v45 = *(_QWORD *)(v25 + 9); /*0x1002df6ac*/
  *(_QWORD *)&__dst[1] = *(_QWORD *)(v25 + 1); /*0x1002df6b0*/
  *(_QWORD *)&__dst[9] = v45; /*0x1002df6b7*/
  *(_QWORD *)&__dst[17] = *(_QWORD *)(v25 + 17); /*0x1002df6c2*/
  *(_QWORD *)&__dst[24] = *((_QWORD *)v25 + 3); /*0x1002df6cd*/
  if ( (_BYTE)v38 == 4 ) /*0x1002df6d6*/
  {
    *(__int128 *)((char *)v72.i128 + 8) = *(_OWORD *)&__dst[16]; /*0x1002df6f5*/
    v72.i64[0] = *(_QWORD *)&__dst[8]; /*0x1002df6f9*/
    serde_json::value::de::visit_array::hf0700ca007d7bbca(&v48, &v72); /*0x1002df708*/
    v40 = v48; /*0x1002df70d*/
    v25 = v49; /*0x1002df714*/
    LOBYTE(v35) = v54; /*0x1002df728*/
    a5 = v55; /*0x1002df72f*/
    if ( v48 != 0x8000000000000000LL ) /*0x1002df736*/
    {
      v38 = v50; /*0x1002df81c*/
      goto LABEL_58; /*0x1002df82d*/
    }
  }
  else
  {
    v25 = (unsigned __int8 *)serde_json::value::de::_$LT$impl$u20$serde_json..value..Value$GT$::invalid_type::hbfb1b717da5be4f6( /*0x1002df8ea*/
                               __dst,
                               v74,
                               &anon_daf50d54a2d3ecbdf54de6a8568b21ab_20);
    v49 = v25; /*0x1002df8ed*/
    v48 = 0x8000000000000000LL; /*0x1002df8fe*/
    if ( __dst[0] != 4 ) /*0x1002df90c*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(__dst); /*0x1002df919*/
  }
  *((_QWORD *)__src + 1) = v25; /*0x1002df73c*/
  *(_QWORD *)__src = 2; /*0x1002df740*/
  v28 = v73; /*0x1002df756*/
  v34 = v69; /*0x1002df75a*/
  v44 = v70; /*0x1002df75e*/
  if ( 2 * v67 ) /*0x1002df74b*/
  {
    v46 = v70; /*0x1002df770*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1002df776*/
    v44 = v46; /*0x1002df77b*/
  }
LABEL_70:
  if ( 2 * v44 ) /*0x1002df782*/
  {
LABEL_42:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1002df403*/
    if ( !(2 * v34) ) /*0x1002df41c*/
      goto LABEL_72; /*0x1002df41c*/
LABEL_34:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1002df2f6*/
    if ( !v28 ) /*0x1002df30d*/
      goto LABEL_74; /*0x1002df30d*/
    goto LABEL_73; /*0x1002df30d*/
  }
LABEL_71:
  if ( 2 * v34 ) /*0x1002df793*/
    goto LABEL_34; /*0x1002df79e*/
LABEL_72:
  if ( v28 ) /*0x1002df7a7*/
LABEL_73:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1002df7a9*/
LABEL_74:
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2493b1aa827ad809(&v58); /*0x1002df7b9*/
  return __src; /*0x1002df7c8*/
}