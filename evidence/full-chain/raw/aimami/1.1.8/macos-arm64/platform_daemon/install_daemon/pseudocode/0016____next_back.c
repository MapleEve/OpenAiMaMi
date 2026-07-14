// mac 1.1.8 BEHAVIORAL-BACKEND install_daemon node 0x1010cd610 depth=2
// _::next_back
_QWORD *__fastcall _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84(
        _QWORD *a1,
        __int64 a2,
        double a3,
        double a4,
        double a5)
{
  unsigned __int8 v5; // r12
  char v6; // r15
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  bool v9; // dl
  _BYTE *v10; // r9
  unsigned __int64 v11; // rsi
  char v12; // r8
  unsigned __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 *v16; // rdx
  unsigned __int64 *v17; // r14
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rax
  unsigned __int64 *v23; // rdx
  unsigned __int64 *v24; // r14
  __int64 v25; // r13
  __int64 v26; // rax
  bool v27; // cf
  unsigned __int64 v28; // rsi
  unsigned __int64 v30; // [rsp+8h] [rbp-78h] BYREF
  __int64 v31; // [rsp+10h] [rbp-70h]
  __int64 v32; // [rsp+18h] [rbp-68h]
  __int64 v33; // [rsp+20h] [rbp-60h]
  __int64 v34; // [rsp+28h] [rbp-58h]
  __int64 v35; // [rsp+30h] [rbp-50h]
  __int64 v36; // [rsp+38h] [rbp-48h]
  __int64 v37; // [rsp+40h] [rbp-40h]
  _BYTE *v38; // [rsp+48h] [rbp-38h]
  _QWORD *v39; // [rsp+50h] [rbp-30h]

  v5 = *(_BYTE *)(a2 + 56); /*0x1010cd621*/
  v6 = 10; /*0x1010cd626*/
  if ( v5 == 3 ) /*0x1010cd62d*/
    goto LABEL_57; /*0x1010cd62d*/
  v7 = a2; /*0x1010cd633*/
  v8 = *(_BYTE *)(a2 + 57); /*0x1010cd636*/
  v9 = v8 == 3 || v5 > v8; /*0x1010cd647*/
  v10 = *(_BYTE **)a2; /*0x1010cd64a*/
  v11 = *(_QWORD *)(a2 + 8); /*0x1010cd64d*/
  v12 = *(_BYTE *)(v7 + 58); /*0x1010cd655*/
  if ( v5 <= 1u ) /*0x1010cd65e*/
  {
    if ( (v12 & 1) != 0 ) /*0x1010cd668*/
    {
      if ( !v9 ) /*0x1010cd670*/
      {
        v13 = v11; /*0x1010cd67a*/
        while ( v8 != 1 ) /*0x1010cd680*/
        {
          if ( v8 != 2 ) /*0x1010cd68c*/
            goto LABEL_64; /*0x1010cd68c*/
          if ( v13 <= 1 ) /*0x1010cd696*/
          {
            *(_BYTE *)(v7 + 57) = 1; /*0x1010cd71c*/
            v8 = 1; /*0x1010cd720*/
          }
          else
          {
            v39 = a1; /*0x1010cd69c*/
            v14 = v7; /*0x1010cd6a3*/
            std::path::Components::parse_next_component_back::h201dfb54389de00e(&v30, v7); /*0x1010cd6a9*/
            a1 = v39; /*0x1010cd6ae*/
            v39[6] = v37; /*0x1010cd6b9*/
            a1[5] = v36; /*0x1010cd6c1*/
            a1[4] = v35; /*0x1010cd6c9*/
            a1[3] = v34; /*0x1010cd6d1*/
            a1[2] = v33; /*0x1010cd6d9*/
            v15 = v31; /*0x1010cd6dd*/
            a1[1] = v32; /*0x1010cd6e4*/
            *a1 = v15; /*0x1010cd6e8*/
            v11 = v13 - v30; /*0x1010cd6eb*/
            if ( v13 < v30 ) /*0x1010cd6ef*/
              goto LABEL_63; /*0x1010cd6ef*/
            v7 = v14; /*0x1010cd6f5*/
            *(_QWORD *)(v14 + 8) = v11; /*0x1010cd6f8*/
            v8 = 2; /*0x1010cd6fc*/
            v13 = v11; /*0x1010cd701*/
            if ( *(_BYTE *)a1 != 10 ) /*0x1010cd708*/
              return a1; /*0x1010cd708*/
          }
        }
LABEL_55:
        *(_BYTE *)(v7 + 57) = 3; /*0x1010cd9d6*/
        v6 = 6; /*0x1010cd9da*/
        v27 = v11 == 0; /*0x1010cd9dd*/
        v28 = v11 - 1; /*0x1010cd9dd*/
        if ( v27 ) /*0x1010cd9e1*/
          core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v28, 0, &off_1015AF270, a3, a4, a5); /*0x1010cda56*/
LABEL_56:
        *(_QWORD *)(v7 + 8) = v28; /*0x1010cd9e3*/
        goto LABEL_57; /*0x1010cd9e3*/
      }
      goto LABEL_57; /*0x1010cd670*/
    }
    if ( v9 ) /*0x1010cd805*/
      goto LABEL_57; /*0x1010cd805*/
    v13 = v11; /*0x1010cd80f*/
    while ( 1 ) /*0x1010cd812*/
    {
      if ( v8 == 1 ) /*0x1010cd815*/
        goto LABEL_51; /*0x1010cd815*/
      if ( v8 != 2 ) /*0x1010cd821*/
        goto LABEL_64; /*0x1010cd821*/
      v20 = v13; /*0x1010cd827*/
      if ( v13 ) /*0x1010cd82d*/
      {
        if ( v13 == 1 ) /*0x1010cd833*/
        {
          if ( *v10 != 46 ) /*0x1010cd839*/
            goto LABEL_35; /*0x1010cd839*/
        }
        else if ( *v10 != 46 || v10[1] != 47 ) /*0x1010cd848*/
        {
LABEL_35:
          v20 = 0; /*0x1010cd851*/
          goto LABEL_36; /*0x1010cd851*/
        }
        v20 = 1; /*0x1010cd84a*/
      }
LABEL_36:
      if ( v13 <= v20 ) /*0x1010cd856*/
      {
        *(_BYTE *)(v7 + 57) = 1; /*0x1010cd8e4*/
        v8 = 1; /*0x1010cd8e8*/
      }
      else
      {
        v38 = v10; /*0x1010cd85c*/
        v39 = a1; /*0x1010cd860*/
        v21 = v7; /*0x1010cd867*/
        std::path::Components::parse_next_component_back::h201dfb54389de00e(&v30, v7); /*0x1010cd86d*/
        a1 = v39; /*0x1010cd872*/
        v39[6] = v37; /*0x1010cd87d*/
        a1[5] = v36; /*0x1010cd885*/
        a1[4] = v35; /*0x1010cd88d*/
        a1[3] = v34; /*0x1010cd895*/
        a1[2] = v33; /*0x1010cd89d*/
        v22 = v31; /*0x1010cd8a1*/
        a1[1] = v32; /*0x1010cd8a8*/
        *a1 = v22; /*0x1010cd8ac*/
        v11 = v13 - v30; /*0x1010cd8af*/
        if ( v13 < v30 ) /*0x1010cd8b3*/
          goto LABEL_63; /*0x1010cd8b3*/
        v7 = v21; /*0x1010cd8b9*/
        *(_QWORD *)(v21 + 8) = v11; /*0x1010cd8bc*/
        v8 = 2; /*0x1010cd8c0*/
        v13 = v11; /*0x1010cd8c5*/
        v10 = v38; /*0x1010cd8c8*/
        if ( *(_BYTE *)a1 != 10 ) /*0x1010cd8d0*/
          return a1; /*0x1010cd8d0*/
      }
    }
  }
  if ( (v12 & 1) != 0 )
  {
    if ( !v9 ) /*0x1010cd73c*/
    {
      v16 = &v30; /*0x1010cd742*/
      v13 = v11; /*0x1010cd746*/
      while ( v8 != 1 ) /*0x1010cd74c*/
      {
        if ( v8 != 2 ) /*0x1010cd758*/
          goto LABEL_64; /*0x1010cd758*/
        if ( !v13 ) /*0x1010cd761*/
        {
          *(_BYTE *)(v7 + 57) = 1; /*0x1010cd7ed*/
          goto LABEL_57; /*0x1010cd7fe*/
        }
        v39 = a1; /*0x1010cd767*/
        v17 = v16; /*0x1010cd76b*/
        v18 = v7; /*0x1010cd771*/
        std::path::Components::parse_next_component_back::h201dfb54389de00e(v16, v7); /*0x1010cd777*/
        a1 = v39; /*0x1010cd77c*/
        v39[6] = v37; /*0x1010cd78b*/
        a1[5] = v36; /*0x1010cd793*/
        a1[4] = v35; /*0x1010cd79b*/
        a1[3] = v34; /*0x1010cd7a3*/
        a1[2] = v33; /*0x1010cd7ab*/
        v19 = v31; /*0x1010cd7af*/
        a1[1] = v32; /*0x1010cd7b6*/
        *a1 = v19; /*0x1010cd7ba*/
        v11 = v13 - v30; /*0x1010cd7bd*/
        if ( v13 < v30 ) /*0x1010cd7c1*/
          goto LABEL_63; /*0x1010cd7c1*/
        v7 = v18; /*0x1010cd7c7*/
        *(_QWORD *)(v18 + 8) = v11; /*0x1010cd7ca*/
        v8 = 2; /*0x1010cd7ce*/
        v13 = v11; /*0x1010cd7d3*/
        v16 = v17; /*0x1010cd7d6*/
        if ( *(_BYTE *)a1 != 10 ) /*0x1010cd7d9*/
          return a1; /*0x1010cd7d9*/
        if ( v5 > 2u ) /*0x1010cd7e2*/
          goto LABEL_57; /*0x1010cd7e2*/
      }
      goto LABEL_55; /*0x1010cd74c*/
    }
  }
  else if ( !v9 )
  {
    v23 = &v30; /*0x1010cd900*/
    v13 = v11; /*0x1010cd904*/
    while ( v8 != 1 )
    {
      if ( v8 != 2 )
LABEL_64:
        core::panicking::panic::h286e2dd5eab048be(
          (__int64)"internal error: entered unreachable codeOsmessageErrorCustomerrorpermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filequota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error",
          40,
          (__int64)&off_1015AF2A0);
      if ( !v13 ) /*0x1010cd91f*/
      {
        *(_BYTE *)(v7 + 57) = 1; /*0x1010cd9ac*/
        goto LABEL_57; /*0x1010cd9bd*/
      }
      v38 = v10; /*0x1010cd925*/
      v39 = a1; /*0x1010cd929*/
      v24 = v23; /*0x1010cd92d*/
      v25 = v7; /*0x1010cd933*/
      std::path::Components::parse_next_component_back::h201dfb54389de00e(v23, v7); /*0x1010cd939*/
      a1 = v39; /*0x1010cd93e*/
      v39[6] = v37; /*0x1010cd94d*/
      a1[5] = v36; /*0x1010cd955*/
      a1[4] = v35; /*0x1010cd95d*/
      a1[3] = v34; /*0x1010cd965*/
      a1[2] = v33; /*0x1010cd96d*/
      v26 = v31; /*0x1010cd971*/
      a1[1] = v32; /*0x1010cd978*/
      *a1 = v26; /*0x1010cd97c*/
      v11 = v13 - v30; /*0x1010cd97f*/
      if ( v13 < v30 ) /*0x1010cd983*/
LABEL_63:
        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v11, v13, &off_1015AF288, a3, a4, a5); /*0x1010cda22*/
      v7 = v25; /*0x1010cd989*/
      *(_QWORD *)(v25 + 8) = v11; /*0x1010cd98c*/
      v8 = 2; /*0x1010cd990*/
      v13 = v11; /*0x1010cd995*/
      v10 = v38; /*0x1010cd998*/
      v23 = v24; /*0x1010cd99c*/
      if ( *(_BYTE *)a1 != 10 ) /*0x1010cd99f*/
        return a1; /*0x1010cd99f*/
      if ( v5 > 2u ) /*0x1010cd9a4*/
        goto LABEL_57; /*0x1010cd9a4*/
    }
LABEL_51:
    *(_BYTE *)(v7 + 57) = 3; /*0x1010cd9bf*/
    if ( v13 ) /*0x1010cd9c6*/
    {
      if ( v13 == 1 ) /*0x1010cd9cc*/
      {
        if ( *v10 != 46 ) /*0x1010cd9d2*/
          goto LABEL_57; /*0x1010cd9d2*/
      }
      else if ( *v10 != 46 || v10[1] != 47 ) /*0x1010cda07*/
      {
        goto LABEL_57; /*0x1010cda07*/
      }
      v6 = 7; /*0x1010cda09*/
      v27 = v11 == 0; /*0x1010cda0c*/
      v28 = v11 - 1; /*0x1010cda0c*/
      if ( v27 ) /*0x1010cda10*/
        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v28, 0, &off_1015AF258, a3, a4, a5); /*0x1010cda1d*/
      goto LABEL_56; /*0x1010cda10*/
    }
  }
LABEL_57:
  *(_BYTE *)a1 = v6; /*0x1010cd9e7*/
  return a1; /*0x1010cd9ed*/
}