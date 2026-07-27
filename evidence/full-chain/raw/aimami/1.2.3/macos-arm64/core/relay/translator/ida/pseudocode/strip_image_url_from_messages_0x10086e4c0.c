// __ZN13codexmate_lib4core5relay10translator29strip_image_url_from_messages @ 0x10086e4c0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::translator::strip_image_url_from_messages::hce7c77e3d0114924(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v4; // r15
  size_t v5; // r14
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int128 v20; // kr00_16
  __int64 v21; // r12
  _DWORD *v22; // rax
  _DWORD *v23; // rax
  __m256i *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __m256i *v29; // rsi
  _DWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  const void *v37; // r12
  __int64 v38; // r15
  __int64 v39; // rcx
  __int128 v41; // [rsp+0h] [rbp-170h]
  __int64 v42; // [rsp+10h] [rbp-160h]
  __int64 v43; // [rsp+18h] [rbp-158h]
  __int64 v44; // [rsp+20h] [rbp-150h] BYREF
  __int64 v45; // [rsp+28h] [rbp-148h]
  _DWORD *v46; // [rsp+30h] [rbp-140h]
  __int64 v47; // [rsp+38h] [rbp-138h]
  __int64 v48; // [rsp+40h] [rbp-130h] BYREF
  _DWORD *v49; // [rsp+48h] [rbp-128h]
  __int64 v50; // [rsp+50h] [rbp-120h]
  _QWORD v51[2]; // [rsp+58h] [rbp-118h] BYREF
  __int64 v52; // [rsp+68h] [rbp-108h]
  __m256i v53; // [rsp+70h] [rbp-100h] BYREF
  __int64 v54; // [rsp+90h] [rbp-E0h]
  __int64 v55; // [rsp+98h] [rbp-D8h]
  __int64 v56; // [rsp+A0h] [rbp-D0h]
  __int64 v57; // [rsp+A8h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-C0h]
  __int64 v59; // [rsp+B8h] [rbp-B8h]
  __int64 v60; // [rsp+C0h] [rbp-B0h]
  __int64 v61; // [rsp+C8h] [rbp-A8h]
  __int64 v62; // [rsp+D0h] [rbp-A0h]
  __int64 v63; // [rsp+D8h] [rbp-98h]
  __int64 v64; // [rsp+E0h] [rbp-90h]
  _DWORD *v65; // [rsp+E8h] [rbp-88h]
  __int64 v66; // [rsp+F0h] [rbp-80h]
  __m256i v67; // [rsp+F8h] [rbp-78h] BYREF
  __int64 v68; // [rsp+118h] [rbp-58h]
  __int64 v69; // [rsp+120h] [rbp-50h]
  __int64 v70; // [rsp+128h] [rbp-48h]
  __int64 v71; // [rsp+130h] [rbp-40h] BYREF
  __int128 v72; // [rsp+138h] [rbp-38h]

  v1 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x10086e4e3*/
         "messagesobjectpropertiesdescriptionparametersstrict",
         8,
         a1);
  if ( !v1 || *(_BYTE *)v1 != 4 || (v2 = *(_QWORD *)(v1 + 24)) == 0 ) /*0x10086e501*/
  {
    LODWORD(v5) = 0; /*0x10086ed50*/
    return (unsigned int)v5; /*0x10086ed50*/
  }
  v3 = *(_QWORD *)(v1 + 16); /*0x10086e507*/
  v4 = v3 + 32 * v2; /*0x10086e50f*/
  LODWORD(v5) = 0; /*0x10086e512*/
  v61 = v4; /*0x10086e51c*/
  while ( 2 ) /*0x10086e540*/
  {
    v6 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x10086e540*/
           "contentpattern.output_modehead_limit",
           7,
           v3);
    if ( !v6 ) /*0x10086e553*/
      goto LABEL_6; /*0x10086e553*/
    v7 = v6; /*0x10086e555*/
    if ( *(_BYTE *)v6 != 4 ) /*0x10086e55b*/
      goto LABEL_6; /*0x10086e55b*/
    v8 = *(_QWORD *)(v6 + 24); /*0x10086e55d*/
    if ( !v8 ) /*0x10086e564*/
      goto LABEL_6; /*0x10086e564*/
    v9 = *(_QWORD *)(v6 + 16); /*0x10086e566*/
    v10 = 32 * v8; /*0x10086e56a*/
    while ( 1 ) /*0x10086e589*/
    {
      v11 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10086e589*/
              &anon_10420c9971c21f44d230d15b39fb3fec_75,
              4,
              v9);
      if ( v11 ) /*0x10086e591*/
      {
        if ( *(_BYTE *)v11 == 3 /*0x10086e5bb*/
          && *(_QWORD *)(v11 + 24) == 9
          && !(**(_QWORD **)(v11 + 16) ^ 0x72755F6567616D69LL
             | *(unsigned __int8 *)(*(_QWORD *)(v11 + 16) + 8LL) ^ 0x6CLL) )
        {
          break; /*0x10086e5bb*/
        }
      }
      v9 += 32; /*0x10086e570*/
      v10 -= 32; /*0x10086e574*/
      if ( !v10 ) /*0x10086e578*/
      {
        v4 = v61; /*0x10086e525*/
        goto LABEL_6; /*0x10086e525*/
      }
    }
    v71 = 0; /*0x10086e5c0*/
    v72 = 8u; /*0x10086e5c8*/
    v12 = *(_QWORD *)(v7 + 24); /*0x10086e5d8*/
    if ( !v12 ) /*0x10086e5df*/
    {
LABEL_61:
      *(__int128 *)((char *)v67.i128 + 15) = v72; /*0x10086ecf1*/
      *(__int64 *)((char *)v67.i64 + 7) = v71; /*0x10086ed09*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v7); /*0x10086ed10*/
      *(_BYTE *)v7 = 4; /*0x10086ed15*/
      v39 = v67.i64[1]; /*0x10086ed1e*/
      *(_QWORD *)(v7 + 1) = v67.i64[0]; /*0x10086ed22*/
      *(_OWORD *)(v7 + 9) = __PAIR128__(v67.u64[2], v39); /*0x10086ed26*/
      *(_QWORD *)(v7 + 24) = *(__int64 *)((char *)&v67.i64[2] + 7); /*0x10086ed36*/
      v4 = v61; /*0x10086ed3a*/
      goto LABEL_62; /*0x10086ed3a*/
    }
    v5 = *(_QWORD *)(v7 + 16); /*0x10086e5e5*/
    v13 = 32 * v12; /*0x10086e5e9*/
    do /*0x10086e776*/
    {
      v14 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10086e5ff*/
              &anon_10420c9971c21f44d230d15b39fb3fec_75,
              4,
              v5);
      if ( !v14 /*0x10086e631*/
        || *(_BYTE *)v14 != 3
        || *(_QWORD *)(v14 + 24) != 9
        || **(_QWORD **)(v14 + 16) ^ 0x72755F6567616D69LL | *(unsigned __int8 *)(*(_QWORD *)(v14 + 16) + 8LL) ^ 0x6CLL )
      {
        switch ( *(_BYTE *)v5 ) /*0x10086e652*/
        {
          case 0: /*0x10086e652*/
            v67.i8[0] = 0; /*0x10086e6aa*/
            v16 = *((_QWORD *)&v72 + 1); /*0x10086e6ae*/
            if ( *((_QWORD *)&v72 + 1) == v71 ) /*0x10086e6b6*/
              goto LABEL_36; /*0x10086e6b6*/
            goto LABEL_37; /*0x10086e6b6*/
          case 1: /*0x10086e652*/
          case 2: /*0x10086e652*/
            v67.i128[1] = *(_OWORD *)(v5 + 16); /*0x10086e660*/
            v15 = *(_QWORD *)v5; /*0x10086e664*/
            v67.i64[1] = *(_QWORD *)(v5 + 8); /*0x10086e66b*/
            v67.i64[0] = v15; /*0x10086e66f*/
            v16 = *((_QWORD *)&v72 + 1); /*0x10086e673*/
            if ( *((_QWORD *)&v72 + 1) == v71 ) /*0x10086e67b*/
              goto LABEL_36; /*0x10086e67b*/
            goto LABEL_37; /*0x10086e67b*/
          case 3: /*0x10086e652*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v67.u32[2], v5 + 8); /*0x10086e6c2*/
            v67.i8[0] = 3; /*0x10086e6c7*/
            v16 = *((_QWORD *)&v72 + 1); /*0x10086e6cb*/
            if ( *((_QWORD *)&v72 + 1) == v71 ) /*0x10086e6d3*/
              goto LABEL_36; /*0x10086e6d3*/
            goto LABEL_37; /*0x10086e6d3*/
          case 4: /*0x10086e652*/
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500( /*0x10086e68e*/
              &v67.u32[2],
              v5 + 8);
            v67.i8[0] = 4; /*0x10086e693*/
            v16 = *((_QWORD *)&v72 + 1); /*0x10086e697*/
            if ( *((_QWORD *)&v72 + 1) == v71 ) /*0x10086e69f*/
              goto LABEL_36; /*0x10086e69f*/
            goto LABEL_37; /*0x10086e69f*/
          case 5: /*0x10086e652*/
            if ( *(_QWORD *)(v5 + 24) ) /*0x10086e6d7*/
            {
              v17 = *(_QWORD *)(v5 + 8); /*0x10086e6de*/
              if ( !v17 ) /*0x10086e6e5*/
                core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248); /*0x10086ed73*/
              _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x10086e6f3*/
                &v67.u32[2],
                v17,
                *(_QWORD *)(v5 + 16));
              v67.i8[0] = 5; /*0x10086e6f8*/
              v16 = *((_QWORD *)&v72 + 1); /*0x10086e6fc*/
              if ( *((_QWORD *)&v72 + 1) != v71 ) /*0x10086e704*/
                goto LABEL_37; /*0x10086e704*/
            }
            else
            {
              v67.i64[1] = 0; /*0x10086e708*/
              v67.i64[3] = 0; /*0x10086e710*/
              v67.i8[0] = 5; /*0x10086e718*/
              v16 = *((_QWORD *)&v72 + 1); /*0x10086e71c*/
              if ( *((_QWORD *)&v72 + 1) != v71 ) /*0x10086e724*/
              {
LABEL_37:
                v18 = v72; /*0x10086e739*/
                v19 = 32 * v16; /*0x10086e740*/
                *(_OWORD *)(v72 + 32 * v16 + 16) = v67.i128[1]; /*0x10086e751*/
                v20 = v67.i128[0]; /*0x10086e75a*/
                goto LABEL_38; /*0x10086e75a*/
              }
            }
