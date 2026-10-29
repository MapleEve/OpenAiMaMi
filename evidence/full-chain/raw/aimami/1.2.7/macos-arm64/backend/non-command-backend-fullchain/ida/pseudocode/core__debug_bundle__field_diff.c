// aimami 1.2.7 mac truly_undone deep reverse — cluster core/debug_bundle/field_diff
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::debug_bundle::field_diff::h1fa8b0ab6fd3d301 @ 0x100aa1ea0 size=2456 lines=587 =====
__int64 __fastcall codexmate_lib::core::debug_bundle::field_diff::h1fa8b0ab6fd3d301(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // r8
  unsigned __int64 v6; // r10
  bool v7; // zf
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r11
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // r14
  unsigned __int64 v24; // r11
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned __int64 v36; // r15
  const void *v38; // rdi
  size_t v39; // rax
  size_t v40; // rdx
  __int64 v41; // r14
  int v42; // eax
  const void *v43; // rsi
  size_t v44; // rdx
  size_t v45; // r12
  bool v46; // cf
  __int64 v47; // r12
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // r13
  unsigned __int64 v51; // r15
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rsi
  __int64 v54; // r9
  __int64 v55; // rdx
  unsigned __int64 *v56; // r11
  __int64 *v57; // rbx
  __int64 v58; // rdi
  unsigned __int64 v59; // rsi
  unsigned __int64 v60; // r14
  unsigned __int64 v61; // r10
  unsigned __int64 v62; // rax
  __int64 v63; // r8
  __int64 v65; // rdx
  unsigned __int64 *v66; // rsi
  __int64 v67; // r9
  unsigned __int64 v68; // rax
  __int64 v69; // r10
  __int64 v70; // r9
  unsigned __int64 v71; // rbx
  char v72; // r11
  unsigned __int64 v73; // r8
  __int64 v74; // r10
  __int64 v75; // r11
  __int64 v76; // rbx
  __int64 v77; // rsi
  _QWORD v78[20]; // [rsp+0h] [rbp-180h] BYREF
  __int64 v79; // [rsp+A0h] [rbp-E0h] BYREF
  __int64 v80; // [rsp+A8h] [rbp-D8h] BYREF
  __int64 v81; // [rsp+B0h] [rbp-D0h]
  __int64 v82; // [rsp+B8h] [rbp-C8h]
  unsigned __int64 v83; // [rsp+C0h] [rbp-C0h]
  __int64 v84; // [rsp+C8h] [rbp-B8h] BYREF
  unsigned __int64 v85; // [rsp+D0h] [rbp-B0h]
  unsigned __int64 v86; // [rsp+D8h] [rbp-A8h]
  unsigned __int64 v87; // [rsp+E0h] [rbp-A0h]
  __int64 v88; // [rsp+E8h] [rbp-98h]
  unsigned __int64 v89; // [rsp+F0h] [rbp-90h]
  unsigned __int64 v90; // [rsp+F8h] [rbp-88h]
  unsigned __int64 v91; // [rsp+100h] [rbp-80h]
  unsigned __int64 v92; // [rsp+108h] [rbp-78h]
  unsigned __int64 v93; // [rsp+110h] [rbp-70h] BYREF
  __int64 *v94; // [rsp+118h] [rbp-68h]
  unsigned __int64 v95; // [rsp+120h] [rbp-60h]
  unsigned __int64 v96; // [rsp+128h] [rbp-58h]
  __int64 v97; // [rsp+130h] [rbp-50h]
  __int64 v98; // [rsp+138h] [rbp-48h]
  __int64 v99; // [rsp+140h] [rbp-40h]
  __int64 v100; // [rsp+148h] [rbp-38h]
  unsigned __int64 v101; // [rsp+150h] [rbp-30h]

  v5 = *a2;
  v6 = a2[1];
  v7 = *a2 == 0;
  v81 = a1;
  if ( v7 )
    goto LABEL_57;
  if ( v6 )
  {
    if ( (v6 & 7) != 0 )
    {
      v9 = 0;
      v10 = v5;
      do
      {
        v10 = *(_QWORD *)(v10 + 280);
        ++v9;
      }
      while ( (v6 & 7) != v9 );
      a4 = v6 - v9;
      if ( v6 < 8 )
      {
LABEL_8:
        if ( !*(_WORD *)(v10 + 274) )
          goto LABEL_57;
        if ( (v6 & 7) != 0 )
        {
          a4 = v5;
          v11 = 0;
          v12 = a4;
          do
          {
            a4 = *(_QWORD *)(a4 + 8LL * *(unsigned __int16 *)(a4 + 274) + 280);
            ++v11;
          }
          while ( (v6 & 7) != v11 );
          v13 = v6 - v11;
          v5 = v12;
          if ( v6 < 8 )
            goto LABEL_20;
        }
        else
        {
          a4 = v5;
          v13 = v6;
          if ( v6 < 8 )
            goto LABEL_20;
        }
        do
        {
          v14 = *(_QWORD *)(a4 + 8LL * *(unsigned __int16 *)(a4 + 274) + 280);
          v15 = *(_QWORD *)(v14 + 8LL * *(unsigned __int16 *)(v14 + 274) + 280);
          v16 = *(_QWORD *)(v15 + 8LL * *(unsigned __int16 *)(v15 + 274) + 280);
          v17 = *(_QWORD *)(v16 + 8LL * *(unsigned __int16 *)(v16 + 274) + 280);
          v18 = *(_QWORD *)(v17 + 8LL * *(unsigned __int16 *)(v17 + 274) + 280);
          v19 = *(_QWORD *)(v18 + 8LL * *(unsigned __int16 *)(v18 + 274) + 280);
          v20 = *(_QWORD *)(v19 + 8LL * *(unsigned __int16 *)(v19 + 274) + 280);
          a4 = *(_QWORD *)(v20 + 8LL * *(unsigned __int16 *)(v20 + 274) + 280);
          v13 -= 8LL;
        }
        while ( v13 );
        goto LABEL_20;
      }
    }
    else
    {
      v10 = v5;
      a4 = v6;
      if ( v6 < 8 )
        goto LABEL_8;
    }
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 280)
                                                                                              + 280LL)
                                                                                  + 280LL)
                                                                      + 280LL)
                                                          + 280LL)
                                              + 280LL)
                                  + 280LL)
                      + 280LL);
      a4 -= 8;
    }
    while ( a4 );
    goto LABEL_8;
  }
  v10 = v5;
  a4 = v5;
  if ( !*(_WORD *)(v5 + 274) )
    goto LABEL_57;
