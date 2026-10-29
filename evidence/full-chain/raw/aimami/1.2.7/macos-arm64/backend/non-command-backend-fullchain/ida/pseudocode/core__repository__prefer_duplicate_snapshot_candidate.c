// aimami 1.2.7 mac truly_undone deep reverse — cluster core/repository/prefer_duplicate_snapshot_candidate
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::repository::prefer_duplicate_snapshot_candidate::ha9b3e84268285871 @ 0x1002758b0 size=2244 lines=308 =====
__int64 __fastcall codexmate_lib::core::repository::prefer_duplicate_snapshot_candidate::ha9b3e84268285871(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  void *v10; // r13
  void *v15; // r14
  size_t v16; // r15
  __int64 v17; // r12
  __int64 v18; // r14
  void *v19; // r14
  size_t v20; // r15
  void *v21; // rbx
  __int64 v22; // r12
  void *v23; // r14
  size_t v24; // r15
  void *v25; // rbx
  __int64 v26; // r12
  void *v27; // r14
  size_t v28; // r15
  void *v29; // rbx
  __int64 v30; // r12
  char v31; // al
  __int64 v32; // r15
  __int64 v33; // r12
  __int64 v35; // [rsp+18h] [rbp-188h]
  void *v36; // [rsp+20h] [rbp-180h] BYREF
  __int64 v37; // [rsp+28h] [rbp-178h]
  char v38; // [rsp+30h] [rbp-170h]
  __int64 v39; // [rsp+31h] [rbp-16Fh]
  __int64 v40; // [rsp+39h] [rbp-167h]
  __int64 v41; // [rsp+41h] [rbp-15Fh]
  _BYTE v42[15]; // [rsp+49h] [rbp-157h]
  __int16 v43; // [rsp+58h] [rbp-148h]
  char v44; // [rsp+5Ah] [rbp-146h]
  void *v45; // [rsp+60h] [rbp-140h] BYREF
  size_t v46; // [rsp+68h] [rbp-138h]
  char v47; // [rsp+70h] [rbp-130h]
  __int64 v48; // [rsp+71h] [rbp-12Fh]
  __int64 v49; // [rsp+79h] [rbp-127h]
  __int64 v50; // [rsp+81h] [rbp-11Fh]
  _BYTE v51[15]; // [rsp+89h] [rbp-117h]
  __int16 v52; // [rsp+98h] [rbp-108h]
  char v53; // [rsp+9Ah] [rbp-106h]
  void *__s2; // [rsp+A0h] [rbp-100h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-F8h]
  char v56; // [rsp+B0h] [rbp-F0h]
  __int64 v57; // [rsp+B1h] [rbp-EFh]
  __int64 v58; // [rsp+B9h] [rbp-E7h]
  __int64 v59; // [rsp+C1h] [rbp-DFh]
  _BYTE v60[15]; // [rsp+C9h] [rbp-D7h]
  __int16 v61; // [rsp+D8h] [rbp-C8h]
  char v62; // [rsp+DAh] [rbp-C6h]
  void *__s1; // [rsp+E0h] [rbp-C0h] BYREF
  size_t __n; // [rsp+E8h] [rbp-B8h]
  char v65; // [rsp+F0h] [rbp-B0h]
  __int64 v66; // [rsp+F1h] [rbp-AFh]
  __int64 v67; // [rsp+F9h] [rbp-A7h]
  __int64 v68; // [rsp+101h] [rbp-9Fh]
  _BYTE v69[15]; // [rsp+109h] [rbp-97h]
  __int16 v70; // [rsp+118h] [rbp-88h]
  char v71; // [rsp+11Ah] [rbp-86h]
  __int64 v72; // [rsp+120h] [rbp-80h]
  __int64 v73; // [rsp+128h] [rbp-78h]
  __int64 v74; // [rsp+130h] [rbp-70h]
  __int64 v75; // [rsp+138h] [rbp-68h]
  _BYTE v76[15]; // [rsp+140h] [rbp-60h]
  __int64 v77; // [rsp+150h] [rbp-50h]
  __int64 v78; // [rsp+158h] [rbp-48h]
  __int64 v79; // [rsp+160h] [rbp-40h]
  _BYTE v80[15]; // [rsp+168h] [rbp-38h]

  LOBYTE(v10) = 1;
  if ( (unsigned __int8)codexmate_lib::core::oauth_refresh::auth_is_newer::h24f28c8ae0f93a3b(a3, a6) )
    return (unsigned int)v10;
  if ( (unsigned __int8)codexmate_lib::core::oauth_refresh::auth_is_newer::h24f28c8ae0f93a3b(a6, a3) )
  {
LABEL_3:
    LODWORD(v10) = 0;
    return (unsigned int)v10;
  }
  v72 = a5;
  v35 = a4;
  if ( a7 )
  {
    std::path::Path::components::he8b0f71a48373be5(&__s1, a7, a8);
    std::path::Path::components::he8b0f71a48373be5(&__s2, a1, a2);
    v15 = __s1;
    v16 = __n;
    v10 = __s2;
    v17 = v55;
    if ( __n == v55 && (_BYTE)v70 == (_BYTE)v61 && HIBYTE(v70) == 2 && HIBYTE(v61) == 2 && !memcmp(__s1, __s2, __n) )
    {
      LOBYTE(v10) = 1;
    }
    else
    {
      if ( v65 != 6 )
      {
        *(_QWORD *)&v80[7] = *(_QWORD *)&v69[7];
        *(_QWORD *)v80 = *(_QWORD *)v69;
        v79 = v68;
        v78 = v67;
        v77 = v66;
      }
      v45 = v15;
      v46 = v16;
      v47 = v65;
      v48 = v77;
      v49 = v78;
      v50 = v79;
      *(_QWORD *)v51 = *(_QWORD *)v80;
      *(_QWORD *)&v51[7] = *(_QWORD *)&v80[7];
      v52 = v70;
      v53 = v71;
      if ( v56 != 6 )
      {
        *(_QWORD *)&v76[7] = *(_QWORD *)&v60[7];
        *(_QWORD *)v76 = *(_QWORD *)v60;
        v75 = v59;
        v74 = v58;
        v73 = v57;
      }
      v36 = v10;
      v37 = v17;
      v38 = v56;
      v39 = v73;
      v40 = v74;
      v41 = v75;
      *(_QWORD *)v42 = *(_QWORD *)v76;
      *(_QWORD *)&v42[7] = *(_QWORD *)&v76[7];
      v43 = v61;
      v44 = v62;
      LODWORD(v10) = core::iter::traits::iterator::Iterator::eq_by::h2bf41b2071abf6d2(&v45, &v36);
    }
    v18 = v72;
    std::path::Path::components::he8b0f71a48373be5(&__s1, a7, a8);
    std::path::Path::components::he8b0f71a48373be5(&__s2, v35, v18);
    v19 = __s1;
    v20 = __n;
    v21 = __s2;
    v22 = v55;
    if ( __n == v55 && (_BYTE)v70 == (_BYTE)v61 && HIBYTE(v70) == 2 && HIBYTE(v61) == 2 && !memcmp(__s1, __s2, __n) )
    {
      if ( !(_BYTE)v10 )
        goto LABEL_3;
    }
    else
    {
      if ( v65 != 6 )
      {
        *(_QWORD *)&v80[7] = *(_QWORD *)&v69[7];
        *(_QWORD *)v80 = *(_QWORD *)v69;
        v79 = v68;
        v78 = v67;
        v77 = v66;
      }
      v45 = v19;
      v46 = v20;
      v47 = v65;
      v48 = v77;
      v49 = v78;
      v50 = v79;
      *(_QWORD *)v51 = *(_QWORD *)v80;
      *(_QWORD *)&v51[7] = *(_QWORD *)&v80[7];
      v52 = v70;
      v53 = v71;
      if ( v56 != 6 )
      {
        *(_QWORD *)&v76[7] = *(_QWORD *)&v60[7];
        *(_QWORD *)v76 = *(_QWORD *)v60;
        v75 = v59;
        v74 = v58;
        v73 = v57;
      }
      v36 = v21;
      v37 = v22;
      v38 = v56;
      v39 = v73;
      v40 = v74;
      v41 = v75;
      *(_QWORD *)v42 = *(_QWORD *)v76;
      *(_QWORD *)&v42[7] = *(_QWORD *)&v76[7];
      v43 = v61;
      v44 = v62;
      if ( (_BYTE)v10 != (unsigned __int8)core::iter::traits::iterator::Iterator::eq_by::h2bf41b2071abf6d2(&v45, &v36) )
        return (unsigned int)v10;
    }
  }
  std::path::Path::components::he8b0f71a48373be5(&__s1, a1, a2);
  std::path::Path::components::he8b0f71a48373be5(&__s2, a9, a10);
  v23 = __s1;
  v24 = __n;
  v25 = __s2;
  v26 = v55;
  if ( __n == v55 && (_BYTE)v70 == (_BYTE)v61 && HIBYTE(v70) == 2 && HIBYTE(v61) == 2 && !memcmp(__s1, __s2, __n) )
  {
    LOBYTE(v10) = 1;
  }
  else
  {
    if ( v65 != 6 )
    {
      *(_QWORD *)&v80[7] = *(_QWORD *)&v69[7];
      *(_QWORD *)v80 = *(_QWORD *)v69;
      v79 = v68;
      v78 = v67;
      v77 = v66;
    }
    v45 = v23;
    v46 = v24;
    v47 = v65;
    v48 = v77;
    v49 = v78;
    v50 = v79;
    *(_QWORD *)v51 = *(_QWORD *)v80;
    *(_QWORD *)&v51[7] = *(_QWORD *)&v80[7];
    v52 = v70;
    v53 = v71;
    if ( v56 != 6 )
    {
      *(_QWORD *)&v76[7] = *(_QWORD *)&v60[7];
      *(_QWORD *)v76 = *(_QWORD *)v60;
      v75 = v59;
      v74 = v58;
      v73 = v57;
    }
    v36 = v25;
    v37 = v26;
    v38 = v56;
    v39 = v73;
    v40 = v74;
    v41 = v75;
    *(_QWORD *)v42 = *(_QWORD *)v76;
    *(_QWORD *)&v42[7] = *(_QWORD *)&v76[7];
    v43 = v61;
    v44 = v62;
    LODWORD(v10) = core::iter::traits::iterator::Iterator::eq_by::h2bf41b2071abf6d2(&v45, &v36);
  }
  std::path::Path::components::he8b0f71a48373be5(&__s1, v35, v72);
  std::path::Path::components::he8b0f71a48373be5(&__s2, a9, a10);
  v27 = __s1;
  v28 = __n;
  v29 = __s2;
  v30 = v55;
  if ( __n == v55 && (_BYTE)v70 == (_BYTE)v61 && HIBYTE(v70) == 2 && HIBYTE(v61) == 2 && !memcmp(__s1, __s2, __n) )
  {
    v32 = v72;
    v33 = v35;
    if ( !(_BYTE)v10 )
      goto LABEL_3;
LABEL_45:
    std::path::Path::components::he8b0f71a48373be5(&v45, a1, a2);
    std::path::Path::components::he8b0f71a48373be5(&v36, v33, v32);
    LODWORD(v10) = std::path::compare_components::h4f2e3264bd4b5f16(&v45, &v36);
    LOBYTE(v10) = (unsigned __int8)v10 >> 7;
    return (unsigned int)v10;
  }
  if ( v65 != 6 )
  {
    *(_QWORD *)&v80[7] = *(_QWORD *)&v69[7];
    *(_QWORD *)v80 = *(_QWORD *)v69;
    v79 = v68;
    v78 = v67;
    v77 = v66;
  }
  v45 = v27;
  v46 = v28;
  v47 = v65;
  v48 = v77;
  v49 = v78;
  v50 = v79;
  *(_QWORD *)v51 = *(_QWORD *)v80;
  *(_QWORD *)&v51[7] = *(_QWORD *)&v80[7];
  v52 = v70;
  v53 = v71;
  if ( v56 != 6 )
  {
    *(_QWORD *)&v76[7] = *(_QWORD *)&v60[7];
    *(_QWORD *)v76 = *(_QWORD *)v60;
    v75 = v59;
    v74 = v58;
    v73 = v57;
  }
  v36 = v29;
  v37 = v30;
  v38 = v56;
  v39 = v73;
  v40 = v74;
  v41 = v75;
  *(_QWORD *)v42 = *(_QWORD *)v76;
  *(_QWORD *)&v42[7] = *(_QWORD *)&v76[7];
  v43 = v61;
  v44 = v62;
  v31 = core::iter::traits::iterator::Iterator::eq_by::h2bf41b2071abf6d2(&v45, &v36);
  v32 = v72;
  v33 = v35;
  if ( (_BYTE)v10 == v31 )
    goto LABEL_45;
  return (unsigned int)v10;
}