LABEL_36:
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v71); /*0x10086e730*/
            goto LABEL_37; /*0x10086e734*/
        }
      }
      v51[0] = 0; /*0x10086e781*/
      v52 = 0; /*0x10086e78c*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&anon_10420c9971c21f44d230d15b39fb3fec_75, 4); /*0x10086e797*/
      v22 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10086e7a6*/
      if ( !v22 ) /*0x10086e7ae*/
        goto LABEL_67; /*0x10086e7ae*/
      *v22 = 1701869940; /*0x10086e7b7*/
      v48 = 4; /*0x10086e7bd*/
      v49 = v22; /*0x10086e7c8*/
      v50 = 4; /*0x10086e7cf*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x10086e7da*/
      v23 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10086e7e9*/
      if ( !v23 ) /*0x10086e7f1*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10086edb8*/
      *v23 = 1954047348; /*0x10086e7f7*/
      LOBYTE(v63) = 3; /*0x10086e7fd*/
      v64 = 4; /*0x10086e804*/
      v65 = v23; /*0x10086e80f*/
      v66 = 4; /*0x10086e816*/
      v24 = &v53; /*0x10086e81e*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v53, v51, &v48); /*0x10086e833*/
      if ( v53.i64[0] == 0x8000000000000000LL ) /*0x10086e849*/
      {
        v25 = v53.i64[1]; /*0x10086e84f*/
        v26 = 32 * v53.i64[3]; /*0x10086e85d*/
        v60 = *(_QWORD *)(v53.i64[1] + 32 * v53.i64[3] + 24); /*0x10086e866*/
        v59 = *(_QWORD *)(v53.i64[1] + 32 * v53.i64[3] + 16); /*0x10086e872*/
        v27 = *(_QWORD *)(v53.i64[1] + 32 * v53.i64[3]); /*0x10086e879*/
        v58 = *(_QWORD *)(v53.i64[1] + 32 * v53.i64[3] + 8); /*0x10086e882*/
        v57 = v27; /*0x10086e889*/
        *(_QWORD *)(v53.i64[1] + v26 + 24) = v66; /*0x10086e894*/
        *(_QWORD *)(v25 + v26 + 16) = v65; /*0x10086e8a0*/
        v28 = v63; /*0x10086e8a5*/
        v29 = (__m256i *)v64; /*0x10086e8ac*/
        *(_QWORD *)(v25 + v26 + 8) = v64; /*0x10086e8b3*/
        *(_QWORD *)(v25 + v26) = v28; /*0x10086e8b8*/
        if ( (_BYTE)v57 != 6 ) /*0x10086e8c3*/
        {
          v24 = (__m256i *)&v57; /*0x10086e8c9*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v57); /*0x10086e8d0*/
        }
      }
      else
      {
        v70 = v56; /*0x10086e8e1*/
        v69 = v55; /*0x10086e8ec*/
        v68 = v54; /*0x10086e8f7*/
        v67 = v53; /*0x10086e90d*/
        v47 = v66; /*0x10086e92b*/
        v46 = v65; /*0x10086e939*/
        v45 = v64; /*0x10086e94e*/
        v44 = v63; /*0x10086e955*/
        v24 = (__m256i *)&v57; /*0x10086e95c*/
        v29 = &v67; /*0x10086e963*/
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10086e96e*/
          &v57,
          &v67,
          &v44);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, v29); /*0x10086e973*/
      v30 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10086e982*/
      if ( !v30 ) /*0x10086e98a*/