LABEL_20:
  v21 = *(unsigned __int16 *)(a4 + 274);
  if ( !*(_WORD *)(a4 + 274) )
    goto LABEL_57;
  v22 = a4 + 24 * v21 - 16;
  if ( a4 + 24 * v21 == 16 )
    goto LABEL_57;
  v23 = *a3;
  if ( !*a3 )
    goto LABEL_57;
  v24 = a3[1];
  if ( v24 )
  {
    if ( (v24 & 7) != 0 )
    {
      v25 = 0;
      v26 = *a3;
      do
      {
        v26 = *(_QWORD *)(v26 + 280);
        ++v25;
      }
      while ( (a3[1] & 7) != v25 );
      a4 = v24 - v25;
      if ( v24 < 8 )
        goto LABEL_29;
    }
    else
    {
      v26 = *a3;
      a4 = a3[1];
      if ( v24 < 8 )
      {
LABEL_29:
        if ( !*(_WORD *)(v26 + 274) )
          goto LABEL_57;
        if ( (v24 & 7) != 0 )
        {
          v4 = v5;
          v27 = 0;
          a4 = *a3;
          do
          {
            a4 = *(_QWORD *)(a4 + 8LL * *(unsigned __int16 *)(a4 + 274) + 280);
            ++v27;
          }
          while ( (a3[1] & 7) != v27 );
          v28 = v24 - v27;
          v5 = v4;
        }
        else
        {
          a4 = *a3;
          v28 = a3[1];
        }
        if ( v24 >= 8 )
        {
          do
          {
            v29 = *(_QWORD *)(a4 + 8LL * *(unsigned __int16 *)(a4 + 274) + 280);
            v30 = *(_QWORD *)(v29 + 8LL * *(unsigned __int16 *)(v29 + 274) + 280);
            v31 = *(_QWORD *)(v30 + 8LL * *(unsigned __int16 *)(v30 + 274) + 280);
            v32 = *(_QWORD *)(v31 + 8LL * *(unsigned __int16 *)(v31 + 274) + 280);
            v33 = *(_QWORD *)(v32 + 8LL * *(unsigned __int16 *)(v32 + 274) + 280);
            v34 = *(_QWORD *)(v33 + 8LL * *(unsigned __int16 *)(v33 + 274) + 280);
            v35 = *(_QWORD *)(v34 + 8LL * *(unsigned __int16 *)(v34 + 274) + 280);
            a4 = *(_QWORD *)(v35 + 8LL * *(unsigned __int16 *)(v35 + 274) + 280);
            v28 -= 8;
          }
          while ( v28 );
        }
        goto LABEL_41;
      }
    }
    do
    {
      v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 280)
                                                                                              + 280LL)
                                                                                  + 280LL)
                                                                      + 280LL)
                                                          + 280LL)
                                              + 280LL)
                                  + 280LL)
                      + 280LL);
      a4 -= 8;
    }
    while ( a4 );
    goto LABEL_29;
  }
  v26 = *a3;
  a4 = *a3;
  if ( !*(_WORD *)(v23 + 274) )
    goto LABEL_57;
