// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::sessions::health::clean_orphan_rollouts::h79427cc46a92f04f; addr: 0x100b182d0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
const char **__fastcall codexmate_lib::core::sessions::health::clean_orphan_rollouts::h79427cc46a92f04f(
        const char **a1,
        __int64 a2,
        __m128i a3)
{
  __int64 v3; // r13
  const char **v4; // r15
  const char *v5; // rax
  double v6; // xmm0_8
  const char *v7; // rax
  const char *v8; // rbx
  __int64 v9; // r14
  const char *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rdx
  const char *v14; // rcx
  const __m128i *v15; // rcx
  const void *v16; // r12
  size_t v17; // r13
  __int64 v18; // r14
  unsigned __int64 v19; // rcx
  __m128i v20; // xmm1
  __int64 i; // rdx
  unsigned __int64 v22; // rcx
  __m128i v23; // xmm2
  const char *v25; // r14
  __int64 v26; // rax
  const char *v27; // rcx
  const char *v28; // rcx
  const char *v30; // rcx
  _QWORD *v31; // rbx
  const char *v32; // rax
  _QWORD *v33; // rbx
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rax
  const void *v37; // r14
  size_t v38; // r12
  __int64 v39; // r13
  _QWORD v40[9]; // [rsp+8h] [rbp-388h] BYREF
  _QWORD v41[12]; // [rsp+50h] [rbp-340h] BYREF
  __m128i v42; // [rsp+B0h] [rbp-2E0h] BYREF
  __m128i v43; // [rsp+C0h] [rbp-2D0h] BYREF
  _QWORD v44[6]; // [rsp+D0h] [rbp-2C0h] BYREF
  const __m128i *v45[6]; // [rsp+100h] [rbp-290h] BYREF
  _QWORD v46[6]; // [rsp+130h] [rbp-260h] BYREF
  _QWORD v47[12]; // [rsp+160h] [rbp-230h] BYREF
  __int64 v48; // [rsp+1C0h] [rbp-1D0h] BYREF
  unsigned __int64 v49; // [rsp+1C8h] [rbp-1C8h]
  __int64 v50; // [rsp+1D0h] [rbp-1C0h]
  const char **v51; // [rsp+1D8h] [rbp-1B8h]
  const __m128i *v52; // [rsp+1E0h] [rbp-1B0h] BYREF
  _QWORD v53[17]; // [rsp+1E8h] [rbp-1A8h] BYREF
  const char *v54; // [rsp+270h] [rbp-120h]
  __int64 v55; // [rsp+278h] [rbp-118h]
  const char *v56; // [rsp+280h] [rbp-110h] BYREF
  _QWORD v57[17]; // [rsp+288h] [rbp-108h] BYREF
  const char *v58; // [rsp+310h] [rbp-80h] BYREF
  const char *v59; // [rsp+318h] [rbp-78h]
  const char *v60; // [rsp+320h] [rbp-70h]
  const char *v61; // [rsp+328h] [rbp-68h]
  const char *v62; // [rsp+330h] [rbp-60h]
  const char *v63; // [rsp+338h] [rbp-58h]
  __int64 v64; // [rsp+340h] [rbp-50h]
  __int64 v65; // [rsp+348h] [rbp-48h]
  __int64 v66; // [rsp+350h] [rbp-40h]
  __int64 v67; // [rsp+358h] [rbp-38h]
  __int64 v68; // [rsp+360h] [rbp-30h]

  v3 = a2; /*0x100b182e4*/
  v4 = a1; /*0x100b182e7*/
  codexmate_lib::core::sessions::reconcile_official_thread_rows::ha8b5f08e4b547d3b(&v56); /*0x100b182f1*/
  v5 = v56; /*0x100b182f6*/
  v52 = (const __m128i *)v57[0]; /*0x100b18304*/
  v53[0] = v57[1]; /*0x100b18312*/
  v53[1] = v57[2]; /*0x100b18320*/
  v53[2] = v57[3]; /*0x100b1832e*/
  v53[3] = v57[4]; /*0x100b1833c*/
  v53[4] = v57[5]; /*0x100b1834a*/
  if ( v56 != (const char *)11 ) /*0x100b18355*/
    goto LABEL_13; /*0x100b18355*/
  v45[0] = v52; /*0x100b18369*/
  v45[1] = (const __m128i *)v53[0]; /*0x100b18370*/
  v45[2] = (const __m128i *)v53[1]; /*0x100b1837e*/
  v45[3] = (const __m128i *)v53[2]; /*0x100b1838c*/
  v45[4] = (const __m128i *)v53[3]; /*0x100b1839a*/
  v45[5] = (const __m128i *)v53[4]; /*0x100b183a8*/
  v6 = codexmate_lib::core::sessions::health::load_complete_health_thread_rows::h96c8f87d8aecdda3( /*0x100b183c0*/
         &v56,
         (_QWORD *)a2,
         v45,
         a3);
  v5 = v56; /*0x100b183c5*/
  v52 = (const __m128i *)v57[0]; /*0x100b183d3*/
  v53[0] = v57[1]; /*0x100b183e1*/
  v53[1] = v57[2]; /*0x100b183ef*/
  v53[2] = v57[3]; /*0x100b183fd*/
  v53[3] = v57[4]; /*0x100b1840b*/
  v53[4] = v57[5]; /*0x100b18419*/
  if ( v56 == (const char *)11 ) /*0x100b18424*/
  {
    v46[0] = v52; /*0x100b18438*/
    v46[1] = v53[0]; /*0x100b1843f*/
    v46[2] = v53[1]; /*0x100b1844d*/
    v46[3] = v53[2]; /*0x100b1845b*/
    v46[4] = v53[3]; /*0x100b18469*/
    v46[5] = v53[4]; /*0x100b18477*/
    codexmate_lib::core::sessions::history::HistoryInventory::load::h6e6b5da7cbfd2061(v47, a2); /*0x100b1848b*/
    v7 = (const char *)v47[0]; /*0x100b18490*/
    v58 = (const char *)v47[1]; /*0x100b1849e*/
    v59 = (const char *)v47[2]; /*0x100b184a9*/
    v60 = (const char *)v47[3]; /*0x100b184b4*/
    v61 = (const char *)v47[4]; /*0x100b184bf*/
    v62 = (const char *)v47[5]; /*0x100b184ca*/
    v63 = (const char *)v47[6]; /*0x100b184d5*/
    if ( v47[0] == 11 ) /*0x100b184dd*/
    {
      v44[0] = v58; /*0x100b184eb*/
      v44[1] = v59; /*0x100b184f2*/
      v44[2] = v60; /*0x100b184fd*/
      v44[3] = v61; /*0x100b18508*/
      v44[4] = v62; /*0x100b18513*/
      v44[5] = v63; /*0x100b1851e*/
      codexmate_lib::core::sessions::history::HistoryInventory::health::h918049cd3d7086c0(&v56, v44, a2, v6); /*0x100b18536*/
      v8 = v56; /*0x100b1853b*/
      qmemcpy(v41, v57, sizeof(v41)); /*0x100b18555*/
      if ( v56 ) /*0x100b1855b*/
      {
        v53[16] = v57[16]; /*0x100b18568*/
        v53[15] = v57[15]; /*0x100b18576*/
        v53[14] = v57[14]; /*0x100b18584*/
        v53[13] = v57[13]; /*0x100b18599*/
        v53[12] = v57[12]; /*0x100b185a0*/
        qmemcpy(v53, v41, 0x60u); /*0x100b185ba*/
        v52 = (const __m128i *)v56; /*0x100b185bd*/
        _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf4e00578ec214d6d(&v58); /*0x100b185c8*/
        a2 = (__int64)v46; /*0x100b185db*/
        codexmate_lib::core::sessions::health::cleanable_orphan_rollout_ids::h6939ee55e25da247(&v56, v46, &v52, &v53[5]); /*0x100b185e9*/
        v41[2] = v57[1]; /*0x100b185f5*/
        v41[1] = v57[0]; /*0x100b1860a*/
        v41[0] = v56; /*0x100b18611*/
        v48 = v57[2]; /*0x100b1861f*/
        if ( v57[2] && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x100b1863d*/
        {
          v47[0] = &v48; /*0x100b1864a*/
          v47[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100b18658*/
          v57[5] = 2; /*0x100b1865f*/
          v57[6] = "codexmate_lib::core::sessions::health"; /*0x100b18671*/
          v57[7] = 37; /*0x100b18678*/
          v57[9] = &unk_101907F9A; /*0x100b1868a*/
          v57[10] = v47; /*0x100b18691*/
          v56 = nullptr; /*0x100b18698*/
          v57[0] = "codexmate_lib::core::sessions::health"; /*0x100b186a3*/
          v57[1] = 37; /*0x100b186aa*/
          v57[2] = 0; /*0x100b186b5*/
          v57[3] = "src/core/sessions/health.rs"; /*0x100b186c7*/
          v57[4] = 27; /*0x100b186ce*/
          v57[8] = 0x17900000001LL; /*0x100b186e3*/
          a2 = (__int64)&v56; /*0x100b186ee*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v58, &v56); /*0x100b186f5*/
        }
        v9 = v41[2]; /*0x100b186fa*/
        if ( v41[2] ) /*0x100b18704*/
        {
          v68 = v41[1]; /*0x100b1871b*/
          codexmate_lib::core::sessions::delete_sessions::he7070df48c076736((__int64 *)&v56, v3, v6, v41[1], v41[2]); /*0x100b18722*/
          v10 = v56; /*0x100b18727*/
          qmemcpy(v47, v57, 0x48u); /*0x100b18741*/
          if ( v56 == (const char *)11 ) /*0x100b18748*/
          {
            v51 = a1; /*0x100b1874e*/
            qmemcpy(v40, v47, sizeof(v40)); /*0x100b18768*/
            if ( v40[2] ) /*0x100b18775*/
            {
              v54 = v8; /*0x100b1877b*/
              v11 = v40[1]; /*0x100b18782*/
              v12 = 24LL * v40[2]; /*0x100b1878d*/
              v66 = v9; /*0x100b18799*/
              if ( v53[2] ) /*0x100b1879d*/
              {
                v55 = v53[0]; /*0x100b187aa*/
                v13 = 0; /*0x100b187b1*/
                v65 = 0; /*0x100b187b3*/
                do /*0x100b189d5*/
                {
LABEL_15:
                  v67 = v13; /*0x100b18864*/
                  v64 = v68 + 24 * v13; /*0x100b18874*/
                  v16 = *(const void **)(v64 + 8); /*0x100b18878*/
                  v17 = *(_QWORD *)(v64 + 16); /*0x100b1887d*/
                  v18 = 0; /*0x100b18882*/
                  while ( *(_QWORD *)(v11 + v18 + 16) != v17 || memcmp(*(const void **)(v11 + v18 + 8), v16, v17) ) /*0x100b188b2*/
                  {
                    v18 += 24; /*0x100b18890*/
                    if ( v12 == v18 ) /*0x100b18897*/
                    {
                      v9 = v66; /*0x100b18850*/
                      v13 = v67 + 1; /*0x100b18858*/
                      if ( v67 + 1 == v66 ) /*0x100b1885e*/
                        goto LABEL_47; /*0x100b1885e*/
                      goto LABEL_15; /*0x100b1885e*/
                    }
                  }
                  v19 = core::hash::BuildHasher::hash_one::hf33ca4e30edf6c31(&v53[3], v64); /*0x100b188c4*/
                  v20 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v19 >> 57), (__m128i)0LL); /*0x100b188d3*/
                  for ( i = 0; ; i += 16 ) /*0x100b188d8*/
                  {
                    v22 = v55 & v19; /*0x100b188da*/
                    v23 = _mm_loadu_si128((const __m128i *)&v54[v22]); /*0x100b188e8*/
                    _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v23, v20)); /*0x100b188f5*/
                    if ( (_DWORD)_RAX ) /*0x100b188fb*/
                      break; /*0x100b188fb*/
LABEL_25:
                    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v23, (__m128i)-1LL)) ) /*0x100b18992*/
                      goto LABEL_29; /*0x100b18998*/
                    v19 = v22 + i + 16; /*0x100b1899a*/
                  }
                  v49 = v22; /*0x100b18901*/
                  v42 = v20; /*0x100b18908*/
                  v50 = i; /*0x100b18910*/
                  v43 = v23; /*0x100b18917*/
                  while ( 1 ) /*0x100b1891f*/
                  {
                    v64 = _RAX; /*0x100b1891f*/
                    __asm { tzcnt eax, eax } /*0x100b18923*/
                    if ( v17 == *(_QWORD *)&v54[-80 * (v55 & (v22 + _RAX)) - 64] ) /*0x100b18948*/
                    {
                      v25 = &v54[-80 * (v55 & (v22 + _RAX))]; /*0x100b1894a*/
                      if ( !memcmp(v16, *((const void **)v25 - 9), v17) ) /*0x100b18957*/
                        break; /*0x100b18957*/
                    }
                    _RAX = (unsigned int)(v64 - 1); /*0x100b18964*/
                    LOWORD(_RAX) = v64 & (v64 - 1); /*0x100b18967*/
                    v22 = v49; /*0x100b1896a*/
                    v20 = _mm_load_si128(&v42); /*0x100b18971*/
                    i = v50; /*0x100b18979*/
                    v23 = _mm_load_si128(&v43); /*0x100b18980*/
                    if ( !(_WORD)_RAX ) /*0x100b18988*/
                      goto LABEL_25; /*0x100b18988*/
                  }
                  if ( *((_DWORD *)v25 - 14) == 1 ) /*0x100b189ad*/
                  {
                    v26 = *((_QWORD *)v25 - 6); /*0x100b189af*/
                    goto LABEL_30; /*0x100b189b3*/
                  }
LABEL_29:
                  v26 = 0; /*0x100b189b5*/
LABEL_30:
                  v9 = v66; /*0x100b189b7*/
                  if ( v26 <= 0 ) /*0x100b189c7*/
                    v26 = 0; /*0x100b189c7*/
                  v65 += v26; /*0x100b189cb*/
                  v13 = v67 + 1; /*0x100b189cf*/
                }
                while ( v67 + 1 != v66 ); /*0x100b189d5*/
              }
              else
              {
                v34 = v12 - 24; /*0x100b18c85*/
                v65 = 0; /*0x100b18c89*/
                v35 = 0; /*0x100b18c91*/
                do /*0x100b18ca3*/
                {
                  v67 = v35; /*0x100b18ca9*/
                  v36 = 3 * v35; /*0x100b18cad*/
                  v37 = *(const void **)(v68 + 8 * v36 + 8); /*0x100b18cb5*/
                  v38 = *(_QWORD *)(v68 + 8 * v36 + 16); /*0x100b18cba*/
                  v39 = 0; /*0x100b18cbf*/
                  if ( *(_QWORD *)(v11 + 16) != v38 ) /*0x100b18cc7*/
                    goto LABEL_58; /*0x100b18cc7*/
LABEL_57:
                  if ( memcmp(*(const void **)(v11 + v39 + 8), v37, v38) ) /*0x100b18cdb*/
                  {
LABEL_58:
                    while ( v34 != v39 ) /*0x100b18ce7*/
                    {
                      v39 += 24; /*0x100b18ce9*/
                      if ( *(_QWORD *)(v11 + v39 + 16) == v38 ) /*0x100b18cf2*/
                        goto LABEL_57; /*0x100b18cf2*/
                    }
                  }
                  v35 = v67 + 1; /*0x100b18c99*/
                  v9 = v66; /*0x100b18c9c*/
                }
                while ( v67 + 1 != v66 ); /*0x100b18ca3*/
              }
            }
            else
            {
              v65 = 0; /*0x100b18b55*/
            }
LABEL_47:
            v4 = v51; /*0x100b18b5d*/
            if ( v40[5] && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x100b18b82*/
            {
              v58 = (const char *)v40[5]; /*0x100b18b84*/
              v47[0] = &v58; /*0x100b18b8c*/
              v47[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100b18b9a*/
              v56 = "codexmate_lib::core::sessions::health"; /*0x100b18ba8*/
              v57[0] = 37; /*0x100b18baf*/
              v57[1] = "codexmate_lib::core::sessions::health"; /*0x100b18bba*/
              v57[2] = 37; /*0x100b18bc1*/
              v57[3] = &off_101ABC678; /*0x100b18bd3*/
              log::__private_api::log::hf5bade4875454669(&unk_10190800B, v47, 2, &v56); /*0x100b18bf4*/
            }
            v6 = codexmate_lib::core::sessions::health::deletion_cleanup_result::h72b9679ae18c215e(&v56, v40, v65); /*0x100b18c0b*/
            v4[5] = (const char *)v57[3]; /*0x100b18c17*/
            v4[4] = (const char *)v57[2]; /*0x100b18c22*/
            v4[3] = (const char *)v57[1]; /*0x100b18c2d*/
            v32 = v56; /*0x100b18c31*/
            v4[2] = (const char *)v57[0]; /*0x100b18c3f*/
            v4[1] = v32; /*0x100b18c43*/
            *v4 = (const char *)11; /*0x100b18c47*/
            v33 = (_QWORD *)(v68 + 8); /*0x100b18c52*/
            do /*0x100b18c67*/
            {
              a2 = *(v33 - 1); /*0x100b18c6d*/
              if ( a2 ) /*0x100b18c74*/
                v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v33, a2, 1); /*0x100b18c7e*/
              v33 += 3; /*0x100b18c60*/
              --v9; /*0x100b18c64*/
            }
            while ( v9 ); /*0x100b18c67*/
          }
          else
          {
            v30 = (const char *)v57[9]; /*0x100b18af5*/
            a1[11] = (const char *)v57[10]; /*0x100b18b03*/
            a1[10] = v30; /*0x100b18b07*/
            qmemcpy(a1 + 1, v47, 0x48u); /*0x100b18b1b*/
            *a1 = v10; /*0x100b18b1e*/
            v31 = (_QWORD *)(v68 + 8); /*0x100b18b25*/
            do /*0x100b18b37*/
            {
              a2 = *(v31 - 1); /*0x100b18b3d*/
              if ( a2 ) /*0x100b18b44*/
                v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v31, a2, 1); /*0x100b18b4e*/
              v31 += 3; /*0x100b18b30*/
              --v9; /*0x100b18b34*/
            }
            while ( v9 ); /*0x100b18b37*/
          }
        }
        else
        {
          a1[1] = nullptr; /*0x100b18a6c*/
          a1[2] = (const char *)8; /*0x100b18a74*/
          a1[3] = nullptr; /*0x100b18a7c*/
          a1[4] = nullptr; /*0x100b18a84*/
          a1[5] = nullptr; /*0x100b18a8c*/
          *a1 = (const char *)11; /*0x100b18a94*/
          v68 = v41[1]; /*0x100b18aa2*/
        }
        if ( v41[0] ) /*0x100b18ab0*/
        {
          a2 = 24LL * v41[0]; /*0x100b18ab6*/
          v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, 24LL * v41[0], 8); /*0x100b18ac3*/
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..sessions..history..HealthHistory$GT$::hf935970819596bfb( /*0x100b18acf*/
          &v52,
          v6);
      }
      else
      {
        qmemcpy(a1, v41, 0x60u); /*0x100b18a5e*/
        a2 = (__int64)&v42; /*0x100b18a5e*/
        _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf4e00578ec214d6d(&v58); /*0x100b18a65*/
      }
    }
    else
    {
      a1[11] = (const char *)v47[11]; /*0x100b189e7*/
      a1[10] = (const char *)v47[10]; /*0x100b189f2*/
      a1[9] = (const char *)v47[9]; /*0x100b189fd*/
      v27 = (const char *)v47[7]; /*0x100b18a01*/
      a1[8] = (const char *)v47[8]; /*0x100b18a0f*/
      a1[7] = v27; /*0x100b18a13*/
      a1[6] = v63; /*0x100b18a1b*/
      a1[5] = v62; /*0x100b18a23*/
      a1[4] = v61; /*0x100b18a2b*/
      a1[3] = v60; /*0x100b18a33*/
      v28 = v58; /*0x100b18a37*/
      a1[2] = v59; /*0x100b18a3f*/
      a1[1] = v28; /*0x100b18a43*/
      *a1 = v7; /*0x100b18a47*/
    }
    core::ptr::drop_in_place$LT$hashbrown..raw..RawTable$LT$$LP$alloc..string..String$C$codexmate_lib..core..sessions..CodexThreadRow$RP$$GT$$GT$::h8dfa37bcfe2b7af5( /*0x100b18adb*/
      v46,
      a2);
  }
  else
  {
LABEL_13:
    a1[11] = (const char *)v57[10]; /*0x100b187c7*/
    a1[10] = (const char *)v57[9]; /*0x100b187d2*/
    a1[9] = (const char *)v57[8]; /*0x100b187dd*/
    v14 = (const char *)v57[6]; /*0x100b187e1*/
    a1[8] = (const char *)v57[7]; /*0x100b187ef*/
    a1[7] = v14; /*0x100b187f3*/
    a1[6] = (const char *)v53[4]; /*0x100b187fe*/
    a1[5] = (const char *)v53[3]; /*0x100b18809*/
    a1[4] = (const char *)v53[2]; /*0x100b18814*/
    a1[3] = (const char *)v53[1]; /*0x100b1881f*/
    v15 = v52; /*0x100b18823*/
    a1[2] = (const char *)v53[0]; /*0x100b18831*/
    a1[1] = (const char *)v15; /*0x100b18835*/
    *a1 = v5; /*0x100b18839*/
  }
  return v4; /*0x100b18ae3*/
}