LABEL_67:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10086ed96*/
      *v30 = 1954047348; /*0x10086e993*/
      v48 = 4; /*0x10086e999*/
      v49 = v30; /*0x10086e9a4*/
      v50 = 4; /*0x10086e9ab*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x10086e9b6*/
      v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(60, 1); /*0x10086e9c5*/
      if ( !v31 ) /*0x10086e9cd*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 60); /*0x10086eda7*/
      *(_QWORD *)(v31 + 48) = 0x819CE7B2B7E58789LL; /*0x10086e9dd*/
      *(_QWORD *)(v31 + 40) = 0xE7BE9BE58CBCEFA5LL; /*0x10086e9eb*/
      *(_QWORD *)(v31 + 32) = 0x85E593BEE88789E7LL; /*0x10086e9f9*/
      *(_QWORD *)(v31 + 24) = 0xBE9BE5818CE6AF94LL; /*0x10086ea07*/
      *(_QWORD *)(v31 + 16) = 0xE68DB8E48B9EE5A1LL; /*0x10086ea15*/
      *(_QWORD *)(v31 + 8) = 0xA8E68D89E593BDE5LL; /*0x10086ea23*/
      *(_QWORD *)v31 = 0x203A6567616D695BLL; /*0x10086ea31*/
      *(_DWORD *)(v31 + 56) = 1571132903; /*0x10086ea34*/
      LOBYTE(v63) = 3; /*0x10086ea3b*/
      v64 = 60; /*0x10086ea42*/
      v65 = (_DWORD *)v31; /*0x10086ea4d*/
      v66 = 60; /*0x10086ea54*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v53, v51, &v48); /*0x10086ea71*/
      if ( v53.i64[0] == 0x8000000000000000LL ) /*0x10086ea87*/
      {
        v32 = v53.i64[1]; /*0x10086ea8d*/
        v33 = 32 * v53.i64[3]; /*0x10086ea9b*/
        v60 = *(_QWORD *)(v53.i64[1] + 32 * v53.i64[3] + 24); /*0x10086eaa4*/
        v59 = *(_QWORD *)(v53.i64[1] + 32 * v53.i64[3] + 16); /*0x10086eab0*/
        v34 = *(_QWORD *)(v53.i64[1] + 32 * v53.i64[3]); /*0x10086eab7*/
        v58 = *(_QWORD *)(v53.i64[1] + 32 * v53.i64[3] + 8); /*0x10086eac0*/
        v57 = v34; /*0x10086eac7*/
        *(_QWORD *)(v53.i64[1] + v33 + 24) = v66; /*0x10086ead2*/
        *(_QWORD *)(v32 + v33 + 16) = v65; /*0x10086eade*/
        v35 = v63; /*0x10086eae3*/
        *(_QWORD *)(v32 + v33 + 8) = v64; /*0x10086eaf1*/
        *(_QWORD *)(v32 + v33) = v35; /*0x10086eaf6*/
        if ( (_BYTE)v57 != 6 ) /*0x10086eb01*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v57); /*0x10086eb0e*/
      }
      else
      {
        v70 = v56; /*0x10086eb1f*/
        v69 = v55; /*0x10086eb2a*/
        v68 = v54; /*0x10086eb35*/
        v67 = v53; /*0x10086eb4b*/
        v47 = v66; /*0x10086eb69*/
        v46 = v65; /*0x10086eb77*/
        v45 = v64; /*0x10086eb8c*/
        v44 = v63; /*0x10086eb93*/
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10086ebac*/
          &v57,
          &v67,
          &v44);
      }
      v43 = v52; /*0x10086ebbf*/
      v42 = v51[1]; /*0x10086ebd1*/
      *((_QWORD *)&v41 + 1) = v51[0]; /*0x10086ebd5*/
      LOBYTE(v41) = 5; /*0x10086ebd8*/
      v16 = *((_QWORD *)&v72 + 1); /*0x10086ebdf*/
      if ( *((_QWORD *)&v72 + 1) == v71 ) /*0x10086ebe7*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v71); /*0x10086ebed*/
      v18 = v72; /*0x10086ebf2*/
      v19 = 32 * v16; /*0x10086ebf9*/
      *(_QWORD *)(v72 + v19 + 24) = v43; /*0x10086ec04*/
      *(_QWORD *)(v18 + v19 + 16) = v42; /*0x10086ec10*/
      v20 = v41; /*0x10086ec23*/