LABEL_41:
  if ( *(_WORD *)(a4 + 274) )
  {
    a4 = a4 + 24LL * *(unsigned __int16 *)(a4 + 274) - 16;
    if ( a4 )
    {
      v36 = v5;
      v94 = a3;
      v95 = v6;
      v83 = v24;
      v82 = v23;
      v38 = *(const void **)(v10 + 16);
      v39 = *(_QWORD *)(v10 + 24);
      v40 = *(_QWORD *)(a4 + 16);
      v41 = v39 - v40;
      if ( v39 < v40 )
        v40 = v39;
      v42 = memcmp(v38, *(const void **)(a4 + 8), v40);
      if ( v42 )
        v41 = v42;
      v43 = *(const void **)(v26 + 16);
      v44 = *(_QWORD *)(v26 + 24);
      v45 = *(_QWORD *)(v22 + 16);
      v46 = v45 < v44;
      v47 = v45 - v44;
      if ( v46 )
        v44 = *(_QWORD *)(v22 + 16);
      v48 = memcmp(*(const void **)(v22 + 8), v43, v44);
      if ( (_DWORD)v48 )
        v47 = (int)v48;
      if ( v41 > 0 || v47 < 0 )
      {
        v52 = a2[2];
        v100 = 3;
        v99 = 1;
        v96 = 0;
        v98 = 1;
        v50 = v36;
        v53 = v36;
        v101 = 0;
        v51 = v95;
        v97 = v95;
      }
      else
      {
        v50 = v36;
        if ( v41 )
        {
          v51 = v95;
          if ( v47 )
          {
            v52 = a2[2];
            v47 = v94[2];
            if ( v52 <= (unsigned __int64)v47 >> 4 )
            {
              v100 = 2;
              v99 = 1;
              v96 = 0;
              v98 = 1;
              v53 = v50;
              v101 = 0;
              v97 = v95;
            }
            else
            {
              v97 = 1;
              v53 = v95;
              v99 = 0;
              v98 = 0;
              v96 = v50;
              v51 = v52;
              v101 = v50;
              v50 = v95;
              v52 = 1;
              v94 = nullptr;
              v100 = 1;
            }
          }
          else
          {
            v68 = a2[2];
            v84 = 1;
            v85 = 0;
            v86 = v50;
            v87 = v95;
            v88 = 1;
            v89 = 0;
            v90 = v50;
            v91 = v95;
            v92 = v68;
            _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h2038333ffe22a209(&v84);
            v99 = v84;
            v101 = v85;
            v50 = v86;
            v97 = v87;
            v98 = v88;
            v96 = v89;
            v53 = v90;
            v51 = v91;
            v52 = v92;
            v100 = 3;
          }
          goto LABEL_62;
        }
        v65 = a2[2];
        if ( v65 )
        {
          v66 = (unsigned __int64 *)v36;
          if ( v95 )
          {
            if ( (v95 & 7) != 0 )
            {
              v67 = 0;
              v66 = (unsigned __int64 *)v36;
              do
              {
                v66 = (unsigned __int64 *)v66[35];
                ++v67;
              }
              while ( (v95 & 7) != v67 );
              v49 = v95 - v67;
              v50 = v36;
            }
            else
            {
              v66 = (unsigned __int64 *)v36;
              v49 = v95;
            }
            if ( v95 >= 8 )
            {
              do
              {
                v66 = *(unsigned __int64 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v66[35] + 280) + 280LL)
                                                                                           + 280LL)
                                                                               + 280LL)
                                                                   + 280LL)
                                                       + 280LL)
                                           + 280LL);
                v49 -= 8LL;
              }
              while ( v49 );
            }
          }
          v52 = v65 - 1;
          if ( *((_WORD *)v66 + 137) )
          {
            v101 = (unsigned __int64)v66;
            v100 = 3;
            v99 = 1;
            v69 = 0;
          }
          else
          {
            LOBYTE(v49) = 1;
            v70 = 0;
            do
            {
              v71 = *v66;
              if ( !*v66 )
                core::option::unwrap_failed::h44626cade04bbf1e(&anon_202735cc4238ea6ae2931afe37a1ff22_745);
              v72 = v49;
              ++v70;
              v69 = *((unsigned __int16 *)v66 + 136);
              LODWORD(v49) = v49 + 1;
              v66 = (unsigned __int64 *)*v66;
            }
            while ( (unsigned __int16)v69 >= *(_WORD *)(v71 + 274) );
            v73 = v70 - 1;
            if ( v70 )
            {
              v74 = v71 + 8 * v69 + 288;
              if ( (v70 & 7) != 0 )
              {
                v75 = v72 & 7;
                v76 = 0;
                do
                {
                  v48 = *(_QWORD *)v74;
                  v74 = *(_QWORD *)v74 + 280LL;
                  ++v76;
                }
                while ( v75 != v76 );
                v70 -= v76;
              }
              if ( v73 < 7 )
              {
                v101 = v48;
                v100 = 3;
                v99 = 1;
                v96 = 0;
                v98 = 1;
                v53 = v36;
                v50 = 0;
                v97 = 0;
                v51 = v95;
                goto LABEL_62;
              }
              v100 = 3;
              v99 = 1;
              do
              {
                v77 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v74 + 280LL)
                                                                                + 280LL)
                                                                    + 280LL)
                                                        + 280LL)
                                            + 280LL)
                                + 280LL);
                v74 = *(_QWORD *)(v77 + 280) + 280LL;
                v70 -= 8;
              }
              while ( v70 );
              v101 = *(_QWORD *)(v77 + 280);
              v96 = 0;
              v98 = 1;
              v53 = v36;
              v50 = 0;
              v97 = 0;
              goto LABEL_83;
            }
            v100 = 3;
            v99 = 1;
            v101 = v71;
            v50 = v36;
          }
          v97 = v69 + 1;
          v96 = 0;
          v98 = 1;
          v53 = v50;
          v50 = 0;
LABEL_83:
          v51 = v95;
          goto LABEL_62;
        }
        v100 = 3;
        v99 = 1;
        v96 = 0;
        v98 = 1;
        v53 = v36;
        v101 = 0;
        v97 = v95;
        v52 = 0;
        v51 = v95;
      }
LABEL_62:
      v84 = v51;
      v93 = v52;
      v56 = (unsigned __int64 *)&v80;
      v57 = &v79;
      v55 = 0;
      v62 = v53;
      a4 = v82;
      v4 = v83;
      v63 = v99;
      v58 = v100;
      v59 = v96;
      v61 = v101;
      v60 = v97;
      v54 = v98;
      goto LABEL_60;
    }
  }
LABEL_57:
  v54 = 0;
  v55 = v5;
  if ( v5 )
    v55 = a2[2];
  LOBYTE(v54) = v5 != 0;
  v56 = &v93;
  v57 = &v84;
  v58 = 3;
  v59 = 0;
  v60 = v6;
  v47 = v6;
  v50 = v5;
  v61 = 0;
  v62 = v5;
  v63 = v54;
LABEL_60:
  *v57 = v47;
  *v56 = v55;
  v78[0] = v58;
  v78[1] = v63;
  v78[2] = v61;
  v78[3] = v50;
  v78[4] = v60;
  v78[5] = v54;
  v78[6] = v59;
  v78[7] = v62;
  v78[8] = v84;
  v78[9] = v93;
  v78[10] = v94;
  v78[11] = a4;
  v78[12] = v4;
  v78[13] = 1;
  v78[14] = 0;
  v78[15] = a4;
  v78[16] = v4;
  v78[17] = v79;
  v78[18] = v80;
  return ((__int64 (__fastcall *)(__int64, _QWORD *))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h78e03a0a4b60034f)(
           v81,
           v78);
}