LABEL_38:
      *(_OWORD *)(v18 + v19) = v20; /*0x10086e75e*/
      v21 = v16 + 1; /*0x10086e767*/
      *((_QWORD *)&v72 + 1) = v21; /*0x10086e76a*/
      v5 += 32LL; /*0x10086e76e*/
      v13 -= 32; /*0x10086e772*/
    }
    while ( v13 ); /*0x10086e776*/
    if ( v21 != 1 ) /*0x10086ec2c*/
      goto LABEL_61; /*0x10086ec2c*/
    v36 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10086ec3e*/
            &anon_10420c9971c21f44d230d15b39fb3fec_110,
            4,
            v18);
    if ( !v36 || *(_BYTE *)v36 != 3 ) /*0x10086ec4f*/
      goto LABEL_61; /*0x10086ec4f*/
    v37 = *(const void **)(v36 + 16); /*0x10086ec55*/
    v5 = *(_QWORD *)(v36 + 24); /*0x10086ec59*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v67, v5, 0, 1, 1); /*0x10086ec71*/
    v62 = v67.i64[1]; /*0x10086ec7a*/
    if ( v67.i32[0] == 1 ) /*0x10086ec85*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v62, v67.i64[2]); /*0x10086ed85*/
    v38 = v67.i64[2]; /*0x10086ec8b*/
    memcpy((void *)v67.i64[2], v37, v5); /*0x10086ec98*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v7); /*0x10086eca0*/
    *(_BYTE *)v7 = 3; /*0x10086ecac*/
    *(_QWORD *)(v7 + 8) = v62; /*0x10086ecb8*/
    *(_QWORD *)(v7 + 16) = v38; /*0x10086ecbc*/
    *(_QWORD *)(v7 + 24) = v5; /*0x10086ecc0*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf3b3f1b4c8214e60(&v71); /*0x10086ecc8*/
    v4 = v61; /*0x10086ecd4*/
    if ( v71 ) /*0x10086ecdb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, 32 * v71, 8); /*0x10086ecea*/
LABEL_62:
    LOBYTE(v5) = 1; /*0x10086ed48*/
LABEL_6:
    v3 += 32; /*0x10086e533*/
    if ( v3 != v4 ) /*0x10086e53a*/
      continue; /*0x10086e53a*/
    return (unsigned int)v5; /*0x10086ed5a*/
  }
}